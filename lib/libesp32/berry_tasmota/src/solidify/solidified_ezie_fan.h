/* Solidification of ezie_fan.h */
/********************************************************************\
* Generated code, don't edit                                         *
\********************************************************************/
#include "be_constobj.h"

extern const bclass be_class_ezie_fan;

/********************************************************************
** Solidified function: web_sensor
********************************************************************/
be_local_closure(ezie_fan_web_sensor,   /* name */
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
    /* K1   */  be_nested_str(has_arg),
    /* K2   */  be_nested_str(m_speed),
    /* K3   */  be_nested_str(tasmota),
    /* K4   */  be_nested_str(cmd),
    /* K5   */  be_nested_str(fanspeed_X20_X25s),
    /* K6   */  be_nested_str(arg),
    }),
    &be_const_str_web_sensor,
    &be_const_str_solidified,
    ( &(const binstruction[15]) {  /* code */
      0xA4060000,  //  0000  IMPORT	R1	K0
      0x8C080301,  //  0001  GETMET	R2	R1	K1
      0x58100002,  //  0002  LDCONST	R4	K2
      0x7C080400,  //  0003  CALL	R2	2
      0x780A0008,  //  0004  JMPF	R2	#000E
      0xB80A0600,  //  0005  GETNGBL	R2	K3
      0x8C080504,  //  0006  GETMET	R2	R2	K4
      0x60100018,  //  0007  GETGBL	R4	G24
      0x58140005,  //  0008  LDCONST	R5	K5
      0x8C180306,  //  0009  GETMET	R6	R1	K6
      0x58200002,  //  000A  LDCONST	R8	K2
      0x7C180400,  //  000B  CALL	R6	2
      0x7C100400,  //  000C  CALL	R4	2
      0x7C080400,  //  000D  CALL	R2	2
      0x80000000,  //  000E  RET	0
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: web_add_main_button
********************************************************************/
be_local_closure(ezie_fan_web_add_main_button,   /* name */
  be_nested_proto(
    8,                          /* nstack */
    1,                          /* argc */
    2,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    ( &(const bvalue[ 5]) {     /* constants */
    /* K0   */  be_nested_str(webserver),
    /* K1   */  be_nested_str(content_send),
    /* K2   */  be_nested_str(_X3Cp_X3EFAN_X20Speed_X3A_X3C_X2Fp_X3E),
    /* K3   */  be_nested_str(_X3Cinput_X20type_X3D_X27range_X27_X20name_X3D_X27fan_speed_X27_X20min_X3D_X270_X27_X20max_X3D_X274_X27_X20step_X3D_X271_X27_X20value_X3D_X27_X25i_X27oninput_X3D_X27this_X2EnextElementSibling_X2Evalue_X20_X3D_X20this_X2Evalue_X27_X20onchange_X3D_X27la_X28_X22_X26m_speed_X3D_X22_X2Bthis_X2Evalue_X29_X3B_X27_X2F_X3E_X3Coutput_X3E_X25i_X3C_X2Foutput_X3E),
    /* K4   */  be_nested_str(set_speed),
    }),
    &be_const_str_web_add_main_button,
    &be_const_str_solidified,
    ( &(const binstruction[12]) {  /* code */
      0xA4060000,  //  0000  IMPORT	R1	K0
      0x8C080301,  //  0001  GETMET	R2	R1	K1
      0x58100002,  //  0002  LDCONST	R4	K2
      0x7C080400,  //  0003  CALL	R2	2
      0x8C080301,  //  0004  GETMET	R2	R1	K1
      0x60100018,  //  0005  GETGBL	R4	G24
      0x58140003,  //  0006  LDCONST	R5	K3
      0x88180104,  //  0007  GETMBR	R6	R0	K4
      0x881C0104,  //  0008  GETMBR	R7	R0	K4
      0x7C100600,  //  0009  CALL	R4	3
      0x7C080400,  //  000A  CALL	R2	2
      0x80000000,  //  000B  RET	0
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: get_speed
********************************************************************/
be_local_closure(ezie_fan_get_speed,   /* name */
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
    /* K0   */  be_nested_str(set_speed),
    }),
    &be_const_str_get_speed,
    &be_const_str_solidified,
    ( &(const binstruction[ 2]) {  /* code */
      0x88040100,  //  0000  GETMBR	R1	R0	K0
      0x80040200,  //  0001  RET	1	R1
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: fanspeed
********************************************************************/
be_local_closure(ezie_fan_fanspeed,   /* name */
  be_nested_proto(
    12,                          /* nstack */
    5,                          /* argc */
    2,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    ( &(const bvalue[15]) {     /* constants */
    /* K0   */  be_nested_str(set_speed),
    /* K1   */  be_nested_str(string),
    /* K2   */  be_nested_str(find),
    /* K3   */  be_nested_str(fanspeed),
    /* K4   */  be_nested_str(_X2D),
    /* K5   */  be_const_int(1),
    /* K6   */  be_nested_str(_X2B),
    /* K7   */  be_const_int(0),
    /* K8   */  be_nested_str(update_fan_relays),
    /* K9   */  be_nested_str(tasmota),
    /* K10  */  be_nested_str(publish_result),
    /* K11  */  be_nested_str(_X7B_X22EZIE_X22_X3A_X7B_X22FanSpeed_Updated_X22_X3A_X25d_X7D_X7D),
    /* K12  */  be_nested_str(EZIE),
    /* K13  */  be_nested_str(resp_cmnd),
    /* K14  */  be_nested_str(_X7B_X20_X22fanspeed_X22_X3A_X25d_X20_X7D),
    }),
    &be_const_str_fanspeed,
    &be_const_str_solidified,
    ( &(const binstruction[79]) {  /* code */
      0x88140100,  //  0000  GETMBR	R5	R0	K0
      0x4C180000,  //  0001  LDNIL	R6
      0x20180806,  //  0002  NE	R6	R4	R6
      0x781A0011,  //  0003  JMPF	R6	#0016
      0x60180004,  //  0004  GETGBL	R6	G4
      0x5C1C0800,  //  0005  MOVE	R7	R4
      0x7C180200,  //  0006  CALL	R6	1
      0x1C180D01,  //  0007  EQ	R6	R6	K1
      0x781A000C,  //  0008  JMPF	R6	#0016
      0x8C180902,  //  0009  GETMET	R6	R4	K2
      0x58200003,  //  000A  LDCONST	R8	K3
      0x7C180400,  //  000B  CALL	R6	2
      0x4C1C0000,  //  000C  LDNIL	R7
      0x20180C07,  //  000D  NE	R6	R6	R7
      0x781A0006,  //  000E  JMPF	R6	#0016
      0x60180009,  //  000F  GETGBL	R6	G9
      0x8C1C0902,  //  0010  GETMET	R7	R4	K2
      0x58240003,  //  0011  LDCONST	R9	K3
      0x7C1C0400,  //  0012  CALL	R7	2
      0x7C180200,  //  0013  CALL	R6	1
      0x90020006,  //  0014  SETMBR	R0	K0	R6
      0x70020017,  //  0015  JMP		#002E
      0x4C180000,  //  0016  LDNIL	R6
      0x20180606,  //  0017  NE	R6	R3	R6
      0x781A0014,  //  0018  JMPF	R6	#002E
      0x1C180704,  //  0019  EQ	R6	R3	K4
      0x781A0003,  //  001A  JMPF	R6	#001F
      0x88180100,  //  001B  GETMBR	R6	R0	K0
      0x04180D05,  //  001C  SUB	R6	R6	K5
      0x90020006,  //  001D  SETMBR	R0	K0	R6
      0x7002000E,  //  001E  JMP		#002E
      0x1C180706,  //  001F  EQ	R6	R3	K6
      0x781A0003,  //  0020  JMPF	R6	#0025
      0x88180100,  //  0021  GETMBR	R6	R0	K0
      0x00180D05,  //  0022  ADD	R6	R6	K5
      0x90020006,  //  0023  SETMBR	R0	K0	R6
      0x70020008,  //  0024  JMP		#002E
      0x6018000C,  //  0025  GETGBL	R6	G12
      0x5C1C0600,  //  0026  MOVE	R7	R3
      0x7C180200,  //  0027  CALL	R6	1
      0x24180D07,  //  0028  GT	R6	R6	K7
      0x781A0003,  //  0029  JMPF	R6	#002E
      0x60180009,  //  002A  GETGBL	R6	G9
      0x5C1C0600,  //  002B  MOVE	R7	R3
      0x7C180200,  //  002C  CALL	R6	1
      0x90020006,  //  002D  SETMBR	R0	K0	R6
      0x88180100,  //  002E  GETMBR	R6	R0	K0
      0x14180D07,  //  002F  LT	R6	R6	K7
      0x781A0000,  //  0030  JMPF	R6	#0032
      0x90020107,  //  0031  SETMBR	R0	K0	K7
      0x88180100,  //  0032  GETMBR	R6	R0	K0
      0x541E0003,  //  0033  LDINT	R7	4
      0x24180C07,  //  0034  GT	R6	R6	R7
      0x781A0001,  //  0035  JMPF	R6	#0038
      0x541A0003,  //  0036  LDINT	R6	4
      0x90020006,  //  0037  SETMBR	R0	K0	R6
      0x8C180108,  //  0038  GETMET	R6	R0	K8
      0x7C180200,  //  0039  CALL	R6	1
      0x88180100,  //  003A  GETMBR	R6	R0	K0
      0x20180A06,  //  003B  NE	R6	R5	R6
      0x781A0009,  //  003C  JMPF	R6	#0047
      0xB81A1200,  //  003D  GETNGBL	R6	K9
      0x8C180D0A,  //  003E  GETMET	R6	R6	K10
      0x60200018,  //  003F  GETGBL	R8	G24
      0x5824000B,  //  0040  LDCONST	R9	K11
      0x60280009,  //  0041  GETGBL	R10	G9
      0x882C0100,  //  0042  GETMBR	R11	R0	K0
      0x7C280200,  //  0043  CALL	R10	1
      0x7C200400,  //  0044  CALL	R8	2
      0x5824000C,  //  0045  LDCONST	R9	K12
      0x7C180600,  //  0046  CALL	R6	3
      0xB81A1200,  //  0047  GETNGBL	R6	K9
      0x8C180D0D,  //  0048  GETMET	R6	R6	K13
      0x60200018,  //  0049  GETGBL	R8	G24
      0x5824000E,  //  004A  LDCONST	R9	K14
      0x88280100,  //  004B  GETMBR	R10	R0	K0
      0x7C200400,  //  004C  CALL	R8	2
      0x7C180400,  //  004D  CALL	R6	2
      0x80000000,  //  004E  RET	0
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
    ( &(const struct bproto*[ 1]) {
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
    ( &(const bvalue[15]) {     /* constants */
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
    /* K12  */  be_nested_str(add_cmd),
    /* K13  */  be_nested_str(fanspeed),
    /* K14  */  be_nested_str(add_driver),
    }),
    &be_const_str_init,
    &be_const_str_solidified,
    ( &(const binstruction[56]) {  /* code */
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
      0x8C04030E,  //  0033  GETMET	R1	R1	K14
      0x5C0C0000,  //  0034  MOVE	R3	R0
      0x7C040400,  //  0035  CALL	R1	2
      0xA0000000,  //  0036  CLOSE	R0
      0x80000000,  //  0037  RET	0
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
    ( &(const bvalue[12]) {     /* constants */
    /* K0   */  be_nested_str(set_speed),
    /* K1   */  be_const_int(3),
    /* K2   */  be_nested_str(gpio),
    /* K3   */  be_nested_str(digital_write),
    /* K4   */  be_nested_str(out1),
    /* K5   */  be_nested_str(LOW),
    /* K6   */  be_nested_str(out2),
    /* K7   */  be_nested_str(HIGH),
    /* K8   */  be_nested_str(out3),
    /* K9   */  be_const_int(2),
    /* K10  */  be_const_int(1),
    /* K11  */  be_const_int(0),
    }),
    &be_const_str_update_fan_relays,
    &be_const_str_solidified,
    ( &(const binstruction[111]) {  /* code */
      0x88040100,  //  0000  GETMBR	R1	R0	K0
      0x1C040301,  //  0001  EQ	R1	R1	K1
      0x78060012,  //  0002  JMPF	R1	#0016
      0xB8060400,  //  0003  GETNGBL	R1	K2
      0x8C040303,  //  0004  GETMET	R1	R1	K3
      0x880C0104,  //  0005  GETMBR	R3	R0	K4
      0xB8120400,  //  0006  GETNGBL	R4	K2
      0x88100905,  //  0007  GETMBR	R4	R4	K5
      0x7C040600,  //  0008  CALL	R1	3
      0xB8060400,  //  0009  GETNGBL	R1	K2
      0x8C040303,  //  000A  GETMET	R1	R1	K3
      0x880C0106,  //  000B  GETMBR	R3	R0	K6
      0xB8120400,  //  000C  GETNGBL	R4	K2
      0x88100907,  //  000D  GETMBR	R4	R4	K7
      0x7C040600,  //  000E  CALL	R1	3
      0xB8060400,  //  000F  GETNGBL	R1	K2
      0x8C040303,  //  0010  GETMET	R1	R1	K3
      0x880C0108,  //  0011  GETMBR	R3	R0	K8
      0xB8120400,  //  0012  GETNGBL	R4	K2
      0x88100907,  //  0013  GETMBR	R4	R4	K7
      0x7C040600,  //  0014  CALL	R1	3
      0x70020057,  //  0015  JMP		#006E
      0x88040100,  //  0016  GETMBR	R1	R0	K0
      0x1C040309,  //  0017  EQ	R1	R1	K9
      0x78060012,  //  0018  JMPF	R1	#002C
      0xB8060400,  //  0019  GETNGBL	R1	K2
      0x8C040303,  //  001A  GETMET	R1	R1	K3
      0x880C0104,  //  001B  GETMBR	R3	R0	K4
      0xB8120400,  //  001C  GETNGBL	R4	K2
      0x88100905,  //  001D  GETMBR	R4	R4	K5
      0x7C040600,  //  001E  CALL	R1	3
      0xB8060400,  //  001F  GETNGBL	R1	K2
      0x8C040303,  //  0020  GETMET	R1	R1	K3
      0x880C0106,  //  0021  GETMBR	R3	R0	K6
      0xB8120400,  //  0022  GETNGBL	R4	K2
      0x88100905,  //  0023  GETMBR	R4	R4	K5
      0x7C040600,  //  0024  CALL	R1	3
      0xB8060400,  //  0025  GETNGBL	R1	K2
      0x8C040303,  //  0026  GETMET	R1	R1	K3
      0x880C0108,  //  0027  GETMBR	R3	R0	K8
      0xB8120400,  //  0028  GETNGBL	R4	K2
      0x88100907,  //  0029  GETMBR	R4	R4	K7
      0x7C040600,  //  002A  CALL	R1	3
      0x70020041,  //  002B  JMP		#006E
      0x88040100,  //  002C  GETMBR	R1	R0	K0
      0x1C04030A,  //  002D  EQ	R1	R1	K10
      0x78060012,  //  002E  JMPF	R1	#0042
      0xB8060400,  //  002F  GETNGBL	R1	K2
      0x8C040303,  //  0030  GETMET	R1	R1	K3
      0x880C0104,  //  0031  GETMBR	R3	R0	K4
      0xB8120400,  //  0032  GETNGBL	R4	K2
      0x88100905,  //  0033  GETMBR	R4	R4	K5
      0x7C040600,  //  0034  CALL	R1	3
      0xB8060400,  //  0035  GETNGBL	R1	K2
      0x8C040303,  //  0036  GETMET	R1	R1	K3
      0x880C0106,  //  0037  GETMBR	R3	R0	K6
      0xB8120400,  //  0038  GETNGBL	R4	K2
      0x88100907,  //  0039  GETMBR	R4	R4	K7
      0x7C040600,  //  003A  CALL	R1	3
      0xB8060400,  //  003B  GETNGBL	R1	K2
      0x8C040303,  //  003C  GETMET	R1	R1	K3
      0x880C0108,  //  003D  GETMBR	R3	R0	K8
      0xB8120400,  //  003E  GETNGBL	R4	K2
      0x88100905,  //  003F  GETMBR	R4	R4	K5
      0x7C040600,  //  0040  CALL	R1	3
      0x7002002B,  //  0041  JMP		#006E
      0x88040100,  //  0042  GETMBR	R1	R0	K0
      0x540A0003,  //  0043  LDINT	R2	4
      0x1C040202,  //  0044  EQ	R1	R1	R2
      0x78060012,  //  0045  JMPF	R1	#0059
      0xB8060400,  //  0046  GETNGBL	R1	K2
      0x8C040303,  //  0047  GETMET	R1	R1	K3
      0x880C0104,  //  0048  GETMBR	R3	R0	K4
      0xB8120400,  //  0049  GETNGBL	R4	K2
      0x88100907,  //  004A  GETMBR	R4	R4	K7
      0x7C040600,  //  004B  CALL	R1	3
      0xB8060400,  //  004C  GETNGBL	R1	K2
      0x8C040303,  //  004D  GETMET	R1	R1	K3
      0x880C0106,  //  004E  GETMBR	R3	R0	K6
      0xB8120400,  //  004F  GETNGBL	R4	K2
      0x88100905,  //  0050  GETMBR	R4	R4	K5
      0x7C040600,  //  0051  CALL	R1	3
      0xB8060400,  //  0052  GETNGBL	R1	K2
      0x8C040303,  //  0053  GETMET	R1	R1	K3
      0x880C0108,  //  0054  GETMBR	R3	R0	K8
      0xB8120400,  //  0055  GETNGBL	R4	K2
      0x88100905,  //  0056  GETMBR	R4	R4	K5
      0x7C040600,  //  0057  CALL	R1	3
      0x70020014,  //  0058  JMP		#006E
      0x88040100,  //  0059  GETMBR	R1	R0	K0
      0x1C04030B,  //  005A  EQ	R1	R1	K11
      0x78060011,  //  005B  JMPF	R1	#006E
      0xB8060400,  //  005C  GETNGBL	R1	K2
      0x8C040303,  //  005D  GETMET	R1	R1	K3
      0x880C0104,  //  005E  GETMBR	R3	R0	K4
      0xB8120400,  //  005F  GETNGBL	R4	K2
      0x88100905,  //  0060  GETMBR	R4	R4	K5
      0x7C040600,  //  0061  CALL	R1	3
      0xB8060400,  //  0062  GETNGBL	R1	K2
      0x8C040303,  //  0063  GETMET	R1	R1	K3
      0x880C0108,  //  0064  GETMBR	R3	R0	K8
      0xB8120400,  //  0065  GETNGBL	R4	K2
      0x88100905,  //  0066  GETMBR	R4	R4	K5
      0x7C040600,  //  0067  CALL	R1	3
      0xB8060400,  //  0068  GETNGBL	R1	K2
      0x8C040303,  //  0069  GETMET	R1	R1	K3
      0x880C0106,  //  006A  GETMBR	R3	R0	K6
      0xB8120400,  //  006B  GETNGBL	R4	K2
      0x88100905,  //  006C  GETMBR	R4	R4	K5
      0x7C040600,  //  006D  CALL	R1	3
      0x80000000,  //  006E  RET	0
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
        { be_const_key(web_sensor, 10), be_const_closure(ezie_fan_web_sensor_closure) },
        { be_const_key(set_speed, -1), be_const_var(4) },
        { be_const_key(update_fan_relays, 6), be_const_closure(ezie_fan_update_fan_relays_closure) },
        { be_const_key(web_add_main_button, -1), be_const_closure(ezie_fan_web_add_main_button_closure) },
        { be_const_key(get_speed, -1), be_const_closure(ezie_fan_get_speed_closure) },
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
