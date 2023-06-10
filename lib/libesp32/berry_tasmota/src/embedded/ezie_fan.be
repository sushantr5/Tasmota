


#@ solidify:ezie_fan,weak
class ezie_leds
  var color_fan_speed_bar = 0xc20000
  var color_button_normal = 0x00FF00
  var color_button_pressed = 0xff0000
  var time_button_pressed_indication = 2 # multiplied by 100 nanoseconds
  var lights_dim_timeout = 20 #seconds
  var lights_timeout = 40 #seconds
  var timeout_counter = 40

  def update_status_leds(bResetTimer)

    if( bResetTimer )
      timeout_counter = lights_timeout
    end
    
    if( timeout_counter <= 0 )
      leds_left.clear()
      leds_left.show()
      return;
    end
    
    timeout_counter-=1
  
    leds_left.set_pixel_color( 0, 0x000000)
    leds_left.set_pixel_color( 1, 0x000000)
    leds_left.set_pixel_color( 2, 0x000000)
    leds_left.set_pixel_color( 3, 0x000000)
    
    for i:0..(set_speed-1)
      leds_left.set_pixel_color( i, color_fan_speed_bar)
    end
    leds_left.show()
  end

end

#@ solidify:ezie_fan
class ezie_fan : Driver

  var fan_speed

  var out1
  var out2
  var out3
  var out4

  def init()
    self.fan_speed = 1

    self.out1 = 15
    self.out2 = 17
    self.out3 = 18
    self.out4 = 19

    gpio.pin_mode(out1, gpio.OUTPUT)
    gpio.pin_mode(out2, gpio.OUTPUT)
    gpio.pin_mode(out3, gpio.OUTPUT)
    gpio.digital_write(out1, gpio.LOW)
    gpio.digital_write(out2, gpio.LOW)
    gpio.digital_write(out3, gpio.LOW)

    tasmota.add_cmd("fanspeed", /cmd, idx, payload, payload_json -> self.fanspeed(cmd, idx, payload, payload_json))
    tasmota.add_driver(self)

    print("4_SPEED_FAN")
  end
  
  # ####################################################################################################
  # Init web handlers
  # ####################################################################################################
  def web_add_main_button()
    webserver.content_send("<p>FAN Speed:</p>")
    webserver.content_send(string.format("<input type='range' name='fan_speed' min='0' max='4' step='1' value='%i'oninput='this.nextElementSibling.value = this.value' onchange='la(\"&m_speed=\"+this.value);'/><output>%i</output>", self.fan_speed,self.fan_speed))
  end
    
  def web_sensor()
    if webserver.has_arg("m_speed")
      print ( string.format("Speed:%s", webserver.arg("m_speed")))
      tasmota.cmd(string.format("fanspeed %s",webserver.arg("m_speed")))
    end
  end

  def fanspeed(cmd, idx, payload, payload_json)
    bUpdate_fan_relay = false
  
    # parse payload ==> fanspeed { "fanspeed":"4"} OR fanspeed { "fanspeed":4}
    if payload_json != nil && type(payload_json) == "string" && payload_json.find("fanspeed") != nil
      print("json condition true and fanspeed is found.")
      set_speed = int(payload_json.find("fanspeed"))
    elif payload != nil
      if payload == "-"
        print("decrease speed")
        set_speed = set_speed - 1;
      elif payload == "+"
        print("increase speed")
        set_speed = set_speed + 1;
      elif size(payload) > 0
        print("set speed")
        set_speed = int(payload);
      end
    end
  
    if set_speed < 0
      set_speed = 0
    end
  
    if set_speed > 4
      set_speed = 4
    end 
  
    print("---speed---")
    print(set_speed)
    
    self.update_status_leds(true)
    self.update_fan_relays()
    
    var msg = string.format("{ \"fanspeed\":%d }",set_speed);
    print(msg)
    tasmota.resp_cmnd(msg)
  end

  def update_fan_relays()
    persist_save()
  
    if set_speed == 3
      print("GPIO ON: 17, 18")
      gpio.digital_write(out1, gpio.LOW)
      gpio.digital_write(out2, gpio.HIGH)
      gpio.digital_write(out3, gpio.HIGH)
    elif set_speed == 2
      print("GPIO ON: 18")
      gpio.digital_write(out1, gpio.LOW)
      gpio.digital_write(out2, gpio.LOW)
      gpio.digital_write(out3, gpio.HIGH)
    elif set_speed == 1
      print("GPIO ON: 17")
      gpio.digital_write(out1, gpio.LOW)
      gpio.digital_write(out2, gpio.HIGH)
      gpio.digital_write(out3, gpio.LOW)
    elif set_speed == 4
      print("GPIO ON: 15")
      gpio.digital_write(out1, gpio.HIGH)
      gpio.digital_write(out2, gpio.LOW)
      gpio.digital_write(out3, gpio.LOW)
    elif set_speed == 0
      print("GPIO ON: 17")
      gpio.digital_write(out1, gpio.LOW)
      gpio.digital_write(out3, gpio.LOW)
      gpio.digital_write(out2, gpio.LOW)
    end
  end

  def update_status_leds(bResetTimer)

    if( bResetTimer )
      timeout_counter = lights_timeout
    end
    
    if( timeout_counter <= 0 )
      leds_left.clear()
      leds_left.show()
      return;
    end
    
    timeout_counter-=1
  
    leds_left.set_pixel_color( 0, 0x000000)
    leds_left.set_pixel_color( 1, 0x000000)
    leds_left.set_pixel_color( 2, 0x000000)
    leds_left.set_pixel_color( 3, 0x000000)
    
    for i:0..(set_speed-1)
      leds_left.set_pixel_color( i, color_fan_speed_bar)
    end
    leds_left.show()
  end
end
  