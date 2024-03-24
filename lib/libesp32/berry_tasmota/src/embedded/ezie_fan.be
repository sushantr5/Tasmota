#@ solidify:ezie_fan
class ezie_fan

  var out1
  var out2
  var out3
  var out4
  var set_speed

  #OUT1:GPIO15
  #OUT2:GPIO17
  #OUT3:GPIO18
  #OUT4:GPIO19

  #FAN Module
  #OUT1:Direct
  #OUT2:2.2 uF
  #OUT3:3.3 uF

  def web_add_main_button()
    import webserver
    webserver.content_send("<p>FAN Speed:</p>")
    webserver.content_send(format("<input type='range' name='fan_speed' min='0' max='4' step='1' value='%i'oninput='this.nextElementSibling.value = this.value' onchange='la(\"&m_speed=\"+this.value);'/><output>%i</output>", self.set_speed ,self.set_speed ))
  end
    
  def web_sensor()
    import webserver
    if webserver.has_arg("m_speed")
      tasmota.cmd(format("fanspeed %s",webserver.arg("m_speed")))
    end
  end

  def update_fan_relays()
    if self.set_speed == 3
      gpio.digital_write(self.out1, gpio.LOW)
      gpio.digital_write(self.out2, gpio.HIGH)
      gpio.digital_write(self.out3, gpio.HIGH)
    elif self.set_speed == 2
      gpio.digital_write(self.out1, gpio.LOW)
      gpio.digital_write(self.out2, gpio.LOW)
      gpio.digital_write(self.out3, gpio.HIGH)
    elif self.set_speed == 1
      gpio.digital_write(self.out1, gpio.LOW)
      gpio.digital_write(self.out2, gpio.HIGH)
      gpio.digital_write(self.out3, gpio.LOW)
    elif self.set_speed == 4
      gpio.digital_write(self.out1, gpio.HIGH)
      gpio.digital_write(self.out2, gpio.LOW)
      gpio.digital_write(self.out3, gpio.LOW)
    elif self.set_speed == 0
      gpio.digital_write(self.out1, gpio.LOW)
      gpio.digital_write(self.out3, gpio.LOW)
      gpio.digital_write(self.out2, gpio.LOW)
    end
  end
  
  def fanspeed(cmd, idx, payload, payload_json)
    var prev_speed = self.set_speed
    # parse payload ==> fanspeed { "fanspeed":"4"} OR fanspeed { "fanspeed":4}
    if payload_json != nil && type(payload_json) == "string" && payload_json.find("fanspeed") != nil
      self.set_speed = int(payload_json.find("fanspeed"))
    elif payload != nil
      if payload == "-"
        self.set_speed = self.set_speed - 1;
      elif payload == "+"
        self.set_speed = self.set_speed + 1;
      elif size(payload) > 0
        self.set_speed = int(payload);
      end
    end
  
    if self.set_speed < 0
      self.set_speed = 0
    end
  
    if self.set_speed > 4
      self.set_speed = 4
    end 
  
    self.update_fan_relays()
    
    if(prev_speed != self.set_speed)
      tasmota.publish_result(format('{"EZIE":{"FanSpeed_Updated":%d}}',int(self.set_speed)), 'EZIE')
    end
    tasmota.resp_cmnd(format("{ \"fanspeed\":%d }",self.set_speed))
  end

  def init()
    self.out1 = 15
    self.out2 = 17
    self.out3 = 18
    self.out4 = 19

    self.set_speed = 0

    gpio.pin_mode(self.out1, gpio.OUTPUT)
    gpio.pin_mode(self.out2, gpio.OUTPUT)
    gpio.pin_mode(self.out3, gpio.OUTPUT)
    gpio.digital_write(self.out1, gpio.LOW)
    gpio.digital_write(self.out2, gpio.LOW)
    gpio.digital_write(self.out3, gpio.LOW)
    tasmota.add_cmd('fanspeed', def(cmd, idx, payload, payload_json) self.fanspeed(cmd, idx, payload, payload_json) end)
    tasmota.add_driver(self)
  end

  def get_speed()
    return self.set_speed
  end
end


