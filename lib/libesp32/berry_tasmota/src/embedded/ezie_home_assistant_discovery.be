#@ solidify:ezie_home_assistant_discovery
class ezie_home_assistant_discovery : Driver

    var ha_discovery_sent
    var mqtt_connected
    var device_type
    #0 no type set
    #1 4P Switch
    #2 4 Speed Fan

    def init(dvc_type)
        self.ha_discovery_sent = false
        self.mqtt_connected = false
        if dvc_type != nil
            self.device_type = dvc_type
        else
            self.device_type = 0
        end

        self.send_ha_discovery_message()
        
        tasmota.add_rule("Mqtt#Connected", def ()
            self.send_ha_discovery_message()
            tasmota.remove_rule("Mqtt#Connected", "ha_discovery_sent")
        end, "ha_discovery_sent")

        tasmota.add_driver(self)
    end

    def publish_discovery_message_for_4speed_fan()
        tasmota.log("publish_discovery_message_for_4speed_fan()",4)
        import mqtt
        import json

        var payload_json = tasmota.cmd("Status")
        var status_json = payload_json.find("Status")
        var name = status_json.find("DeviceName")
        var unique_id = status_json.find("Topic")

        var discovery_msg_map = {'platform':'mqtt'}
        discovery_msg_map.setitem('name', name)
        discovery_msg_map.setitem('device_class','fan')
        discovery_msg_map.setitem('unique_id',unique_id)
        discovery_msg_map.setitem('command_topic','cmnd/'+unique_id+'/FanSpeed')
        discovery_msg_map.setitem('state_topic','stat/'+unique_id+'/RESULT')
        discovery_msg_map.setitem('state_value_template', "{% if value_json.FanSpeed == 0 -%}0{%- elif value_json.FanSpeed != 0 -%}1{%- endif %}")
        discovery_msg_map.setitem('availability_topic', 'tele/'+unique_id+'/LWT')
        discovery_msg_map.setitem('payload_available', 'Online')
        discovery_msg_map.setitem('payload_not_available', 'Offline')
        discovery_msg_map.setitem('payload_off', '0')
        discovery_msg_map.setitem('payload_on', '1')
        discovery_msg_map.setitem('preset_modes', ['off', 'low','medium','high','full'])
        discovery_msg_map.setitem('preset_mode_command_topic', 'cmnd/'+unique_id+'/FanSpeed')
        var s1 = "{% if value=='low' %}1{% elif value=='medium' %}2{% elif value=='high' %}3{% elif value=='full'%}4{% else %}0{% endif %}"
        #following is manual replacement in the truncated solidifcation
        #_X7B_X25_X20if_X20value_X20_X3D_X3D_X20_X27low_X27_X20_X25_X7D_X201_X20_X7B_X25_X20elif_X20value_X20_X3D_X3D_X20_X27medium_X27_X20_X25_X7D_X202_X20_X7B_X25_X20elif_X20value_X20_X3D_X3D_X20_X27high_X27_X20_X25_X7D_X203_X20_X7B_X25_X20elif_X20value_X20_X3D_X3D_X20_X27full_X27_X25_X7D_X204_X20_X7B_X25_X20else_X20_X25_X7D_X200
        #define INST_BUF_SIZE   288 in berry code to compile
        discovery_msg_map.setitem('preset_mode_command_template', s1)
        discovery_msg_map.setitem('preset_mode_state_topic', 'stat/'+unique_id+'/RESULT')
        #discovery_msg_map.setitem('preset_mode_value_template', "{% if value_json.FanSpeed == 1 %} low {% elif value_json.FanSpeed == 2 %} medium {% elif value_json.FanSpeed == 3 %} high {% elif value_json.FanSpeed == 4 %} full {% elif value_json.FanSpeed == 0 %} off {% endif %}")
        discovery_msg_map.setitem('percentage_command_topic', 'cmnd/'+unique_id+'/FanSpeed')
        discovery_msg_map.setitem('percentage_state_topic', 'stat/'+unique_id+'/RESULT')
        #discovery_msg_map.setitem('percentage_value_template', "{{ value_json.FanSpeed }}")
        discovery_msg_map.setitem('speed_range_min', 1 )
        discovery_msg_map.setitem('speed_range_max', 4 )
        
        tasmota.log(discovery_msg_map,4)
        mqtt.publish('homeassistant/fan/' + unique_id + '/' + unique_id + '/config', json.dump(discovery_msg_map,['format']), true )
        self.ha_discovery_sent = true
    end

    def publish_discovery_message_for_4P_switch()
        tasmota.log("publish_discovery_message_for_4P_switch()",4)
        import mqtt
        import json

        var payload_json = tasmota.cmd("Status")
        var status_json = payload_json.find("Status")
        var name = status_json.find("DeviceName")
        var friendly_names = status_json.find("FriendlyName")
        var unique_id = status_json.find("Topic")

        var discovery_msg_map = {'platform':'mqtt'}
        if friendly_names[0] != nil
            discovery_msg_map.setitem('name', friendly_names[0])
        else
            discovery_msg_map.setitem('name', name  + "_1" )
        end
        discovery_msg_map.setitem('device_class','switch')
        discovery_msg_map.setitem('unique_id',unique_id + "_1")
        discovery_msg_map.setitem('command_topic','cmnd/'+unique_id+'/POWER1')
        discovery_msg_map.setitem('state_topic','stat/'+unique_id+'/POWER1')
        discovery_msg_map.setitem('availability_topic', 'tele/'+unique_id+'/LWT')
        discovery_msg_map.setitem('payload_available', 'Online')
        discovery_msg_map.setitem('payload_not_available', 'Offline')
        discovery_msg_map.setitem('payload_off', 'OFF')
        discovery_msg_map.setitem('payload_on', 'ON')

        mqtt.publish('homeassistant/switch/' + unique_id + "_1" + '/config', json.dump(discovery_msg_map,['format']), true )
        
        if friendly_names[1] != nil
            discovery_msg_map.setitem('name', friendly_names[1])
        else
            discovery_msg_map.setitem('name', name  + "_2" )
        end
        discovery_msg_map.setitem('unique_id',unique_id + "_2")
        discovery_msg_map.setitem('command_topic','cmnd/'+unique_id+'/POWER2')
        discovery_msg_map.setitem('state_topic','stat/'+unique_id+'/POWER2')
        mqtt.publish('homeassistant/switch/' + unique_id + "_2" + '/config', json.dump(discovery_msg_map,['format']), true )

        if friendly_names[2] != nil
            discovery_msg_map.setitem('name', friendly_names[2])
        else
            discovery_msg_map.setitem('name', name  + "_3" )
        end
        discovery_msg_map.setitem('unique_id',unique_id + "_3")
        discovery_msg_map.setitem('command_topic','cmnd/'+unique_id+'/POWER3')
        discovery_msg_map.setitem('state_topic','stat/'+unique_id+'/POWER3')
        mqtt.publish('homeassistant/switch/' + unique_id + "_3" + '/config', json.dump(discovery_msg_map,['format']), true )

        if friendly_names[3] != nil
            discovery_msg_map.setitem('name', friendly_names[3])
        else
            discovery_msg_map.setitem('name', name  + "_4" )
        end
        discovery_msg_map.setitem('unique_id',unique_id + "_4")
        discovery_msg_map.setitem('command_topic','cmnd/'+unique_id+'/POWER4')
        discovery_msg_map.setitem('state_topic','stat/'+unique_id+'/POWER4')
        mqtt.publish('homeassistant/switch/' + unique_id + "_4" + '/config', json.dump(discovery_msg_map,['format']), true )
        self.ha_discovery_sent = true
    end

    def send_ha_discovery_message()
        tasmota.log("send_ha_discovery_message()",4)
        var payload_json = tasmota.cmd("mqtthost")
        var mqtthost = payload_json.find("MqttHost")
        if size(mqtthost) == 0
            return
        end

        tasmota.log("Sending HA Discovery Message...",4)
        self.mqtt_connected = true
        
        if self.device_type == 1
            self.publish_discovery_message_for_4P_switch()
        elif self.device_type == 2
            self.publish_discovery_message_for_4speed_fan()
        end
    end

    def every_second()
        if self.mqtt_connected == false
            tasmota.log("waiting for MQTT Connection to send HA Disconvery...",4)
        end
        if self.ha_discovery_sent == false && self.mqtt_connected == true
            self.send_ha_discovery_message()
        end
    end
end