/* Solidification of ezie_cloud_configurator.h */
/********************************************************************\
* Generated code, don't edit                                         *
\********************************************************************/
#include "be_constobj.h"

extern const bclass be_class_ezie_cloud_configurator;

/********************************************************************
** Solidified function: get_owner_email
********************************************************************/
be_local_closure(ezie_cloud_configurator_get_owner_email,   /* name */
  be_nested_proto(
    2,                          /* nstack */
    1,                          /* argc */
    2,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    ( &(const bvalue[ 1]) {     /* constants */
    /* K0   */  be_nested_str(owner_email),
    }),
    &be_const_str_get_owner_email,
    &be_const_str_solidified,
    ( &(const binstruction[ 2]) {  /* code */
      0x88040100,  //  0000  GETMBR	R1	R0	K0
      0x80040200,  //  0001  RET	1	R1
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: resetmqtt
********************************************************************/
be_local_closure(ezie_cloud_configurator_resetmqtt,   /* name */
  be_nested_proto(
    25,                          /* nstack */
    5,                          /* argc */
    2,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    ( &(const bvalue[33]) {     /* constants */
    /* K0   */  be_nested_str(string),
    /* K1   */  be_nested_str(json),
    /* K2   */  be_nested_str(persist),
    /* K3   */  be_nested_str(check_mqtt),
    /* K4   */  be_nested_str(format),
    /* K5   */  be_nested_str(https_X3A_X2F_X2Fwqxpc1agpf_X2Eexecute_X2Dapi_X2Eeu_X2Dwest_X2D1_X2Eamazonaws_X2Ecom_X2Flive_X3Faction_X3Dreset_mqtt_X26device_id_X3D_X25s),
    /* K6   */  be_nested_str(client_id),
    /* K7   */  be_nested_str(_X25s_X26_X25s),
    /* K8   */  be_nested_str(webclient),
    /* K9   */  be_nested_str(set_follow_redirects),
    /* K10  */  be_nested_str(set_auth),
    /* K11  */  be_nested_str(3RDPwETN),
    /* K12  */  be_nested_str(TzVUaWhQTW01WWpw),
    /* K13  */  be_nested_str(begin),
    /* K14  */  be_nested_str(POST),
    /* K15  */  be_nested_str(),
    /* K16  */  be_nested_str(Location_X3A),
    /* K17  */  be_nested_str(get_header),
    /* K18  */  be_nested_str(Location),
    /* K19  */  be_nested_str(load),
    /* K20  */  be_nested_str(get_string),
    /* K21  */  be_nested_str(find),
    /* K22  */  be_nested_str(body),
    /* K23  */  be_nested_str(new_username),
    /* K24  */  be_nested_str(new_password),
    /* K25  */  be_nested_str(authorizer_name),
    /* K26  */  be_nested_str(mqtt_host),
    /* K27  */  be_nested_str(mqtt_port),
    /* K28  */  be_nested_str(save),
    /* K29  */  be_nested_str(tasmota),
    /* K30  */  be_nested_str(cmd),
    /* K31  */  be_nested_str(BackLog_X20MqttClient_X20_X25_X2512X_X3B_X20Topic_X20_X25_X2512X_X3B_X20FullTopic_X20_X25_X25prefix_X25_X25_X2F_X25_X25topic_X25_X25_X2F_X3B_X20SetOption3_X201_X3B_X20SetOption103_X201_X3B_X20MqttHost_X20_X25s_X3B_X20MqttPort_X20_X25s_X3B_X20MqttUser_X20_X25s_X3Fx_X2Damz_X2Dcustomauthorizer_X2Dname_X3D_X25s_X3B_X20MqttPassword_X20_X25s),
    /* K32  */  be_nested_str(close),
    }),
    &be_const_str_resetmqtt,
    &be_const_str_solidified,
    ( &(const binstruction[99]) {  /* code */
      0xA4160000,  //  0000  IMPORT	R5	K0
      0xA41A0200,  //  0001  IMPORT	R6	K1
      0xA41E0400,  //  0002  IMPORT	R7	K2
      0x8C200103,  //  0003  GETMET	R8	R0	K3
      0x7C200200,  //  0004  CALL	R8	1
      0x8C200B04,  //  0005  GETMET	R8	R5	K4
      0x58280005,  //  0006  LDCONST	R10	K5
      0x882C0106,  //  0007  GETMBR	R11	R0	K6
      0x7C200600,  //  0008  CALL	R8	3
      0x4C240000,  //  0009  LDNIL	R9
      0x20240609,  //  000A  NE	R9	R3	R9
      0x78260005,  //  000B  JMPF	R9	#0012
      0x8C240B04,  //  000C  GETMET	R9	R5	K4
      0x582C0007,  //  000D  LDCONST	R11	K7
      0x5C301000,  //  000E  MOVE	R12	R8
      0x5C340600,  //  000F  MOVE	R13	R3
      0x7C240800,  //  0010  CALL	R9	4
      0x5C201200,  //  0011  MOVE	R8	R9
      0xB8261000,  //  0012  GETNGBL	R9	K8
      0x7C240000,  //  0013  CALL	R9	0
      0x8C281309,  //  0014  GETMET	R10	R9	K9
      0x50300000,  //  0015  LDBOOL	R12	0	0
      0x7C280400,  //  0016  CALL	R10	2
      0x8C28130A,  //  0017  GETMET	R10	R9	K10
      0x5830000B,  //  0018  LDCONST	R12	K11
      0x5834000C,  //  0019  LDCONST	R13	K12
      0x7C280600,  //  001A  CALL	R10	3
      0x8C28130D,  //  001B  GETMET	R10	R9	K13
      0x5C301000,  //  001C  MOVE	R12	R8
      0x7C280400,  //  001D  CALL	R10	2
      0x8C28130E,  //  001E  GETMET	R10	R9	K14
      0x5830000F,  //  001F  LDCONST	R12	K15
      0x7C280400,  //  0020  CALL	R10	2
      0x542E012C,  //  0021  LDINT	R11	301
      0x1C2C140B,  //  0022  EQ	R11	R10	R11
      0x742E0002,  //  0023  JMPT	R11	#0027
      0x542E012D,  //  0024  LDINT	R11	302
      0x1C2C140B,  //  0025  EQ	R11	R10	R11
      0x782E0006,  //  0026  JMPF	R11	#002E
      0x602C0001,  //  0027  GETGBL	R11	G1
      0x58300010,  //  0028  LDCONST	R12	K16
      0x8C341311,  //  0029  GETMET	R13	R9	K17
      0x583C0012,  //  002A  LDCONST	R15	K18
      0x7C340400,  //  002B  CALL	R13	2
      0x7C2C0400,  //  002C  CALL	R11	2
      0x70020031,  //  002D  JMP		#0060
      0x542E00C7,  //  002E  LDINT	R11	200
      0x1C2C140B,  //  002F  EQ	R11	R10	R11
      0x782E002E,  //  0030  JMPF	R11	#0060
      0x8C2C0D13,  //  0031  GETMET	R11	R6	K19
      0x8C341314,  //  0032  GETMET	R13	R9	K20
      0x7C340200,  //  0033  CALL	R13	1
      0x7C2C0400,  //  0034  CALL	R11	2
      0x8C300D13,  //  0035  GETMET	R12	R6	K19
      0x8C381715,  //  0036  GETMET	R14	R11	K21
      0x58400016,  //  0037  LDCONST	R16	K22
      0x7C380400,  //  0038  CALL	R14	2
      0x7C300400,  //  0039  CALL	R12	2
      0x8C341915,  //  003A  GETMET	R13	R12	K21
      0x583C0017,  //  003B  LDCONST	R15	K23
      0x7C340400,  //  003C  CALL	R13	2
      0x8C381915,  //  003D  GETMET	R14	R12	K21
      0x58400018,  //  003E  LDCONST	R16	K24
      0x7C380400,  //  003F  CALL	R14	2
      0x8C3C1915,  //  0040  GETMET	R15	R12	K21
      0x58440019,  //  0041  LDCONST	R17	K25
      0x7C3C0400,  //  0042  CALL	R15	2
      0x9002320F,  //  0043  SETMBR	R0	K25	R15
      0x8C3C1915,  //  0044  GETMET	R15	R12	K21
      0x5844001A,  //  0045  LDCONST	R17	K26
      0x7C3C0400,  //  0046  CALL	R15	2
      0x9002340F,  //  0047  SETMBR	R0	K26	R15
      0x8C3C1915,  //  0048  GETMET	R15	R12	K21
      0x5844001B,  //  0049  LDCONST	R17	K27
      0x7C3C0400,  //  004A  CALL	R15	2
      0x9002360F,  //  004B  SETMBR	R0	K27	R15
      0x883C0119,  //  004C  GETMBR	R15	R0	K25
      0x901E320F,  //  004D  SETMBR	R7	K25	R15
      0x883C011A,  //  004E  GETMBR	R15	R0	K26
      0x901E340F,  //  004F  SETMBR	R7	K26	R15
      0x883C011B,  //  0050  GETMBR	R15	R0	K27
      0x901E360F,  //  0051  SETMBR	R7	K27	R15
      0x8C3C0F1C,  //  0052  GETMET	R15	R7	K28
      0x7C3C0200,  //  0053  CALL	R15	1
      0xB83E3A00,  //  0054  GETNGBL	R15	K29
      0x8C3C1F1E,  //  0055  GETMET	R15	R15	K30
      0x8C440B04,  //  0056  GETMET	R17	R5	K4
      0x584C001F,  //  0057  LDCONST	R19	K31
      0x8850011A,  //  0058  GETMBR	R20	R0	K26
      0x8854011B,  //  0059  GETMBR	R21	R0	K27
      0x5C581A00,  //  005A  MOVE	R22	R13
      0x885C0119,  //  005B  GETMBR	R23	R0	K25
      0x5C601C00,  //  005C  MOVE	R24	R14
      0x7C440E00,  //  005D  CALL	R17	7
      0x50480200,  //  005E  LDBOOL	R18	1	0
      0x7C3C0600,  //  005F  CALL	R15	3
      0x8C2C1320,  //  0060  GETMET	R11	R9	K32
      0x7C2C0200,  //  0061  CALL	R11	1
      0x80000000,  //  0062  RET	0
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: show_mqtt_settings
********************************************************************/
be_local_closure(ezie_cloud_configurator_show_mqtt_settings,   /* name */
  be_nested_proto(
    6,                          /* nstack */
    1,                          /* argc */
    2,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    ( &(const bvalue[ 9]) {     /* constants */
    /* K0   */  be_nested_str(webserver),
    /* K1   */  be_nested_str(string),
    /* K2   */  be_nested_str(content_send),
    /* K3   */  be_nested_str(_X3Cform_X20action_X3D_X27_X2Feziecloudconf1_X27_X20method_X3D_X27post_X27_X20_X3E),
    /* K4   */  be_nested_str(_X3Cfieldset_X3E_X3Clegend_X3E_X3Cb_X3E_X26nbsp_X3BMQTT_X20User_X20Settings_X26nbsp_X3B_X3C_X2Fb_X3E_X3C_X2Flegend_X3E_X3Cp_X3E_X3C_X2Fp_X3E),
    /* K5   */  be_nested_str(show_mqtt_user_pass),
    /* K6   */  be_nested_str(_X3Cp_X3E_X3C_X2Fp_X3E_X3Cbutton_X20type_X3D_X27submit_X27_X20name_X3D_X27action_X27_X20value_X3D_X27changemqttcredentials_X27_X20onsubmit_X3D_X27return_X20confirm_X28_X22This_X20will_X20cause_X20a_X20restart_X2E_X22_X29_X3B_X27_X3EChange_X20MQTT_X20Credentials_X3C_X2Fbutton_X3E_X3Cp_X3E_X3C_X2Fp_X3E),
    /* K7   */  be_nested_str(_X3Cp_X3E_X3C_X2Fp_X3E_X3C_X2Ffieldset_X3E_X3Cp_X3E_X3C_X2Fp_X3E),
    /* K8   */  be_nested_str(_X3C_X2Fform_X3E_X3C_X2Fp_X3E),
    }),
    &be_const_str_show_mqtt_settings,
    &be_const_str_solidified,
    ( &(const binstruction[20]) {  /* code */
      0xA4060000,  //  0000  IMPORT	R1	K0
      0xA40A0200,  //  0001  IMPORT	R2	K1
      0x8C0C0302,  //  0002  GETMET	R3	R1	K2
      0x58140003,  //  0003  LDCONST	R5	K3
      0x7C0C0400,  //  0004  CALL	R3	2
      0x8C0C0302,  //  0005  GETMET	R3	R1	K2
      0x58140004,  //  0006  LDCONST	R5	K4
      0x7C0C0400,  //  0007  CALL	R3	2
      0x8C0C0105,  //  0008  GETMET	R3	R0	K5
      0x7C0C0200,  //  0009  CALL	R3	1
      0x8C0C0302,  //  000A  GETMET	R3	R1	K2
      0x58140006,  //  000B  LDCONST	R5	K6
      0x7C0C0400,  //  000C  CALL	R3	2
      0x8C0C0302,  //  000D  GETMET	R3	R1	K2
      0x58140007,  //  000E  LDCONST	R5	K7
      0x7C0C0400,  //  000F  CALL	R3	2
      0x8C0C0302,  //  0010  GETMET	R3	R1	K2
      0x58140008,  //  0011  LDCONST	R5	K8
      0x7C0C0400,  //  0012  CALL	R3	2
      0x80000000,  //  0013  RET	0
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: show_mqtt_user_pass
********************************************************************/
be_local_closure(ezie_cloud_configurator_show_mqtt_user_pass,   /* name */
  be_nested_proto(
    5,                          /* nstack */
    1,                          /* argc */
    2,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    ( &(const bvalue[ 6]) {     /* constants */
    /* K0   */  be_nested_str(webserver),
    /* K1   */  be_nested_str(content_send),
    /* K2   */  be_nested_str(_X3Cp_X3EMQTT_X20Username_X3A_X3C_X2Fp_X3E),
    /* K3   */  be_nested_str(_X3Cinput_X20type_X3D_X27text_X27_X20name_X3D_X27mqtt_username_X27_X20placeholder_X3D_X27Enter_X20your_X20MQTT_X20username_X27_X20required_X2F_X3E),
    /* K4   */  be_nested_str(_X3Cp_X3EMQTT_X20Password_X3A_X3C_X2Fp_X3E),
    /* K5   */  be_nested_str(_X3Cinput_X20type_X3D_X27password_X27_X20name_X3D_X27mqtt_password_X27_X20placeholder_X3D_X27Enter_X20your_X20MQTT_X20password_X27_X20required_X2F_X3E),
    }),
    &be_const_str_show_mqtt_user_pass,
    &be_const_str_solidified,
    ( &(const binstruction[14]) {  /* code */
      0xA4060000,  //  0000  IMPORT	R1	K0
      0x8C080301,  //  0001  GETMET	R2	R1	K1
      0x58100002,  //  0002  LDCONST	R4	K2
      0x7C080400,  //  0003  CALL	R2	2
      0x8C080301,  //  0004  GETMET	R2	R1	K1
      0x58100003,  //  0005  LDCONST	R4	K3
      0x7C080400,  //  0006  CALL	R2	2
      0x8C080301,  //  0007  GETMET	R2	R1	K1
      0x58100004,  //  0008  LDCONST	R4	K4
      0x7C080400,  //  0009  CALL	R2	2
      0x8C080301,  //  000A  GETMET	R2	R1	K1
      0x58100005,  //  000B  LDCONST	R4	K5
      0x7C080400,  //  000C  CALL	R2	2
      0x80000000,  //  000D  RET	0
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: page_part_ctl
********************************************************************/
be_local_closure(ezie_cloud_configurator_page_part_ctl,   /* name */
  be_nested_proto(
    18,                          /* nstack */
    1,                          /* argc */
    2,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    ( &(const bvalue[44]) {     /* constants */
    /* K0   */  be_nested_str(webserver),
    /* K1   */  be_nested_str(check_privileged_access),
    /* K2   */  be_nested_str(string),
    /* K3   */  be_nested_str(partition_core),
    /* K4   */  be_nested_str(persist),
    /* K5   */  be_nested_str(Partition),
    /* K6   */  be_nested_str(has_arg),
    /* K7   */  be_nested_str(action),
    /* K8   */  be_nested_str(arg),
    /* K9   */  be_nested_str(ownership),
    /* K10  */  be_nested_str(email),
    /* K11  */  be_nested_str(owner_email),
    /* K12  */  be_nested_str(save),
    /* K13  */  be_nested_str(tasmota),
    /* K14  */  be_nested_str(cmd),
    /* K15  */  be_nested_str(format),
    /* K16  */  be_nested_str(Publish_X20tele_X2F_X25s_X2Fownership_X2Fclaim_X20_X7B_X22email_X22_X3A_X22_X25s_X22_X7D),
    /* K17  */  be_nested_str(client_id),
    /* K18  */  be_nested_str(changemqttcredentials),
    /* K19  */  be_nested_str(mqtt_username),
    /* K20  */  be_nested_str(mqtt_password),
    /* K21  */  be_nested_str(Publish_X20tele_X2F_X25s_X2Fmqqt_X2Fchange_credentials_X20_X7B_X22username_X22_X3A_X22_X25s_X22_X2C_X22password_X22_X3A_X22_X25s_X22_X7D),
    /* K22  */  be_nested_str(BackLog_X20SetOption3_X201_X3B_X20SetOption103_X201_X3B_X20MqttHost_X20_X25s_X3B_X20MqttPort_X20_X25s_X3B_X20MqttUser_X20_X25s_X3Fx_X2Damz_X2Dcustomauthorizer_X2Dname_X3DTasmotaAuth_X3B_X20MqttPassword_X20_X25s),
    /* K23  */  be_nested_str(mqtt_host),
    /* K24  */  be_nested_str(mqtt_port),
    /* K25  */  be_nested_str(resetmqtt),
    /* K26  */  be_nested_str(updatemqtt),
    /* K27  */  be_nested_str(BackLog_X20MqttHost_X20_X25s_X3B_X20MqttPort_X20_X25s_X3B_X20MqttUser_X20_X25s_X3Fx_X2Damz_X2Dcustomauthorizer_X2Dname_X3DTasmotaAuth_X3B_X20MqttPassword_X20_X25s),
    /* K28  */  be_nested_str(publish_result),
    /* K29  */  be_nested_str(_X7B_X22EZIE_X22_X3A_X7B_X22cloud_settings_Updated_X22_X3A1_X7D_X7D),
    /* K30  */  be_nested_str(EZIE),
    /* K31  */  be_nested_str(redirect),
    /* K32  */  be_nested_str(_X2F_X3F),
    /* K33  */  be_nested_str(log),
    /* K34  */  be_nested_str(BRY_X3A_X20Exception_X3E_X20_X27_X25s_X27_X20_X2D_X20_X25s),
    /* K35  */  be_const_int(2),
    /* K36  */  be_nested_str(content_start),
    /* K37  */  be_nested_str(Parameter_X20error),
    /* K38  */  be_nested_str(content_send_style),
    /* K39  */  be_nested_str(content_send),
    /* K40  */  be_nested_str(_X3Cp_X20style_X3D_X27width_X3A340px_X3B_X27_X3E_X3Cb_X3EException_X3A_X3C_X2Fb_X3E_X3Cbr_X3E_X27_X25s_X27_X3Cbr_X3E_X25s_X3C_X2Fp_X3E),
    /* K41  */  be_nested_str(content_button),
    /* K42  */  be_nested_str(BUTTON_MANAGEMENT),
    /* K43  */  be_nested_str(content_stop),
    }),
    &be_const_str_page_part_ctl,
    &be_const_str_solidified,
    ( &(const binstruction[159]) {  /* code */
      0xA4060000,  //  0000  IMPORT	R1	K0
      0x8C080301,  //  0001  GETMET	R2	R1	K1
      0x7C080200,  //  0002  CALL	R2	1
      0x740A0001,  //  0003  JMPT	R2	#0006
      0x4C080000,  //  0004  LDNIL	R2
      0x80040400,  //  0005  RET	1	R2
      0xA40A0400,  //  0006  IMPORT	R2	K2
      0xA40E0600,  //  0007  IMPORT	R3	K3
      0xA4120800,  //  0008  IMPORT	R4	K4
      0x8C140705,  //  0009  GETMET	R5	R3	K5
      0x7C140200,  //  000A  CALL	R5	1
      0xA8020073,  //  000B  EXBLK	0	#0080
      0x8C180306,  //  000C  GETMET	R6	R1	K6
      0x58200007,  //  000D  LDCONST	R8	K7
      0x7C180400,  //  000E  CALL	R6	2
      0x781A0065,  //  000F  JMPF	R6	#0076
      0x8C180308,  //  0010  GETMET	R6	R1	K8
      0x58200007,  //  0011  LDCONST	R8	K7
      0x7C180400,  //  0012  CALL	R6	2
      0x1C1C0D09,  //  0013  EQ	R7	R6	K9
      0x781E0015,  //  0014  JMPF	R7	#002B
      0x8C1C0306,  //  0015  GETMET	R7	R1	K6
      0x5824000A,  //  0016  LDCONST	R9	K10
      0x7C1C0400,  //  0017  CALL	R7	2
      0x781E0010,  //  0018  JMPF	R7	#002A
      0x8C1C0308,  //  0019  GETMET	R7	R1	K8
      0x5824000A,  //  001A  LDCONST	R9	K10
      0x7C1C0400,  //  001B  CALL	R7	2
      0x90021607,  //  001C  SETMBR	R0	K11	R7
      0x881C010B,  //  001D  GETMBR	R7	R0	K11
      0x90121607,  //  001E  SETMBR	R4	K11	R7
      0x8C1C090C,  //  001F  GETMET	R7	R4	K12
      0x7C1C0200,  //  0020  CALL	R7	1
      0xB81E1A00,  //  0021  GETNGBL	R7	K13
      0x8C1C0F0E,  //  0022  GETMET	R7	R7	K14
      0x8C24050F,  //  0023  GETMET	R9	R2	K15
      0x582C0010,  //  0024  LDCONST	R11	K16
      0x88300111,  //  0025  GETMBR	R12	R0	K17
      0x8834010B,  //  0026  GETMBR	R13	R0	K11
      0x7C240800,  //  0027  CALL	R9	4
      0x50280200,  //  0028  LDBOOL	R10	1	0
      0x7C1C0600,  //  0029  CALL	R7	3
      0x7002004A,  //  002A  JMP		#0076
      0x1C1C0D12,  //  002B  EQ	R7	R6	K18
      0x781E0023,  //  002C  JMPF	R7	#0051
      0x8C1C0306,  //  002D  GETMET	R7	R1	K6
      0x58240013,  //  002E  LDCONST	R9	K19
      0x7C1C0400,  //  002F  CALL	R7	2
      0x781E001E,  //  0030  JMPF	R7	#0050
      0x8C1C0306,  //  0031  GETMET	R7	R1	K6
      0x58240014,  //  0032  LDCONST	R9	K20
      0x7C1C0400,  //  0033  CALL	R7	2
      0x781E001A,  //  0034  JMPF	R7	#0050
      0x8C1C0308,  //  0035  GETMET	R7	R1	K8
      0x58240013,  //  0036  LDCONST	R9	K19
      0x7C1C0400,  //  0037  CALL	R7	2
      0x8C200308,  //  0038  GETMET	R8	R1	K8
      0x58280014,  //  0039  LDCONST	R10	K20
      0x7C200400,  //  003A  CALL	R8	2
      0xB8261A00,  //  003B  GETNGBL	R9	K13
      0x8C24130E,  //  003C  GETMET	R9	R9	K14
      0x8C2C050F,  //  003D  GETMET	R11	R2	K15
      0x58340015,  //  003E  LDCONST	R13	K21
      0x88380111,  //  003F  GETMBR	R14	R0	K17
      0x5C3C0E00,  //  0040  MOVE	R15	R7
      0x5C401000,  //  0041  MOVE	R16	R8
      0x7C2C0A00,  //  0042  CALL	R11	5
      0x50300200,  //  0043  LDBOOL	R12	1	0
      0x7C240600,  //  0044  CALL	R9	3
      0xB8261A00,  //  0045  GETNGBL	R9	K13
      0x8C24130E,  //  0046  GETMET	R9	R9	K14
      0x8C2C050F,  //  0047  GETMET	R11	R2	K15
      0x58340016,  //  0048  LDCONST	R13	K22
      0x88380117,  //  0049  GETMBR	R14	R0	K23
      0x883C0118,  //  004A  GETMBR	R15	R0	K24
      0x5C400E00,  //  004B  MOVE	R16	R7
      0x5C441000,  //  004C  MOVE	R17	R8
      0x7C2C0C00,  //  004D  CALL	R11	6
      0x50300200,  //  004E  LDBOOL	R12	1	0
      0x7C240600,  //  004F  CALL	R9	3
      0x70020024,  //  0050  JMP		#0076
      0x1C1C0D19,  //  0051  EQ	R7	R6	K25
      0x781E0007,  //  0052  JMPF	R7	#005B
      0xB81E1A00,  //  0053  GETNGBL	R7	K13
      0x8C1C0F0E,  //  0054  GETMET	R7	R7	K14
      0x8C24050F,  //  0055  GETMET	R9	R2	K15
      0x582C0019,  //  0056  LDCONST	R11	K25
      0x7C240400,  //  0057  CALL	R9	2
      0x50280200,  //  0058  LDBOOL	R10	1	0
      0x7C1C0600,  //  0059  CALL	R7	3
      0x7002001A,  //  005A  JMP		#0076
      0x1C1C0D1A,  //  005B  EQ	R7	R6	K26
      0x781E0018,  //  005C  JMPF	R7	#0076
      0x8C1C0306,  //  005D  GETMET	R7	R1	K6
      0x58240013,  //  005E  LDCONST	R9	K19
      0x7C1C0400,  //  005F  CALL	R7	2
      0x781E0014,  //  0060  JMPF	R7	#0076
      0x8C1C0306,  //  0061  GETMET	R7	R1	K6
      0x58240014,  //  0062  LDCONST	R9	K20
      0x7C1C0400,  //  0063  CALL	R7	2
      0x781E0010,  //  0064  JMPF	R7	#0076
      0x8C1C0308,  //  0065  GETMET	R7	R1	K8
      0x58240013,  //  0066  LDCONST	R9	K19
      0x7C1C0400,  //  0067  CALL	R7	2
      0x8C200308,  //  0068  GETMET	R8	R1	K8
      0x58280014,  //  0069  LDCONST	R10	K20
      0x7C200400,  //  006A  CALL	R8	2
      0xB8261A00,  //  006B  GETNGBL	R9	K13
      0x8C24130E,  //  006C  GETMET	R9	R9	K14
      0x8C2C050F,  //  006D  GETMET	R11	R2	K15
      0x5834001B,  //  006E  LDCONST	R13	K27
      0x88380117,  //  006F  GETMBR	R14	R0	K23
      0x883C0118,  //  0070  GETMBR	R15	R0	K24
      0x5C400E00,  //  0071  MOVE	R16	R7
      0x5C441000,  //  0072  MOVE	R17	R8
      0x7C2C0C00,  //  0073  CALL	R11	6
      0x50300200,  //  0074  LDBOOL	R12	1	0
      0x7C240600,  //  0075  CALL	R9	3
      0xB81A1A00,  //  0076  GETNGBL	R6	K13
      0x8C180D1C,  //  0077  GETMET	R6	R6	K28
      0x5820001D,  //  0078  LDCONST	R8	K29
      0x5824001E,  //  0079  LDCONST	R9	K30
      0x7C180600,  //  007A  CALL	R6	3
      0x8C18031F,  //  007B  GETMET	R6	R1	K31
      0x58200020,  //  007C  LDCONST	R8	K32
      0x7C180400,  //  007D  CALL	R6	2
      0xA8040001,  //  007E  EXBLK	1	1
      0x7002001D,  //  007F  JMP		#009E
      0xAC180002,  //  0080  CATCH	R6	0	2
      0x7002001A,  //  0081  JMP		#009D
      0xB8221A00,  //  0082  GETNGBL	R8	K13
      0x8C201121,  //  0083  GETMET	R8	R8	K33
      0x8C28050F,  //  0084  GETMET	R10	R2	K15
      0x58300022,  //  0085  LDCONST	R12	K34
      0x5C340C00,  //  0086  MOVE	R13	R6
      0x5C380E00,  //  0087  MOVE	R14	R7
      0x7C280800,  //  0088  CALL	R10	4
      0x582C0023,  //  0089  LDCONST	R11	K35
      0x7C200600,  //  008A  CALL	R8	3
      0x8C200324,  //  008B  GETMET	R8	R1	K36
      0x58280025,  //  008C  LDCONST	R10	K37
      0x7C200400,  //  008D  CALL	R8	2
      0x8C200326,  //  008E  GETMET	R8	R1	K38
      0x7C200200,  //  008F  CALL	R8	1
      0x8C200327,  //  0090  GETMET	R8	R1	K39
      0x8C28050F,  //  0091  GETMET	R10	R2	K15
      0x58300028,  //  0092  LDCONST	R12	K40
      0x5C340C00,  //  0093  MOVE	R13	R6
      0x5C380E00,  //  0094  MOVE	R14	R7
      0x7C280800,  //  0095  CALL	R10	4
      0x7C200400,  //  0096  CALL	R8	2
      0x8C200329,  //  0097  GETMET	R8	R1	K41
      0x8828032A,  //  0098  GETMBR	R10	R1	K42
      0x7C200400,  //  0099  CALL	R8	2
      0x8C20032B,  //  009A  GETMET	R8	R1	K43
      0x7C200200,  //  009B  CALL	R8	1
      0x70020000,  //  009C  JMP		#009E
      0xB0080000,  //  009D  RAISE	2	R0	R0
      0x80000000,  //  009E  RET	0
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: init
********************************************************************/
be_local_closure(ezie_cloud_configurator_init,   /* name */
  be_nested_proto(
    9,                          /* nstack */
    1,                          /* argc */
    2,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    1,                          /* has sup protos */
    ( &(const struct bproto*[ 2]) {
      be_nested_proto(
        4,                          /* nstack */
        0,                          /* argc */
        0,                          /* varg */
        1,                          /* has upvals */
        ( &(const bupvaldesc[ 1]) {  /* upvals */
          be_local_const_upval(1, 0),
        }),
        0,                          /* has sup protos */
        NULL,                       /* no sub protos */
        1,                          /* has constants */
        ( &(const bvalue[ 5]) {     /* constants */
        /* K0   */  be_nested_str(is_mqtt_connected),
        /* K1   */  be_nested_str(tasmota),
        /* K2   */  be_nested_str(remove_rule),
        /* K3   */  be_nested_str(Mqtt_X23Connected),
        /* K4   */  be_nested_str(cloud_settings_enabled),
        }),
        &be_const_str__anonymous_,
        &be_const_str_solidified,
        ( &(const binstruction[ 9]) {  /* code */
          0x68000000,  //  0000  GETUPV	R0	U0
          0x50040200,  //  0001  LDBOOL	R1	1	0
          0x90020001,  //  0002  SETMBR	R0	K0	R1
          0xB8020200,  //  0003  GETNGBL	R0	K1
          0x8C000102,  //  0004  GETMET	R0	R0	K2
          0x58080003,  //  0005  LDCONST	R2	K3
          0x580C0004,  //  0006  LDCONST	R3	K4
          0x7C000600,  //  0007  CALL	R0	3
          0x80000000,  //  0008  RET	0
        })
      ),
      be_nested_proto(
        10,                          /* nstack */
        4,                          /* argc */
        0,                          /* varg */
        1,                          /* has upvals */
        ( &(const bupvaldesc[ 1]) {  /* upvals */
          be_local_const_upval(1, 0),
        }),
        0,                          /* has sup protos */
        NULL,                       /* no sub protos */
        1,                          /* has constants */
        ( &(const bvalue[ 1]) {     /* constants */
        /* K0   */  be_nested_str(resetmqtt),
        }),
        &be_const_str__anonymous_,
        &be_const_str_solidified,
        ( &(const binstruction[ 8]) {  /* code */
          0x68100000,  //  0000  GETUPV	R4	U0
          0x8C100900,  //  0001  GETMET	R4	R4	K0
          0x5C180000,  //  0002  MOVE	R6	R0
          0x5C1C0200,  //  0003  MOVE	R7	R1
          0x5C200400,  //  0004  MOVE	R8	R2
          0x5C240600,  //  0005  MOVE	R9	R3
          0x7C100A00,  //  0006  CALL	R4	5
          0x80000000,  //  0007  RET	0
        })
      ),
    }),
    1,                          /* has constants */
    ( &(const bvalue[20]) {     /* constants */
    /* K0   */  be_nested_str(mqtt),
    /* K1   */  be_nested_str(json),
    /* K2   */  be_nested_str(persist),
    /* K3   */  be_nested_str(has),
    /* K4   */  be_nested_str(mqtt_host),
    /* K5   */  be_nested_str(a3bnjilp7tzxpg_X2Dats_X2Eiot_X2Eeu_X2Dwest_X2D1_X2Eamazonaws_X2Ecom),
    /* K6   */  be_nested_str(mqtt_port),
    /* K7   */  be_nested_str(443),
    /* K8   */  be_nested_str(owner_email),
    /* K9   */  be_nested_str(kisusenterprises_X40gmail_X2Ecom),
    /* K10  */  be_nested_str(authorizer_name),
    /* K11  */  be_nested_str(TasmotaAuth),
    /* K12  */  be_nested_str(tasmota),
    /* K13  */  be_nested_str(add_rule),
    /* K14  */  be_nested_str(Mqtt_X23Connected),
    /* K15  */  be_nested_str(cloud_settings_enabled),
    /* K16  */  be_nested_str(web_add_handler),
    /* K17  */  be_nested_str(add_cmd),
    /* K18  */  be_nested_str(resetmqtt),
    /* K19  */  be_nested_str(add_driver),
    }),
    &be_const_str_init,
    &be_const_str_solidified,
    ( &(const binstruction[54]) {  /* code */
      0xA4060000,  //  0000  IMPORT	R1	K0
      0xA40A0200,  //  0001  IMPORT	R2	K1
      0xA40E0400,  //  0002  IMPORT	R3	K2
      0x8C100703,  //  0003  GETMET	R4	R3	K3
      0x58180004,  //  0004  LDCONST	R6	K4
      0x7C100400,  //  0005  CALL	R4	2
      0x78120002,  //  0006  JMPF	R4	#000A
      0x88100704,  //  0007  GETMBR	R4	R3	K4
      0x90020804,  //  0008  SETMBR	R0	K4	R4
      0x70020000,  //  0009  JMP		#000B
      0x90020905,  //  000A  SETMBR	R0	K4	K5
      0x8C100703,  //  000B  GETMET	R4	R3	K3
      0x58180006,  //  000C  LDCONST	R6	K6
      0x7C100400,  //  000D  CALL	R4	2
      0x78120002,  //  000E  JMPF	R4	#0012
      0x88100706,  //  000F  GETMBR	R4	R3	K6
      0x90020C04,  //  0010  SETMBR	R0	K6	R4
      0x70020000,  //  0011  JMP		#0013
      0x90020D07,  //  0012  SETMBR	R0	K6	K7
      0x8C100703,  //  0013  GETMET	R4	R3	K3
      0x58180008,  //  0014  LDCONST	R6	K8
      0x7C100400,  //  0015  CALL	R4	2
      0x78120002,  //  0016  JMPF	R4	#001A
      0x88100708,  //  0017  GETMBR	R4	R3	K8
      0x90021004,  //  0018  SETMBR	R0	K8	R4
      0x70020000,  //  0019  JMP		#001B
      0x90021109,  //  001A  SETMBR	R0	K8	K9
      0x8C100703,  //  001B  GETMET	R4	R3	K3
      0x5818000A,  //  001C  LDCONST	R6	K10
      0x7C100400,  //  001D  CALL	R4	2
      0x78120002,  //  001E  JMPF	R4	#0022
      0x8810070A,  //  001F  GETMBR	R4	R3	K10
      0x90021404,  //  0020  SETMBR	R0	K10	R4
      0x70020000,  //  0021  JMP		#0023
      0x9002150B,  //  0022  SETMBR	R0	K10	K11
      0xB8121800,  //  0023  GETNGBL	R4	K12
      0x8C10090D,  //  0024  GETMET	R4	R4	K13
      0x5818000E,  //  0025  LDCONST	R6	K14
      0x841C0000,  //  0026  CLOSURE	R7	P0
      0x5820000F,  //  0027  LDCONST	R8	K15
      0x7C100800,  //  0028  CALL	R4	4
      0x8C100110,  //  0029  GETMET	R4	R0	K16
      0x7C100200,  //  002A  CALL	R4	1
      0xB8121800,  //  002B  GETNGBL	R4	K12
      0x8C100911,  //  002C  GETMET	R4	R4	K17
      0x58180012,  //  002D  LDCONST	R6	K18
      0x841C0001,  //  002E  CLOSURE	R7	P1
      0x7C100600,  //  002F  CALL	R4	3
      0xB8121800,  //  0030  GETNGBL	R4	K12
      0x8C100913,  //  0031  GETMET	R4	R4	K19
      0x5C180000,  //  0032  MOVE	R6	R0
      0x7C100400,  //  0033  CALL	R4	2
      0xA0000000,  //  0034  CLOSE	R0
      0x80000000,  //  0035  RET	0
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: web_add_main_button
********************************************************************/
be_local_closure(ezie_cloud_configurator_web_add_main_button,   /* name */
  be_nested_proto(
    5,                          /* nstack */
    1,                          /* argc */
    2,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    ( &(const bvalue[ 3]) {     /* constants */
    /* K0   */  be_nested_str(webserver),
    /* K1   */  be_nested_str(content_send),
    /* K2   */  be_nested_str(_X3Cp_X3E_X3Cform_X20id_X3Dac_X20action_X3D_X27eziecloudconf_X27_X20style_X3D_X27display_X3A_X20block_X3B_X27_X20method_X3D_X27get_X27_X3E_X3Cbutton_X3EEZIE_X20Cloud_X20Configuration_X3C_X2Fbutton_X3E_X3C_X2Fform_X3E_X3C_X2Fp_X3E),
    }),
    &be_const_str_web_add_main_button,
    &be_const_str_solidified,
    ( &(const binstruction[ 5]) {  /* code */
      0xA4060000,  //  0000  IMPORT	R1	K0
      0x8C080301,  //  0001  GETMET	R2	R1	K1
      0x58100002,  //  0002  LDCONST	R4	K2
      0x7C080400,  //  0003  CALL	R2	2
      0x80000000,  //  0004  RET	0
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: show_info
********************************************************************/
be_local_closure(ezie_cloud_configurator_show_info,   /* name */
  be_nested_proto(
    6,                          /* nstack */
    1,                          /* argc */
    2,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    ( &(const bvalue[19]) {     /* constants */
    /* K0   */  be_nested_str(webserver),
    /* K1   */  be_nested_str(string),
    /* K2   */  be_nested_str(content_send),
    /* K3   */  be_nested_str(_X3Cform_X20action_X3D_X27_X2Feziecloudconf_X27_X20method_X3D_X27post_X27_X20_X3E),
    /* K4   */  be_nested_str(_X3Cfieldset_X3E_X3Clegend_X3E_X3Cb_X3E_X26nbsp_X3BMQTT_X20is_X20not_X20Connected_X26nbsp_X3B_X3C_X2Fb_X3E_X3C_X2Flegend_X3E_X3Cp_X3E_X3C_X2Fp_X3E),
    /* K5   */  be_nested_str(_X3Ctable_X3E_X3Ctr_X3E_X3Ctd_X20width_X3D_X27350_X27_X3E_X3Cp_X3EYour_X20device_X20is_X20not_X20connected_X20to_X20MQTT_X20Broker_X2E_X20_X20This_X20page_X20is_X20enabled_X20only_X20when_X20device_X20has_X20MQTT_X20Connection_X2E_X3C_X2Fp_X3E_X3C_X2Ftd_X3E_X3C_X2Ftr_X3E_X3C_X2Ftable_X3E),
    /* K6   */  be_nested_str(_X3Cp_X3E_X3C_X2Fp_X3E_X3C_X2Ffieldset_X3E_X3Cp_X3E_X3C_X2Fp_X3E),
    /* K7   */  be_nested_str(_X3Cfieldset_X3E_X3Clegend_X3E_X3Cb_X3E_X26nbsp_X3BFix_X20MQTT_X20Connection_X20issue_X26nbsp_X3B_X3C_X2Fb_X3E_X3C_X2Flegend_X3E_X3Cp_X3E_X3C_X2Fp_X3E),
    /* K8   */  be_nested_str(_X3Cp_X3EUse_X20Option_X201_X2FOption_X202_X20whichever_X20applicable_X3A_X3C_X2Fp_X3E),
    /* K9   */  be_nested_str(_X3Cfieldset_X3E_X3Clegend_X3E_X3Cb_X3E_X26nbsp_X3BOption_X201_X26nbsp_X3B_X3C_X2Fb_X3E_X3C_X2Flegend_X3E),
    /* K10  */  be_nested_str(_X3Cp_X3EIf_X20you_X20have_X20changed_X20MQTT_X20credentials_X3A_X3C_X2Fp_X3E),
    /* K11  */  be_nested_str(show_mqtt_user_pass),
    /* K12  */  be_nested_str(_X3Cp_X3E_X3C_X2Fp_X3E_X3Cbutton_X20type_X3D_X27submit_X27_X20name_X3D_X27action_X27_X20value_X3D_X27updatemqtt_X27_X3EUpdate_X20MQTT_X20settings_X3C_X2Fbutton_X3E_X3Cp_X3E_X3C_X2Fp_X3E),
    /* K13  */  be_nested_str(_X3C_X2Fform_X3E_X3C_X2Fp_X3E),
    /* K14  */  be_nested_str(_X3Cform_X20action_X3D_X27_X2Feziecloudconf1_X27_X20method_X3D_X27post_X27_X20_X3E),
    /* K15  */  be_nested_str(_X3Cp_X3EOR_X3C_X2Fp_X3E),
    /* K16  */  be_nested_str(_X3Cfieldset_X3E_X3Clegend_X3E_X3Cb_X3E_X26nbsp_X3BOption_X202_X26nbsp_X3B_X3C_X2Fb_X3E_X3C_X2Flegend_X3E_X3Cp_X3E_X3C_X2Fp_X3E),
    /* K17  */  be_nested_str(_X3Cp_X3EReset_X20your_X20MQTT_X20Credentials_X3A_X3C_X2Fp_X3E),
    /* K18  */  be_nested_str(_X3Cp_X3E_X3C_X2Fp_X3E_X3Cbutton_X20type_X3D_X27submit_X27_X20name_X3D_X27action_X27_X20value_X3D_X27resetmqtt_X27_X3EReset_X20MQTT_X20Credentials_X20and_X20Settings_X3C_X2Fbutton_X3E_X3Cp_X3E_X3C_X2Fp_X3E),
    }),
    &be_const_str_show_info,
    &be_const_str_solidified,
    ( &(const binstruction[62]) {  /* code */
      0xA4060000,  //  0000  IMPORT	R1	K0
      0xA40A0200,  //  0001  IMPORT	R2	K1
      0x8C0C0302,  //  0002  GETMET	R3	R1	K2
      0x58140003,  //  0003  LDCONST	R5	K3
      0x7C0C0400,  //  0004  CALL	R3	2
      0x8C0C0302,  //  0005  GETMET	R3	R1	K2
      0x58140004,  //  0006  LDCONST	R5	K4
      0x7C0C0400,  //  0007  CALL	R3	2
      0x8C0C0302,  //  0008  GETMET	R3	R1	K2
      0x58140005,  //  0009  LDCONST	R5	K5
      0x7C0C0400,  //  000A  CALL	R3	2
      0x8C0C0302,  //  000B  GETMET	R3	R1	K2
      0x58140006,  //  000C  LDCONST	R5	K6
      0x7C0C0400,  //  000D  CALL	R3	2
      0x8C0C0302,  //  000E  GETMET	R3	R1	K2
      0x58140007,  //  000F  LDCONST	R5	K7
      0x7C0C0400,  //  0010  CALL	R3	2
      0x8C0C0302,  //  0011  GETMET	R3	R1	K2
      0x58140008,  //  0012  LDCONST	R5	K8
      0x7C0C0400,  //  0013  CALL	R3	2
      0x8C0C0302,  //  0014  GETMET	R3	R1	K2
      0x58140009,  //  0015  LDCONST	R5	K9
      0x7C0C0400,  //  0016  CALL	R3	2
      0x8C0C0302,  //  0017  GETMET	R3	R1	K2
      0x5814000A,  //  0018  LDCONST	R5	K10
      0x7C0C0400,  //  0019  CALL	R3	2
      0x8C0C010B,  //  001A  GETMET	R3	R0	K11
      0x7C0C0200,  //  001B  CALL	R3	1
      0x8C0C0302,  //  001C  GETMET	R3	R1	K2
      0x5814000C,  //  001D  LDCONST	R5	K12
      0x7C0C0400,  //  001E  CALL	R3	2
      0x8C0C0302,  //  001F  GETMET	R3	R1	K2
      0x58140006,  //  0020  LDCONST	R5	K6
      0x7C0C0400,  //  0021  CALL	R3	2
      0x8C0C0302,  //  0022  GETMET	R3	R1	K2
      0x5814000D,  //  0023  LDCONST	R5	K13
      0x7C0C0400,  //  0024  CALL	R3	2
      0x8C0C0302,  //  0025  GETMET	R3	R1	K2
      0x5814000E,  //  0026  LDCONST	R5	K14
      0x7C0C0400,  //  0027  CALL	R3	2
      0x8C0C0302,  //  0028  GETMET	R3	R1	K2
      0x5814000F,  //  0029  LDCONST	R5	K15
      0x7C0C0400,  //  002A  CALL	R3	2
      0x8C0C0302,  //  002B  GETMET	R3	R1	K2
      0x58140010,  //  002C  LDCONST	R5	K16
      0x7C0C0400,  //  002D  CALL	R3	2
      0x8C0C0302,  //  002E  GETMET	R3	R1	K2
      0x58140011,  //  002F  LDCONST	R5	K17
      0x7C0C0400,  //  0030  CALL	R3	2
      0x8C0C0302,  //  0031  GETMET	R3	R1	K2
      0x58140012,  //  0032  LDCONST	R5	K18
      0x7C0C0400,  //  0033  CALL	R3	2
      0x8C0C0302,  //  0034  GETMET	R3	R1	K2
      0x58140006,  //  0035  LDCONST	R5	K6
      0x7C0C0400,  //  0036  CALL	R3	2
      0x8C0C0302,  //  0037  GETMET	R3	R1	K2
      0x58140006,  //  0038  LDCONST	R5	K6
      0x7C0C0400,  //  0039  CALL	R3	2
      0x8C0C0302,  //  003A  GETMET	R3	R1	K2
      0x5814000D,  //  003B  LDCONST	R5	K13
      0x7C0C0400,  //  003C  CALL	R3	2
      0x80000000,  //  003D  RET	0
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: show_owner_settings
********************************************************************/
be_local_closure(ezie_cloud_configurator_show_owner_settings,   /* name */
  be_nested_proto(
    9,                          /* nstack */
    1,                          /* argc */
    2,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    ( &(const bvalue[12]) {     /* constants */
    /* K0   */  be_nested_str(webserver),
    /* K1   */  be_nested_str(string),
    /* K2   */  be_nested_str(content_send),
    /* K3   */  be_nested_str(_X3Cform_X20action_X3D_X27_X2Feziecloudconf_X27_X20method_X3D_X27post_X27_X20_X3E),
    /* K4   */  be_nested_str(_X3Cfieldset_X3E_X3Clegend_X3E_X3Cb_X3E_X26nbsp_X3BDevice_X20Ownership_X26nbsp_X3B_X3C_X2Fb_X3E_X3C_X2Flegend_X3E_X3Cp_X3E_X3C_X2Fp_X3E),
    /* K5   */  be_nested_str(_X3Cp_X3EEmail_X20Address_X3A_X3C_X2Fp_X3E),
    /* K6   */  be_nested_str(format),
    /* K7   */  be_nested_str(_X3Cinput_X20type_X3D_X27email_X27_X20name_X3D_X27email_X27_X20placeholder_X3D_X27Enter_X20your_X20email_X20address_X27_X20value_X3D_X27_X25s_X27_X20required_X2F_X3E),
    /* K8   */  be_nested_str(owner_email),
    /* K9   */  be_nested_str(_X3Cp_X3E_X3C_X2Fp_X3E_X3Cbutton_X20type_X3D_X27submit_X27_X20name_X3D_X27action_X27_X20value_X3D_X27ownership_X27_X3EConfirm_X20Email_X3C_X2Fbutton_X3E_X3Cp_X3E_X3C_X2Fp_X3E),
    /* K10  */  be_nested_str(_X3Cp_X3E_X3C_X2Fp_X3E_X3C_X2Ffieldset_X3E_X3Cp_X3E_X3C_X2Fp_X3E),
    /* K11  */  be_nested_str(_X3C_X2Fform_X3E_X3C_X2Fp_X3E),
    }),
    &be_const_str_show_owner_settings,
    &be_const_str_solidified,
    ( &(const binstruction[27]) {  /* code */
      0xA4060000,  //  0000  IMPORT	R1	K0
      0xA40A0200,  //  0001  IMPORT	R2	K1
      0x8C0C0302,  //  0002  GETMET	R3	R1	K2
      0x58140003,  //  0003  LDCONST	R5	K3
      0x7C0C0400,  //  0004  CALL	R3	2
      0x8C0C0302,  //  0005  GETMET	R3	R1	K2
      0x58140004,  //  0006  LDCONST	R5	K4
      0x7C0C0400,  //  0007  CALL	R3	2
      0x8C0C0302,  //  0008  GETMET	R3	R1	K2
      0x58140005,  //  0009  LDCONST	R5	K5
      0x7C0C0400,  //  000A  CALL	R3	2
      0x8C0C0302,  //  000B  GETMET	R3	R1	K2
      0x8C140506,  //  000C  GETMET	R5	R2	K6
      0x581C0007,  //  000D  LDCONST	R7	K7
      0x88200108,  //  000E  GETMBR	R8	R0	K8
      0x7C140600,  //  000F  CALL	R5	3
      0x7C0C0400,  //  0010  CALL	R3	2
      0x8C0C0302,  //  0011  GETMET	R3	R1	K2
      0x58140009,  //  0012  LDCONST	R5	K9
      0x7C0C0400,  //  0013  CALL	R3	2
      0x8C0C0302,  //  0014  GETMET	R3	R1	K2
      0x5814000A,  //  0015  LDCONST	R5	K10
      0x7C0C0400,  //  0016  CALL	R3	2
      0x8C0C0302,  //  0017  GETMET	R3	R1	K2
      0x5814000B,  //  0018  LDCONST	R5	K11
      0x7C0C0400,  //  0019  CALL	R3	2
      0x80000000,  //  001A  RET	0
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: web_add_handler
********************************************************************/
be_local_closure(ezie_cloud_configurator_web_add_handler,   /* name */
  be_nested_proto(
    9,                          /* nstack */
    1,                          /* argc */
    2,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    1,                          /* has sup protos */
    ( &(const struct bproto*[ 4]) {
      be_nested_proto(
        2,                          /* nstack */
        0,                          /* argc */
        0,                          /* varg */
        1,                          /* has upvals */
        ( &(const bupvaldesc[ 1]) {  /* upvals */
          be_local_const_upval(1, 0),
        }),
        0,                          /* has sup protos */
        NULL,                       /* no sub protos */
        1,                          /* has constants */
        ( &(const bvalue[ 1]) {     /* constants */
        /* K0   */  be_nested_str(page_part_mgr),
        }),
        &be_const_str__X3Clambda_X3E,
        &be_const_str_solidified,
        ( &(const binstruction[ 4]) {  /* code */
          0x68000000,  //  0000  GETUPV	R0	U0
          0x8C000100,  //  0001  GETMET	R0	R0	K0
          0x7C000200,  //  0002  CALL	R0	1
          0x80040000,  //  0003  RET	1	R0
        })
      ),
      be_nested_proto(
        2,                          /* nstack */
        0,                          /* argc */
        0,                          /* varg */
        1,                          /* has upvals */
        ( &(const bupvaldesc[ 1]) {  /* upvals */
          be_local_const_upval(1, 0),
        }),
        0,                          /* has sup protos */
        NULL,                       /* no sub protos */
        1,                          /* has constants */
        ( &(const bvalue[ 1]) {     /* constants */
        /* K0   */  be_nested_str(page_part_ctl),
        }),
        &be_const_str__X3Clambda_X3E,
        &be_const_str_solidified,
        ( &(const binstruction[ 4]) {  /* code */
          0x68000000,  //  0000  GETUPV	R0	U0
          0x8C000100,  //  0001  GETMET	R0	R0	K0
          0x7C000200,  //  0002  CALL	R0	1
          0x80040000,  //  0003  RET	1	R0
        })
      ),
      be_nested_proto(
        2,                          /* nstack */
        0,                          /* argc */
        0,                          /* varg */
        1,                          /* has upvals */
        ( &(const bupvaldesc[ 1]) {  /* upvals */
          be_local_const_upval(1, 0),
        }),
        0,                          /* has sup protos */
        NULL,                       /* no sub protos */
        1,                          /* has constants */
        ( &(const bvalue[ 1]) {     /* constants */
        /* K0   */  be_nested_str(page_part_mgr),
        }),
        &be_const_str__X3Clambda_X3E,
        &be_const_str_solidified,
        ( &(const binstruction[ 4]) {  /* code */
          0x68000000,  //  0000  GETUPV	R0	U0
          0x8C000100,  //  0001  GETMET	R0	R0	K0
          0x7C000200,  //  0002  CALL	R0	1
          0x80040000,  //  0003  RET	1	R0
        })
      ),
      be_nested_proto(
        2,                          /* nstack */
        0,                          /* argc */
        0,                          /* varg */
        1,                          /* has upvals */
        ( &(const bupvaldesc[ 1]) {  /* upvals */
          be_local_const_upval(1, 0),
        }),
        0,                          /* has sup protos */
        NULL,                       /* no sub protos */
        1,                          /* has constants */
        ( &(const bvalue[ 1]) {     /* constants */
        /* K0   */  be_nested_str(page_part_ctl),
        }),
        &be_const_str__X3Clambda_X3E,
        &be_const_str_solidified,
        ( &(const binstruction[ 4]) {  /* code */
          0x68000000,  //  0000  GETUPV	R0	U0
          0x8C000100,  //  0001  GETMET	R0	R0	K0
          0x7C000200,  //  0002  CALL	R0	1
          0x80040000,  //  0003  RET	1	R0
        })
      ),
    }),
    1,                          /* has constants */
    ( &(const bvalue[ 8]) {     /* constants */
    /* K0   */  be_nested_str(webserver),
    /* K1   */  be_nested_str(mqtt),
    /* K2   */  be_nested_str(json),
    /* K3   */  be_nested_str(on),
    /* K4   */  be_nested_str(_X2Feziecloudconf),
    /* K5   */  be_nested_str(HTTP_GET),
    /* K6   */  be_nested_str(HTTP_POST),
    /* K7   */  be_nested_str(_X2Feziecloudconf1),
    }),
    &be_const_str_web_add_handler,
    &be_const_str_solidified,
    ( &(const binstruction[25]) {  /* code */
      0xA4060000,  //  0000  IMPORT	R1	K0
      0xA40A0200,  //  0001  IMPORT	R2	K1
      0xA40E0400,  //  0002  IMPORT	R3	K2
      0x8C100303,  //  0003  GETMET	R4	R1	K3
      0x58180004,  //  0004  LDCONST	R6	K4
      0x841C0000,  //  0005  CLOSURE	R7	P0
      0x88200305,  //  0006  GETMBR	R8	R1	K5
      0x7C100800,  //  0007  CALL	R4	4
      0x8C100303,  //  0008  GETMET	R4	R1	K3
      0x58180004,  //  0009  LDCONST	R6	K4
      0x841C0001,  //  000A  CLOSURE	R7	P1
      0x88200306,  //  000B  GETMBR	R8	R1	K6
      0x7C100800,  //  000C  CALL	R4	4
      0x8C100303,  //  000D  GETMET	R4	R1	K3
      0x58180007,  //  000E  LDCONST	R6	K7
      0x841C0002,  //  000F  CLOSURE	R7	P2
      0x88200305,  //  0010  GETMBR	R8	R1	K5
      0x7C100800,  //  0011  CALL	R4	4
      0x8C100303,  //  0012  GETMET	R4	R1	K3
      0x58180007,  //  0013  LDCONST	R6	K7
      0x841C0003,  //  0014  CLOSURE	R7	P3
      0x88200306,  //  0015  GETMBR	R8	R1	K6
      0x7C100800,  //  0016  CALL	R4	4
      0xA0000000,  //  0017  CLOSE	R0
      0x80000000,  //  0018  RET	0
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: check_mqtt
********************************************************************/
be_local_closure(ezie_cloud_configurator_check_mqtt,   /* name */
  be_nested_proto(
    7,                          /* nstack */
    1,                          /* argc */
    2,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    ( &(const bvalue[10]) {     /* constants */
    /* K0   */  be_nested_str(tasmota),
    /* K1   */  be_nested_str(cmd),
    /* K2   */  be_nested_str(Status_X206),
    /* K3   */  be_nested_str(find),
    /* K4   */  be_nested_str(StatusMQT),
    /* K5   */  be_nested_str(MqttCount),
    /* K6   */  be_nested_str(client_id),
    /* K7   */  be_nested_str(MqttClient),
    /* K8   */  be_const_int(0),
    /* K9   */  be_nested_str(is_mqtt_connected),
    }),
    &be_const_str_check_mqtt,
    &be_const_str_solidified,
    ( &(const binstruction[23]) {  /* code */
      0xB8060000,  //  0000  GETNGBL	R1	K0
      0x8C040301,  //  0001  GETMET	R1	R1	K1
      0x580C0002,  //  0002  LDCONST	R3	K2
      0x50100200,  //  0003  LDBOOL	R4	1	0
      0x7C040600,  //  0004  CALL	R1	3
      0x8C080303,  //  0005  GETMET	R2	R1	K3
      0x58100004,  //  0006  LDCONST	R4	K4
      0x7C080400,  //  0007  CALL	R2	2
      0x8C0C0503,  //  0008  GETMET	R3	R2	K3
      0x58140005,  //  0009  LDCONST	R5	K5
      0x7C0C0400,  //  000A  CALL	R3	2
      0x8C100503,  //  000B  GETMET	R4	R2	K3
      0x58180007,  //  000C  LDCONST	R6	K7
      0x7C100400,  //  000D  CALL	R4	2
      0x90020C04,  //  000E  SETMBR	R0	K6	R4
      0x1C100708,  //  000F  EQ	R4	R3	K8
      0x78120002,  //  0010  JMPF	R4	#0014
      0x50100000,  //  0011  LDBOOL	R4	0	0
      0x90021204,  //  0012  SETMBR	R0	K9	R4
      0x70020001,  //  0013  JMP		#0016
      0x50100200,  //  0014  LDBOOL	R4	1	0
      0x90021204,  //  0015  SETMBR	R0	K9	R4
      0x80000000,  //  0016  RET	0
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: page_part_mgr
********************************************************************/
be_local_closure(ezie_cloud_configurator_page_part_mgr,   /* name */
  be_nested_proto(
    6,                          /* nstack */
    1,                          /* argc */
    2,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    ( &(const bvalue[15]) {     /* constants */
    /* K0   */  be_nested_str(webserver),
    /* K1   */  be_nested_str(string),
    /* K2   */  be_nested_str(check_mqtt),
    /* K3   */  be_nested_str(check_privileged_access),
    /* K4   */  be_nested_str(content_start),
    /* K5   */  be_nested_str(EZIE_X20Cloud),
    /* K6   */  be_nested_str(content_send_style),
    /* K7   */  be_nested_str(is_mqtt_connected),
    /* K8   */  be_nested_str(show_info),
    /* K9   */  be_nested_str(show_owner_settings),
    /* K10  */  be_nested_str(show_mqtt_settings),
    /* K11  */  be_nested_str(content_button),
    /* K12  */  be_nested_str(BUTTON_CONFIGURATION),
    /* K13  */  be_nested_str(BUTTON_MAIN),
    /* K14  */  be_nested_str(content_stop),
    }),
    &be_const_str_page_part_mgr,
    &be_const_str_solidified,
    ( &(const binstruction[34]) {  /* code */
      0xA4060000,  //  0000  IMPORT	R1	K0
      0xA40A0200,  //  0001  IMPORT	R2	K1
      0x8C0C0102,  //  0002  GETMET	R3	R0	K2
      0x7C0C0200,  //  0003  CALL	R3	1
      0x8C0C0303,  //  0004  GETMET	R3	R1	K3
      0x7C0C0200,  //  0005  CALL	R3	1
      0x740E0001,  //  0006  JMPT	R3	#0009
      0x4C0C0000,  //  0007  LDNIL	R3
      0x80040600,  //  0008  RET	1	R3
      0x8C0C0304,  //  0009  GETMET	R3	R1	K4
      0x58140005,  //  000A  LDCONST	R5	K5
      0x7C0C0400,  //  000B  CALL	R3	2
      0x8C0C0306,  //  000C  GETMET	R3	R1	K6
      0x7C0C0200,  //  000D  CALL	R3	1
      0x880C0107,  //  000E  GETMBR	R3	R0	K7
      0x50100000,  //  000F  LDBOOL	R4	0	0
      0x1C0C0604,  //  0010  EQ	R3	R3	R4
      0x780E0002,  //  0011  JMPF	R3	#0015
      0x8C0C0108,  //  0012  GETMET	R3	R0	K8
      0x7C0C0200,  //  0013  CALL	R3	1
      0x70020003,  //  0014  JMP		#0019
      0x8C0C0109,  //  0015  GETMET	R3	R0	K9
      0x7C0C0200,  //  0016  CALL	R3	1
      0x8C0C010A,  //  0017  GETMET	R3	R0	K10
      0x7C0C0200,  //  0018  CALL	R3	1
      0x8C0C030B,  //  0019  GETMET	R3	R1	K11
      0x8814030C,  //  001A  GETMBR	R5	R1	K12
      0x7C0C0400,  //  001B  CALL	R3	2
      0x8C0C030B,  //  001C  GETMET	R3	R1	K11
      0x8814030D,  //  001D  GETMBR	R5	R1	K13
      0x7C0C0400,  //  001E  CALL	R3	2
      0x8C0C030E,  //  001F  GETMET	R3	R1	K14
      0x7C0C0200,  //  0020  CALL	R3	1
      0x80000000,  //  0021  RET	0
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified class: ezie_cloud_configurator
********************************************************************/
extern const bclass be_class_Driver;
be_local_class(ezie_cloud_configurator,
    6,
    &be_class_Driver,
    be_nested_map(18,
    ( (struct bmapnode*) &(const bmapnode[]) {
        { be_const_key(mqtt_host, -1), be_const_var(1) },
        { be_const_key(client_id, -1), be_const_var(5) },
        { be_const_key(resetmqtt, -1), be_const_closure(ezie_cloud_configurator_resetmqtt_closure) },
        { be_const_key(check_mqtt, -1), be_const_closure(ezie_cloud_configurator_check_mqtt_closure) },
        { be_const_key(mqtt_port, -1), be_const_var(2) },
        { be_const_key(show_mqtt_user_pass, -1), be_const_closure(ezie_cloud_configurator_show_mqtt_user_pass_closure) },
        { be_const_key(web_add_handler, 9), be_const_closure(ezie_cloud_configurator_web_add_handler_closure) },
        { be_const_key(show_mqtt_settings, 11), be_const_closure(ezie_cloud_configurator_show_mqtt_settings_closure) },
        { be_const_key(is_mqtt_connected, -1), be_const_var(4) },
        { be_const_key(authorizer_name, 10), be_const_var(3) },
        { be_const_key(web_add_main_button, 1), be_const_closure(ezie_cloud_configurator_web_add_main_button_closure) },
        { be_const_key(show_info, 13), be_const_closure(ezie_cloud_configurator_show_info_closure) },
        { be_const_key(show_owner_settings, -1), be_const_closure(ezie_cloud_configurator_show_owner_settings_closure) },
        { be_const_key(owner_email, -1), be_const_var(0) },
        { be_const_key(get_owner_email, 6), be_const_closure(ezie_cloud_configurator_get_owner_email_closure) },
        { be_const_key(init, 4), be_const_closure(ezie_cloud_configurator_init_closure) },
        { be_const_key(page_part_ctl, 3), be_const_closure(ezie_cloud_configurator_page_part_ctl_closure) },
        { be_const_key(page_part_mgr, -1), be_const_closure(ezie_cloud_configurator_page_part_mgr_closure) },
    })),
    (bstring*) &be_const_str_ezie_cloud_configurator
);
/*******************************************************************/

void be_load_ezie_cloud_configurator_class(bvm *vm) {
    be_pushntvclass(vm, &be_class_ezie_cloud_configurator);
    be_setglobal(vm, "ezie_cloud_configurator");
    be_pop(vm, 1);
}
/********************************************************************/
/* End of solidification */
