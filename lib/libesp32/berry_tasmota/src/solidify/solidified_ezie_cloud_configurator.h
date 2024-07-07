/* Solidification of ezie_cloud_configurator.h */
/********************************************************************\
* Generated code, don't edit                                         *
\********************************************************************/
#include "be_constobj.h"

extern const bclass be_class_ezie_cloud_configurator;

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
    ( &(const bvalue[13]) {     /* constants */
    /* K0   */  be_nested_str(webserver),
    /* K1   */  be_nested_str(string),
    /* K2   */  be_nested_str(check_privileged_access),
    /* K3   */  be_nested_str(content_start),
    /* K4   */  be_nested_str(EZIE_X20Cloud),
    /* K5   */  be_nested_str(content_send_style),
    /* K6   */  be_nested_str(is_mqtt_connected),
    /* K7   */  be_nested_str(show_info),
    /* K8   */  be_nested_str(show_owner_settings),
    /* K9   */  be_nested_str(show_mqtt_settings),
    /* K10  */  be_nested_str(content_button),
    /* K11  */  be_nested_str(BUTTON_CONFIGURATION),
    /* K12  */  be_nested_str(content_stop),
    }),
    &be_const_str_page_part_mgr,
    &be_const_str_solidified,
    ( &(const binstruction[29]) {  /* code */
      0xA4060000,  //  0000  IMPORT	R1	K0
      0xA40A0200,  //  0001  IMPORT	R2	K1
      0x8C0C0302,  //  0002  GETMET	R3	R1	K2
      0x7C0C0200,  //  0003  CALL	R3	1
      0x740E0001,  //  0004  JMPT	R3	#0007
      0x4C0C0000,  //  0005  LDNIL	R3
      0x80040600,  //  0006  RET	1	R3
      0x8C0C0303,  //  0007  GETMET	R3	R1	K3
      0x58140004,  //  0008  LDCONST	R5	K4
      0x7C0C0400,  //  0009  CALL	R3	2
      0x8C0C0305,  //  000A  GETMET	R3	R1	K5
      0x7C0C0200,  //  000B  CALL	R3	1
      0x880C0106,  //  000C  GETMBR	R3	R0	K6
      0x50100000,  //  000D  LDBOOL	R4	0	0
      0x1C0C0604,  //  000E  EQ	R3	R3	R4
      0x780E0002,  //  000F  JMPF	R3	#0013
      0x8C0C0107,  //  0010  GETMET	R3	R0	K7
      0x7C0C0200,  //  0011  CALL	R3	1
      0x70020003,  //  0012  JMP		#0017
      0x8C0C0108,  //  0013  GETMET	R3	R0	K8
      0x7C0C0200,  //  0014  CALL	R3	1
      0x8C0C0109,  //  0015  GETMET	R3	R0	K9
      0x7C0C0200,  //  0016  CALL	R3	1
      0x8C0C030A,  //  0017  GETMET	R3	R1	K10
      0x8814030B,  //  0018  GETMBR	R5	R1	K11
      0x7C0C0400,  //  0019  CALL	R3	2
      0x8C0C030C,  //  001A  GETMET	R3	R1	K12
      0x7C0C0200,  //  001B  CALL	R3	1
      0x80000000,  //  001C  RET	0
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: resetmqtt
********************************************************************/
be_local_closure(ezie_cloud_configurator_resetmqtt,   /* name */
  be_nested_proto(
    23,                          /* nstack */
    5,                          /* argc */
    2,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    ( &(const bvalue[28]) {     /* constants */
    /* K0   */  be_nested_str(string),
    /* K1   */  be_nested_str(json),
    /* K2   */  be_nested_str(format),
    /* K3   */  be_nested_str(https_X3A_X2F_X2Fwqxpc1agpf_X2Eexecute_X2Dapi_X2Eeu_X2Dwest_X2D1_X2Eamazonaws_X2Ecom_X2Flive_X3Faction_X3Dreset_mqtt_X26device_id_X3D_X25s),
    /* K4   */  be_nested_str(client_id),
    /* K5   */  be_nested_str(_X25s_X26_X25s),
    /* K6   */  be_nested_str(webclient),
    /* K7   */  be_nested_str(set_follow_redirects),
    /* K8   */  be_nested_str(set_auth),
    /* K9   */  be_nested_str(Sushant),
    /* K10  */  be_nested_str(Vampire),
    /* K11  */  be_nested_str(begin),
    /* K12  */  be_nested_str(POST),
    /* K13  */  be_nested_str(),
    /* K14  */  be_nested_str(Location_X3A),
    /* K15  */  be_nested_str(get_header),
    /* K16  */  be_nested_str(Location),
    /* K17  */  be_nested_str(load),
    /* K18  */  be_nested_str(get_string),
    /* K19  */  be_nested_str(find),
    /* K20  */  be_nested_str(body),
    /* K21  */  be_nested_str(new_username),
    /* K22  */  be_nested_str(new_password),
    /* K23  */  be_nested_str(authorizer_name),
    /* K24  */  be_nested_str(tasmota),
    /* K25  */  be_nested_str(cmd),
    /* K26  */  be_nested_str(BackLog_X20SetOption3_X201_X3B_X20SetOption103_X201_X3B_X20MqttHost_X20a3bnjilp7tzxpg_X2Dats_X2Eiot_X2Eeu_X2Dwest_X2D1_X2Eamazonaws_X2Ecom_X3B_X20MqttPort_X20443_X3B_X20MqttUser_X20_X25s_X3Fx_X2Damz_X2Dcustomauthorizer_X2Dname_X3D_X25s_X3B_X20MqttPassword_X20_X25s),
    /* K27  */  be_nested_str(close),
    }),
    &be_const_str_resetmqtt,
    &be_const_str_solidified,
    ( &(const binstruction[80]) {  /* code */
      0xA4160000,  //  0000  IMPORT	R5	K0
      0xA41A0200,  //  0001  IMPORT	R6	K1
      0x8C1C0B02,  //  0002  GETMET	R7	R5	K2
      0x58240003,  //  0003  LDCONST	R9	K3
      0x88280104,  //  0004  GETMBR	R10	R0	K4
      0x7C1C0600,  //  0005  CALL	R7	3
      0x4C200000,  //  0006  LDNIL	R8
      0x20200608,  //  0007  NE	R8	R3	R8
      0x78220008,  //  0008  JMPF	R8	#0012
      0x8C200B02,  //  0009  GETMET	R8	R5	K2
      0x58280005,  //  000A  LDCONST	R10	K5
      0x5C2C0E00,  //  000B  MOVE	R11	R7
      0x5C300600,  //  000C  MOVE	R12	R3
      0x7C200800,  //  000D  CALL	R8	4
      0x5C1C1000,  //  000E  MOVE	R7	R8
      0x60200001,  //  000F  GETGBL	R8	G1
      0x5C240E00,  //  0010  MOVE	R9	R7
      0x7C200200,  //  0011  CALL	R8	1
      0xB8220C00,  //  0012  GETNGBL	R8	K6
      0x7C200000,  //  0013  CALL	R8	0
      0x8C241107,  //  0014  GETMET	R9	R8	K7
      0x502C0000,  //  0015  LDBOOL	R11	0	0
      0x7C240400,  //  0016  CALL	R9	2
      0x8C241108,  //  0017  GETMET	R9	R8	K8
      0x582C0009,  //  0018  LDCONST	R11	K9
      0x5830000A,  //  0019  LDCONST	R12	K10
      0x7C240600,  //  001A  CALL	R9	3
      0x8C24110B,  //  001B  GETMET	R9	R8	K11
      0x5C2C0E00,  //  001C  MOVE	R11	R7
      0x7C240400,  //  001D  CALL	R9	2
      0x8C24110C,  //  001E  GETMET	R9	R8	K12
      0x582C000D,  //  001F  LDCONST	R11	K13
      0x7C240400,  //  0020  CALL	R9	2
      0x542A012C,  //  0021  LDINT	R10	301
      0x1C28120A,  //  0022  EQ	R10	R9	R10
      0x742A0002,  //  0023  JMPT	R10	#0027
      0x542A012D,  //  0024  LDINT	R10	302
      0x1C28120A,  //  0025  EQ	R10	R9	R10
      0x782A0006,  //  0026  JMPF	R10	#002E
      0x60280001,  //  0027  GETGBL	R10	G1
      0x582C000E,  //  0028  LDCONST	R11	K14
      0x8C30110F,  //  0029  GETMET	R12	R8	K15
      0x58380010,  //  002A  LDCONST	R14	K16
      0x7C300400,  //  002B  CALL	R12	2
      0x7C280400,  //  002C  CALL	R10	2
      0x7002001E,  //  002D  JMP		#004D
      0x542A00C7,  //  002E  LDINT	R10	200
      0x1C28120A,  //  002F  EQ	R10	R9	R10
      0x782A001B,  //  0030  JMPF	R10	#004D
      0x8C280D11,  //  0031  GETMET	R10	R6	K17
      0x8C301112,  //  0032  GETMET	R12	R8	K18
      0x7C300200,  //  0033  CALL	R12	1
      0x7C280400,  //  0034  CALL	R10	2
      0x8C2C0D11,  //  0035  GETMET	R11	R6	K17
      0x8C341513,  //  0036  GETMET	R13	R10	K19
      0x583C0014,  //  0037  LDCONST	R15	K20
      0x7C340400,  //  0038  CALL	R13	2
      0x7C2C0400,  //  0039  CALL	R11	2
      0x8C301713,  //  003A  GETMET	R12	R11	K19
      0x58380015,  //  003B  LDCONST	R14	K21
      0x7C300400,  //  003C  CALL	R12	2
      0x8C341713,  //  003D  GETMET	R13	R11	K19
      0x583C0016,  //  003E  LDCONST	R15	K22
      0x7C340400,  //  003F  CALL	R13	2
      0x8C381713,  //  0040  GETMET	R14	R11	K19
      0x58400017,  //  0041  LDCONST	R16	K23
      0x7C380400,  //  0042  CALL	R14	2
      0xB83E3000,  //  0043  GETNGBL	R15	K24
      0x8C3C1F19,  //  0044  GETMET	R15	R15	K25
      0x8C440B02,  //  0045  GETMET	R17	R5	K2
      0x584C001A,  //  0046  LDCONST	R19	K26
      0x5C501800,  //  0047  MOVE	R20	R12
      0x5C541C00,  //  0048  MOVE	R21	R14
      0x5C581A00,  //  0049  MOVE	R22	R13
      0x7C440A00,  //  004A  CALL	R17	5
      0x50480200,  //  004B  LDBOOL	R18	1	0
      0x7C3C0600,  //  004C  CALL	R15	3
      0x8C28111B,  //  004D  GETMET	R10	R8	K27
      0x7C280200,  //  004E  CALL	R10	1
      0x80000000,  //  004F  RET	0
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
** Solidified function: get_mqtt_password
********************************************************************/
be_local_closure(ezie_cloud_configurator_get_mqtt_password,   /* name */
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
    /* K0   */  be_nested_str(mqtt_password),
    }),
    &be_const_str_get_mqtt_password,
    &be_const_str_solidified,
    ( &(const binstruction[ 2]) {  /* code */
      0x88040100,  //  0000  GETMBR	R1	R0	K0
      0x80040200,  //  0001  RET	1	R1
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
    13,                          /* nstack */
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
    ( &(const bvalue[17]) {     /* constants */
    /* K0   */  be_nested_str(webserver),
    /* K1   */  be_nested_str(mqtt),
    /* K2   */  be_nested_str(json),
    /* K3   */  be_nested_str(tasmota),
    /* K4   */  be_nested_str(cmd),
    /* K5   */  be_nested_str(Status_X206),
    /* K6   */  be_nested_str(find),
    /* K7   */  be_nested_str(StatusMQT),
    /* K8   */  be_nested_str(MqttCount),
    /* K9   */  be_nested_str(MqttClient),
    /* K10  */  be_const_int(0),
    /* K11  */  be_nested_str(is_mqtt_connected),
    /* K12  */  be_nested_str(on),
    /* K13  */  be_nested_str(_X2Feziecloudconf),
    /* K14  */  be_nested_str(HTTP_GET),
    /* K15  */  be_nested_str(HTTP_POST),
    /* K16  */  be_nested_str(_X2Feziecloudconf1),
    }),
    &be_const_str_web_add_handler,
    &be_const_str_solidified,
    ( &(const binstruction[45]) {  /* code */
      0xA4060000,  //  0000  IMPORT	R1	K0
      0xA40A0200,  //  0001  IMPORT	R2	K1
      0xA40E0400,  //  0002  IMPORT	R3	K2
      0xB8120600,  //  0003  GETNGBL	R4	K3
      0x8C100904,  //  0004  GETMET	R4	R4	K4
      0x58180005,  //  0005  LDCONST	R6	K5
      0x7C100400,  //  0006  CALL	R4	2
      0x8C140906,  //  0007  GETMET	R5	R4	K6
      0x581C0007,  //  0008  LDCONST	R7	K7
      0x7C140400,  //  0009  CALL	R5	2
      0x8C180B06,  //  000A  GETMET	R6	R5	K6
      0x58200008,  //  000B  LDCONST	R8	K8
      0x7C180400,  //  000C  CALL	R6	2
      0x8C1C0B06,  //  000D  GETMET	R7	R5	K6
      0x58240009,  //  000E  LDCONST	R9	K9
      0x7C1C0400,  //  000F  CALL	R7	2
      0x1C200D0A,  //  0010  EQ	R8	R6	K10
      0x78220002,  //  0011  JMPF	R8	#0015
      0x50200000,  //  0012  LDBOOL	R8	0	0
      0x90021608,  //  0013  SETMBR	R0	K11	R8
      0x70020001,  //  0014  JMP		#0017
      0x50200200,  //  0015  LDBOOL	R8	1	0
      0x90021608,  //  0016  SETMBR	R0	K11	R8
      0x8C20030C,  //  0017  GETMET	R8	R1	K12
      0x5828000D,  //  0018  LDCONST	R10	K13
      0x842C0000,  //  0019  CLOSURE	R11	P0
      0x8830030E,  //  001A  GETMBR	R12	R1	K14
      0x7C200800,  //  001B  CALL	R8	4
      0x8C20030C,  //  001C  GETMET	R8	R1	K12
      0x5828000D,  //  001D  LDCONST	R10	K13
      0x842C0001,  //  001E  CLOSURE	R11	P1
      0x8830030F,  //  001F  GETMBR	R12	R1	K15
      0x7C200800,  //  0020  CALL	R8	4
      0x8C20030C,  //  0021  GETMET	R8	R1	K12
      0x58280010,  //  0022  LDCONST	R10	K16
      0x842C0002,  //  0023  CLOSURE	R11	P2
      0x8830030E,  //  0024  GETMBR	R12	R1	K14
      0x7C200800,  //  0025  CALL	R8	4
      0x8C20030C,  //  0026  GETMET	R8	R1	K12
      0x58280010,  //  0027  LDCONST	R10	K16
      0x842C0003,  //  0028  CLOSURE	R11	P3
      0x8830030F,  //  0029  GETMBR	R12	R1	K15
      0x7C200800,  //  002A  CALL	R8	4
      0xA0000000,  //  002B  CLOSE	R0
      0x80000000,  //  002C  RET	0
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: init
********************************************************************/
be_local_closure(ezie_cloud_configurator_init,   /* name */
  be_nested_proto(
    13,                          /* nstack */
    3,                          /* argc */
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
    ( &(const bvalue[21]) {     /* constants */
    /* K0   */  be_nested_str(mqtt),
    /* K1   */  be_nested_str(json),
    /* K2   */  be_nested_str(tasmota),
    /* K3   */  be_nested_str(cmd),
    /* K4   */  be_nested_str(Status_X206),
    /* K5   */  be_nested_str(find),
    /* K6   */  be_nested_str(StatusMQT),
    /* K7   */  be_nested_str(MqttCount),
    /* K8   */  be_nested_str(client_id),
    /* K9   */  be_nested_str(MqttClient),
    /* K10  */  be_const_int(0),
    /* K11  */  be_nested_str(is_mqtt_connected),
    /* K12  */  be_nested_str(owner_email),
    /* K13  */  be_nested_str(mqtt_username),
    /* K14  */  be_nested_str(add_rule),
    /* K15  */  be_nested_str(Mqtt_X23Connected),
    /* K16  */  be_nested_str(cloud_settings_enabled),
    /* K17  */  be_nested_str(web_add_handler),
    /* K18  */  be_nested_str(add_cmd),
    /* K19  */  be_nested_str(resetmqtt),
    /* K20  */  be_nested_str(add_driver),
    }),
    &be_const_str_init,
    &be_const_str_solidified,
    ( &(const binstruction[44]) {  /* code */
      0xA40E0000,  //  0000  IMPORT	R3	K0
      0xA4120200,  //  0001  IMPORT	R4	K1
      0xB8160400,  //  0002  GETNGBL	R5	K2
      0x8C140B03,  //  0003  GETMET	R5	R5	K3
      0x581C0004,  //  0004  LDCONST	R7	K4
      0x7C140400,  //  0005  CALL	R5	2
      0x8C180B05,  //  0006  GETMET	R6	R5	K5
      0x58200006,  //  0007  LDCONST	R8	K6
      0x7C180400,  //  0008  CALL	R6	2
      0x8C1C0D05,  //  0009  GETMET	R7	R6	K5
      0x58240007,  //  000A  LDCONST	R9	K7
      0x7C1C0400,  //  000B  CALL	R7	2
      0x8C200D05,  //  000C  GETMET	R8	R6	K5
      0x58280009,  //  000D  LDCONST	R10	K9
      0x7C200400,  //  000E  CALL	R8	2
      0x90021008,  //  000F  SETMBR	R0	K8	R8
      0x1C200F0A,  //  0010  EQ	R8	R7	K10
      0x78220002,  //  0011  JMPF	R8	#0015
      0x50200000,  //  0012  LDBOOL	R8	0	0
      0x90021608,  //  0013  SETMBR	R0	K11	R8
      0x70020001,  //  0014  JMP		#0017
      0x50200200,  //  0015  LDBOOL	R8	1	0
      0x90021608,  //  0016  SETMBR	R0	K11	R8
      0x90021801,  //  0017  SETMBR	R0	K12	R1
      0x90021A02,  //  0018  SETMBR	R0	K13	R2
      0xB8220400,  //  0019  GETNGBL	R8	K2
      0x8C20110E,  //  001A  GETMET	R8	R8	K14
      0x5828000F,  //  001B  LDCONST	R10	K15
      0x842C0000,  //  001C  CLOSURE	R11	P0
      0x58300010,  //  001D  LDCONST	R12	K16
      0x7C200800,  //  001E  CALL	R8	4
      0x8C200111,  //  001F  GETMET	R8	R0	K17
      0x7C200200,  //  0020  CALL	R8	1
      0xB8220400,  //  0021  GETNGBL	R8	K2
      0x8C201112,  //  0022  GETMET	R8	R8	K18
      0x58280013,  //  0023  LDCONST	R10	K19
      0x842C0001,  //  0024  CLOSURE	R11	P1
      0x7C200600,  //  0025  CALL	R8	3
      0xB8220400,  //  0026  GETNGBL	R8	K2
      0x8C201114,  //  0027  GETMET	R8	R8	K20
      0x5C280000,  //  0028  MOVE	R10	R0
      0x7C200400,  //  0029  CALL	R8	2
      0xA0000000,  //  002A  CLOSE	R0
      0x80000000,  //  002B  RET	0
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: page_part_ctl
********************************************************************/
be_local_closure(ezie_cloud_configurator_page_part_ctl,   /* name */
  be_nested_proto(
    16,                          /* nstack */
    1,                          /* argc */
    2,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    ( &(const bvalue[39]) {     /* constants */
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
    /* K11  */  be_nested_str(tasmota),
    /* K12  */  be_nested_str(cmd),
    /* K13  */  be_nested_str(format),
    /* K14  */  be_nested_str(Publish_X20tele_X2F349454CC01D4_X2Fownership_X2Fclaim_X20_X7B_X22email_X22_X3A_X22_X25s_X22_X7D),
    /* K15  */  be_nested_str(changemqttcredentials),
    /* K16  */  be_nested_str(mqtt_username),
    /* K17  */  be_nested_str(mqtt_password),
    /* K18  */  be_nested_str(Publish_X20tele_X2F349454CC01D4_X2Fmqqt_X2Fchange_credentials_X20_X7B_X22username_X22_X3A_X22_X25s_X22_X2C_X22password_X22_X3A_X22_X25s_X22_X7D),
    /* K19  */  be_nested_str(BackLog_X20SetOption3_X201_X3B_X20SetOption103_X201_X3B_X20MqttHost_X20a3bnjilp7tzxpg_X2Dats_X2Eiot_X2Eeu_X2Dwest_X2D1_X2Eamazonaws_X2Ecom_X3B_X20MqttPort_X20443_X3B_X20MqttUser_X20_X25s_X3Fx_X2Damz_X2Dcustomauthorizer_X2Dname_X3DTasmotaAuth_X3B_X20MqttPassword_X20_X25s),
    /* K20  */  be_nested_str(resetmqtt),
    /* K21  */  be_nested_str(updatemqtt),
    /* K22  */  be_nested_str(BackLog_X20MqttHost_X20a3bnjilp7tzxpg_X2Dats_X2Eiot_X2Eeu_X2Dwest_X2D1_X2Eamazonaws_X2Ecom_X3B_X20MqttPort_X20443_X3B_X20MqttUser_X20_X25s_X3Fx_X2Damz_X2Dcustomauthorizer_X2Dname_X3DTasmotaAuth_X3B_X20MqttPassword_X20_X25s),
    /* K23  */  be_nested_str(publish_result),
    /* K24  */  be_nested_str(_X7B_X22EZIE_X22_X3A_X7B_X22cloud_settings_Updated_X22_X3A1_X7D_X7D),
    /* K25  */  be_nested_str(EZIE),
    /* K26  */  be_nested_str(redirect),
    /* K27  */  be_nested_str(_X2F_X3F),
    /* K28  */  be_nested_str(log),
    /* K29  */  be_nested_str(BRY_X3A_X20Exception_X3E_X20_X27_X25s_X27_X20_X2D_X20_X25s),
    /* K30  */  be_const_int(2),
    /* K31  */  be_nested_str(content_start),
    /* K32  */  be_nested_str(Parameter_X20error),
    /* K33  */  be_nested_str(content_send_style),
    /* K34  */  be_nested_str(content_send),
    /* K35  */  be_nested_str(_X3Cp_X20style_X3D_X27width_X3A340px_X3B_X27_X3E_X3Cb_X3EException_X3A_X3C_X2Fb_X3E_X3Cbr_X3E_X27_X25s_X27_X3Cbr_X3E_X25s_X3C_X2Fp_X3E),
    /* K36  */  be_nested_str(content_button),
    /* K37  */  be_nested_str(BUTTON_MANAGEMENT),
    /* K38  */  be_nested_str(content_stop),
    }),
    &be_const_str_page_part_ctl,
    &be_const_str_solidified,
    ( &(const binstruction[148]) {  /* code */
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
      0xA8020068,  //  000B  EXBLK	0	#0075
      0x8C180306,  //  000C  GETMET	R6	R1	K6
      0x58200007,  //  000D  LDCONST	R8	K7
      0x7C180400,  //  000E  CALL	R6	2
      0x781A005A,  //  000F  JMPF	R6	#006B
      0x8C180308,  //  0010  GETMET	R6	R1	K8
      0x58200007,  //  0011  LDCONST	R8	K7
      0x7C180400,  //  0012  CALL	R6	2
      0x1C1C0D09,  //  0013  EQ	R7	R6	K9
      0x781E000F,  //  0014  JMPF	R7	#0025
      0x8C1C0306,  //  0015  GETMET	R7	R1	K6
      0x5824000A,  //  0016  LDCONST	R9	K10
      0x7C1C0400,  //  0017  CALL	R7	2
      0x781E000A,  //  0018  JMPF	R7	#0024
      0x8C1C0308,  //  0019  GETMET	R7	R1	K8
      0x5824000A,  //  001A  LDCONST	R9	K10
      0x7C1C0400,  //  001B  CALL	R7	2
      0xB8221600,  //  001C  GETNGBL	R8	K11
      0x8C20110C,  //  001D  GETMET	R8	R8	K12
      0x8C28050D,  //  001E  GETMET	R10	R2	K13
      0x5830000E,  //  001F  LDCONST	R12	K14
      0x5C340E00,  //  0020  MOVE	R13	R7
      0x7C280600,  //  0021  CALL	R10	3
      0x502C0200,  //  0022  LDBOOL	R11	1	0
      0x7C200600,  //  0023  CALL	R8	3
      0x70020045,  //  0024  JMP		#006B
      0x1C1C0D0F,  //  0025  EQ	R7	R6	K15
      0x781E0020,  //  0026  JMPF	R7	#0048
      0x8C1C0306,  //  0027  GETMET	R7	R1	K6
      0x58240010,  //  0028  LDCONST	R9	K16
      0x7C1C0400,  //  0029  CALL	R7	2
      0x781E001B,  //  002A  JMPF	R7	#0047
      0x8C1C0306,  //  002B  GETMET	R7	R1	K6
      0x58240011,  //  002C  LDCONST	R9	K17
      0x7C1C0400,  //  002D  CALL	R7	2
      0x781E0017,  //  002E  JMPF	R7	#0047
      0x8C1C0308,  //  002F  GETMET	R7	R1	K8
      0x58240010,  //  0030  LDCONST	R9	K16
      0x7C1C0400,  //  0031  CALL	R7	2
      0x8C200308,  //  0032  GETMET	R8	R1	K8
      0x58280011,  //  0033  LDCONST	R10	K17
      0x7C200400,  //  0034  CALL	R8	2
      0xB8261600,  //  0035  GETNGBL	R9	K11
      0x8C24130C,  //  0036  GETMET	R9	R9	K12
      0x8C2C050D,  //  0037  GETMET	R11	R2	K13
      0x58340012,  //  0038  LDCONST	R13	K18
      0x5C380E00,  //  0039  MOVE	R14	R7
      0x5C3C1000,  //  003A  MOVE	R15	R8
      0x7C2C0800,  //  003B  CALL	R11	4
      0x50300200,  //  003C  LDBOOL	R12	1	0
      0x7C240600,  //  003D  CALL	R9	3
      0xB8261600,  //  003E  GETNGBL	R9	K11
      0x8C24130C,  //  003F  GETMET	R9	R9	K12
      0x8C2C050D,  //  0040  GETMET	R11	R2	K13
      0x58340013,  //  0041  LDCONST	R13	K19
      0x5C380E00,  //  0042  MOVE	R14	R7
      0x5C3C1000,  //  0043  MOVE	R15	R8
      0x7C2C0800,  //  0044  CALL	R11	4
      0x50300200,  //  0045  LDBOOL	R12	1	0
      0x7C240600,  //  0046  CALL	R9	3
      0x70020022,  //  0047  JMP		#006B
      0x1C1C0D14,  //  0048  EQ	R7	R6	K20
      0x781E0007,  //  0049  JMPF	R7	#0052
      0xB81E1600,  //  004A  GETNGBL	R7	K11
      0x8C1C0F0C,  //  004B  GETMET	R7	R7	K12
      0x8C24050D,  //  004C  GETMET	R9	R2	K13
      0x582C0014,  //  004D  LDCONST	R11	K20
      0x7C240400,  //  004E  CALL	R9	2
      0x50280200,  //  004F  LDBOOL	R10	1	0
      0x7C1C0600,  //  0050  CALL	R7	3
      0x70020018,  //  0051  JMP		#006B
      0x1C1C0D15,  //  0052  EQ	R7	R6	K21
      0x781E0016,  //  0053  JMPF	R7	#006B
      0x8C1C0306,  //  0054  GETMET	R7	R1	K6
      0x58240010,  //  0055  LDCONST	R9	K16
      0x7C1C0400,  //  0056  CALL	R7	2
      0x781E0012,  //  0057  JMPF	R7	#006B
      0x8C1C0306,  //  0058  GETMET	R7	R1	K6
      0x58240011,  //  0059  LDCONST	R9	K17
      0x7C1C0400,  //  005A  CALL	R7	2
      0x781E000E,  //  005B  JMPF	R7	#006B
      0x8C1C0308,  //  005C  GETMET	R7	R1	K8
      0x58240010,  //  005D  LDCONST	R9	K16
      0x7C1C0400,  //  005E  CALL	R7	2
      0x8C200308,  //  005F  GETMET	R8	R1	K8
      0x58280011,  //  0060  LDCONST	R10	K17
      0x7C200400,  //  0061  CALL	R8	2
      0xB8261600,  //  0062  GETNGBL	R9	K11
      0x8C24130C,  //  0063  GETMET	R9	R9	K12
      0x8C2C050D,  //  0064  GETMET	R11	R2	K13
      0x58340016,  //  0065  LDCONST	R13	K22
      0x5C380E00,  //  0066  MOVE	R14	R7
      0x5C3C1000,  //  0067  MOVE	R15	R8
      0x7C2C0800,  //  0068  CALL	R11	4
      0x50300200,  //  0069  LDBOOL	R12	1	0
      0x7C240600,  //  006A  CALL	R9	3
      0xB81A1600,  //  006B  GETNGBL	R6	K11
      0x8C180D17,  //  006C  GETMET	R6	R6	K23
      0x58200018,  //  006D  LDCONST	R8	K24
      0x58240019,  //  006E  LDCONST	R9	K25
      0x7C180600,  //  006F  CALL	R6	3
      0x8C18031A,  //  0070  GETMET	R6	R1	K26
      0x5820001B,  //  0071  LDCONST	R8	K27
      0x7C180400,  //  0072  CALL	R6	2
      0xA8040001,  //  0073  EXBLK	1	1
      0x7002001D,  //  0074  JMP		#0093
      0xAC180002,  //  0075  CATCH	R6	0	2
      0x7002001A,  //  0076  JMP		#0092
      0xB8221600,  //  0077  GETNGBL	R8	K11
      0x8C20111C,  //  0078  GETMET	R8	R8	K28
      0x8C28050D,  //  0079  GETMET	R10	R2	K13
      0x5830001D,  //  007A  LDCONST	R12	K29
      0x5C340C00,  //  007B  MOVE	R13	R6
      0x5C380E00,  //  007C  MOVE	R14	R7
      0x7C280800,  //  007D  CALL	R10	4
      0x582C001E,  //  007E  LDCONST	R11	K30
      0x7C200600,  //  007F  CALL	R8	3
      0x8C20031F,  //  0080  GETMET	R8	R1	K31
      0x58280020,  //  0081  LDCONST	R10	K32
      0x7C200400,  //  0082  CALL	R8	2
      0x8C200321,  //  0083  GETMET	R8	R1	K33
      0x7C200200,  //  0084  CALL	R8	1
      0x8C200322,  //  0085  GETMET	R8	R1	K34
      0x8C28050D,  //  0086  GETMET	R10	R2	K13
      0x58300023,  //  0087  LDCONST	R12	K35
      0x5C340C00,  //  0088  MOVE	R13	R6
      0x5C380E00,  //  0089  MOVE	R14	R7
      0x7C280800,  //  008A  CALL	R10	4
      0x7C200400,  //  008B  CALL	R8	2
      0x8C200324,  //  008C  GETMET	R8	R1	K36
      0x88280325,  //  008D  GETMBR	R10	R1	K37
      0x7C200400,  //  008E  CALL	R8	2
      0x8C200326,  //  008F  GETMET	R8	R1	K38
      0x7C200200,  //  0090  CALL	R8	1
      0x70020000,  //  0091  JMP		#0093
      0xB0080000,  //  0092  RAISE	2	R0	R0
      0x80000000,  //  0093  RET	0
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: get_mqtt_username
********************************************************************/
be_local_closure(ezie_cloud_configurator_get_mqtt_username,   /* name */
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
    /* K0   */  be_nested_str(mqtt_username),
    }),
    &be_const_str_get_mqtt_username,
    &be_const_str_solidified,
    ( &(const binstruction[ 2]) {  /* code */
      0x88040100,  //  0000  GETMBR	R1	R0	K0
      0x80040200,  //  0001  RET	1	R1
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified class: ezie_cloud_configurator
********************************************************************/
extern const bclass be_class_Driver;
be_local_class(ezie_cloud_configurator,
    5,
    &be_class_Driver,
    be_nested_map(18,
    ( (struct bmapnode*) &(const bmapnode[]) {
        { be_const_key(get_mqtt_username, -1), be_const_closure(ezie_cloud_configurator_get_mqtt_username_closure) },
        { be_const_key(web_add_main_button, -1), be_const_closure(ezie_cloud_configurator_web_add_main_button_closure) },
        { be_const_key(resetmqtt, -1), be_const_closure(ezie_cloud_configurator_resetmqtt_closure) },
        { be_const_key(get_owner_email, 1), be_const_closure(ezie_cloud_configurator_get_owner_email_closure) },
        { be_const_key(web_add_handler, 6), be_const_closure(ezie_cloud_configurator_web_add_handler_closure) },
        { be_const_key(show_mqtt_user_pass, -1), be_const_closure(ezie_cloud_configurator_show_mqtt_user_pass_closure) },
        { be_const_key(mqtt_username, 3), be_const_var(1) },
        { be_const_key(show_mqtt_settings, 10), be_const_closure(ezie_cloud_configurator_show_mqtt_settings_closure) },
        { be_const_key(is_mqtt_connected, 9), be_const_var(3) },
        { be_const_key(get_mqtt_password, -1), be_const_closure(ezie_cloud_configurator_get_mqtt_password_closure) },
        { be_const_key(show_info, 13), be_const_closure(ezie_cloud_configurator_show_info_closure) },
        { be_const_key(mqtt_password, -1), be_const_var(2) },
        { be_const_key(show_owner_settings, -1), be_const_closure(ezie_cloud_configurator_show_owner_settings_closure) },
        { be_const_key(owner_email, -1), be_const_var(0) },
        { be_const_key(client_id, 4), be_const_var(4) },
        { be_const_key(init, -1), be_const_closure(ezie_cloud_configurator_init_closure) },
        { be_const_key(page_part_ctl, -1), be_const_closure(ezie_cloud_configurator_page_part_ctl_closure) },
        { be_const_key(page_part_mgr, 0), be_const_closure(ezie_cloud_configurator_page_part_mgr_closure) },
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
