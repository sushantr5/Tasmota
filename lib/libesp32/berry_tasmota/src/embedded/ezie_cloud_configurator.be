#@ solidify:ezie_cloud_configurator
class ezie_cloud_configurator : Driver
  var owner_email
  var mqtt_host
  var mqtt_port
  var authorizer_name
  var is_mqtt_connected
  var client_id

  def get_owner_email()
    return self.owner_email
  end

  def check_mqtt()
    var payload_json = tasmota.cmd("Status 6",true)
    var status_json = payload_json.find("StatusMQT")
    var count = status_json.find("MqttCount")
    self.client_id=status_json.find("MqttClient")
    
    if count == 0
      self.is_mqtt_connected = false
    else
      self.is_mqtt_connected = true
    end
  end

  def init()
    import mqtt
    import json
    import persist

    if(persist.has('mqtt_host'))
      self.mqtt_host = persist.mqtt_host
    else
      self.mqtt_host = 'a3bnjilp7tzxpg-ats.iot.eu-west-1.amazonaws.com'
    end

    if(persist.has('mqtt_port'))
      self.mqtt_port = persist.mqtt_port
    else
      self.mqtt_port = '443'
    end

    if(persist.has('owner_email'))
      self.owner_email = persist.owner_email
    else
      self.owner_email = 'kisusenterprises@gmail.com'
    end

    if(persist.has('authorizer_name'))
      self.authorizer_name = persist.authorizer_name
    else
      self.authorizer_name = 'TasmotaAuth'
    end

    tasmota.add_rule("Mqtt#Connected", def ()
      self.is_mqtt_connected = true
      tasmota.remove_rule("Mqtt#Connected", "cloud_settings_enabled")
    end, "cloud_settings_enabled")
    self.web_add_handler()
    tasmota.add_cmd('resetmqtt', def(cmd, idx, payload, input_json) self.resetmqtt(cmd, idx, payload, input_json) end)
    tasmota.add_driver(self)
  end

  def resetmqtt(cmd, idx, payload, input_json)
    import string
    import json
    import persist
    self.check_mqtt()
    var url = string.format("https://wqxpc1agpf.execute-api.eu-west-1.amazonaws.com/live?action=reset_mqtt&device_id=%s",self.client_id)
    if payload != nil
      url = string.format("%s&%s",url,payload)
    end    
    var cl = webclient()
    cl.set_follow_redirects(false)
    cl.set_auth("3RDPwETN","TzVUaWhQTW01WWpw")
    cl.begin(url)
    var r = cl.POST("")
    #print(r)
    if r == 301 || r == 302
      print("Location:", cl.get_header("Location"))
    elif r == 200
      var payload_json = json.load(cl.get_string())
      var body = json.load(payload_json.find("body"))
      #print(payload_json)
      var new_username = body.find("new_username")
      var new_password = body.find("new_password")
      self.authorizer_name = body.find("authorizer_name")
      self.mqtt_host = body.find("mqtt_host")
      self.mqtt_port = body.find("mqtt_port")

      persist.authorizer_name = self.authorizer_name
      persist.mqtt_host = self.mqtt_host
      persist.mqtt_port = self.mqtt_port
      persist.save()

      #MqttClient %12X
      #Topic %12X
      #FullTopic %prefix%/%topic%/
      tasmota.cmd(string.format("BackLog MqttClient %%12X; Topic %%12X; FullTopic %%prefix%%/%%topic%%/; SetOption3 1; SetOption103 1; MqttHost %s; MqttPort %s; MqttUser %s?x-amz-customauthorizer-name=%s; MqttPassword %s",self.mqtt_host, self.mqtt_port, new_username, self.authorizer_name,new_password),true)
    end
    cl.close()
  end


  # ####################################################################################################
  # Init web handlers
  # ####################################################################################################
  # Displays a "Configure EZIE" button on the configuration page
  def web_add_main_button()
    import webserver
    # webserver.content_send("<p><form id=ac action='matterc' style='display: block;' method='get'><button>Configure Matter</button></form></p>")
    webserver.content_send("<p><form id=ac action='eziecloudconf' style='display: block;' method='get'><button>EZIE Cloud Configuration</button></form></p>")
  end

  def show_info()
    import webserver
    import string
    webserver.content_send("<form action='/eziecloudconf' method='post' >")
    webserver.content_send("<fieldset><legend><b>&nbsp;MQTT is not Connected&nbsp;</b></legend><p></p>")
    webserver.content_send("<table><tr><td width='350'><p>Your device is not connected to MQTT Broker.  This page is enabled only when device has MQTT Connection.</p></td></tr></table>")
    webserver.content_send("<p></p></fieldset><p></p>")
    webserver.content_send("<fieldset><legend><b>&nbsp;Fix MQTT Connection issue&nbsp;</b></legend><p></p>")
    webserver.content_send("<p>Use Option 1/Option 2 whichever applicable:</p>")
    webserver.content_send("<fieldset><legend><b>&nbsp;Option 1&nbsp;</b></legend>")
    webserver.content_send("<p>If you have changed MQTT credentials:</p>")
    self.show_mqtt_user_pass()
    webserver.content_send("<p></p><button type='submit' name='action' value='updatemqtt'>Update MQTT settings</button><p></p>")
    webserver.content_send("<p></p></fieldset><p></p>")
    webserver.content_send("</form></p>")
    webserver.content_send("<form action='/eziecloudconf1' method='post' >")
    webserver.content_send("<p>OR</p>")
    webserver.content_send("<fieldset><legend><b>&nbsp;Option 2&nbsp;</b></legend><p></p>")
    webserver.content_send("<p>Reset your MQTT Credentials:</p>")
    webserver.content_send("<p></p><button type='submit' name='action' value='resetmqtt'>Reset MQTT Credentials and Settings</button><p></p>")
    webserver.content_send("<p></p></fieldset><p></p>")

    webserver.content_send("<p></p></fieldset><p></p>")
    webserver.content_send("</form></p>")

  end

  def show_owner_settings()
    import webserver
    import string
    webserver.content_send("<form action='/eziecloudconf' method='post' >")
    webserver.content_send("<fieldset><legend><b>&nbsp;Device Ownership&nbsp;</b></legend><p></p>")

    webserver.content_send("<p>Email Address:</p>")
    webserver.content_send(string.format("<input type='email' name='email' placeholder='Enter your email address' value='%s' required/>",self.owner_email))
    webserver.content_send("<p></p><button type='submit' name='action' value='ownership'>Confirm Email</button><p></p>")

    webserver.content_send("<p></p></fieldset><p></p>")
    webserver.content_send("</form></p>")
  end

  def show_mqtt_user_pass()
    import webserver
    webserver.content_send("<p>MQTT Username:</p>")
    webserver.content_send("<input type='text' name='mqtt_username' placeholder='Enter your MQTT username' required/>")

    webserver.content_send("<p>MQTT Password:</p>")
    webserver.content_send("<input type='password' name='mqtt_password' placeholder='Enter your MQTT password' required/>")
  end

  def show_mqtt_settings()
    import webserver
    import string
    webserver.content_send("<form action='/eziecloudconf1' method='post' >")
    webserver.content_send("<fieldset><legend><b>&nbsp;MQTT User Settings&nbsp;</b></legend><p></p>")
    
    self.show_mqtt_user_pass()

    webserver.content_send("<p></p><button type='submit' name='action' value='changemqttcredentials' onsubmit='return confirm(\"This will cause a restart.\");'>Change MQTT Credentials</button><p></p>")

    webserver.content_send("<p></p></fieldset><p></p>")
    webserver.content_send("</form></p>")
  end

  #######################################################################
  # Display the complete page
  #######################################################################
  def page_part_mgr()
    import webserver
    import string
    self.check_mqtt()
    if !webserver.check_privileged_access() return nil end
    webserver.content_start("EZIE Cloud")           #- title of the web page -#
    webserver.content_send_style()                  #- send standard Tasmota styles -#
    
    if self.is_mqtt_connected == false
      self.show_info()
    else
      self.show_owner_settings()
      self.show_mqtt_settings()
    end
        
    webserver.content_button(webserver.BUTTON_CONFIGURATION)
    webserver.content_button(webserver.BUTTON_MAIN)
    webserver.content_stop()                        #- end of web page -#
  end

  #######################################################################
  # Web Controller, called by POST to `/eziecloudconf` and `/eziecloudconf1`
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
      
      if webserver.has_arg("action")
        var action = webserver.arg("action")
        if action == "ownership"
          if webserver.has_arg("email")
            self.owner_email =  webserver.arg("email")
            persist.owner_email = self.owner_email
            persist.save()
            tasmota.cmd(string.format("Publish tele/%s/ownership/claim {\"email\":\"%s\"}", self.client_id, self.owner_email),true)
          end
        elif action == "changemqttcredentials"
          if webserver.has_arg("mqtt_username") && webserver.has_arg("mqtt_password")
            var mqtt_username = webserver.arg("mqtt_username")
            var mqtt_password = webserver.arg("mqtt_password")
            tasmota.cmd(string.format("Publish tele/%s/mqqt/change_credentials {\"username\":\"%s\",\"password\":\"%s\"}",self.client_id, mqtt_username,mqtt_password),true)
            tasmota.cmd(string.format("BackLog SetOption3 1; SetOption103 1; MqttHost %s; MqttPort %s; MqttUser %s?x-amz-customauthorizer-name=TasmotaAuth; MqttPassword %s", self.mqtt_host, self.mqtt_port, mqtt_username,mqtt_password),true)
          end
        elif action == "resetmqtt"
            tasmota.cmd(string.format("resetmqtt"),true)
        elif action == "updatemqtt"
          if webserver.has_arg("mqtt_username") && webserver.has_arg("mqtt_password")
            var mqtt_username = webserver.arg("mqtt_username")
            var mqtt_password = webserver.arg("mqtt_password")
            tasmota.cmd(string.format("BackLog MqttHost %s; MqttPort %s; MqttUser %s?x-amz-customauthorizer-name=TasmotaAuth; MqttPassword %s", self.mqtt_host, self.mqtt_port, mqtt_username, mqtt_password),true)
          end
        end  
      end

      tasmota.publish_result('{"EZIE":{"cloud_settings_Updated":1}}', 'EZIE')
      #- and force restart -#
      webserver.redirect("/?")
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
    import mqtt
    import json

    #- we need to register a closure, not just a function, that captures the current instance -#
    webserver.on("/eziecloudconf", / -> self.page_part_mgr(), webserver.HTTP_GET)
    webserver.on("/eziecloudconf", / -> self.page_part_ctl(), webserver.HTTP_POST)
    webserver.on("/eziecloudconf1", / -> self.page_part_mgr(), webserver.HTTP_GET)
    webserver.on("/eziecloudconf1", / -> self.page_part_ctl(), webserver.HTTP_POST)
  end
end

#var s = ezie_cloud_configurator("sushantr5@gmail.com","sdddsf")