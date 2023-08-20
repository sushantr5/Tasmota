/* Solidification of Matter_Plugin_Fan.h */
/********************************************************************\
* Generated code, don't edit                                         *
\********************************************************************/
#include "be_constobj.h"

extern const bclass be_class_Matter_Plugin_Fan;

/********************************************************************
** Solidified function: update_shadow
********************************************************************/
be_local_closure(Matter_Plugin_Fan_update_shadow,   /* name */
  be_nested_proto(
    8,                          /* nstack */
    1,                          /* argc */
    2,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    ( &(const bvalue[ 8]) {     /* constants */
    /* K0   */  be_const_int(0),
    /* K1   */  be_nested_str_weak(tasmota),
    /* K2   */  be_nested_str_weak(cmd),
    /* K3   */  be_nested_str_weak(fanspeed),
    /* K4   */  be_nested_str_weak(find),
    /* K5   */  be_nested_str_weak(attribute_updated),
    /* K6   */  be_const_int(2),
    /* K7   */  be_nested_str_weak(update_shadow),
    }),
    be_str_weak(update_shadow),
    &be_const_str_solidified,
    ( &(const binstruction[37]) {  /* code */
      0x58040000,  //  0000  LDCONST	R1	K0
      0xB80A0200,  //  0001  GETNGBL	R2	K1
      0x8C080502,  //  0002  GETMET	R2	R2	K2
      0x58100003,  //  0003  LDCONST	R4	K3
      0x7C080400,  //  0004  CALL	R2	2
      0x8C0C0504,  //  0005  GETMET	R3	R2	K4
      0x58140003,  //  0006  LDCONST	R5	K3
      0x7C0C0400,  //  0007  CALL	R3	2
      0x60100009,  //  0008  GETGBL	R4	G9
      0x5C140600,  //  0009  MOVE	R5	R3
      0x7C100200,  //  000A  CALL	R4	1
      0x5C040800,  //  000B  MOVE	R1	R4
      0x4C100000,  //  000C  LDNIL	R4
      0x1C100204,  //  000D  EQ	R4	R1	R4
      0x78120000,  //  000E  JMPF	R4	#0010
      0x88040103,  //  000F  GETMBR	R1	R0	K3
      0x88100103,  //  0010  GETMBR	R4	R0	K3
      0x20100204,  //  0011  NE	R4	R1	R4
      0x7812000B,  //  0012  JMPF	R4	#001F
      0x60100009,  //  0013  GETGBL	R4	G9
      0x5C140200,  //  0014  MOVE	R5	R1
      0x7C100200,  //  0015  CALL	R4	1
      0x90020604,  //  0016  SETMBR	R0	K3	R4
      0x8C100105,  //  0017  GETMET	R4	R0	K5
      0x541A0201,  //  0018  LDINT	R6	514
      0x581C0006,  //  0019  LDCONST	R7	K6
      0x7C100600,  //  001A  CALL	R4	3
      0x8C100105,  //  001B  GETMET	R4	R0	K5
      0x541A0201,  //  001C  LDINT	R6	514
      0x581C0000,  //  001D  LDCONST	R7	K0
      0x7C100600,  //  001E  CALL	R4	3
      0x60100003,  //  001F  GETGBL	R4	G3
      0x5C140000,  //  0020  MOVE	R5	R0
      0x7C100200,  //  0021  CALL	R4	1
      0x8C100907,  //  0022  GETMET	R4	R4	K7
      0x7C100200,  //  0023  CALL	R4	1
      0x80000000,  //  0024  RET	0
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: read_attribute
********************************************************************/
be_local_closure(Matter_Plugin_Fan_read_attribute,   /* name */
  be_nested_proto(
    14,                          /* nstack */
    3,                          /* argc */
    2,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    ( &(const bvalue[16]) {     /* constants */
    /* K0   */  be_nested_str_weak(string),
    /* K1   */  be_nested_str_weak(matter),
    /* K2   */  be_nested_str_weak(TLV),
    /* K3   */  be_nested_str_weak(cluster),
    /* K4   */  be_nested_str_weak(attribute),
    /* K5   */  be_nested_str_weak(update_shadow_lazy),
    /* K6   */  be_const_int(0),
    /* K7   */  be_nested_str_weak(create_TLV),
    /* K8   */  be_nested_str_weak(U1),
    /* K9   */  be_nested_str_weak(fanspeed),
    /* K10  */  be_const_int(2),
    /* K11  */  be_nested_str_weak(tasmota),
    /* K12  */  be_nested_str_weak(scale_uint),
    /* K13  */  be_const_int(3),
    /* K14  */  be_nested_str_weak(U4),
    /* K15  */  be_nested_str_weak(read_attribute),
    }),
    be_str_weak(read_attribute),
    &be_const_str_solidified,
    ( &(const binstruction[104]) {  /* code */
      0xA40E0000,  //  0000  IMPORT	R3	K0
      0xB8120200,  //  0001  GETNGBL	R4	K1
      0x88100902,  //  0002  GETMBR	R4	R4	K2
      0x88140503,  //  0003  GETMBR	R5	R2	K3
      0x88180504,  //  0004  GETMBR	R6	R2	K4
      0x541E0201,  //  0005  LDINT	R7	514
      0x1C1C0A07,  //  0006  EQ	R7	R5	R7
      0x781E0056,  //  0007  JMPF	R7	#005F
      0x8C1C0105,  //  0008  GETMET	R7	R0	K5
      0x7C1C0200,  //  0009  CALL	R7	1
      0x1C1C0D06,  //  000A  EQ	R7	R6	K6
      0x781E0005,  //  000B  JMPF	R7	#0012
      0x8C1C0907,  //  000C  GETMET	R7	R4	K7
      0x88240908,  //  000D  GETMBR	R9	R4	K8
      0x88280109,  //  000E  GETMBR	R10	R0	K9
      0x7C1C0600,  //  000F  CALL	R7	3
      0x80040E00,  //  0010  RET	1	R7
      0x7002004B,  //  0011  JMP		#005E
      0x1C1C0D0A,  //  0012  EQ	R7	R6	K10
      0x781E000D,  //  0013  JMPF	R7	#0022
      0xB81E1600,  //  0014  GETNGBL	R7	K11
      0x8C1C0F0C,  //  0015  GETMET	R7	R7	K12
      0x88240109,  //  0016  GETMBR	R9	R0	K9
      0x58280006,  //  0017  LDCONST	R10	K6
      0x542E0003,  //  0018  LDINT	R11	4
      0x58300006,  //  0019  LDCONST	R12	K6
      0x54360063,  //  001A  LDINT	R13	100
      0x7C1C0C00,  //  001B  CALL	R7	6
      0x8C200907,  //  001C  GETMET	R8	R4	K7
      0x88280908,  //  001D  GETMBR	R10	R4	K8
      0x5C2C0E00,  //  001E  MOVE	R11	R7
      0x7C200600,  //  001F  CALL	R8	3
      0x80041000,  //  0020  RET	1	R8
      0x7002003B,  //  0021  JMP		#005E
      0x1C1C0D0D,  //  0022  EQ	R7	R6	K13
      0x781E000D,  //  0023  JMPF	R7	#0032
      0xB81E1600,  //  0024  GETNGBL	R7	K11
      0x8C1C0F0C,  //  0025  GETMET	R7	R7	K12
      0x88240109,  //  0026  GETMBR	R9	R0	K9
      0x58280006,  //  0027  LDCONST	R10	K6
      0x542E0003,  //  0028  LDINT	R11	4
      0x58300006,  //  0029  LDCONST	R12	K6
      0x54360063,  //  002A  LDINT	R13	100
      0x7C1C0C00,  //  002B  CALL	R7	6
      0x8C200907,  //  002C  GETMET	R8	R4	K7
      0x88280908,  //  002D  GETMBR	R10	R4	K8
      0x5C2C0E00,  //  002E  MOVE	R11	R7
      0x7C200600,  //  002F  CALL	R8	3
      0x80041000,  //  0030  RET	1	R8
      0x7002002B,  //  0031  JMP		#005E
      0x541E0003,  //  0032  LDINT	R7	4
      0x1C1C0C07,  //  0033  EQ	R7	R6	R7
      0x781E0005,  //  0034  JMPF	R7	#003B
      0x8C1C0907,  //  0035  GETMET	R7	R4	K7
      0x88240908,  //  0036  GETMBR	R9	R4	K8
      0x542A0003,  //  0037  LDINT	R10	4
      0x7C1C0600,  //  0038  CALL	R7	3
      0x80040E00,  //  0039  RET	1	R7
      0x70020022,  //  003A  JMP		#005E
      0x541E0004,  //  003B  LDINT	R7	5
      0x1C1C0C07,  //  003C  EQ	R7	R6	R7
      0x781E0005,  //  003D  JMPF	R7	#0044
      0x8C1C0907,  //  003E  GETMET	R7	R4	K7
      0x88240908,  //  003F  GETMBR	R9	R4	K8
      0x88280109,  //  0040  GETMBR	R10	R0	K9
      0x7C1C0600,  //  0041  CALL	R7	3
      0x80040E00,  //  0042  RET	1	R7
      0x70020019,  //  0043  JMP		#005E
      0x541E0005,  //  0044  LDINT	R7	6
      0x1C1C0C07,  //  0045  EQ	R7	R6	R7
      0x781E0005,  //  0046  JMPF	R7	#004D
      0x8C1C0907,  //  0047  GETMET	R7	R4	K7
      0x88240908,  //  0048  GETMBR	R9	R4	K8
      0x88280109,  //  0049  GETMBR	R10	R0	K9
      0x7C1C0600,  //  004A  CALL	R7	3
      0x80040E00,  //  004B  RET	1	R7
      0x70020010,  //  004C  JMP		#005E
      0x541EFFFB,  //  004D  LDINT	R7	65532
      0x1C1C0C07,  //  004E  EQ	R7	R6	R7
      0x781E0005,  //  004F  JMPF	R7	#0056
      0x8C1C0907,  //  0050  GETMET	R7	R4	K7
      0x8824090E,  //  0051  GETMBR	R9	R4	K14
      0x58280006,  //  0052  LDCONST	R10	K6
      0x7C1C0600,  //  0053  CALL	R7	3
      0x80040E00,  //  0054  RET	1	R7
      0x70020007,  //  0055  JMP		#005E
      0x541EFFFC,  //  0056  LDINT	R7	65533
      0x1C1C0C07,  //  0057  EQ	R7	R6	R7
      0x781E0004,  //  0058  JMPF	R7	#005E
      0x8C1C0907,  //  0059  GETMET	R7	R4	K7
      0x8824090E,  //  005A  GETMBR	R9	R4	K14
      0x5828000A,  //  005B  LDCONST	R10	K10
      0x7C1C0600,  //  005C  CALL	R7	3
      0x80040E00,  //  005D  RET	1	R7
      0x70020007,  //  005E  JMP		#0067
      0x601C0003,  //  005F  GETGBL	R7	G3
      0x5C200000,  //  0060  MOVE	R8	R0
      0x7C1C0200,  //  0061  CALL	R7	1
      0x8C1C0F0F,  //  0062  GETMET	R7	R7	K15
      0x5C240200,  //  0063  MOVE	R9	R1
      0x5C280400,  //  0064  MOVE	R10	R2
      0x7C1C0600,  //  0065  CALL	R7	3
      0x80040E00,  //  0066  RET	1	R7
      0x80000000,  //  0067  RET	0
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: init
********************************************************************/
be_local_closure(Matter_Plugin_Fan_init,   /* name */
  be_nested_proto(
    9,                          /* nstack */
    4,                          /* argc */
    2,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    ( &(const bvalue[ 3]) {     /* constants */
    /* K0   */  be_nested_str_weak(init),
    /* K1   */  be_nested_str_weak(fanspeed),
    /* K2   */  be_const_int(0),
    }),
    be_str_weak(init),
    &be_const_str_solidified,
    ( &(const binstruction[10]) {  /* code */
      0x60100003,  //  0000  GETGBL	R4	G3
      0x5C140000,  //  0001  MOVE	R5	R0
      0x7C100200,  //  0002  CALL	R4	1
      0x8C100900,  //  0003  GETMET	R4	R4	K0
      0x5C180200,  //  0004  MOVE	R6	R1
      0x5C1C0400,  //  0005  MOVE	R7	R2
      0x5C200600,  //  0006  MOVE	R8	R3
      0x7C100800,  //  0007  CALL	R4	4
      0x90020302,  //  0008  SETMBR	R0	K1	K2
      0x80000000,  //  0009  RET	0
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: invoke_request
********************************************************************/
be_local_closure(Matter_Plugin_Fan_invoke_request,   /* name */
  be_nested_proto(
    15,                          /* nstack */
    4,                          /* argc */
    2,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    ( &(const bvalue[17]) {     /* constants */
    /* K0   */  be_nested_str_weak(matter),
    /* K1   */  be_nested_str_weak(TLV),
    /* K2   */  be_nested_str_weak(cluster),
    /* K3   */  be_nested_str_weak(command),
    /* K4   */  be_const_int(0),
    /* K5   */  be_const_int(1),
    /* K6   */  be_const_int(2),
    /* K7   */  be_nested_str_weak(findsubval),
    /* K8   */  be_nested_str_weak(tasmota),
    /* K9   */  be_nested_str_weak(scale_uint),
    /* K10  */  be_nested_str_weak(cmd),
    /* K11  */  be_nested_str_weak(fanspeed_X20),
    /* K12  */  be_nested_str_weak(update_shadow),
    /* K13  */  be_nested_str_weak(log),
    /* K14  */  be_nested_str_weak(speed_X3A),
    /* K15  */  be_const_int(3),
    /* K16  */  be_nested_str_weak(invoke_request),
    }),
    be_str_weak(invoke_request),
    &be_const_str_solidified,
    ( &(const binstruction[86]) {  /* code */
      0xB8120000,  //  0000  GETNGBL	R4	K0
      0x88100901,  //  0001  GETMBR	R4	R4	K1
      0x88140702,  //  0002  GETMBR	R5	R3	K2
      0x88180703,  //  0003  GETMBR	R6	R3	K3
      0x541E0201,  //  0004  LDINT	R7	514
      0x1C1C0A07,  //  0005  EQ	R7	R5	R7
      0x781E0044,  //  0006  JMPF	R7	#004C
      0x1C1C0D04,  //  0007  EQ	R7	R6	K4
      0x781E0002,  //  0008  JMPF	R7	#000C
      0x501C0200,  //  0009  LDBOOL	R7	1	0
      0x80040E00,  //  000A  RET	1	R7
      0x7002003E,  //  000B  JMP		#004B
      0x1C1C0D05,  //  000C  EQ	R7	R6	K5
      0x781E0002,  //  000D  JMPF	R7	#0011
      0x501C0200,  //  000E  LDBOOL	R7	1	0
      0x80040E00,  //  000F  RET	1	R7
      0x70020039,  //  0010  JMP		#004B
      0x1C1C0D06,  //  0011  EQ	R7	R6	K6
      0x781E001B,  //  0012  JMPF	R7	#002F
      0x8C1C0507,  //  0013  GETMET	R7	R2	K7
      0x58240004,  //  0014  LDCONST	R9	K4
      0x7C1C0400,  //  0015  CALL	R7	2
      0xB8221000,  //  0016  GETNGBL	R8	K8
      0x8C201109,  //  0017  GETMET	R8	R8	K9
      0x5C280E00,  //  0018  MOVE	R10	R7
      0x582C0004,  //  0019  LDCONST	R11	K4
      0x54320063,  //  001A  LDINT	R12	100
      0x58340004,  //  001B  LDCONST	R13	K4
      0x543A0003,  //  001C  LDINT	R14	4
      0x7C200C00,  //  001D  CALL	R8	6
      0xB8261000,  //  001E  GETNGBL	R9	K8
      0x8C24130A,  //  001F  GETMET	R9	R9	K10
      0x602C0008,  //  0020  GETGBL	R11	G8
      0x5C301000,  //  0021  MOVE	R12	R8
      0x7C2C0200,  //  0022  CALL	R11	1
      0x002E160B,  //  0023  ADD	R11	K11	R11
      0x7C240400,  //  0024  CALL	R9	2
      0x8C24010C,  //  0025  GETMET	R9	R0	K12
      0x7C240200,  //  0026  CALL	R9	1
      0x60240008,  //  0027  GETGBL	R9	G8
      0x5C280E00,  //  0028  MOVE	R10	R7
      0x7C240200,  //  0029  CALL	R9	1
      0x00261C09,  //  002A  ADD	R9	K14	R9
      0x900E1A09,  //  002B  SETMBR	R3	K13	R9
      0x50240200,  //  002C  LDBOOL	R9	1	0
      0x80041200,  //  002D  RET	1	R9
      0x7002001B,  //  002E  JMP		#004B
      0x1C1C0D0F,  //  002F  EQ	R7	R6	K15
      0x781E0002,  //  0030  JMPF	R7	#0034
      0x501C0200,  //  0031  LDBOOL	R7	1	0
      0x80040E00,  //  0032  RET	1	R7
      0x70020016,  //  0033  JMP		#004B
      0x541E0003,  //  0034  LDINT	R7	4
      0x1C1C0C07,  //  0035  EQ	R7	R6	R7
      0x781E0002,  //  0036  JMPF	R7	#003A
      0x501C0200,  //  0037  LDBOOL	R7	1	0
      0x80040E00,  //  0038  RET	1	R7
      0x70020010,  //  0039  JMP		#004B
      0x541E0004,  //  003A  LDINT	R7	5
      0x1C1C0C07,  //  003B  EQ	R7	R6	R7
      0x781E0002,  //  003C  JMPF	R7	#0040
      0x501C0200,  //  003D  LDBOOL	R7	1	0
      0x80040E00,  //  003E  RET	1	R7
      0x7002000A,  //  003F  JMP		#004B
      0x541E0005,  //  0040  LDINT	R7	6
      0x1C1C0C07,  //  0041  EQ	R7	R6	R7
      0x781E0002,  //  0042  JMPF	R7	#0046
      0x501C0200,  //  0043  LDBOOL	R7	1	0
      0x80040E00,  //  0044  RET	1	R7
      0x70020004,  //  0045  JMP		#004B
      0x541E0006,  //  0046  LDINT	R7	7
      0x1C1C0C07,  //  0047  EQ	R7	R6	R7
      0x781E0001,  //  0048  JMPF	R7	#004B
      0x501C0200,  //  0049  LDBOOL	R7	1	0
      0x80040E00,  //  004A  RET	1	R7
      0x70020008,  //  004B  JMP		#0055
      0x601C0003,  //  004C  GETGBL	R7	G3
      0x5C200000,  //  004D  MOVE	R8	R0
      0x7C1C0200,  //  004E  CALL	R7	1
      0x8C1C0F10,  //  004F  GETMET	R7	R7	K16
      0x5C240200,  //  0050  MOVE	R9	R1
      0x5C280400,  //  0051  MOVE	R10	R2
      0x5C2C0600,  //  0052  MOVE	R11	R3
      0x7C1C0800,  //  0053  CALL	R7	4
      0x80040E00,  //  0054  RET	1	R7
      0x80000000,  //  0055  RET	0
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: write_attribute
********************************************************************/
be_local_closure(Matter_Plugin_Fan_write_attribute,   /* name */
  be_nested_proto(
    15,                          /* nstack */
    4,                          /* argc */
    2,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    ( &(const bvalue[16]) {     /* constants */
    /* K0   */  be_nested_str_weak(string),
    /* K1   */  be_nested_str_weak(matter),
    /* K2   */  be_nested_str_weak(TLV),
    /* K3   */  be_nested_str_weak(cluster),
    /* K4   */  be_nested_str_weak(attribute),
    /* K5   */  be_const_int(2),
    /* K6   */  be_nested_str_weak(int),
    /* K7   */  be_nested_str_weak(int64),
    /* K8   */  be_nested_str_weak(tasmota),
    /* K9   */  be_nested_str_weak(scale_uint),
    /* K10  */  be_const_int(0),
    /* K11  */  be_nested_str_weak(cmd),
    /* K12  */  be_nested_str_weak(fanspeed_X20),
    /* K13  */  be_nested_str_weak(attribute_updated),
    /* K14  */  be_nested_str_weak(status),
    /* K15  */  be_nested_str_weak(CONSTRAINT_ERROR),
    }),
    be_str_weak(write_attribute),
    &be_const_str_solidified,
    ( &(const binstruction[52]) {  /* code */
      0xA4120000,  //  0000  IMPORT	R4	K0
      0xB8160200,  //  0001  GETNGBL	R5	K1
      0x88140B02,  //  0002  GETMBR	R5	R5	K2
      0x88180503,  //  0003  GETMBR	R6	R2	K3
      0x881C0504,  //  0004  GETMBR	R7	R2	K4
      0x54220201,  //  0005  LDINT	R8	514
      0x1C200C08,  //  0006  EQ	R8	R6	R8
      0x7822002A,  //  0007  JMPF	R8	#0033
      0x1C200F05,  //  0008  EQ	R8	R7	K5
      0x78220028,  //  0009  JMPF	R8	#0033
      0x60200004,  //  000A  GETGBL	R8	G4
      0x5C240600,  //  000B  MOVE	R9	R3
      0x7C200200,  //  000C  CALL	R8	1
      0x1C201106,  //  000D  EQ	R8	R8	K6
      0x74220004,  //  000E  JMPT	R8	#0014
      0x6020000F,  //  000F  GETGBL	R8	G15
      0x5C240600,  //  0010  MOVE	R9	R3
      0xB82A0E00,  //  0011  GETNGBL	R10	K7
      0x7C200400,  //  0012  CALL	R8	2
      0x78220019,  //  0013  JMPF	R8	#002E
      0xB8221000,  //  0014  GETNGBL	R8	K8
      0x8C201109,  //  0015  GETMET	R8	R8	K9
      0x5C280600,  //  0016  MOVE	R10	R3
      0x582C000A,  //  0017  LDCONST	R11	K10
      0x54320063,  //  0018  LDINT	R12	100
      0x5834000A,  //  0019  LDCONST	R13	K10
      0x543A0003,  //  001A  LDINT	R14	4
      0x7C200C00,  //  001B  CALL	R8	6
      0xB8261000,  //  001C  GETNGBL	R9	K8
      0x8C24130B,  //  001D  GETMET	R9	R9	K11
      0x602C0008,  //  001E  GETGBL	R11	G8
      0x5C301000,  //  001F  MOVE	R12	R8
      0x7C2C0200,  //  0020  CALL	R11	1
      0x002E180B,  //  0021  ADD	R11	K12	R11
      0x7C240400,  //  0022  CALL	R9	2
      0x8C24010D,  //  0023  GETMET	R9	R0	K13
      0x882C0503,  //  0024  GETMBR	R11	R2	K3
      0x88300504,  //  0025  GETMBR	R12	R2	K4
      0x7C240600,  //  0026  CALL	R9	3
      0x8C24010D,  //  0027  GETMET	R9	R0	K13
      0x542E0201,  //  0028  LDINT	R11	514
      0x5830000A,  //  0029  LDCONST	R12	K10
      0x7C240600,  //  002A  CALL	R9	3
      0x50240200,  //  002B  LDBOOL	R9	1	0
      0x80041200,  //  002C  RET	1	R9
      0x70020004,  //  002D  JMP		#0033
      0xB8220200,  //  002E  GETNGBL	R8	K1
      0x8820110F,  //  002F  GETMBR	R8	R8	K15
      0x900A1C08,  //  0030  SETMBR	R2	K14	R8
      0x50200000,  //  0031  LDBOOL	R8	0	0
      0x80041000,  //  0032  RET	1	R8
      0x80000000,  //  0033  RET	0
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified class: Matter_Plugin_Fan
********************************************************************/
extern const bclass be_class_Matter_Plugin_Device;
be_local_class(Matter_Plugin_Fan,
    1,
    &be_class_Matter_Plugin_Device,
    be_nested_map(10,
    ( (struct bmapnode*) &(const bmapnode[]) {
        { be_const_key_weak(TYPES, -1), be_const_simple_instance(be_nested_simple_instance(&be_class_map, {
        be_const_map( *     be_nested_map(1,
    ( (struct bmapnode*) &(const bmapnode[]) {
        { be_const_key_int(43, -1), be_const_int(2) },
    }))    ) } )) },
        { be_const_key_weak(TYPE, -1), be_nested_str_weak(fan) },
        { be_const_key_weak(read_attribute, -1), be_const_closure(Matter_Plugin_Fan_read_attribute_closure) },
        { be_const_key_weak(fanspeed, -1), be_const_var(0) },
        { be_const_key_weak(NAME, 8), be_nested_str_weak(Fan) },
        { be_const_key_weak(init, 6), be_const_closure(Matter_Plugin_Fan_init_closure) },
        { be_const_key_weak(write_attribute, -1), be_const_closure(Matter_Plugin_Fan_write_attribute_closure) },
        { be_const_key_weak(invoke_request, -1), be_const_closure(Matter_Plugin_Fan_invoke_request_closure) },
        { be_const_key_weak(CLUSTERS, -1), be_const_simple_instance(be_nested_simple_instance(&be_class_map, {
        be_const_map( *     be_nested_map(1,
    ( (struct bmapnode*) &(const bmapnode[]) {
        { be_const_key_int(514, -1), be_const_simple_instance(be_nested_simple_instance(&be_class_list, {
        be_const_list( *     be_nested_list(8,
    ( (struct bvalue*) &(const bvalue[]) {
        be_const_int(0),
        be_const_int(2),
        be_const_int(3),
        be_const_int(4),
        be_const_int(5),
        be_const_int(6),
        be_const_int(65532),
        be_const_int(65533),
    }))    ) } )) },
    }))    ) } )) },
        { be_const_key_weak(update_shadow, 1), be_const_closure(Matter_Plugin_Fan_update_shadow_closure) },
    })),
    be_str_weak(Matter_Plugin_Fan)
);
/*******************************************************************/

void be_load_Matter_Plugin_Fan_class(bvm *vm) {
    be_pushntvclass(vm, &be_class_Matter_Plugin_Fan);
    be_setglobal(vm, "Matter_Plugin_Fan");
    be_pop(vm, 1);
}
/********************************************************************/
/* End of solidification */
