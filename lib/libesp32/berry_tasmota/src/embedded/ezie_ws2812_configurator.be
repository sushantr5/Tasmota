#@ solidify:ezie_ws2812_configurator
class ezie_ws2812_configurator
  var action_on_state_col
  var normal_off_state_col
  var speed_bar_col
  var lights_timeout
  var lights_dim_factor

  def get_ACTION_or_ON_state_color()
    return self.action_on_state_col
  end

  def get_NORMAL_or_OFF_state_color()
    return self.normal_off_state_col
  end

  def get_SPEED_indicator_bar_color()
    return self.speed_bar_col
  end

  def get_LIGHTS_timeout()
    return self.lights_timeout
  end

  def get_LIGHTS_dim_percentage()
    return self.lights_dim_factor
  end

  def init(action_on_state_color, normal_off_state_color, speed_bar_color, lights_timeout_sec, lights_dim_percentage)
    self.action_on_state_col =  action_on_state_color
    self.normal_off_state_col = normal_off_state_color
    self.speed_bar_col =  speed_bar_color
    self.lights_timeout = lights_timeout_sec
    self.lights_dim_factor = lights_dim_percentage
    self.web_add_handler()
    tasmota.add_driver(self)
  end

  # ####################################################################################################
  # Init web handlers
  # ####################################################################################################
  # Displays a "Configure EZIE" button on the configuration page
  def web_add_config_button()
    import webserver
    # webserver.content_send("<p><form id=ac action='matterc' style='display: block;' method='get'><button>Configure Matter</button></form></p>")
    webserver.content_send("<p><form id=ac action='eziec' style='display: block;' method='get'><button>EZIE device</button></form></p>")
  end

  def show_color_settings()
    import webserver
    import string

    webserver.content_send("<fieldset><legend><b>&nbsp;EZIE LED Color Settings&nbsp;</b></legend><p></p>")
    #string hexColor = string.format("#%06X", (0xFFFFFF & intColor));

    webserver.content_send("<p>ON/ACTION state color:</p>")
    webserver.content_send(string.format("<input type='color' name='on_color' value='%s'/>", string.format("#%06X", (0xFFFFFF & self.action_on_state_col))))
    webserver.content_send("<p>OFF/NORMAL state color:</p>")
    webserver.content_send(string.format("<input type='color' name='off_color' value='%s'/>", string.format("#%06X", (0xFFFFFF & self.normal_off_state_col))))
    webserver.content_send("<p>SPEED Bar color(Fan):</p>")
    webserver.content_send(string.format("<input type='color' name='bar_color' value='%s'/>", string.format("#%06X", (0xFFFFFF & self.speed_bar_col))))
    
    webserver.content_send("<p></p></fieldset><p></p>")
  end

  def show_timeout_settings()
    import webserver
    import string

    webserver.content_send("<fieldset><legend><b>&nbsp;EZIE Lights Timeout&nbsp;</b></legend><p></p>")
    
    
    #string hexColor = string.format("#%06X", (0xFFFFFF & intColor));

    webserver.content_send("<p>Lights Timeout (seconds):</p>")
    webserver.content_send(string.format("<input type='range' name='lights_timeout' min='0' max='600' step='5' value='%i'oninput='this.nextElementSibling.value = this.value'><output>%i</output>", self.lights_timeout,self.lights_timeout))
    #manual solidification
    #X3Cinput_X20type_X3D_X27range_X27_X20name_X3D_X27lights_timeout_X27_X20min_X3D_X270_X27_X20max_X3D_X27600_X27_X20step_X3D_X275_X27_X20value_X3D_X27_X25i_X27oninput_X3D_X27this_X2EnextElementSibling_X2Evalue_X20_X3D_X20this_X2Evalue_X27_X3E_X3Coutput_X3E_X25i_X3C_X2Foutput_X3E_X3C_X2Finput_X3E_X00
    #define INST_BUF_SIZE   288 in berry code to compile
    webserver.content_send("<p>Dimmed Lights Factor (Percentage):</p>")
    webserver.content_send(string.format("<input type='range' name='lights_dim_factor' min='0' max='100' step='10' value='%i'oninput='this.nextElementSibling.value = this.value'><output>%i</output>", self.lights_dim_factor,self.lights_dim_factor))
    webserver.content_send("<p></p></fieldset><p></p>")
  end

  #######################################################################
  # Display the complete page
  #######################################################################
  def page_part_mgr()
    import webserver
    import string
    if !webserver.check_privileged_access() return nil end
    webserver.content_start("EZIE Device")           #- title of the web page -#
    webserver.content_send_style()                  #- send standard Tasmota styles -#
    webserver.content_send("<form action='/eziec' method='post' >")
    self.show_color_settings()
    self.show_timeout_settings()
    
    webserver.content_send("<p></p><button name='ezieconfchange' class='button bgrn'>Change</button></form></p>")
    webserver.content_button(webserver.BUTTON_CONFIGURATION)
    webserver.content_stop()                        #- end of web page -#
  end

  #######################################################################
  # Web Controller, called by POST to `/eziec`
  #######################################################################
  def page_part_ctl()
    import webserver
    if !webserver.check_privileged_access() return nil end

    import string
    import partition_core
    import persist

    #- check that the partition is valid -#
    var p = partition_core.Partition()

    try
      
      #---------------------------------------------------------------------#
      # Change Passcode and/or Passcode
      #---------------------------------------------------------------------#
      if webserver.has_arg("on_color")
        self.action_on_state_col = int(string.replace(webserver.arg("on_color"), "#", "0x"))
      end

      if webserver.has_arg("off_color")
        self.normal_off_state_col = int(string.replace(webserver.arg("off_color"), "#", "0x"))
      end

      if webserver.has_arg("bar_color")
        self.speed_bar_col = int(string.replace(webserver.arg("bar_color"), "#", "0x"))
      end

      if webserver.has_arg("lights_timeout")
        self.lights_timeout = int(webserver.arg("lights_timeout"))
      end

      if webserver.has_arg("lights_dim_factor")
        self.lights_dim_factor = int(webserver.arg("lights_dim_factor"))
      end

      #var hexColor = string.format("#%06X", (0xFFFFFF & 0x00F100));
      #print("Convertion1")
      #print(hexColor)
      #int(string.replace("hexColor", "#", "0x"))
      #print("Convertion2")
      #print(string.format("#%06X", (0xFFFFFF &int(string.replace(hexColor, "#", "0x")))))
      tasmota.publish_result('{"EZIE":{"WS2812_Updated":1}}', 'EZIE')
      #- and force restart -#
      webserver.redirect("/cn?")
    except .. as e, m
      tasmota.log(string.format("BRY: Exception> '%s' - %s", e, m), 2)
      #- display error page -#
      webserver.content_start("Parameter error")           #- title of the web page -#
      webserver.content_send_style()                  #- send standard Tasmota styles -#

      webserver.content_send(string.format("<p style='width:340px;'><b>Exception:</b><br>'%s'<br>%s</p>", e, m))

      webserver.content_button(webserver.BUTTON_MANAGEMENT) #- button back to management page -#
      webserver.content_stop()                        #- end of web page -#
    end
  end

  #- ---------------------------------------------------------------------- -#
  # respond to web_add_handler() event to register web listeners
  #- ---------------------------------------------------------------------- -#
  #- this is called at Tasmota start-up, as soon as Wifi/Eth is up and web server running -#
  def web_add_handler()
    import webserver
    #- we need to register a closure, not just a function, that captures the current instance -#
    webserver.on("/eziec", / -> self.page_part_mgr(), webserver.HTTP_GET)
    webserver.on("/eziec", / -> self.page_part_ctl(), webserver.HTTP_POST)
  end
end
