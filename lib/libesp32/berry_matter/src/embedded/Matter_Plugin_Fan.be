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
#class Matter_Plugin_Device end

#@ solidify:Matter_Plugin_Fan,weak

class Matter_Plugin_Fan : Matter_Plugin_Device
  static var TYPE = "fan"                                # name of the plug-in in json
  static var NAME = "Fan"  
  static var CLUSTERS  = {
    # 0x001D: inherited                             # Descriptor Cluster 9.5 p.453
    #0x0003: [0,1,0xFFFC,0xFFFD],                    # Identify 1.2 p.16
    #0x0004: [0,0xFFFC,0xFFFD],                      # Groups 1.3 p.21
    #0x0005: [0,1,2,3,4,5,0xFFFC,0xFFFD],            # Scenes 1.4 p.30 - no writable
    #0x0006: [0,0xFFFC,0xFFFD],                      # On/Off 1.5 p.48
    #0x0008: [0,2,3,0x0F,0x11,0xFFFC,0xFFFD]                 # Level Control
    0x0202: [0,2,3,4,5,6,0xFFFC,0xFFFD]                 # Fan Control
  }
  static var TYPES = { 0x002B: 2 }       # FAN https://csa-iot.org/wp-content/uploads/2022/11/22-27351-001_Matter-1.0-Device-Library-Specification.pdf
  #static var TYPES = { 0x0101: 2 }  
  var fanspeed

  #############################################################
  # Constructor
  def init(device, endpoint, arguments)
    super(self).init(device, endpoint, arguments)
    self.fanspeed = 0
  end

  #############################################################
  # Update shadow
  #
  def update_shadow()
    #determine fanspeed

    var speed = 0

    #try
    #  speed = get_fan_speed()
    #except .. as e, v
    #  print('You should implement method get_fan_speed() in your berry script.')
    #  print('Now instead using fanspeed command.')
      var payload_json = tasmota.cmd("fanspeed")
      var status_json = payload_json.find("fanspeed")
      speed = int(status_json)
    #end
   
    if speed == nil
      speed = self.fanspeed      
    end
    
    if speed != self.fanspeed   
      self.fanspeed = int(speed)
      self.attribute_updated(0x0202, 0x0002)
      self.attribute_updated(0x0202, 0x0000)
      #print("###SRR:ATTRIBUTE UPDATE3###")
    end      
    super(self).update_shadow()    
  end

  #############################################################
  # read an attribute
  #
  def read_attribute(session, ctx)
    import string
    var TLV = matter.TLV
    var cluster = ctx.cluster
    var attribute = ctx.attribute
    print(string.format("###SRR:READ ATTRIBUTE %s:%s",str(cluster),str(attribute)))
    # ====================================================================================================
    if   cluster == 0x0202              # ========== Level Control 1.6 p.57 ==========
      self.update_shadow_lazy()
      if   attribute == 0x0000          #  ---------- FanMode / u1 ----------
        return TLV.create_TLV(TLV.U1, self.fanspeed)
      elif attribute == 0x0002          #  ---------- PercentSetting / u1 ----------
        var speed = tasmota.scale_uint(self.fanspeed, 0, 4, 0, 100)
        return TLV.create_TLV(TLV.U1, speed)
      elif attribute == 0x0003          #  ---------- PercentCurrent / u1 ----------
        var speed = tasmota.scale_uint(self.fanspeed, 0, 4, 0, 100)
        return TLV.create_TLV(TLV.U1, speed)
      elif attribute == 0x0004          #  ---------- SpeedMax / u1 ----------
        return TLV.create_TLV(TLV.U1, 4)
      elif attribute == 0x0005          #  ---------- SpeedSetting / u1 ----------
        return TLV.create_TLV(TLV.U1, self.fanspeed)
      elif attribute == 0x0006          #  ---------- SpeedCurrent / u1 ----------
        return TLV.create_TLV(TLV.U1, self.fanspeed)
      elif attribute == 0xFFFC          #  ---------- FeatureMap / map32 ----------
        return TLV.create_TLV(TLV.U4, 0x00)    # Multispeed
      elif attribute == 0xFFFD          #  ---------- ClusterRevision / u2 ----------
        return TLV.create_TLV(TLV.U4, 2)    # "new data model format and notation"
      end
      
    else
      return super(self).read_attribute(session, ctx)
    end
  end

  def write_attribute(session, ctx, write_data)
    import string
    var TLV = matter.TLV
    var cluster = ctx.cluster
    var attribute = ctx.attribute

    print("###SRR:TEST3")
    
    if   cluster == 0x0202
      print("###SRR:TEST4")      
      if   attribute == 0x0002
        print("###SRR:TEST5")  
        if type(write_data) == 'int' || isinstance(write_data, int64)
          print(string.format("###SRR:TEST6:%d",write_data))
          var speed = tasmota.scale_uint(write_data, 0, 100, 0, 4)
          tasmota.cmd("fanspeed " + str(speed))
          print(string.format("###SRR:TEST7 FAN SPEED:%d",self.fan_speed))
          self.attribute_updated(ctx.cluster, ctx.attribute)    # TODO should we have a more generalized way each time a write_attribute is triggered, declare the attribute as changed?
          self.attribute_updated(0x0202, 0x0000)
          return true
        else
          print("###SRR:TEST7")
          ctx.status = matter.CONSTRAINT_ERROR
          return false
        end
      end
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
    print(string.format("###SRR:INVOKE REQUEST %s:%s",str(cluster),str(command)))
    # ====================================================================================================
    if   cluster == 0x0202              # ========== Level Control 1.6 p.57 ==========
      if   command == 0x0000            # ---------- MoveToLevel ----------
        return true
      elif command == 0x0001            # ---------- Move ----------
        # TODO, we don't really support it
        return true
      elif command == 0x0002            # ---------- Step ----------
        var speed_in = val.findsubval(0)
        print(string.format("###SRR:SPEED_IN:%s",str(speed_in)))
        var speed = tasmota.scale_uint(speed_in, 0, 100, 0, 4)
        tasmota.cmd("fanspeed " + str(speed))
        self.update_shadow()
        ctx.log = "speed:"+str(speed_in)
        return true
      elif command == 0x0003            # ---------- Stop ----------
        # TODO, we don't really support it
        return true
      elif command == 0x0004            # ---------- MoveToLevelWithOnOff ----------
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