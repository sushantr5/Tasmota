#
# Matter_Plugin_Fan.be - implements the behavior for a Fan/Level Control (OnOff/Levels)
#
# Copyright (C) 2023  Stephan Hadinger & Theo Arends
#
# This program is free software: you can redistribute it and/or modify
# it under the terms of the GNU General Public License as published by
# the Free Software Foundation, either version 3 of the License, or
# (at your option) any later version.
#
# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU General Public License for more details.
#
# You should have received a copy of the GNU General Public License
# along with this program.  If not, see <http://www.gnu.org/licenses/>.
#

# Matter plug-in for core behavior

# dummy declaration for solidification
class Matter_Plugin end

#@ solidify:Matter_Plugin_Fan,weak

class Matter_Plugin_Fan : Matter_Plugin
  static var CLUSTERS  = {
    # 0x001D: inherited                             # Descriptor Cluster 9.5 p.453
    0x0003: [0,1,0xFFFC,0xFFFD],                    # Identify 1.2 p.16
    0x0004: [0,0xFFFC,0xFFFD],                      # Groups 1.3 p.21
    0x0005: [0,1,2,3,4,5,0xFFFC,0xFFFD],            # Scenes 1.4 p.30 - no writable
    0x0006: [0,0xFFFC,0xFFFD],                      # On/Off 1.5 p.48
    0x0008: [0,15,17,0xFFFC,0xFFFD]                 # Level Control 1.6 p.57
  }
  static var TYPES = { 0x002B: 2 }       # FAN https://csa-iot.org/wp-content/uploads/2022/11/22-27351-001_Matter-1.0-Device-Library-Specification.pdf

  var fanspeed
  # var shadow_onoff  # inherited

  #############################################################
  # Constructor
  def init(device, endpoint)
    super(self).init(device, endpoint)
    self.fanspeed = 0
  end

  #############################################################
  # Update shadow
  #
  def update_shadow()

    var payload_json = tasmota.cmd("fanspeed")
    var status_json = payload_json.find("fanspeed")
    var speed = int(status_json)

    if speed == nil
      speed = self.fanspeed      
    end

    if speed != self.fanspeed   
      self.attribute_updated(nil, 0x0008, 0x0000)   
      self.fanspeed = speed   
    end
    super(self).update_shadow()     # superclass manages 'power'
  end

  #############################################################
  # read an attribute
  #
  def read_attribute(session, ctx)
    import string
    var TLV = matter.TLV
    var cluster = ctx.cluster
    var attribute = ctx.attribute

    # ====================================================================================================
    if   cluster == 0x0008              # ========== Level Control 1.6 p.57 ==========
      if   attribute == 0x0000          #  ---------- CurrentLevel / u1 ----------
        return TLV.create_TLV(TLV.U1, self.fanspeed)
      elif attribute == 0x0002          #  ---------- MinLevel / u1 ----------
        return TLV.create_TLV(TLV.U1, 0)
      elif attribute == 0x0003          #  ---------- MaxLevel / u1 ----------
        return TLV.create_TLV(TLV.U1, 4)
      elif attribute == 0x000F          #  ---------- Options / map8 ----------
        return TLV.create_TLV(TLV.U1, 0)    #
      elif attribute == 0x0011          #  ---------- OnLevel / u1 ----------
        return TLV.create_TLV(TLV.U1, self.fanspeed)
      elif attribute == 0xFFFC          #  ---------- FeatureMap / map32 ----------
        return TLV.create_TLV(TLV.U4, 0X01)    # OnOff
      elif attribute == 0xFFFD          #  ---------- ClusterRevision / u2 ----------
        return TLV.create_TLV(TLV.U4, 5)    # "new data model format and notation"
      end
      
    else
      return super(self).read_attribute(session, ctx)
    end
  end

  #############################################################
  # Invoke a command
  #
  # returns a TLV object if successful, contains the response
  #   or an `int` to indicate a status
  def invoke_request(session, val, ctx)
    var TLV = matter.TLV
    var cluster = ctx.cluster
    var command = ctx.command

    # ====================================================================================================
    if   cluster == 0x0008              # ========== Level Control 1.6 p.57 ==========
      if   command == 0x0000            # ---------- MoveToLevel ----------
        var speed_in = val.findsubval(0)  # fan 0..4
        var speed = tasmota.scale_uint(speed_in, 0, 4, 0, 4)
        tasmota.cmd("fanspeed " + speed)
        self.update_shadow()
        ctx.log = "speed:"+str(speed_in)
        return true
      elif command == 0x0001            # ---------- Move ----------
        # TODO, we don't really support it
        return true
      elif command == 0x0002            # ---------- Step ----------
        # TODO, we don't really support it
        return true
      elif command == 0x0003            # ---------- Stop ----------
        # TODO, we don't really support it
        return true
      elif command == 0x0004            # ---------- MoveToLevelWithOnOff ----------
        var speed_in = val.findsubval(0)  # Hue 0..254
        var speed = tasmota.scale_uint(speed_in, 0, 4, 0, 4)
        tasmota.cmd("fanspeed " + speed)
        self.update_shadow()
        ctx.log = "speed:"+str(speed_in)
        return true
      elif command == 0x0005            # ---------- MoveWithOnOff ----------
        # TODO, we don't really support it
        return true
      elif command == 0x0006            # ---------- StepWithOnOff ----------
        # TODO, we don't really support it
        return true
      elif command == 0x0007            # ---------- StopWithOnOff ----------
        # TODO, we don't really support it
        return true
      end
    
    else
      return super(self).invoke_request(session, val, ctx)
    end
  end
end
matter.Plugin_Fan = Matter_Plugin_Fan