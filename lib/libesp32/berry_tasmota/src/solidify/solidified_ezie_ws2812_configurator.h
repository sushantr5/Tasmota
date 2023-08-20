/* Solidification of ezie_ws2812_configurator.h */
/********************************************************************\
* Generated code, don't edit                                         *
\********************************************************************/
#include "be_constobj.h"

extern const bclass be_class_ezie_ws2812_configurator;

/********************************************************************
** Solidified function: show_timeout_settings
********************************************************************/
be_local_closure(ezie_ws2812_configurator_show_timeout_settings,   /* name */
  be_nested_proto(
    10,                          /* nstack */
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
    /* K3   */  be_nested_str(_X3Cfieldset_X3E_X3Clegend_X3E_X3Cb_X3E_X26nbsp_X3BEZIE_X20Lights_X20Timeout_X26nbsp_X3B_X3C_X2Fb_X3E_X3C_X2Flegend_X3E_X3Cp_X3E_X3C_X2Fp_X3E),
    /* K4   */  be_nested_str(_X3Cp_X3ELights_X20Timeout_X20_X28seconds_X29_X3A_X3C_X2Fp_X3E),
    /* K5   */  be_nested_str(format),
    /* K6   */  be_nested_str(_X3Cinput_X20type_X3D_X27range_X27_X20name_X3D_X27lights_timeout_X27_X20min_X3D_X270_X27_X20max_X3D_X27600_X27_X20step_X3D_X275_X27_X20value_X3D_X27_X25i_X27oninput_X3D_X27this_X2EnextElementSibling_X2Evalue_X20_X3D_X20this_X2Evalue_X27_X3E_X3Coutput_X3E_X25i_X3C_X2Foutput_X3E),
    /* K7   */  be_nested_str(lights_timeout),
    /* K8   */  be_nested_str(_X3Cp_X3EDimmed_X20Lights_X20Factor_X20_X28Percentage_X29_X3A_X3C_X2Fp_X3E),
    /* K9   */  be_nested_str(_X3Cinput_X20type_X3D_X27range_X27_X20name_X3D_X27lights_dim_factor_X27_X20min_X3D_X270_X27_X20max_X3D_X27100_X27_X20step_X3D_X2710_X27_X20value_X3D_X27_X25i_X27oninput_X3D_X27this_X2EnextElementSibling_X2Evalue_X20_X3D_X20this_X2Evalue_X27_X3E_X3Coutput_X3E_X25i_X3C_X2Foutput_X3E),
    /* K10  */  be_nested_str(lights_dim_factor),
    /* K11  */  be_nested_str(_X3Cp_X3E_X3C_X2Fp_X3E_X3C_X2Ffieldset_X3E_X3Cp_X3E_X3C_X2Fp_X3E),
    }),
    &be_const_str_show_timeout_settings,
    &be_const_str_solidified,
    ( &(const binstruction[29]) {  /* code */
      0xA4060000,  //  0000  IMPORT	R1	K0
      0xA40A0200,  //  0001  IMPORT	R2	K1
      0x8C0C0302,  //  0002  GETMET	R3	R1	K2
      0x58140003,  //  0003  LDCONST	R5	K3
      0x7C0C0400,  //  0004  CALL	R3	2
      0x8C0C0302,  //  0005  GETMET	R3	R1	K2
      0x58140004,  //  0006  LDCONST	R5	K4
      0x7C0C0400,  //  0007  CALL	R3	2
      0x8C0C0302,  //  0008  GETMET	R3	R1	K2
      0x8C140505,  //  0009  GETMET	R5	R2	K5
      0x581C0006,  //  000A  LDCONST	R7	K6
      0x88200107,  //  000B  GETMBR	R8	R0	K7
      0x88240107,  //  000C  GETMBR	R9	R0	K7
      0x7C140800,  //  000D  CALL	R5	4
      0x7C0C0400,  //  000E  CALL	R3	2
      0x8C0C0302,  //  000F  GETMET	R3	R1	K2
      0x58140008,  //  0010  LDCONST	R5	K8
      0x7C0C0400,  //  0011  CALL	R3	2
      0x8C0C0302,  //  0012  GETMET	R3	R1	K2
      0x8C140505,  //  0013  GETMET	R5	R2	K5
      0x581C0009,  //  0014  LDCONST	R7	K9
      0x8820010A,  //  0015  GETMBR	R8	R0	K10
      0x8824010A,  //  0016  GETMBR	R9	R0	K10
      0x7C140800,  //  0017  CALL	R5	4
      0x7C0C0400,  //  0018  CALL	R3	2
      0x8C0C0302,  //  0019  GETMET	R3	R1	K2
      0x5814000B,  //  001A  LDCONST	R5	K11
      0x7C0C0400,  //  001B  CALL	R3	2
      0x80000000,  //  001C  RET	0
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: get_ACTION_or_ON_state_color
********************************************************************/
be_local_closure(ezie_ws2812_configurator_get_ACTION_or_ON_state_color,   /* name */
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
    /* K0   */  be_nested_str(action_on_state_col),
    }),
    &be_const_str_get_ACTION_or_ON_state_color,
    &be_const_str_solidified,
    ( &(const binstruction[ 2]) {  /* code */
      0x88040100,  //  0000  GETMBR	R1	R0	K0
      0x80040200,  //  0001  RET	1	R1
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: page_part_mgr
********************************************************************/
be_local_closure(ezie_ws2812_configurator_page_part_mgr,   /* name */
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
    /* K4   */  be_nested_str(EZIE_X20Device),
    /* K5   */  be_nested_str(content_send_style),
    /* K6   */  be_nested_str(content_send),
    /* K7   */  be_nested_str(_X3Cform_X20action_X3D_X27_X2Feziec_X27_X20method_X3D_X27post_X27_X20_X3E),
    /* K8   */  be_nested_str(show_color_settings),
    /* K9   */  be_nested_str(show_timeout_settings),
    /* K10  */  be_nested_str(_X3Cp_X3E_X3C_X2Fp_X3E_X3Cbutton_X20name_X3D_X27ezieconfchange_X27_X20class_X3D_X27button_X20bgrn_X27_X3EChange_X3C_X2Fbutton_X3E_X3C_X2Fform_X3E_X3C_X2Fp_X3E),
    /* K11  */  be_nested_str(content_button),
    /* K12  */  be_nested_str(BUTTON_CONFIGURATION),
    /* K13  */  be_nested_str(content_stop),
    }),
    &be_const_str_page_part_mgr,
    &be_const_str_solidified,
    ( &(const binstruction[28]) {  /* code */
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
      0x8C0C0306,  //  000C  GETMET	R3	R1	K6
      0x58140007,  //  000D  LDCONST	R5	K7
      0x7C0C0400,  //  000E  CALL	R3	2
      0x8C0C0108,  //  000F  GETMET	R3	R0	K8
      0x7C0C0200,  //  0010  CALL	R3	1
      0x8C0C0109,  //  0011  GETMET	R3	R0	K9
      0x7C0C0200,  //  0012  CALL	R3	1
      0x8C0C0306,  //  0013  GETMET	R3	R1	K6
      0x5814000A,  //  0014  LDCONST	R5	K10
      0x7C0C0400,  //  0015  CALL	R3	2
      0x8C0C030B,  //  0016  GETMET	R3	R1	K11
      0x8814030C,  //  0017  GETMBR	R5	R1	K12
      0x7C0C0400,  //  0018  CALL	R3	2
      0x8C0C030D,  //  0019  GETMET	R3	R1	K13
      0x7C0C0200,  //  001A  CALL	R3	1
      0x80000000,  //  001B  RET	0
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: web_add_handler
********************************************************************/
be_local_closure(ezie_ws2812_configurator_web_add_handler,   /* name */
  be_nested_proto(
    7,                          /* nstack */
    1,                          /* argc */
    2,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    1,                          /* has sup protos */
    ( &(const struct bproto*[ 2]) {
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
    ( &(const bvalue[ 5]) {     /* constants */
    /* K0   */  be_nested_str(webserver),
    /* K1   */  be_nested_str(on),
    /* K2   */  be_nested_str(_X2Feziec),
    /* K3   */  be_nested_str(HTTP_GET),
    /* K4   */  be_nested_str(HTTP_POST),
    }),
    &be_const_str_web_add_handler,
    &be_const_str_solidified,
    ( &(const binstruction[13]) {  /* code */
      0xA4060000,  //  0000  IMPORT	R1	K0
      0x8C080301,  //  0001  GETMET	R2	R1	K1
      0x58100002,  //  0002  LDCONST	R4	K2
      0x84140000,  //  0003  CLOSURE	R5	P0
      0x88180303,  //  0004  GETMBR	R6	R1	K3
      0x7C080800,  //  0005  CALL	R2	4
      0x8C080301,  //  0006  GETMET	R2	R1	K1
      0x58100002,  //  0007  LDCONST	R4	K2
      0x84140001,  //  0008  CLOSURE	R5	P1
      0x88180304,  //  0009  GETMBR	R6	R1	K4
      0x7C080800,  //  000A  CALL	R2	4
      0xA0000000,  //  000B  CLOSE	R0
      0x80000000,  //  000C  RET	0
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: get_NORMAL_or_OFF_state_color
********************************************************************/
be_local_closure(ezie_ws2812_configurator_get_NORMAL_or_OFF_state_color,   /* name */
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
    /* K0   */  be_nested_str(normal_off_state_col),
    }),
    &be_const_str_get_NORMAL_or_OFF_state_color,
    &be_const_str_solidified,
    ( &(const binstruction[ 2]) {  /* code */
      0x88040100,  //  0000  GETMBR	R1	R0	K0
      0x80040200,  //  0001  RET	1	R1
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: get_LIGHTS_dim_percentage
********************************************************************/
be_local_closure(ezie_ws2812_configurator_get_LIGHTS_dim_percentage,   /* name */
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
    /* K0   */  be_nested_str(lights_dim_factor),
    }),
    &be_const_str_get_LIGHTS_dim_percentage,
    &be_const_str_solidified,
    ( &(const binstruction[ 2]) {  /* code */
      0x88040100,  //  0000  GETMBR	R1	R0	K0
      0x80040200,  //  0001  RET	1	R1
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: page_part_ctl
********************************************************************/
be_local_closure(ezie_ws2812_configurator_page_part_ctl,   /* name */
  be_nested_proto(
    15,                          /* nstack */
    1,                          /* argc */
    2,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    ( &(const bvalue[37]) {     /* constants */
    /* K0   */  be_nested_str(webserver),
    /* K1   */  be_nested_str(check_privileged_access),
    /* K2   */  be_nested_str(string),
    /* K3   */  be_nested_str(partition_core),
    /* K4   */  be_nested_str(persist),
    /* K5   */  be_nested_str(Partition),
    /* K6   */  be_nested_str(has_arg),
    /* K7   */  be_nested_str(on_color),
    /* K8   */  be_nested_str(action_on_state_col),
    /* K9   */  be_nested_str(replace),
    /* K10  */  be_nested_str(arg),
    /* K11  */  be_nested_str(_X23),
    /* K12  */  be_nested_str(0x),
    /* K13  */  be_nested_str(off_color),
    /* K14  */  be_nested_str(normal_off_state_col),
    /* K15  */  be_nested_str(bar_color),
    /* K16  */  be_nested_str(speed_bar_col),
    /* K17  */  be_nested_str(lights_timeout),
    /* K18  */  be_nested_str(lights_dim_factor),
    /* K19  */  be_nested_str(tasmota),
    /* K20  */  be_nested_str(publish_result),
    /* K21  */  be_nested_str(_X7B_X22EZIE_X22_X3A_X7B_X22WS2812_Updated_X22_X3A1_X7D_X7D),
    /* K22  */  be_nested_str(EZIE),
    /* K23  */  be_nested_str(redirect),
    /* K24  */  be_nested_str(_X2Fcn_X3F),
    /* K25  */  be_nested_str(log),
    /* K26  */  be_nested_str(format),
    /* K27  */  be_nested_str(BRY_X3A_X20Exception_X3E_X20_X27_X25s_X27_X20_X2D_X20_X25s),
    /* K28  */  be_const_int(2),
    /* K29  */  be_nested_str(content_start),
    /* K30  */  be_nested_str(Parameter_X20error),
    /* K31  */  be_nested_str(content_send_style),
    /* K32  */  be_nested_str(content_send),
    /* K33  */  be_nested_str(_X3Cp_X20style_X3D_X27width_X3A340px_X3B_X27_X3E_X3Cb_X3EException_X3A_X3C_X2Fb_X3E_X3Cbr_X3E_X27_X25s_X27_X3Cbr_X3E_X25s_X3C_X2Fp_X3E),
    /* K34  */  be_nested_str(content_button),
    /* K35  */  be_nested_str(BUTTON_MANAGEMENT),
    /* K36  */  be_nested_str(content_stop),
    }),
    &be_const_str_page_part_ctl,
    &be_const_str_solidified,
    ( &(const binstruction[115]) {  /* code */
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
      0xA8020047,  //  000B  EXBLK	0	#0054
      0x8C180306,  //  000C  GETMET	R6	R1	K6
      0x58200007,  //  000D  LDCONST	R8	K7
      0x7C180400,  //  000E  CALL	R6	2
      0x781A0009,  //  000F  JMPF	R6	#001A
      0x60180009,  //  0010  GETGBL	R6	G9
      0x8C1C0509,  //  0011  GETMET	R7	R2	K9
      0x8C24030A,  //  0012  GETMET	R9	R1	K10
      0x582C0007,  //  0013  LDCONST	R11	K7
      0x7C240400,  //  0014  CALL	R9	2
      0x5828000B,  //  0015  LDCONST	R10	K11
      0x582C000C,  //  0016  LDCONST	R11	K12
      0x7C1C0800,  //  0017  CALL	R7	4
      0x7C180200,  //  0018  CALL	R6	1
      0x90021006,  //  0019  SETMBR	R0	K8	R6
      0x8C180306,  //  001A  GETMET	R6	R1	K6
      0x5820000D,  //  001B  LDCONST	R8	K13
      0x7C180400,  //  001C  CALL	R6	2
      0x781A0009,  //  001D  JMPF	R6	#0028
      0x60180009,  //  001E  GETGBL	R6	G9
      0x8C1C0509,  //  001F  GETMET	R7	R2	K9
      0x8C24030A,  //  0020  GETMET	R9	R1	K10
      0x582C000D,  //  0021  LDCONST	R11	K13
      0x7C240400,  //  0022  CALL	R9	2
      0x5828000B,  //  0023  LDCONST	R10	K11
      0x582C000C,  //  0024  LDCONST	R11	K12
      0x7C1C0800,  //  0025  CALL	R7	4
      0x7C180200,  //  0026  CALL	R6	1
      0x90021C06,  //  0027  SETMBR	R0	K14	R6
      0x8C180306,  //  0028  GETMET	R6	R1	K6
      0x5820000F,  //  0029  LDCONST	R8	K15
      0x7C180400,  //  002A  CALL	R6	2
      0x781A0009,  //  002B  JMPF	R6	#0036
      0x60180009,  //  002C  GETGBL	R6	G9
      0x8C1C0509,  //  002D  GETMET	R7	R2	K9
      0x8C24030A,  //  002E  GETMET	R9	R1	K10
      0x582C000F,  //  002F  LDCONST	R11	K15
      0x7C240400,  //  0030  CALL	R9	2
      0x5828000B,  //  0031  LDCONST	R10	K11
      0x582C000C,  //  0032  LDCONST	R11	K12
      0x7C1C0800,  //  0033  CALL	R7	4
      0x7C180200,  //  0034  CALL	R6	1
      0x90022006,  //  0035  SETMBR	R0	K16	R6
      0x8C180306,  //  0036  GETMET	R6	R1	K6
      0x58200011,  //  0037  LDCONST	R8	K17
      0x7C180400,  //  0038  CALL	R6	2
      0x781A0005,  //  0039  JMPF	R6	#0040
      0x60180009,  //  003A  GETGBL	R6	G9
      0x8C1C030A,  //  003B  GETMET	R7	R1	K10
      0x58240011,  //  003C  LDCONST	R9	K17
      0x7C1C0400,  //  003D  CALL	R7	2
      0x7C180200,  //  003E  CALL	R6	1
      0x90022206,  //  003F  SETMBR	R0	K17	R6
      0x8C180306,  //  0040  GETMET	R6	R1	K6
      0x58200012,  //  0041  LDCONST	R8	K18
      0x7C180400,  //  0042  CALL	R6	2
      0x781A0005,  //  0043  JMPF	R6	#004A
      0x60180009,  //  0044  GETGBL	R6	G9
      0x8C1C030A,  //  0045  GETMET	R7	R1	K10
      0x58240012,  //  0046  LDCONST	R9	K18
      0x7C1C0400,  //  0047  CALL	R7	2
      0x7C180200,  //  0048  CALL	R6	1
      0x90022406,  //  0049  SETMBR	R0	K18	R6
      0xB81A2600,  //  004A  GETNGBL	R6	K19
      0x8C180D14,  //  004B  GETMET	R6	R6	K20
      0x58200015,  //  004C  LDCONST	R8	K21
      0x58240016,  //  004D  LDCONST	R9	K22
      0x7C180600,  //  004E  CALL	R6	3
      0x8C180317,  //  004F  GETMET	R6	R1	K23
      0x58200018,  //  0050  LDCONST	R8	K24
      0x7C180400,  //  0051  CALL	R6	2
      0xA8040001,  //  0052  EXBLK	1	1
      0x7002001D,  //  0053  JMP		#0072
      0xAC180002,  //  0054  CATCH	R6	0	2
      0x7002001A,  //  0055  JMP		#0071
      0xB8222600,  //  0056  GETNGBL	R8	K19
      0x8C201119,  //  0057  GETMET	R8	R8	K25
      0x8C28051A,  //  0058  GETMET	R10	R2	K26
      0x5830001B,  //  0059  LDCONST	R12	K27
      0x5C340C00,  //  005A  MOVE	R13	R6
      0x5C380E00,  //  005B  MOVE	R14	R7
      0x7C280800,  //  005C  CALL	R10	4
      0x582C001C,  //  005D  LDCONST	R11	K28
      0x7C200600,  //  005E  CALL	R8	3
      0x8C20031D,  //  005F  GETMET	R8	R1	K29
      0x5828001E,  //  0060  LDCONST	R10	K30
      0x7C200400,  //  0061  CALL	R8	2
      0x8C20031F,  //  0062  GETMET	R8	R1	K31
      0x7C200200,  //  0063  CALL	R8	1
      0x8C200320,  //  0064  GETMET	R8	R1	K32
      0x8C28051A,  //  0065  GETMET	R10	R2	K26
      0x58300021,  //  0066  LDCONST	R12	K33
      0x5C340C00,  //  0067  MOVE	R13	R6
      0x5C380E00,  //  0068  MOVE	R14	R7
      0x7C280800,  //  0069  CALL	R10	4
      0x7C200400,  //  006A  CALL	R8	2
      0x8C200322,  //  006B  GETMET	R8	R1	K34
      0x88280323,  //  006C  GETMBR	R10	R1	K35
      0x7C200400,  //  006D  CALL	R8	2
      0x8C200324,  //  006E  GETMET	R8	R1	K36
      0x7C200200,  //  006F  CALL	R8	1
      0x70020000,  //  0070  JMP		#0072
      0xB0080000,  //  0071  RAISE	2	R0	R0
      0x80000000,  //  0072  RET	0
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: web_add_config_button
********************************************************************/
be_local_closure(ezie_ws2812_configurator_web_add_config_button,   /* name */
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
    /* K2   */  be_nested_str(_X3Cp_X3E_X3Cform_X20id_X3Dac_X20action_X3D_X27eziec_X27_X20style_X3D_X27display_X3A_X20block_X3B_X27_X20method_X3D_X27get_X27_X3E_X3Cbutton_X3EEZIE_X20device_X3C_X2Fbutton_X3E_X3C_X2Fform_X3E_X3C_X2Fp_X3E),
    }),
    &be_const_str_web_add_config_button,
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
** Solidified function: show_color_settings
********************************************************************/
be_local_closure(ezie_ws2812_configurator_show_color_settings,   /* name */
  be_nested_proto(
    12,                          /* nstack */
    1,                          /* argc */
    2,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    ( &(const bvalue[17]) {     /* constants */
    /* K0   */  be_nested_str(webserver),
    /* K1   */  be_nested_str(string),
    /* K2   */  be_nested_str(content_send),
    /* K3   */  be_nested_str(_X3Cfieldset_X3E_X3Clegend_X3E_X3Cb_X3E_X26nbsp_X3BEZIE_X20LED_X20Color_X20Settings_X26nbsp_X3B_X3C_X2Fb_X3E_X3C_X2Flegend_X3E_X3Cp_X3E_X3C_X2Fp_X3E),
    /* K4   */  be_nested_str(_X3Cp_X3EON_X2FACTION_X20state_X20color_X3A_X3C_X2Fp_X3E),
    /* K5   */  be_nested_str(format),
    /* K6   */  be_nested_str(_X3Cinput_X20type_X3D_X27color_X27_X20name_X3D_X27on_color_X27_X20value_X3D_X27_X25s_X27_X2F_X3E),
    /* K7   */  be_nested_str(_X23_X2506X),
    /* K8   */  be_const_int(16777215),
    /* K9   */  be_nested_str(action_on_state_col),
    /* K10  */  be_nested_str(_X3Cp_X3EOFF_X2FNORMAL_X20state_X20color_X3A_X3C_X2Fp_X3E),
    /* K11  */  be_nested_str(_X3Cinput_X20type_X3D_X27color_X27_X20name_X3D_X27off_color_X27_X20value_X3D_X27_X25s_X27_X2F_X3E),
    /* K12  */  be_nested_str(normal_off_state_col),
    /* K13  */  be_nested_str(_X3Cp_X3ESPEED_X20Bar_X20color_X28Fan_X29_X3A_X3C_X2Fp_X3E),
    /* K14  */  be_nested_str(_X3Cinput_X20type_X3D_X27color_X27_X20name_X3D_X27bar_color_X27_X20value_X3D_X27_X25s_X27_X2F_X3E),
    /* K15  */  be_nested_str(speed_bar_col),
    /* K16  */  be_nested_str(_X3Cp_X3E_X3C_X2Fp_X3E_X3C_X2Ffieldset_X3E_X3Cp_X3E_X3C_X2Fp_X3E),
    }),
    &be_const_str_show_color_settings,
    &be_const_str_solidified,
    ( &(const binstruction[48]) {  /* code */
      0xA4060000,  //  0000  IMPORT	R1	K0
      0xA40A0200,  //  0001  IMPORT	R2	K1
      0x8C0C0302,  //  0002  GETMET	R3	R1	K2
      0x58140003,  //  0003  LDCONST	R5	K3
      0x7C0C0400,  //  0004  CALL	R3	2
      0x8C0C0302,  //  0005  GETMET	R3	R1	K2
      0x58140004,  //  0006  LDCONST	R5	K4
      0x7C0C0400,  //  0007  CALL	R3	2
      0x8C0C0302,  //  0008  GETMET	R3	R1	K2
      0x8C140505,  //  0009  GETMET	R5	R2	K5
      0x581C0006,  //  000A  LDCONST	R7	K6
      0x8C200505,  //  000B  GETMET	R8	R2	K5
      0x58280007,  //  000C  LDCONST	R10	K7
      0x882C0109,  //  000D  GETMBR	R11	R0	K9
      0x2C2E100B,  //  000E  AND	R11	K8	R11
      0x7C200600,  //  000F  CALL	R8	3
      0x7C140600,  //  0010  CALL	R5	3
      0x7C0C0400,  //  0011  CALL	R3	2
      0x8C0C0302,  //  0012  GETMET	R3	R1	K2
      0x5814000A,  //  0013  LDCONST	R5	K10
      0x7C0C0400,  //  0014  CALL	R3	2
      0x8C0C0302,  //  0015  GETMET	R3	R1	K2
      0x8C140505,  //  0016  GETMET	R5	R2	K5
      0x581C000B,  //  0017  LDCONST	R7	K11
      0x8C200505,  //  0018  GETMET	R8	R2	K5
      0x58280007,  //  0019  LDCONST	R10	K7
      0x882C010C,  //  001A  GETMBR	R11	R0	K12
      0x2C2E100B,  //  001B  AND	R11	K8	R11
      0x7C200600,  //  001C  CALL	R8	3
      0x7C140600,  //  001D  CALL	R5	3
      0x7C0C0400,  //  001E  CALL	R3	2
      0x8C0C0302,  //  001F  GETMET	R3	R1	K2
      0x5814000D,  //  0020  LDCONST	R5	K13
      0x7C0C0400,  //  0021  CALL	R3	2
      0x8C0C0302,  //  0022  GETMET	R3	R1	K2
      0x8C140505,  //  0023  GETMET	R5	R2	K5
      0x581C000E,  //  0024  LDCONST	R7	K14
      0x8C200505,  //  0025  GETMET	R8	R2	K5
      0x58280007,  //  0026  LDCONST	R10	K7
      0x882C010F,  //  0027  GETMBR	R11	R0	K15
      0x2C2E100B,  //  0028  AND	R11	K8	R11
      0x7C200600,  //  0029  CALL	R8	3
      0x7C140600,  //  002A  CALL	R5	3
      0x7C0C0400,  //  002B  CALL	R3	2
      0x8C0C0302,  //  002C  GETMET	R3	R1	K2
      0x58140010,  //  002D  LDCONST	R5	K16
      0x7C0C0400,  //  002E  CALL	R3	2
      0x80000000,  //  002F  RET	0
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: init
********************************************************************/
be_local_closure(ezie_ws2812_configurator_init,   /* name */
  be_nested_proto(
    9,                          /* nstack */
    6,                          /* argc */
    2,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    ( &(const bvalue[ 8]) {     /* constants */
    /* K0   */  be_nested_str(action_on_state_col),
    /* K1   */  be_nested_str(normal_off_state_col),
    /* K2   */  be_nested_str(speed_bar_col),
    /* K3   */  be_nested_str(lights_timeout),
    /* K4   */  be_nested_str(lights_dim_factor),
    /* K5   */  be_nested_str(web_add_handler),
    /* K6   */  be_nested_str(tasmota),
    /* K7   */  be_nested_str(add_driver),
    }),
    &be_const_str_init,
    &be_const_str_solidified,
    ( &(const binstruction[12]) {  /* code */
      0x90020001,  //  0000  SETMBR	R0	K0	R1
      0x90020202,  //  0001  SETMBR	R0	K1	R2
      0x90020403,  //  0002  SETMBR	R0	K2	R3
      0x90020604,  //  0003  SETMBR	R0	K3	R4
      0x90020805,  //  0004  SETMBR	R0	K4	R5
      0x8C180105,  //  0005  GETMET	R6	R0	K5
      0x7C180200,  //  0006  CALL	R6	1
      0xB81A0C00,  //  0007  GETNGBL	R6	K6
      0x8C180D07,  //  0008  GETMET	R6	R6	K7
      0x5C200000,  //  0009  MOVE	R8	R0
      0x7C180400,  //  000A  CALL	R6	2
      0x80000000,  //  000B  RET	0
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: get_SPEED_indicator_bar_color
********************************************************************/
be_local_closure(ezie_ws2812_configurator_get_SPEED_indicator_bar_color,   /* name */
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
    /* K0   */  be_nested_str(speed_bar_col),
    }),
    &be_const_str_get_SPEED_indicator_bar_color,
    &be_const_str_solidified,
    ( &(const binstruction[ 2]) {  /* code */
      0x88040100,  //  0000  GETMBR	R1	R0	K0
      0x80040200,  //  0001  RET	1	R1
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: get_LIGHTS_timeout
********************************************************************/
be_local_closure(ezie_ws2812_configurator_get_LIGHTS_timeout,   /* name */
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
    /* K0   */  be_nested_str(lights_timeout),
    }),
    &be_const_str_get_LIGHTS_timeout,
    &be_const_str_solidified,
    ( &(const binstruction[ 2]) {  /* code */
      0x88040100,  //  0000  GETMBR	R1	R0	K0
      0x80040200,  //  0001  RET	1	R1
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified class: ezie_ws2812_configurator
********************************************************************/
be_local_class(ezie_ws2812_configurator,
    5,
    NULL,
    be_nested_map(17,
    ( (struct bmapnode*) &(const bmapnode[]) {
        { be_const_key(show_timeout_settings, 3), be_const_closure(ezie_ws2812_configurator_show_timeout_settings_closure) },
        { be_const_key(lights_dim_factor, 11), be_const_var(4) },
        { be_const_key(get_ACTION_or_ON_state_color, -1), be_const_closure(ezie_ws2812_configurator_get_ACTION_or_ON_state_color_closure) },
        { be_const_key(speed_bar_col, -1), be_const_var(2) },
        { be_const_key(web_add_handler, -1), be_const_closure(ezie_ws2812_configurator_web_add_handler_closure) },
        { be_const_key(normal_off_state_col, 10), be_const_var(1) },
        { be_const_key(page_part_ctl, -1), be_const_closure(ezie_ws2812_configurator_page_part_ctl_closure) },
        { be_const_key(show_color_settings, 6), be_const_closure(ezie_ws2812_configurator_show_color_settings_closure) },
        { be_const_key(web_add_config_button, -1), be_const_closure(ezie_ws2812_configurator_web_add_config_button_closure) },
        { be_const_key(get_NORMAL_or_OFF_state_color, 7), be_const_closure(ezie_ws2812_configurator_get_NORMAL_or_OFF_state_color_closure) },
        { be_const_key(init, 16), be_const_closure(ezie_ws2812_configurator_init_closure) },
        { be_const_key(action_on_state_col, -1), be_const_var(0) },
        { be_const_key(get_SPEED_indicator_bar_color, -1), be_const_closure(ezie_ws2812_configurator_get_SPEED_indicator_bar_color_closure) },
        { be_const_key(get_LIGHTS_timeout, -1), be_const_closure(ezie_ws2812_configurator_get_LIGHTS_timeout_closure) },
        { be_const_key(lights_timeout, -1), be_const_var(3) },
        { be_const_key(page_part_mgr, 5), be_const_closure(ezie_ws2812_configurator_page_part_mgr_closure) },
        { be_const_key(get_LIGHTS_dim_percentage, -1), be_const_closure(ezie_ws2812_configurator_get_LIGHTS_dim_percentage_closure) },
    })),
    (bstring*) &be_const_str_ezie_ws2812_configurator
);
/*******************************************************************/

void be_load_ezie_ws2812_configurator_class(bvm *vm) {
    be_pushntvclass(vm, &be_class_ezie_ws2812_configurator);
    be_setglobal(vm, "ezie_ws2812_configurator");
    be_pop(vm, 1);
}
/********************************************************************/
/* End of solidification */
