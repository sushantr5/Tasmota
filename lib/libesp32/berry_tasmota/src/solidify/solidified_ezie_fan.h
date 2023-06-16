/* Solidification of ezie_fan.h */
/********************************************************************\
* Generated code, don't edit                                         *
\********************************************************************/
#include "be_constobj.h"

extern const bclass be_class_ezie_fan;

/********************************************************************
** Solidified function: button_click
********************************************************************/
be_local_closure(ezie_fan_button_click,   /* name */
  be_nested_proto(
    6,                          /* nstack */
    2,                          /* argc */
    2,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    ( &(const bvalue[ 8]) {     /* constants */
    /* K0   */  be_nested_str(Button_X20_X23),
    /* K1   */  be_const_int(1),
    /* K2   */  be_nested_str(_X20Clicked),
    /* K3   */  be_const_int(2),
    /* K4   */  be_nested_str(tasmota),
    /* K5   */  be_nested_str(cmd),
    /* K6   */  be_nested_str(fanspeed_X20_X2B),
    /* K7   */  be_nested_str(fanspeed_X20_X2D),
    }),
    &be_const_str_button_click,
    &be_const_str_solidified,
    ( &(const binstruction[18]) {  /* code */
      0x60080001,  //  0000  GETGBL	R2	G1
      0x580C0000,  //  0001  LDCONST	R3	K0
      0x00100301,  //  0002  ADD	R4	R1	K1
      0x58140002,  //  0003  LDCONST	R5	K2
      0x7C080600,  //  0004  CALL	R2	3
      0x1C080303,  //  0005  EQ	R2	R1	K3
      0x780A0003,  //  0006  JMPF	R2	#000B
      0xB80A0800,  //  0007  GETNGBL	R2	K4
      0x8C080505,  //  0008  GETMET	R2	R2	K5
      0x58100006,  //  0009  LDCONST	R4	K6
      0x7C080400,  //  000A  CALL	R2	2
      0x1C080301,  //  000B  EQ	R2	R1	K1
      0x780A0003,  //  000C  JMPF	R2	#0011
      0xB80A0800,  //  000D  GETNGBL	R2	K4
      0x8C080505,  //  000E  GETMET	R2	R2	K5
      0x58100007,  //  000F  LDCONST	R4	K7
      0x7C080400,  //  0010  CALL	R2	2
      0x80000000,  //  0011  RET	0
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: web_add_main_button
********************************************************************/
be_local_closure(ezie_fan_web_add_main_button,   /* name */
  be_nested_proto(
    9,                          /* nstack */
    1,                          /* argc */
    2,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    ( &(const bvalue[ 7]) {     /* constants */
    /* K0   */  be_nested_str(webserver),
    /* K1   */  be_nested_str(content_send),
    /* K2   */  be_nested_str(_X3Cp_X3EFAN_X20Speed_X3A_X3C_X2Fp_X3E),
    /* K3   */  be_nested_str(string),
    /* K4   */  be_nested_str(format),
    /* K5   */  be_nested_str(_X3Cinput_X20type_X3D_X27range_X27_X20name_X3D_X27fan_speed_X27_X20min_X3D_X270_X27_X20max_X3D_X274_X27_X20step_X3D_X271_X27_X20value_X3D_X27_X25i_X27oninput_X3D_X27this_X2EnextElementSibling_X2Evalue_X20_X3D_X20this_X2Evalue_X27_X20onchange_X3D_X27la_X28_X22_X26m_speed_X3D_X22_X2Bthis_X2Evalue_X29_X3B_X27_X2F_X3E_X3Coutput_X3E_X25i_X3C_X2Foutput_X3E),
    /* K6   */  be_nested_str(set_speed),
    }),
    &be_const_str_web_add_main_button,
    &be_const_str_solidified,
    ( &(const binstruction[13]) {  /* code */
      0xA4060000,  //  0000  IMPORT	R1	K0
      0x8C080301,  //  0001  GETMET	R2	R1	K1
      0x58100002,  //  0002  LDCONST	R4	K2
      0x7C080400,  //  0003  CALL	R2	2
      0x8C080301,  //  0004  GETMET	R2	R1	K1
      0xB8120600,  //  0005  GETNGBL	R4	K3
      0x8C100904,  //  0006  GETMET	R4	R4	K4
      0x58180005,  //  0007  LDCONST	R6	K5
      0x881C0106,  //  0008  GETMBR	R7	R0	K6
      0x88200106,  //  0009  GETMBR	R8	R0	K6
      0x7C100800,  //  000A  CALL	R4	4
      0x7C080400,  //  000B  CALL	R2	2
      0x80000000,  //  000C  RET	0
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: web_sensor
********************************************************************/
be_local_closure(ezie_fan_web_sensor,   /* name */
  be_nested_proto(
    10,                          /* nstack */
    1,                          /* argc */
    2,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    ( &(const bvalue[10]) {     /* constants */
    /* K0   */  be_nested_str(webserver),
    /* K1   */  be_nested_str(has_arg),
    /* K2   */  be_nested_str(m_speed),
    /* K3   */  be_nested_str(string),
    /* K4   */  be_nested_str(format),
    /* K5   */  be_nested_str(Speed_X3A_X25s),
    /* K6   */  be_nested_str(arg),
    /* K7   */  be_nested_str(tasmota),
    /* K8   */  be_nested_str(cmd),
    /* K9   */  be_nested_str(fanspeed_X20_X25s),
    }),
    &be_const_str_web_sensor,
    &be_const_str_solidified,
    ( &(const binstruction[25]) {  /* code */
      0xA4060000,  //  0000  IMPORT	R1	K0
      0x8C080301,  //  0001  GETMET	R2	R1	K1
      0x58100002,  //  0002  LDCONST	R4	K2
      0x7C080400,  //  0003  CALL	R2	2
      0x780A0012,  //  0004  JMPF	R2	#0018
      0x60080001,  //  0005  GETGBL	R2	G1
      0xB80E0600,  //  0006  GETNGBL	R3	K3
      0x8C0C0704,  //  0007  GETMET	R3	R3	K4
      0x58140005,  //  0008  LDCONST	R5	K5
      0x8C180306,  //  0009  GETMET	R6	R1	K6
      0x58200002,  //  000A  LDCONST	R8	K2
      0x7C180400,  //  000B  CALL	R6	2
      0x7C0C0600,  //  000C  CALL	R3	3
      0x7C080200,  //  000D  CALL	R2	1
      0xB80A0E00,  //  000E  GETNGBL	R2	K7
      0x8C080508,  //  000F  GETMET	R2	R2	K8
      0xB8120600,  //  0010  GETNGBL	R4	K3
      0x8C100904,  //  0011  GETMET	R4	R4	K4
      0x58180009,  //  0012  LDCONST	R6	K9
      0x8C1C0306,  //  0013  GETMET	R7	R1	K6
      0x58240002,  //  0014  LDCONST	R9	K2
      0x7C1C0400,  //  0015  CALL	R7	2
      0x7C100600,  //  0016  CALL	R4	3
      0x7C080400,  //  0017  CALL	R2	2
      0x80000000,  //  0018  RET	0
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: fanspeed
********************************************************************/
be_local_closure(ezie_fan_fanspeed,   /* name */
  be_nested_proto(
    9,                          /* nstack */
    5,                          /* argc */
    2,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    ( &(const bvalue[13]) {     /* constants */
    /* K0   */  be_nested_str(string),
    /* K1   */  be_nested_str(find),
    /* K2   */  be_nested_str(fanspeed),
    /* K3   */  be_nested_str(set_speed),
    /* K4   */  be_nested_str(_X2D),
    /* K5   */  be_const_int(1),
    /* K6   */  be_nested_str(_X2B),
    /* K7   */  be_const_int(0),
    /* K8   */  be_nested_str(update_fan_relays),
    /* K9   */  be_nested_str(format),
    /* K10  */  be_nested_str(_X7B_X20_X22fanspeed_X22_X3A_X25d_X20_X7D),
    /* K11  */  be_nested_str(tasmota),
    /* K12  */  be_nested_str(resp_cmnd),
    }),
    &be_const_str_fanspeed,
    &be_const_str_solidified,
    ( &(const binstruction[67]) {  /* code */
      0x4C140000,  //  0000  LDNIL	R5
      0x20140805,  //  0001  NE	R5	R4	R5
      0x78160011,  //  0002  JMPF	R5	#0015
      0x60140004,  //  0003  GETGBL	R5	G4
      0x5C180800,  //  0004  MOVE	R6	R4
      0x7C140200,  //  0005  CALL	R5	1
      0x1C140B00,  //  0006  EQ	R5	R5	K0
      0x7816000C,  //  0007  JMPF	R5	#0015
      0x8C140901,  //  0008  GETMET	R5	R4	K1
      0x581C0002,  //  0009  LDCONST	R7	K2
      0x7C140400,  //  000A  CALL	R5	2
      0x4C180000,  //  000B  LDNIL	R6
      0x20140A06,  //  000C  NE	R5	R5	R6
      0x78160006,  //  000D  JMPF	R5	#0015
      0x60140009,  //  000E  GETGBL	R5	G9
      0x8C180901,  //  000F  GETMET	R6	R4	K1
      0x58200002,  //  0010  LDCONST	R8	K2
      0x7C180400,  //  0011  CALL	R6	2
      0x7C140200,  //  0012  CALL	R5	1
      0x90020605,  //  0013  SETMBR	R0	K3	R5
      0x70020017,  //  0014  JMP		#002D
      0x4C140000,  //  0015  LDNIL	R5
      0x20140605,  //  0016  NE	R5	R3	R5
      0x78160014,  //  0017  JMPF	R5	#002D
      0x1C140704,  //  0018  EQ	R5	R3	K4
      0x78160003,  //  0019  JMPF	R5	#001E
      0x88140103,  //  001A  GETMBR	R5	R0	K3
      0x04140B05,  //  001B  SUB	R5	R5	K5
      0x90020605,  //  001C  SETMBR	R0	K3	R5
      0x7002000E,  //  001D  JMP		#002D
      0x1C140706,  //  001E  EQ	R5	R3	K6
      0x78160003,  //  001F  JMPF	R5	#0024
      0x88140103,  //  0020  GETMBR	R5	R0	K3
      0x00140B05,  //  0021  ADD	R5	R5	K5
      0x90020605,  //  0022  SETMBR	R0	K3	R5
      0x70020008,  //  0023  JMP		#002D
      0x6014000C,  //  0024  GETGBL	R5	G12
      0x5C180600,  //  0025  MOVE	R6	R3
      0x7C140200,  //  0026  CALL	R5	1
      0x24140B07,  //  0027  GT	R5	R5	K7
      0x78160003,  //  0028  JMPF	R5	#002D
      0x60140009,  //  0029  GETGBL	R5	G9
      0x5C180600,  //  002A  MOVE	R6	R3
      0x7C140200,  //  002B  CALL	R5	1
      0x90020605,  //  002C  SETMBR	R0	K3	R5
      0x88140103,  //  002D  GETMBR	R5	R0	K3
      0x14140B07,  //  002E  LT	R5	R5	K7
      0x78160000,  //  002F  JMPF	R5	#0031
      0x90020707,  //  0030  SETMBR	R0	K3	K7
      0x88140103,  //  0031  GETMBR	R5	R0	K3
      0x541A0003,  //  0032  LDINT	R6	4
      0x24140A06,  //  0033  GT	R5	R5	R6
      0x78160001,  //  0034  JMPF	R5	#0037
      0x54160003,  //  0035  LDINT	R5	4
      0x90020605,  //  0036  SETMBR	R0	K3	R5
      0x8C140108,  //  0037  GETMET	R5	R0	K8
      0x7C140200,  //  0038  CALL	R5	1
      0xB8160000,  //  0039  GETNGBL	R5	K0
      0x8C140B09,  //  003A  GETMET	R5	R5	K9
      0x581C000A,  //  003B  LDCONST	R7	K10
      0x88200103,  //  003C  GETMBR	R8	R0	K3
      0x7C140600,  //  003D  CALL	R5	3
      0xB81A1600,  //  003E  GETNGBL	R6	K11
      0x8C180D0C,  //  003F  GETMET	R6	R6	K12
      0x5C200A00,  //  0040  MOVE	R8	R5
      0x7C180400,  //  0041  CALL	R6	2
      0x80000000,  //  0042  RET	0
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: init
********************************************************************/
be_local_closure(ezie_fan_init,   /* name */
  be_nested_proto(
    5,                          /* nstack */
    1,                          /* argc */
    2,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    1,                          /* has sup protos */
    ( &(const struct bproto*[ 5]) {
      be_nested_proto(
        4,                          /* nstack */
        1,                          /* argc */
        0,                          /* varg */
        1,                          /* has upvals */
        ( &(const bupvaldesc[ 1]) {  /* upvals */
          be_local_const_upval(1, 0),
        }),
        0,                          /* has sup protos */
        NULL,                       /* no sub protos */
        1,                          /* has constants */
        ( &(const bvalue[ 2]) {     /* constants */
        /* K0   */  be_nested_str(button_click),
        /* K1   */  be_const_int(0),
        }),
        &be_const_str__anonymous_,
        &be_const_str_solidified,
        ( &(const binstruction[ 5]) {  /* code */
          0x68040000,  //  0000  GETUPV	R1	U0
          0x8C040300,  //  0001  GETMET	R1	R1	K0
          0x580C0001,  //  0002  LDCONST	R3	K1
          0x7C040400,  //  0003  CALL	R1	2
          0x80000000,  //  0004  RET	0
        })
      ),
      be_nested_proto(
        4,                          /* nstack */
        1,                          /* argc */
        0,                          /* varg */
        1,                          /* has upvals */
        ( &(const bupvaldesc[ 1]) {  /* upvals */
          be_local_const_upval(1, 0),
        }),
        0,                          /* has sup protos */
        NULL,                       /* no sub protos */
        1,                          /* has constants */
        ( &(const bvalue[ 2]) {     /* constants */
        /* K0   */  be_nested_str(button_click),
        /* K1   */  be_const_int(1),
        }),
        &be_const_str__anonymous_,
        &be_const_str_solidified,
        ( &(const binstruction[ 5]) {  /* code */
          0x68040000,  //  0000  GETUPV	R1	U0
          0x8C040300,  //  0001  GETMET	R1	R1	K0
          0x580C0001,  //  0002  LDCONST	R3	K1
          0x7C040400,  //  0003  CALL	R1	2
          0x80000000,  //  0004  RET	0
        })
      ),
      be_nested_proto(
        4,                          /* nstack */
        1,                          /* argc */
        0,                          /* varg */
        1,                          /* has upvals */
        ( &(const bupvaldesc[ 1]) {  /* upvals */
          be_local_const_upval(1, 0),
        }),
        0,                          /* has sup protos */
        NULL,                       /* no sub protos */
        1,                          /* has constants */
        ( &(const bvalue[ 2]) {     /* constants */
        /* K0   */  be_nested_str(button_click),
        /* K1   */  be_const_int(2),
        }),
        &be_const_str__anonymous_,
        &be_const_str_solidified,
        ( &(const binstruction[ 5]) {  /* code */
          0x68040000,  //  0000  GETUPV	R1	U0
          0x8C040300,  //  0001  GETMET	R1	R1	K0
          0x580C0001,  //  0002  LDCONST	R3	K1
          0x7C040400,  //  0003  CALL	R1	2
          0x80000000,  //  0004  RET	0
        })
      ),
      be_nested_proto(
        4,                          /* nstack */
        1,                          /* argc */
        0,                          /* varg */
        1,                          /* has upvals */
        ( &(const bupvaldesc[ 1]) {  /* upvals */
          be_local_const_upval(1, 0),
        }),
        0,                          /* has sup protos */
        NULL,                       /* no sub protos */
        1,                          /* has constants */
        ( &(const bvalue[ 2]) {     /* constants */
        /* K0   */  be_nested_str(button_click),
        /* K1   */  be_const_int(3),
        }),
        &be_const_str__anonymous_,
        &be_const_str_solidified,
        ( &(const binstruction[ 5]) {  /* code */
          0x68040000,  //  0000  GETUPV	R1	U0
          0x8C040300,  //  0001  GETMET	R1	R1	K0
          0x580C0001,  //  0002  LDCONST	R3	K1
          0x7C040400,  //  0003  CALL	R1	2
          0x80000000,  //  0004  RET	0
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
        /* K0   */  be_nested_str(fanspeed),
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
    /* K0   */  be_nested_str(out1),
    /* K1   */  be_nested_str(out2),
    /* K2   */  be_nested_str(out3),
    /* K3   */  be_nested_str(out4),
    /* K4   */  be_nested_str(set_speed),
    /* K5   */  be_const_int(0),
    /* K6   */  be_nested_str(gpio),
    /* K7   */  be_nested_str(pin_mode),
    /* K8   */  be_nested_str(OUTPUT),
    /* K9   */  be_nested_str(digital_write),
    /* K10  */  be_nested_str(LOW),
    /* K11  */  be_nested_str(tasmota),
    /* K12  */  be_nested_str(add_rule),
    /* K13  */  be_nested_str(button1_X23Action_X3D_X3DSINGLE),
    /* K14  */  be_nested_str(button2_X23Action_X3D_X3DSINGLE),
    /* K15  */  be_nested_str(button3_X23Action_X3D_X3DSINGLE),
    /* K16  */  be_nested_str(button4_X23Action_X3D_X3DSINGLE),
    /* K17  */  be_nested_str(add_cmd),
    /* K18  */  be_nested_str(fanspeed),
    /* K19  */  be_nested_str(add_driver),
    }),
    &be_const_str_init,
    &be_const_str_solidified,
    ( &(const binstruction[76]) {  /* code */
      0x5406000E,  //  0000  LDINT	R1	15
      0x90020001,  //  0001  SETMBR	R0	K0	R1
      0x54060010,  //  0002  LDINT	R1	17
      0x90020201,  //  0003  SETMBR	R0	K1	R1
      0x54060011,  //  0004  LDINT	R1	18
      0x90020401,  //  0005  SETMBR	R0	K2	R1
      0x54060012,  //  0006  LDINT	R1	19
      0x90020601,  //  0007  SETMBR	R0	K3	R1
      0x90020905,  //  0008  SETMBR	R0	K4	K5
      0xB8060C00,  //  0009  GETNGBL	R1	K6
      0x8C040307,  //  000A  GETMET	R1	R1	K7
      0x880C0100,  //  000B  GETMBR	R3	R0	K0
      0xB8120C00,  //  000C  GETNGBL	R4	K6
      0x88100908,  //  000D  GETMBR	R4	R4	K8
      0x7C040600,  //  000E  CALL	R1	3
      0xB8060C00,  //  000F  GETNGBL	R1	K6
      0x8C040307,  //  0010  GETMET	R1	R1	K7
      0x880C0101,  //  0011  GETMBR	R3	R0	K1
      0xB8120C00,  //  0012  GETNGBL	R4	K6
      0x88100908,  //  0013  GETMBR	R4	R4	K8
      0x7C040600,  //  0014  CALL	R1	3
      0xB8060C00,  //  0015  GETNGBL	R1	K6
      0x8C040307,  //  0016  GETMET	R1	R1	K7
      0x880C0102,  //  0017  GETMBR	R3	R0	K2
      0xB8120C00,  //  0018  GETNGBL	R4	K6
      0x88100908,  //  0019  GETMBR	R4	R4	K8
      0x7C040600,  //  001A  CALL	R1	3
      0xB8060C00,  //  001B  GETNGBL	R1	K6
      0x8C040309,  //  001C  GETMET	R1	R1	K9
      0x880C0100,  //  001D  GETMBR	R3	R0	K0
      0xB8120C00,  //  001E  GETNGBL	R4	K6
      0x8810090A,  //  001F  GETMBR	R4	R4	K10
      0x7C040600,  //  0020  CALL	R1	3
      0xB8060C00,  //  0021  GETNGBL	R1	K6
      0x8C040309,  //  0022  GETMET	R1	R1	K9
      0x880C0101,  //  0023  GETMBR	R3	R0	K1
      0xB8120C00,  //  0024  GETNGBL	R4	K6
      0x8810090A,  //  0025  GETMBR	R4	R4	K10
      0x7C040600,  //  0026  CALL	R1	3
      0xB8060C00,  //  0027  GETNGBL	R1	K6
      0x8C040309,  //  0028  GETMET	R1	R1	K9
      0x880C0102,  //  0029  GETMBR	R3	R0	K2
      0xB8120C00,  //  002A  GETNGBL	R4	K6
      0x8810090A,  //  002B  GETMBR	R4	R4	K10
      0x7C040600,  //  002C  CALL	R1	3
      0xB8061600,  //  002D  GETNGBL	R1	K11
      0x8C04030C,  //  002E  GETMET	R1	R1	K12
      0x580C000D,  //  002F  LDCONST	R3	K13
      0x84100000,  //  0030  CLOSURE	R4	P0
      0x7C040600,  //  0031  CALL	R1	3
      0xB8061600,  //  0032  GETNGBL	R1	K11
      0x8C04030C,  //  0033  GETMET	R1	R1	K12
      0x580C000E,  //  0034  LDCONST	R3	K14
      0x84100001,  //  0035  CLOSURE	R4	P1
      0x7C040600,  //  0036  CALL	R1	3
      0xB8061600,  //  0037  GETNGBL	R1	K11
      0x8C04030C,  //  0038  GETMET	R1	R1	K12
      0x580C000F,  //  0039  LDCONST	R3	K15
      0x84100002,  //  003A  CLOSURE	R4	P2
      0x7C040600,  //  003B  CALL	R1	3
      0xB8061600,  //  003C  GETNGBL	R1	K11
      0x8C04030C,  //  003D  GETMET	R1	R1	K12
      0x580C0010,  //  003E  LDCONST	R3	K16
      0x84100003,  //  003F  CLOSURE	R4	P3
      0x7C040600,  //  0040  CALL	R1	3
      0xB8061600,  //  0041  GETNGBL	R1	K11
      0x8C040311,  //  0042  GETMET	R1	R1	K17
      0x580C0012,  //  0043  LDCONST	R3	K18
      0x84100004,  //  0044  CLOSURE	R4	P4
      0x7C040600,  //  0045  CALL	R1	3
      0xB8061600,  //  0046  GETNGBL	R1	K11
      0x8C040313,  //  0047  GETMET	R1	R1	K19
      0x5C0C0000,  //  0048  MOVE	R3	R0
      0x7C040400,  //  0049  CALL	R1	2
      0xA0000000,  //  004A  CLOSE	R0
      0x80000000,  //  004B  RET	0
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: update_fan_relays
********************************************************************/
be_local_closure(ezie_fan_update_fan_relays,   /* name */
  be_nested_proto(
    5,                          /* nstack */
    1,                          /* argc */
    2,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    ( &(const bvalue[16]) {     /* constants */
    /* K0   */  be_nested_str(set_speed),
    /* K1   */  be_const_int(3),
    /* K2   */  be_nested_str(GPIO_X20ON_X3A_X2017_X2C_X2018),
    /* K3   */  be_nested_str(gpio),
    /* K4   */  be_nested_str(digital_write),
    /* K5   */  be_nested_str(out1),
    /* K6   */  be_nested_str(LOW),
    /* K7   */  be_nested_str(out2),
    /* K8   */  be_nested_str(HIGH),
    /* K9   */  be_nested_str(out3),
    /* K10  */  be_const_int(2),
    /* K11  */  be_nested_str(GPIO_X20ON_X3A_X2018),
    /* K12  */  be_const_int(1),
    /* K13  */  be_nested_str(GPIO_X20ON_X3A_X2017),
    /* K14  */  be_nested_str(GPIO_X20ON_X3A_X2015),
    /* K15  */  be_const_int(0),
    }),
    &be_const_str_update_fan_relays,
    &be_const_str_solidified,
    ( &(const binstruction[126]) {  /* code */
      0x88040100,  //  0000  GETMBR	R1	R0	K0
      0x1C040301,  //  0001  EQ	R1	R1	K1
      0x78060015,  //  0002  JMPF	R1	#0019
      0x60040001,  //  0003  GETGBL	R1	G1
      0x58080002,  //  0004  LDCONST	R2	K2
      0x7C040200,  //  0005  CALL	R1	1
      0xB8060600,  //  0006  GETNGBL	R1	K3
      0x8C040304,  //  0007  GETMET	R1	R1	K4
      0x880C0105,  //  0008  GETMBR	R3	R0	K5
      0xB8120600,  //  0009  GETNGBL	R4	K3
      0x88100906,  //  000A  GETMBR	R4	R4	K6
      0x7C040600,  //  000B  CALL	R1	3
      0xB8060600,  //  000C  GETNGBL	R1	K3
      0x8C040304,  //  000D  GETMET	R1	R1	K4
      0x880C0107,  //  000E  GETMBR	R3	R0	K7
      0xB8120600,  //  000F  GETNGBL	R4	K3
      0x88100908,  //  0010  GETMBR	R4	R4	K8
      0x7C040600,  //  0011  CALL	R1	3
      0xB8060600,  //  0012  GETNGBL	R1	K3
      0x8C040304,  //  0013  GETMET	R1	R1	K4
      0x880C0109,  //  0014  GETMBR	R3	R0	K9
      0xB8120600,  //  0015  GETNGBL	R4	K3
      0x88100908,  //  0016  GETMBR	R4	R4	K8
      0x7C040600,  //  0017  CALL	R1	3
      0x70020063,  //  0018  JMP		#007D
      0x88040100,  //  0019  GETMBR	R1	R0	K0
      0x1C04030A,  //  001A  EQ	R1	R1	K10
      0x78060015,  //  001B  JMPF	R1	#0032
      0x60040001,  //  001C  GETGBL	R1	G1
      0x5808000B,  //  001D  LDCONST	R2	K11
      0x7C040200,  //  001E  CALL	R1	1
      0xB8060600,  //  001F  GETNGBL	R1	K3
      0x8C040304,  //  0020  GETMET	R1	R1	K4
      0x880C0105,  //  0021  GETMBR	R3	R0	K5
      0xB8120600,  //  0022  GETNGBL	R4	K3
      0x88100906,  //  0023  GETMBR	R4	R4	K6
      0x7C040600,  //  0024  CALL	R1	3
      0xB8060600,  //  0025  GETNGBL	R1	K3
      0x8C040304,  //  0026  GETMET	R1	R1	K4
      0x880C0107,  //  0027  GETMBR	R3	R0	K7
      0xB8120600,  //  0028  GETNGBL	R4	K3
      0x88100906,  //  0029  GETMBR	R4	R4	K6
      0x7C040600,  //  002A  CALL	R1	3
      0xB8060600,  //  002B  GETNGBL	R1	K3
      0x8C040304,  //  002C  GETMET	R1	R1	K4
      0x880C0109,  //  002D  GETMBR	R3	R0	K9
      0xB8120600,  //  002E  GETNGBL	R4	K3
      0x88100908,  //  002F  GETMBR	R4	R4	K8
      0x7C040600,  //  0030  CALL	R1	3
      0x7002004A,  //  0031  JMP		#007D
      0x88040100,  //  0032  GETMBR	R1	R0	K0
      0x1C04030C,  //  0033  EQ	R1	R1	K12
      0x78060015,  //  0034  JMPF	R1	#004B
      0x60040001,  //  0035  GETGBL	R1	G1
      0x5808000D,  //  0036  LDCONST	R2	K13
      0x7C040200,  //  0037  CALL	R1	1
      0xB8060600,  //  0038  GETNGBL	R1	K3
      0x8C040304,  //  0039  GETMET	R1	R1	K4
      0x880C0105,  //  003A  GETMBR	R3	R0	K5
      0xB8120600,  //  003B  GETNGBL	R4	K3
      0x88100906,  //  003C  GETMBR	R4	R4	K6
      0x7C040600,  //  003D  CALL	R1	3
      0xB8060600,  //  003E  GETNGBL	R1	K3
      0x8C040304,  //  003F  GETMET	R1	R1	K4
      0x880C0107,  //  0040  GETMBR	R3	R0	K7
      0xB8120600,  //  0041  GETNGBL	R4	K3
      0x88100908,  //  0042  GETMBR	R4	R4	K8
      0x7C040600,  //  0043  CALL	R1	3
      0xB8060600,  //  0044  GETNGBL	R1	K3
      0x8C040304,  //  0045  GETMET	R1	R1	K4
      0x880C0109,  //  0046  GETMBR	R3	R0	K9
      0xB8120600,  //  0047  GETNGBL	R4	K3
      0x88100906,  //  0048  GETMBR	R4	R4	K6
      0x7C040600,  //  0049  CALL	R1	3
      0x70020031,  //  004A  JMP		#007D
      0x88040100,  //  004B  GETMBR	R1	R0	K0
      0x540A0003,  //  004C  LDINT	R2	4
      0x1C040202,  //  004D  EQ	R1	R1	R2
      0x78060015,  //  004E  JMPF	R1	#0065
      0x60040001,  //  004F  GETGBL	R1	G1
      0x5808000E,  //  0050  LDCONST	R2	K14
      0x7C040200,  //  0051  CALL	R1	1
      0xB8060600,  //  0052  GETNGBL	R1	K3
      0x8C040304,  //  0053  GETMET	R1	R1	K4
      0x880C0105,  //  0054  GETMBR	R3	R0	K5
      0xB8120600,  //  0055  GETNGBL	R4	K3
      0x88100908,  //  0056  GETMBR	R4	R4	K8
      0x7C040600,  //  0057  CALL	R1	3
      0xB8060600,  //  0058  GETNGBL	R1	K3
      0x8C040304,  //  0059  GETMET	R1	R1	K4
      0x880C0107,  //  005A  GETMBR	R3	R0	K7
      0xB8120600,  //  005B  GETNGBL	R4	K3
      0x88100906,  //  005C  GETMBR	R4	R4	K6
      0x7C040600,  //  005D  CALL	R1	3
      0xB8060600,  //  005E  GETNGBL	R1	K3
      0x8C040304,  //  005F  GETMET	R1	R1	K4
      0x880C0109,  //  0060  GETMBR	R3	R0	K9
      0xB8120600,  //  0061  GETNGBL	R4	K3
      0x88100906,  //  0062  GETMBR	R4	R4	K6
      0x7C040600,  //  0063  CALL	R1	3
      0x70020017,  //  0064  JMP		#007D
      0x88040100,  //  0065  GETMBR	R1	R0	K0
      0x1C04030F,  //  0066  EQ	R1	R1	K15
      0x78060014,  //  0067  JMPF	R1	#007D
      0x60040001,  //  0068  GETGBL	R1	G1
      0x5808000D,  //  0069  LDCONST	R2	K13
      0x7C040200,  //  006A  CALL	R1	1
      0xB8060600,  //  006B  GETNGBL	R1	K3
      0x8C040304,  //  006C  GETMET	R1	R1	K4
      0x880C0105,  //  006D  GETMBR	R3	R0	K5
      0xB8120600,  //  006E  GETNGBL	R4	K3
      0x88100906,  //  006F  GETMBR	R4	R4	K6
      0x7C040600,  //  0070  CALL	R1	3
      0xB8060600,  //  0071  GETNGBL	R1	K3
      0x8C040304,  //  0072  GETMET	R1	R1	K4
      0x880C0109,  //  0073  GETMBR	R3	R0	K9
      0xB8120600,  //  0074  GETNGBL	R4	K3
      0x88100906,  //  0075  GETMBR	R4	R4	K6
      0x7C040600,  //  0076  CALL	R1	3
      0xB8060600,  //  0077  GETNGBL	R1	K3
      0x8C040304,  //  0078  GETMET	R1	R1	K4
      0x880C0107,  //  0079  GETMBR	R3	R0	K7
      0xB8120600,  //  007A  GETNGBL	R4	K3
      0x88100906,  //  007B  GETMBR	R4	R4	K6
      0x7C040600,  //  007C  CALL	R1	3
      0x80000000,  //  007D  RET	0
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified class: ezie_fan
********************************************************************/
be_local_class(ezie_fan,
    5,
    NULL,
    be_nested_map(11,
    ( (struct bmapnode*) &(const bmapnode[]) {
        { be_const_key(out4, 5), be_const_var(3) },
        { be_const_key(out3, -1), be_const_var(2) },
        { be_const_key(out2, -1), be_const_var(1) },
        { be_const_key(button_click, 7), be_const_closure(ezie_fan_button_click_closure) },
        { be_const_key(set_speed, -1), be_const_var(4) },
        { be_const_key(update_fan_relays, 6), be_const_closure(ezie_fan_update_fan_relays_closure) },
        { be_const_key(web_add_main_button, -1), be_const_closure(ezie_fan_web_add_main_button_closure) },
        { be_const_key(web_sensor, 10), be_const_closure(ezie_fan_web_sensor_closure) },
        { be_const_key(fanspeed, -1), be_const_closure(ezie_fan_fanspeed_closure) },
        { be_const_key(init, -1), be_const_closure(ezie_fan_init_closure) },
        { be_const_key(out1, -1), be_const_var(0) },
    })),
    (bstring*) &be_const_str_ezie_fan
);
/*******************************************************************/

void be_load_ezie_fan_class(bvm *vm) {
    be_pushntvclass(vm, &be_class_ezie_fan);
    be_setglobal(vm, "ezie_fan");
    be_pop(vm, 1);
}
/********************************************************************/
/* End of solidification */
