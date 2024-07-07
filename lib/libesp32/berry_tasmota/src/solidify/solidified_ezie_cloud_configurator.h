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
    ( &(const bvalue[14]) {     /* constants */
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
    /* K12  */  be_nested_str(BUTTON_MAIN),
    /* K13  */  be_nested_str(content_stop),
    }),
    &be_const_str_page_part_mgr,
    &be_const_str_solidified,
    ( &(const binstruction[32]) {  /* code */
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
      0x8C0C030A,  //  001A  GETMET	R3	R1	K10
      0x8814030C,  //  001B  GETMBR	R5	R1	K12
      0x7C0C0400,  //  001C  CALL	R3	2
      0x8C0C030D,  //  001D  GETMET	R3	R1	K13
      0x7C0C0200,  //  001E  CALL	R3	1
      0x80000000,  //  001F  RET	0
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
    ( &(const bvalue[43]) {     /* constants */
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
    /* K16  */  be_nested_str(Publish_X20tele_X2F349454CC01D4_X2Fownership_X2Fclaim_X20_X7B_X22email_X22_X3A_X22_X25s_X22_X7D),
    /* K17  */  be_nested_str(changemqttcredentials),
    /* K18  */  be_nested_str(mqtt_username),
    /* K19  */  be_nested_str(mqtt_password),
    /* K20  */  be_nested_str(Publish_X20tele_X2F349454CC01D4_X2Fmqqt_X2Fchange_credentials_X20_X7B_X22username_X22_X3A_X22_X25s_X22_X2C_X22password_X22_X3A_X22_X25s_X22_X7D),
    /* K21  */  be_nested_str(BackLog_X20SetOption3_X201_X3B_X20SetOption103_X201_X3B_X20MqttHost_X20_X25s_X3B_X20MqttPort_X20_X25s_X3B_X20MqttUser_X20_X25s_X3Fx_X2Damz_X2Dcustomauthorizer_X2Dname_X3DTasmotaAuth_X3B_X20MqttPassword_X20_X25s),
    /* K22  */  be_nested_str(mqtt_host),
    /* K23  */  be_nested_str(mqtt_port),
    /* K24  */  be_nested_str(resetmqtt),
    /* K25  */  be_nested_str(updatemqtt),
    /* K26  */  be_nested_str(BackLog_X20MqttHost_X20_X25s_X3B_X20MqttPort_X20_X25s_X3B_X20MqttUser_X20_X25s_X3Fx_X2Damz_X2Dcustomauthorizer_X2Dname_X3DTasmotaAuth_X3B_X20MqttPassword_X20_X25s),
    /* K27  */  be_nested_str(publish_result),
    /* K28  */  be_nested_str(_X7B_X22EZIE_X22_X3A_X7B_X22cloud_settings_Updated_X22_X3A1_X7D_X7D),
    /* K29  */  be_nested_str(EZIE),
    /* K30  */  be_nested_str(redirect),
    /* K31  */  be_nested_str(_X2F_X3F),
    /* K32  */  be_nested_str(log),
    /* K33  */  be_nested_str(BRY_X3A_X20Exception_X3E_X20_X27_X25s_X27_X20_X2D_X20_X25s),
    /* K34  */  be_const_int(2),
    /* K35  */  be_nested_str(content_start),
    /* K36  */  be_nested_str(Parameter_X20error),
    /* K37  */  be_nested_str(content_send_style),
    /* K38  */  be_nested_str(content_send),
    /* K39  */  be_nested_str(_X3Cp_X20style_X3D_X27width_X3A340px_X3B_X27_X3E_X3Cb_X3EException_X3A_X3C_X2Fb_X3E_X3Cbr_X3E_X27_X25s_X27_X3Cbr_X3E_X25s_X3C_X2Fp_X3E),
    /* K40  */  be_nested_str(content_button),
    /* K41  */  be_nested_str(BUTTON_MANAGEMENT),
    /* K42  */  be_nested_str(content_stop),
    }),
    &be_const_str_page_part_ctl,
    &be_const_str_solidified,
    ( &(const binstruction[157]) {  /* code */
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
      0xA8020071,  //  000B  EXBLK	0	#007E
      0x8C180306,  //  000C  GETMET	R6	R1	K6
      0x58200007,  //  000D  LDCONST	R8	K7
      0x7C180400,  //  000E  CALL	R6	2
      0x781A0063,  //  000F  JMPF	R6	#0074
      0x8C180308,  //  0010  GETMET	R6	R1	K8
      0x58200007,  //  0011  LDCONST	R8	K7
      0x7C180400,  //  0012  CALL	R6	2
      0x1C1C0D09,  //  0013  EQ	R7	R6	K9
      0x781E0014,  //  0014  JMPF	R7	#002A
      0x8C1C0306,  //  0015  GETMET	R7	R1	K6
      0x5824000A,  //  0016  LDCONST	R9	K10
      0x7C1C0400,  //  0017  CALL	R7	2
      0x781E000F,  //  0018  JMPF	R7	#0029
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
      0x8830010B,  //  0025  GETMBR	R12	R0	K11
      0x7C240600,  //  0026  CALL	R9	3
      0x50280200,  //  0027  LDBOOL	R10	1	0
      0x7C1C0600,  //  0028  CALL	R7	3
      0x70020049,  //  0029  JMP		#0074
      0x1C1C0D11,  //  002A  EQ	R7	R6	K17
      0x781E0022,  //  002B  JMPF	R7	#004F
      0x8C1C0306,  //  002C  GETMET	R7	R1	K6
      0x58240012,  //  002D  LDCONST	R9	K18
      0x7C1C0400,  //  002E  CALL	R7	2
      0x781E001D,  //  002F  JMPF	R7	#004E
      0x8C1C0306,  //  0030  GETMET	R7	R1	K6
      0x58240013,  //  0031  LDCONST	R9	K19
      0x7C1C0400,  //  0032  CALL	R7	2
      0x781E0019,  //  0033  JMPF	R7	#004E
      0x8C1C0308,  //  0034  GETMET	R7	R1	K8
      0x58240012,  //  0035  LDCONST	R9	K18
      0x7C1C0400,  //  0036  CALL	R7	2
      0x8C200308,  //  0037  GETMET	R8	R1	K8
      0x58280013,  //  0038  LDCONST	R10	K19
      0x7C200400,  //  0039  CALL	R8	2
      0xB8261A00,  //  003A  GETNGBL	R9	K13
      0x8C24130E,  //  003B  GETMET	R9	R9	K14
      0x8C2C050F,  //  003C  GETMET	R11	R2	K15
      0x58340014,  //  003D  LDCONST	R13	K20
      0x5C380E00,  //  003E  MOVE	R14	R7
      0x5C3C1000,  //  003F  MOVE	R15	R8
      0x7C2C0800,  //  0040  CALL	R11	4
      0x50300200,  //  0041  LDBOOL	R12	1	0
      0x7C240600,  //  0042  CALL	R9	3
      0xB8261A00,  //  0043  GETNGBL	R9	K13
      0x8C24130E,  //  0044  GETMET	R9	R9	K14
      0x8C2C050F,  //  0045  GETMET	R11	R2	K15
      0x58340015,  //  0046  LDCONST	R13	K21
      0x88380116,  //  0047  GETMBR	R14	R0	K22
      0x883C0117,  //  0048  GETMBR	R15	R0	K23
      0x5C400E00,  //  0049  MOVE	R16	R7
      0x5C441000,  //  004A  MOVE	R17	R8
      0x7C2C0C00,  //  004B  CALL	R11	6
      0x50300200,  //  004C  LDBOOL	R12	1	0
      0x7C240600,  //  004D  CALL	R9	3
      0x70020024,  //  004E  JMP		#0074
      0x1C1C0D18,  //  004F  EQ	R7	R6	K24
      0x781E0007,  //  0050  JMPF	R7	#0059
      0xB81E1A00,  //  0051  GETNGBL	R7	K13
      0x8C1C0F0E,  //  0052  GETMET	R7	R7	K14
      0x8C24050F,  //  0053  GETMET	R9	R2	K15
      0x582C0018,  //  0054  LDCONST	R11	K24
      0x7C240400,  //  0055  CALL	R9	2
      0x50280200,  //  0056  LDBOOL	R10	1	0
      0x7C1C0600,  //  0057  CALL	R7	3
      0x7002001A,  //  0058  JMP		#0074
      0x1C1C0D19,  //  0059  EQ	R7	R6	K25
      0x781E0018,  //  005A  JMPF	R7	#0074
      0x8C1C0306,  //  005B  GETMET	R7	R1	K6
      0x58240012,  //  005C  LDCONST	R9	K18
      0x7C1C0400,  //  005D  CALL	R7	2
      0x781E0014,  //  005E  JMPF	R7	#0074
      0x8C1C0306,  //  005F  GETMET	R7	R1	K6
      0x58240013,  //  0060  LDCONST	R9	K19
      0x7C1C0400,  //  0061  CALL	R7	2
      0x781E0010,  //  0062  JMPF	R7	#0074
      0x8C1C0308,  //  0063  GETMET	R7	R1	K8
      0x58240012,  //  0064  LDCONST	R9	K18
      0x7C1C0400,  //  0065  CALL	R7	2
      0x8C200308,  //  0066  GETMET	R8	R1	K8
      0x58280013,  //  0067  LDCONST	R10	K19
      0x7C200400,  //  0068  CALL	R8	2
      0xB8261A00,  //  0069  GETNGBL	R9	K13
      0x8C24130E,  //  006A  GETMET	R9	R9	K14
      0x8C2C050F,  //  006B  GETMET	R11	R2	K15
      0x5834001A,  //  006C  LDCONST	R13	K26
      0x88380116,  //  006D  GETMBR	R14	R0	K22
      0x883C0117,  //  006E  GETMBR	R15	R0	K23
      0x5C400E00,  //  006F  MOVE	R16	R7
      0x5C441000,  //  0070  MOVE	R17	R8
      0x7C2C0C00,  //  0071  CALL	R11	6
      0x50300200,  //  0072  LDBOOL	R12	1	0
      0x7C240600,  //  0073  CALL	R9	3
      0xB81A1A00,  //  0074  GETNGBL	R6	K13
      0x8C180D1B,  //  0075  GETMET	R6	R6	K27
      0x5820001C,  //  0076  LDCONST	R8	K28
      0x5824001D,  //  0077  LDCONST	R9	K29
      0x7C180600,  //  0078  CALL	R6	3
      0x8C18031E,  //  0079  GETMET	R6	R1	K30
      0x5820001F,  //  007A  LDCONST	R8	K31
      0x7C180400,  //  007B  CALL	R6	2
      0xA8040001,  //  007C  EXBLK	1	1
      0x7002001D,  //  007D  JMP		#009C
      0xAC180002,  //  007E  CATCH	R6	0	2
      0x7002001A,  //  007F  JMP		#009B
      0xB8221A00,  //  0080  GETNGBL	R8	K13
      0x8C201120,  //  0081  GETMET	R8	R8	K32
      0x8C28050F,  //  0082  GETMET	R10	R2	K15
      0x58300021,  //  0083  LDCONST	R12	K33
      0x5C340C00,  //  0084  MOVE	R13	R6
      0x5C380E00,  //  0085  MOVE	R14	R7
      0x7C280800,  //  0086  CALL	R10	4
      0x582C0022,  //  0087  LDCONST	R11	K34
      0x7C200600,  //  0088  CALL	R8	3
      0x8C200323,  //  0089  GETMET	R8	R1	K35
      0x58280024,  //  008A  LDCONST	R10	K36
      0x7C200400,  //  008B  CALL	R8	2
      0x8C200325,  //  008C  GETMET	R8	R1	K37
      0x7C200200,  //  008D  CALL	R8	1
      0x8C200326,  //  008E  GETMET	R8	R1	K38
      0x8C28050F,  //  008F  GETMET	R10	R2	K15
      0x58300027,  //  0090  LDCONST	R12	K39
      0x5C340C00,  //  0091  MOVE	R13	R6
      0x5C380E00,  //  0092  MOVE	R14	R7
      0x7C280800,  //  0093  CALL	R10	4
      0x7C200400,  //  0094  CALL	R8	2
      0x8C200328,  //  0095  GETMET	R8	R1	K40
      0x88280329,  //  0096  GETMBR	R10	R1	K41
      0x7C200400,  //  0097  CALL	R8	2
      0x8C20032A,  //  0098  GETMET	R8	R1	K42
      0x7C200200,  //  0099  CALL	R8	1
      0x70020000,  //  009A  JMP		#009C
      0xB0080000,  //  009B  RAISE	2	R0	R0
      0x80000000,  //  009C  RET	0
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
** Solidified function: init
********************************************************************/
be_local_closure(ezie_cloud_configurator_init,   /* name */
  be_nested_proto(
    12,                          /* nstack */
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
    ( &(const bvalue[29]) {     /* constants */
    /* K0   */  be_nested_str(mqtt),
    /* K1   */  be_nested_str(json),
    /* K2   */  be_nested_str(persist),
    /* K3   */  be_nested_str(tasmota),
    /* K4   */  be_nested_str(cmd),
    /* K5   */  be_nested_str(Status_X206),
    /* K6   */  be_nested_str(find),
    /* K7   */  be_nested_str(StatusMQT),
    /* K8   */  be_nested_str(MqttCount),
    /* K9   */  be_nested_str(client_id),
    /* K10  */  be_nested_str(MqttClient),
    /* K11  */  be_const_int(0),
    /* K12  */  be_nested_str(is_mqtt_connected),
    /* K13  */  be_nested_str(has),
    /* K14  */  be_nested_str(mqtt_host),
    /* K15  */  be_nested_str(a3bnjilp7tzxpg_X2Dats_X2Eiot_X2Eeu_X2Dwest_X2D1_X2Eamazonaws_X2Ecom),
    /* K16  */  be_nested_str(mqtt_port),
    /* K17  */  be_nested_str(443),
    /* K18  */  be_nested_str(owner_email),
    /* K19  */  be_nested_str(kisusenterprises_X40gmail_X2Ecom),
    /* K20  */  be_nested_str(authorizer_name),
    /* K21  */  be_nested_str(TasmotaAuth),
    /* K22  */  be_nested_str(add_rule),
    /* K23  */  be_nested_str(Mqtt_X23Connected),
    /* K24  */  be_nested_str(cloud_settings_enabled),
    /* K25  */  be_nested_str(web_add_handler),
    /* K26  */  be_nested_str(add_cmd),
    /* K27  */  be_nested_str(resetmqtt),
    /* K28  */  be_nested_str(add_driver),
    }),
    &be_const_str_init,
    &be_const_str_solidified,
    ( &(const binstruction[75]) {  /* code */
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
      0x5824000A,  //  000E  LDCONST	R9	K10
      0x7C1C0400,  //  000F  CALL	R7	2
      0x90021207,  //  0010  SETMBR	R0	K9	R7
      0x1C1C0D0B,  //  0011  EQ	R7	R6	K11
      0x781E0002,  //  0012  JMPF	R7	#0016
      0x501C0000,  //  0013  LDBOOL	R7	0	0
      0x90021807,  //  0014  SETMBR	R0	K12	R7
      0x70020001,  //  0015  JMP		#0018
      0x501C0200,  //  0016  LDBOOL	R7	1	0
      0x90021807,  //  0017  SETMBR	R0	K12	R7
      0x8C1C070D,  //  0018  GETMET	R7	R3	K13
      0x5824000E,  //  0019  LDCONST	R9	K14
      0x7C1C0400,  //  001A  CALL	R7	2
      0x781E0002,  //  001B  JMPF	R7	#001F
      0x881C070E,  //  001C  GETMBR	R7	R3	K14
      0x90021C07,  //  001D  SETMBR	R0	K14	R7
      0x70020000,  //  001E  JMP		#0020
      0x90021D0F,  //  001F  SETMBR	R0	K14	K15
      0x8C1C070D,  //  0020  GETMET	R7	R3	K13
      0x58240010,  //  0021  LDCONST	R9	K16
      0x7C1C0400,  //  0022  CALL	R7	2
      0x781E0002,  //  0023  JMPF	R7	#0027
      0x881C0710,  //  0024  GETMBR	R7	R3	K16
      0x90022007,  //  0025  SETMBR	R0	K16	R7
      0x70020000,  //  0026  JMP		#0028
      0x90022111,  //  0027  SETMBR	R0	K16	K17
      0x8C1C070D,  //  0028  GETMET	R7	R3	K13
      0x58240012,  //  0029  LDCONST	R9	K18
      0x7C1C0400,  //  002A  CALL	R7	2
      0x781E0002,  //  002B  JMPF	R7	#002F
      0x881C0712,  //  002C  GETMBR	R7	R3	K18
      0x90022407,  //  002D  SETMBR	R0	K18	R7
      0x70020000,  //  002E  JMP		#0030
      0x90022513,  //  002F  SETMBR	R0	K18	K19
      0x8C1C070D,  //  0030  GETMET	R7	R3	K13
      0x58240014,  //  0031  LDCONST	R9	K20
      0x7C1C0400,  //  0032  CALL	R7	2
      0x781E0002,  //  0033  JMPF	R7	#0037
      0x881C0714,  //  0034  GETMBR	R7	R3	K20
      0x90022807,  //  0035  SETMBR	R0	K20	R7
      0x70020000,  //  0036  JMP		#0038
      0x90022915,  //  0037  SETMBR	R0	K20	K21
      0xB81E0600,  //  0038  GETNGBL	R7	K3
      0x8C1C0F16,  //  0039  GETMET	R7	R7	K22
      0x58240017,  //  003A  LDCONST	R9	K23
      0x84280000,  //  003B  CLOSURE	R10	P0
      0x582C0018,  //  003C  LDCONST	R11	K24
      0x7C1C0800,  //  003D  CALL	R7	4
      0x8C1C0119,  //  003E  GETMET	R7	R0	K25
      0x7C1C0200,  //  003F  CALL	R7	1
      0xB81E0600,  //  0040  GETNGBL	R7	K3
      0x8C1C0F1A,  //  0041  GETMET	R7	R7	K26
      0x5824001B,  //  0042  LDCONST	R9	K27
      0x84280001,  //  0043  CLOSURE	R10	P1
      0x7C1C0600,  //  0044  CALL	R7	3
      0xB81E0600,  //  0045  GETNGBL	R7	K3
      0x8C1C0F1C,  //  0046  GETMET	R7	R7	K28
      0x5C240000,  //  0047  MOVE	R9	R0
      0x7C1C0400,  //  0048  CALL	R7	2
      0xA0000000,  //  0049  CLOSE	R0
      0x80000000,  //  004A  RET	0
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
    ( &(const bvalue[32]) {     /* constants */
    /* K0   */  be_nested_str(string),
    /* K1   */  be_nested_str(json),
    /* K2   */  be_nested_str(persist),
    /* K3   */  be_nested_str(format),
    /* K4   */  be_nested_str(https_X3A_X2F_X2Fwqxpc1agpf_X2Eexecute_X2Dapi_X2Eeu_X2Dwest_X2D1_X2Eamazonaws_X2Ecom_X2Flive_X3Faction_X3Dreset_mqtt_X26device_id_X3D_X25s),
    /* K5   */  be_nested_str(client_id),
    /* K6   */  be_nested_str(_X25s_X26_X25s),
    /* K7   */  be_nested_str(webclient),
    /* K8   */  be_nested_str(set_follow_redirects),
    /* K9   */  be_nested_str(set_auth),
    /* K10  */  be_nested_str(3RDPwETN),
    /* K11  */  be_nested_str(TzVUaWhQTW01WWpw),
    /* K12  */  be_nested_str(begin),
    /* K13  */  be_nested_str(POST),
    /* K14  */  be_nested_str(),
    /* K15  */  be_nested_str(Location_X3A),
    /* K16  */  be_nested_str(get_header),
    /* K17  */  be_nested_str(Location),
    /* K18  */  be_nested_str(load),
    /* K19  */  be_nested_str(get_string),
    /* K20  */  be_nested_str(find),
    /* K21  */  be_nested_str(body),
    /* K22  */  be_nested_str(new_username),
    /* K23  */  be_nested_str(new_password),
    /* K24  */  be_nested_str(authorizer_name),
    /* K25  */  be_nested_str(mqtt_host),
    /* K26  */  be_nested_str(mqtt_port),
    /* K27  */  be_nested_str(save),
    /* K28  */  be_nested_str(tasmota),
    /* K29  */  be_nested_str(cmd),
    /* K30  */  be_nested_str(BackLog_X20MqttClient_X20_X25_X2512X_X3B_X20Topic_X20_X25_X2512X_X3B_X20FullTopic_X20_X25_X25prefix_X25_X25_X2F_X25_X25topic_X25_X25_X2F_X3B_X20SetOption3_X201_X3B_X20SetOption103_X201_X3B_X20MqttHost_X20_X25s_X3B_X20MqttPort_X20_X25s_X3B_X20MqttUser_X20_X25s_X3Fx_X2Damz_X2Dcustomauthorizer_X2Dname_X3D_X25s_X3B_X20MqttPassword_X20_X25s),
    /* K31  */  be_nested_str(close),
    }),
    &be_const_str_resetmqtt,
    &be_const_str_solidified,
    ( &(const binstruction[100]) {  /* code */
      0xA4160000,  //  0000  IMPORT	R5	K0
      0xA41A0200,  //  0001  IMPORT	R6	K1
      0xA41E0400,  //  0002  IMPORT	R7	K2
      0x8C200B03,  //  0003  GETMET	R8	R5	K3
      0x58280004,  //  0004  LDCONST	R10	K4
      0x882C0105,  //  0005  GETMBR	R11	R0	K5
      0x7C200600,  //  0006  CALL	R8	3
      0x4C240000,  //  0007  LDNIL	R9
      0x20240609,  //  0008  NE	R9	R3	R9
      0x78260008,  //  0009  JMPF	R9	#0013
      0x8C240B03,  //  000A  GETMET	R9	R5	K3
      0x582C0006,  //  000B  LDCONST	R11	K6
      0x5C301000,  //  000C  MOVE	R12	R8
      0x5C340600,  //  000D  MOVE	R13	R3
      0x7C240800,  //  000E  CALL	R9	4
      0x5C201200,  //  000F  MOVE	R8	R9
      0x60240001,  //  0010  GETGBL	R9	G1
      0x5C281000,  //  0011  MOVE	R10	R8
      0x7C240200,  //  0012  CALL	R9	1
      0xB8260E00,  //  0013  GETNGBL	R9	K7
      0x7C240000,  //  0014  CALL	R9	0
      0x8C281308,  //  0015  GETMET	R10	R9	K8
      0x50300000,  //  0016  LDBOOL	R12	0	0
      0x7C280400,  //  0017  CALL	R10	2
      0x8C281309,  //  0018  GETMET	R10	R9	K9
      0x5830000A,  //  0019  LDCONST	R12	K10
      0x5834000B,  //  001A  LDCONST	R13	K11
      0x7C280600,  //  001B  CALL	R10	3
      0x8C28130C,  //  001C  GETMET	R10	R9	K12
      0x5C301000,  //  001D  MOVE	R12	R8
      0x7C280400,  //  001E  CALL	R10	2
      0x8C28130D,  //  001F  GETMET	R10	R9	K13
      0x5830000E,  //  0020  LDCONST	R12	K14
      0x7C280400,  //  0021  CALL	R10	2
      0x542E012C,  //  0022  LDINT	R11	301
      0x1C2C140B,  //  0023  EQ	R11	R10	R11
      0x742E0002,  //  0024  JMPT	R11	#0028
      0x542E012D,  //  0025  LDINT	R11	302
      0x1C2C140B,  //  0026  EQ	R11	R10	R11
      0x782E0006,  //  0027  JMPF	R11	#002F
      0x602C0001,  //  0028  GETGBL	R11	G1
      0x5830000F,  //  0029  LDCONST	R12	K15
      0x8C341310,  //  002A  GETMET	R13	R9	K16
      0x583C0011,  //  002B  LDCONST	R15	K17
      0x7C340400,  //  002C  CALL	R13	2
      0x7C2C0400,  //  002D  CALL	R11	2
      0x70020031,  //  002E  JMP		#0061
      0x542E00C7,  //  002F  LDINT	R11	200
      0x1C2C140B,  //  0030  EQ	R11	R10	R11
      0x782E002E,  //  0031  JMPF	R11	#0061
      0x8C2C0D12,  //  0032  GETMET	R11	R6	K18
      0x8C341313,  //  0033  GETMET	R13	R9	K19
      0x7C340200,  //  0034  CALL	R13	1
      0x7C2C0400,  //  0035  CALL	R11	2
      0x8C300D12,  //  0036  GETMET	R12	R6	K18
      0x8C381714,  //  0037  GETMET	R14	R11	K20
      0x58400015,  //  0038  LDCONST	R16	K21
      0x7C380400,  //  0039  CALL	R14	2
      0x7C300400,  //  003A  CALL	R12	2
      0x8C341914,  //  003B  GETMET	R13	R12	K20
      0x583C0016,  //  003C  LDCONST	R15	K22
      0x7C340400,  //  003D  CALL	R13	2
      0x8C381914,  //  003E  GETMET	R14	R12	K20
      0x58400017,  //  003F  LDCONST	R16	K23
      0x7C380400,  //  0040  CALL	R14	2
      0x8C3C1914,  //  0041  GETMET	R15	R12	K20
      0x58440018,  //  0042  LDCONST	R17	K24
      0x7C3C0400,  //  0043  CALL	R15	2
      0x9002300F,  //  0044  SETMBR	R0	K24	R15
      0x8C3C1914,  //  0045  GETMET	R15	R12	K20
      0x58440019,  //  0046  LDCONST	R17	K25
      0x7C3C0400,  //  0047  CALL	R15	2
      0x9002320F,  //  0048  SETMBR	R0	K25	R15
      0x8C3C1914,  //  0049  GETMET	R15	R12	K20
      0x5844001A,  //  004A  LDCONST	R17	K26
      0x7C3C0400,  //  004B  CALL	R15	2
      0x9002340F,  //  004C  SETMBR	R0	K26	R15
      0x883C0118,  //  004D  GETMBR	R15	R0	K24
      0x901E300F,  //  004E  SETMBR	R7	K24	R15
      0x883C0119,  //  004F  GETMBR	R15	R0	K25
      0x901E320F,  //  0050  SETMBR	R7	K25	R15
      0x883C011A,  //  0051  GETMBR	R15	R0	K26
      0x901E340F,  //  0052  SETMBR	R7	K26	R15
      0x8C3C0F1B,  //  0053  GETMET	R15	R7	K27
      0x7C3C0200,  //  0054  CALL	R15	1
      0xB83E3800,  //  0055  GETNGBL	R15	K28
      0x8C3C1F1D,  //  0056  GETMET	R15	R15	K29
      0x8C440B03,  //  0057  GETMET	R17	R5	K3
      0x584C001E,  //  0058  LDCONST	R19	K30
      0x88500119,  //  0059  GETMBR	R20	R0	K25
      0x8854011A,  //  005A  GETMBR	R21	R0	K26
      0x5C581A00,  //  005B  MOVE	R22	R13
      0x885C0118,  //  005C  GETMBR	R23	R0	K24
      0x5C601C00,  //  005D  MOVE	R24	R14
      0x7C440E00,  //  005E  CALL	R17	7
      0x50480200,  //  005F  LDBOOL	R18	1	0
      0x7C3C0600,  //  0060  CALL	R15	3
      0x8C2C131F,  //  0061  GETMET	R11	R9	K31
      0x7C2C0200,  //  0062  CALL	R11	1
      0x80000000,  //  0063  RET	0
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
    be_nested_map(17,
    ( (struct bmapnode*) &(const bmapnode[]) {
        { be_const_key(resetmqtt, 14), be_const_closure(ezie_cloud_configurator_resetmqtt_closure) },
        { be_const_key(get_owner_email, 5), be_const_closure(ezie_cloud_configurator_get_owner_email_closure) },
        { be_const_key(init, -1), be_const_closure(ezie_cloud_configurator_init_closure) },
        { be_const_key(show_info, -1), be_const_closure(ezie_cloud_configurator_show_info_closure) },
        { be_const_key(web_add_handler, -1), be_const_closure(ezie_cloud_configurator_web_add_handler_closure) },
        { be_const_key(authorizer_name, -1), be_const_var(3) },
        { be_const_key(mqtt_host, -1), be_const_var(1) },
        { be_const_key(show_mqtt_settings, -1), be_const_closure(ezie_cloud_configurator_show_mqtt_settings_closure) },
        { be_const_key(web_add_main_button, -1), be_const_closure(ezie_cloud_configurator_web_add_main_button_closure) },
        { be_const_key(page_part_ctl, 0), be_const_closure(ezie_cloud_configurator_page_part_ctl_closure) },
        { be_const_key(is_mqtt_connected, -1), be_const_var(4) },
        { be_const_key(owner_email, -1), be_const_var(0) },
        { be_const_key(show_mqtt_user_pass, -1), be_const_closure(ezie_cloud_configurator_show_mqtt_user_pass_closure) },
        { be_const_key(client_id, 8), be_const_var(5) },
        { be_const_key(show_owner_settings, 16), be_const_closure(ezie_cloud_configurator_show_owner_settings_closure) },
        { be_const_key(page_part_mgr, 2), be_const_closure(ezie_cloud_configurator_page_part_mgr_closure) },
        { be_const_key(mqtt_port, -1), be_const_var(2) },
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
