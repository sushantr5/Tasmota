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
    ( &(const bvalue[18]) {     /* constants */
    /* K0   */  be_nested_str_weak(string),
    /* K1   */  be_nested_str_weak(matter),
    /* K2   */  be_nested_str_weak(TLV),
    /* K3   */  be_nested_str_weak(cluster),
    /* K4   */  be_nested_str_weak(attribute),
    /* K5   */  be_nested_str_weak(format),
    /* K6   */  be_nested_str_weak(_X23_X23_X23SRR_X3AREAD_X20ATTRIBUTE_X20_X25s_X3A_X25s),
    /* K7   */  be_nested_str_weak(update_shadow_lazy),
    /* K8   */  be_const_int(0),
    /* K9   */  be_nested_str_weak(create_TLV),
    /* K10  */  be_nested_str_weak(U1),
    /* K11  */  be_nested_str_weak(fanspeed),
    /* K12  */  be_const_int(2),
    /* K13  */  be_nested_str_weak(tasmota),
    /* K14  */  be_nested_str_weak(scale_uint),
    /* K15  */  be_const_int(3),
    /* K16  */  be_nested_str_weak(U4),
    /* K17  */  be_nested_str_weak(read_attribute),
    }),
    be_str_weak(read_attribute),
    &be_const_str_solidified,
    ( &(const binstruction[115]) {  /* code */
      0xA40E0000,  //  0000  IMPORT	R3	K0
      0xB8120200,  //  0001  GETNGBL	R4	K1
      0x88100902,  //  0002  GETMBR	R4	R4	K2
      0x88140503,  //  0003  GETMBR	R5	R2	K3
      0x88180504,  //  0004  GETMBR	R6	R2	K4
      0x601C0001,  //  0005  GETGBL	R7	G1
      0x8C200705,  //  0006  GETMET	R8	R3	K5
      0x58280006,  //  0007  LDCONST	R10	K6
      0x602C0008,  //  0008  GETGBL	R11	G8
      0x5C300A00,  //  0009  MOVE	R12	R5
      0x7C2C0200,  //  000A  CALL	R11	1
      0x60300008,  //  000B  GETGBL	R12	G8
      0x5C340C00,  //  000C  MOVE	R13	R6
      0x7C300200,  //  000D  CALL	R12	1
      0x7C200800,  //  000E  CALL	R8	4
      0x7C1C0200,  //  000F  CALL	R7	1
      0x541E0201,  //  0010  LDINT	R7	514
      0x1C1C0A07,  //  0011  EQ	R7	R5	R7
      0x781E0056,  //  0012  JMPF	R7	#006A
      0x8C1C0107,  //  0013  GETMET	R7	R0	K7
      0x7C1C0200,  //  0014  CALL	R7	1
      0x1C1C0D08,  //  0015  EQ	R7	R6	K8
      0x781E0005,  //  0016  JMPF	R7	#001D
      0x8C1C0909,  //  0017  GETMET	R7	R4	K9
      0x8824090A,  //  0018  GETMBR	R9	R4	K10
      0x8828010B,  //  0019  GETMBR	R10	R0	K11
      0x7C1C0600,  //  001A  CALL	R7	3
      0x80040E00,  //  001B  RET	1	R7
      0x7002004B,  //  001C  JMP		#0069
      0x1C1C0D0C,  //  001D  EQ	R7	R6	K12
      0x781E000D,  //  001E  JMPF	R7	#002D
      0xB81E1A00,  //  001F  GETNGBL	R7	K13
      0x8C1C0F0E,  //  0020  GETMET	R7	R7	K14
      0x8824010B,  //  0021  GETMBR	R9	R0	K11
      0x58280008,  //  0022  LDCONST	R10	K8
      0x542E0003,  //  0023  LDINT	R11	4
      0x58300008,  //  0024  LDCONST	R12	K8
      0x54360063,  //  0025  LDINT	R13	100
      0x7C1C0C00,  //  0026  CALL	R7	6
      0x8C200909,  //  0027  GETMET	R8	R4	K9
      0x8828090A,  //  0028  GETMBR	R10	R4	K10
      0x5C2C0E00,  //  0029  MOVE	R11	R7
      0x7C200600,  //  002A  CALL	R8	3
      0x80041000,  //  002B  RET	1	R8
      0x7002003B,  //  002C  JMP		#0069
      0x1C1C0D0F,  //  002D  EQ	R7	R6	K15
      0x781E000D,  //  002E  JMPF	R7	#003D
      0xB81E1A00,  //  002F  GETNGBL	R7	K13
      0x8C1C0F0E,  //  0030  GETMET	R7	R7	K14
      0x8824010B,  //  0031  GETMBR	R9	R0	K11
      0x58280008,  //  0032  LDCONST	R10	K8
      0x542E0003,  //  0033  LDINT	R11	4
      0x58300008,  //  0034  LDCONST	R12	K8
      0x54360063,  //  0035  LDINT	R13	100
      0x7C1C0C00,  //  0036  CALL	R7	6
      0x8C200909,  //  0037  GETMET	R8	R4	K9
      0x8828090A,  //  0038  GETMBR	R10	R4	K10
      0x5C2C0E00,  //  0039  MOVE	R11	R7
      0x7C200600,  //  003A  CALL	R8	3
      0x80041000,  //  003B  RET	1	R8
      0x7002002B,  //  003C  JMP		#0069
      0x541E0003,  //  003D  LDINT	R7	4
      0x1C1C0C07,  //  003E  EQ	R7	R6	R7
      0x781E0005,  //  003F  JMPF	R7	#0046
      0x8C1C0909,  //  0040  GETMET	R7	R4	K9
      0x8824090A,  //  0041  GETMBR	R9	R4	K10
      0x542A0003,  //  0042  LDINT	R10	4
      0x7C1C0600,  //  0043  CALL	R7	3
      0x80040E00,  //  0044  RET	1	R7
      0x70020022,  //  0045  JMP		#0069
      0x541E0004,  //  0046  LDINT	R7	5
      0x1C1C0C07,  //  0047  EQ	R7	R6	R7
      0x781E0005,  //  0048  JMPF	R7	#004F
      0x8C1C0909,  //  0049  GETMET	R7	R4	K9
      0x8824090A,  //  004A  GETMBR	R9	R4	K10
      0x8828010B,  //  004B  GETMBR	R10	R0	K11
      0x7C1C0600,  //  004C  CALL	R7	3
      0x80040E00,  //  004D  RET	1	R7
      0x70020019,  //  004E  JMP		#0069
      0x541E0005,  //  004F  LDINT	R7	6
      0x1C1C0C07,  //  0050  EQ	R7	R6	R7
      0x781E0005,  //  0051  JMPF	R7	#0058
      0x8C1C0909,  //  0052  GETMET	R7	R4	K9
      0x8824090A,  //  0053  GETMBR	R9	R4	K10
      0x8828010B,  //  0054  GETMBR	R10	R0	K11
      0x7C1C0600,  //  0055  CALL	R7	3
      0x80040E00,  //  0056  RET	1	R7
      0x70020010,  //  0057  JMP		#0069
      0x541EFFFB,  //  0058  LDINT	R7	65532
      0x1C1C0C07,  //  0059  EQ	R7	R6	R7
      0x781E0005,  //  005A  JMPF	R7	#0061
      0x8C1C0909,  //  005B  GETMET	R7	R4	K9
      0x88240910,  //  005C  GETMBR	R9	R4	K16
      0x58280008,  //  005D  LDCONST	R10	K8
      0x7C1C0600,  //  005E  CALL	R7	3
      0x80040E00,  //  005F  RET	1	R7
      0x70020007,  //  0060  JMP		#0069
      0x541EFFFC,  //  0061  LDINT	R7	65533
      0x1C1C0C07,  //  0062  EQ	R7	R6	R7
      0x781E0004,  //  0063  JMPF	R7	#0069
      0x8C1C0909,  //  0064  GETMET	R7	R4	K9
      0x88240910,  //  0065  GETMBR	R9	R4	K16
      0x5828000C,  //  0066  LDCONST	R10	K12
      0x7C1C0600,  //  0067  CALL	R7	3
      0x80040E00,  //  0068  RET	1	R7
      0x70020007,  //  0069  JMP		#0072
      0x601C0003,  //  006A  GETGBL	R7	G3
      0x5C200000,  //  006B  MOVE	R8	R0
      0x7C1C0200,  //  006C  CALL	R7	1
      0x8C1C0F11,  //  006D  GETMET	R7	R7	K17
      0x5C240200,  //  006E  MOVE	R9	R1
      0x5C280400,  //  006F  MOVE	R10	R2
      0x7C1C0600,  //  0070  CALL	R7	3
      0x80040E00,  //  0071  RET	1	R7
      0x80000000,  //  0072  RET	0
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
    ( &(const bvalue[21]) {     /* constants */
    /* K0   */  be_nested_str_weak(matter),
    /* K1   */  be_nested_str_weak(TLV),
    /* K2   */  be_nested_str_weak(cluster),
    /* K3   */  be_nested_str_weak(command),
    /* K4   */  be_nested_str_weak(string),
    /* K5   */  be_nested_str_weak(format),
    /* K6   */  be_nested_str_weak(_X23_X23_X23SRR_X3AINVOKE_X20REQUEST_X20_X25s_X3A_X25s),
    /* K7   */  be_const_int(0),
    /* K8   */  be_const_int(1),
    /* K9   */  be_const_int(2),
    /* K10  */  be_nested_str_weak(findsubval),
    /* K11  */  be_nested_str_weak(_X23_X23_X23SRR_X3ASPEED_IN_X3A_X25s),
    /* K12  */  be_nested_str_weak(tasmota),
    /* K13  */  be_nested_str_weak(scale_uint),
    /* K14  */  be_nested_str_weak(cmd),
    /* K15  */  be_nested_str_weak(fanspeed_X20),
    /* K16  */  be_nested_str_weak(update_shadow),
    /* K17  */  be_nested_str_weak(log),
    /* K18  */  be_nested_str_weak(speed_X3A),
    /* K19  */  be_const_int(3),
    /* K20  */  be_nested_str_weak(invoke_request),
    }),
    be_str_weak(invoke_request),
    &be_const_str_solidified,
    ( &(const binstruction[107]) {  /* code */
      0xB8120000,  //  0000  GETNGBL	R4	K0
      0x88100901,  //  0001  GETMBR	R4	R4	K1
      0x88140702,  //  0002  GETMBR	R5	R3	K2
      0x88180703,  //  0003  GETMBR	R6	R3	K3
      0x601C0001,  //  0004  GETGBL	R7	G1
      0xB8220800,  //  0005  GETNGBL	R8	K4
      0x8C201105,  //  0006  GETMET	R8	R8	K5
      0x58280006,  //  0007  LDCONST	R10	K6
      0x602C0008,  //  0008  GETGBL	R11	G8
      0x5C300A00,  //  0009  MOVE	R12	R5
      0x7C2C0200,  //  000A  CALL	R11	1
      0x60300008,  //  000B  GETGBL	R12	G8
      0x5C340C00,  //  000C  MOVE	R13	R6
      0x7C300200,  //  000D  CALL	R12	1
      0x7C200800,  //  000E  CALL	R8	4
      0x7C1C0200,  //  000F  CALL	R7	1
      0x541E0201,  //  0010  LDINT	R7	514
      0x1C1C0A07,  //  0011  EQ	R7	R5	R7
      0x781E004D,  //  0012  JMPF	R7	#0061
      0x1C1C0D07,  //  0013  EQ	R7	R6	K7
      0x781E0002,  //  0014  JMPF	R7	#0018
      0x501C0200,  //  0015  LDBOOL	R7	1	0
      0x80040E00,  //  0016  RET	1	R7
      0x70020047,  //  0017  JMP		#0060
      0x1C1C0D08,  //  0018  EQ	R7	R6	K8
      0x781E0002,  //  0019  JMPF	R7	#001D
      0x501C0200,  //  001A  LDBOOL	R7	1	0
      0x80040E00,  //  001B  RET	1	R7
      0x70020042,  //  001C  JMP		#0060
      0x1C1C0D09,  //  001D  EQ	R7	R6	K9
      0x781E0024,  //  001E  JMPF	R7	#0044
      0x8C1C050A,  //  001F  GETMET	R7	R2	K10
      0x58240007,  //  0020  LDCONST	R9	K7
      0x7C1C0400,  //  0021  CALL	R7	2
      0x60200001,  //  0022  GETGBL	R8	G1
      0xB8260800,  //  0023  GETNGBL	R9	K4
      0x8C241305,  //  0024  GETMET	R9	R9	K5
      0x582C000B,  //  0025  LDCONST	R11	K11
      0x60300008,  //  0026  GETGBL	R12	G8
      0x5C340E00,  //  0027  MOVE	R13	R7
      0x7C300200,  //  0028  CALL	R12	1
      0x7C240600,  //  0029  CALL	R9	3
      0x7C200200,  //  002A  CALL	R8	1
      0xB8221800,  //  002B  GETNGBL	R8	K12
      0x8C20110D,  //  002C  GETMET	R8	R8	K13
      0x5C280E00,  //  002D  MOVE	R10	R7
      0x582C0007,  //  002E  LDCONST	R11	K7
      0x54320063,  //  002F  LDINT	R12	100
      0x58340007,  //  0030  LDCONST	R13	K7
      0x543A0003,  //  0031  LDINT	R14	4
      0x7C200C00,  //  0032  CALL	R8	6
      0xB8261800,  //  0033  GETNGBL	R9	K12
      0x8C24130E,  //  0034  GETMET	R9	R9	K14
      0x602C0008,  //  0035  GETGBL	R11	G8
      0x5C301000,  //  0036  MOVE	R12	R8
      0x7C2C0200,  //  0037  CALL	R11	1
      0x002E1E0B,  //  0038  ADD	R11	K15	R11
      0x7C240400,  //  0039  CALL	R9	2
      0x8C240110,  //  003A  GETMET	R9	R0	K16
      0x7C240200,  //  003B  CALL	R9	1
      0x60240008,  //  003C  GETGBL	R9	G8
      0x5C280E00,  //  003D  MOVE	R10	R7
      0x7C240200,  //  003E  CALL	R9	1
      0x00262409,  //  003F  ADD	R9	K18	R9
      0x900E2209,  //  0040  SETMBR	R3	K17	R9
      0x50240200,  //  0041  LDBOOL	R9	1	0
      0x80041200,  //  0042  RET	1	R9
      0x7002001B,  //  0043  JMP		#0060
      0x1C1C0D13,  //  0044  EQ	R7	R6	K19
      0x781E0002,  //  0045  JMPF	R7	#0049
      0x501C0200,  //  0046  LDBOOL	R7	1	0
      0x80040E00,  //  0047  RET	1	R7
      0x70020016,  //  0048  JMP		#0060
      0x541E0003,  //  0049  LDINT	R7	4
      0x1C1C0C07,  //  004A  EQ	R7	R6	R7
      0x781E0002,  //  004B  JMPF	R7	#004F
      0x501C0200,  //  004C  LDBOOL	R7	1	0
      0x80040E00,  //  004D  RET	1	R7
      0x70020010,  //  004E  JMP		#0060
      0x541E0004,  //  004F  LDINT	R7	5
      0x1C1C0C07,  //  0050  EQ	R7	R6	R7
      0x781E0002,  //  0051  JMPF	R7	#0055
      0x501C0200,  //  0052  LDBOOL	R7	1	0
      0x80040E00,  //  0053  RET	1	R7
      0x7002000A,  //  0054  JMP		#0060
      0x541E0005,  //  0055  LDINT	R7	6
      0x1C1C0C07,  //  0056  EQ	R7	R6	R7
      0x781E0002,  //  0057  JMPF	R7	#005B
      0x501C0200,  //  0058  LDBOOL	R7	1	0
      0x80040E00,  //  0059  RET	1	R7
      0x70020004,  //  005A  JMP		#0060
      0x541E0006,  //  005B  LDINT	R7	7
      0x1C1C0C07,  //  005C  EQ	R7	R6	R7
      0x781E0001,  //  005D  JMPF	R7	#0060
      0x501C0200,  //  005E  LDBOOL	R7	1	0
      0x80040E00,  //  005F  RET	1	R7
      0x70020008,  //  0060  JMP		#006A
      0x601C0003,  //  0061  GETGBL	R7	G3
      0x5C200000,  //  0062  MOVE	R8	R0
      0x7C1C0200,  //  0063  CALL	R7	1
      0x8C1C0F14,  //  0064  GETMET	R7	R7	K20
      0x5C240200,  //  0065  MOVE	R9	R1
      0x5C280400,  //  0066  MOVE	R10	R2
      0x5C2C0600,  //  0067  MOVE	R11	R3
      0x7C1C0800,  //  0068  CALL	R7	4
      0x80040E00,  //  0069  RET	1	R7
      0x80000000,  //  006A  RET	0
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
    ( &(const bvalue[24]) {     /* constants */
    /* K0   */  be_nested_str_weak(string),
    /* K1   */  be_nested_str_weak(matter),
    /* K2   */  be_nested_str_weak(TLV),
    /* K3   */  be_nested_str_weak(cluster),
    /* K4   */  be_nested_str_weak(attribute),
    /* K5   */  be_nested_str_weak(_X23_X23_X23SRR_X3ATEST3),
    /* K6   */  be_nested_str_weak(_X23_X23_X23SRR_X3ATEST4),
    /* K7   */  be_const_int(2),
    /* K8   */  be_nested_str_weak(_X23_X23_X23SRR_X3ATEST5),
    /* K9   */  be_nested_str_weak(int),
    /* K10  */  be_nested_str_weak(int64),
    /* K11  */  be_nested_str_weak(format),
    /* K12  */  be_nested_str_weak(_X23_X23_X23SRR_X3ATEST6_X3A_X25d),
    /* K13  */  be_nested_str_weak(tasmota),
    /* K14  */  be_nested_str_weak(scale_uint),
    /* K15  */  be_const_int(0),
    /* K16  */  be_nested_str_weak(cmd),
    /* K17  */  be_nested_str_weak(fanspeed_X20),
    /* K18  */  be_nested_str_weak(_X23_X23_X23SRR_X3ATEST7_X20FAN_X20SPEED_X3A_X25d),
    /* K19  */  be_nested_str_weak(fan_speed),
    /* K20  */  be_nested_str_weak(attribute_updated),
    /* K21  */  be_nested_str_weak(_X23_X23_X23SRR_X3ATEST7),
    /* K22  */  be_nested_str_weak(status),
    /* K23  */  be_nested_str_weak(CONSTRAINT_ERROR),
    }),
    be_str_weak(write_attribute),
    &be_const_str_solidified,
    ( &(const binstruction[76]) {  /* code */
      0xA4120000,  //  0000  IMPORT	R4	K0
      0xB8160200,  //  0001  GETNGBL	R5	K1
      0x88140B02,  //  0002  GETMBR	R5	R5	K2
      0x88180503,  //  0003  GETMBR	R6	R2	K3
      0x881C0504,  //  0004  GETMBR	R7	R2	K4
      0x60200001,  //  0005  GETGBL	R8	G1
      0x58240005,  //  0006  LDCONST	R9	K5
      0x7C200200,  //  0007  CALL	R8	1
      0x54220201,  //  0008  LDINT	R8	514
      0x1C200C08,  //  0009  EQ	R8	R6	R8
      0x7822003F,  //  000A  JMPF	R8	#004B
      0x60200001,  //  000B  GETGBL	R8	G1
      0x58240006,  //  000C  LDCONST	R9	K6
      0x7C200200,  //  000D  CALL	R8	1
      0x1C200F07,  //  000E  EQ	R8	R7	K7
      0x7822003A,  //  000F  JMPF	R8	#004B
      0x60200001,  //  0010  GETGBL	R8	G1
      0x58240008,  //  0011  LDCONST	R9	K8
      0x7C200200,  //  0012  CALL	R8	1
      0x60200004,  //  0013  GETGBL	R8	G4
      0x5C240600,  //  0014  MOVE	R9	R3
      0x7C200200,  //  0015  CALL	R8	1
      0x1C201109,  //  0016  EQ	R8	R8	K9
      0x74220004,  //  0017  JMPT	R8	#001D
      0x6020000F,  //  0018  GETGBL	R8	G15
      0x5C240600,  //  0019  MOVE	R9	R3
      0xB82A1400,  //  001A  GETNGBL	R10	K10
      0x7C200400,  //  001B  CALL	R8	2
      0x78220025,  //  001C  JMPF	R8	#0043
      0x60200001,  //  001D  GETGBL	R8	G1
      0x8C24090B,  //  001E  GETMET	R9	R4	K11
      0x582C000C,  //  001F  LDCONST	R11	K12
      0x5C300600,  //  0020  MOVE	R12	R3
      0x7C240600,  //  0021  CALL	R9	3
      0x7C200200,  //  0022  CALL	R8	1
      0xB8221A00,  //  0023  GETNGBL	R8	K13
      0x8C20110E,  //  0024  GETMET	R8	R8	K14
      0x5C280600,  //  0025  MOVE	R10	R3
      0x582C000F,  //  0026  LDCONST	R11	K15
      0x54320063,  //  0027  LDINT	R12	100
      0x5834000F,  //  0028  LDCONST	R13	K15
      0x543A0003,  //  0029  LDINT	R14	4
      0x7C200C00,  //  002A  CALL	R8	6
      0xB8261A00,  //  002B  GETNGBL	R9	K13
      0x8C241310,  //  002C  GETMET	R9	R9	K16
      0x602C0008,  //  002D  GETGBL	R11	G8
      0x5C301000,  //  002E  MOVE	R12	R8
      0x7C2C0200,  //  002F  CALL	R11	1
      0x002E220B,  //  0030  ADD	R11	K17	R11
      0x7C240400,  //  0031  CALL	R9	2
      0x60240001,  //  0032  GETGBL	R9	G1
      0x8C28090B,  //  0033  GETMET	R10	R4	K11
      0x58300012,  //  0034  LDCONST	R12	K18
      0x88340113,  //  0035  GETMBR	R13	R0	K19
      0x7C280600,  //  0036  CALL	R10	3
      0x7C240200,  //  0037  CALL	R9	1
      0x8C240114,  //  0038  GETMET	R9	R0	K20
      0x882C0503,  //  0039  GETMBR	R11	R2	K3
      0x88300504,  //  003A  GETMBR	R12	R2	K4
      0x7C240600,  //  003B  CALL	R9	3
      0x8C240114,  //  003C  GETMET	R9	R0	K20
      0x542E0201,  //  003D  LDINT	R11	514
      0x5830000F,  //  003E  LDCONST	R12	K15
      0x7C240600,  //  003F  CALL	R9	3
      0x50240200,  //  0040  LDBOOL	R9	1	0
      0x80041200,  //  0041  RET	1	R9
      0x70020007,  //  0042  JMP		#004B
      0x60200001,  //  0043  GETGBL	R8	G1
      0x58240015,  //  0044  LDCONST	R9	K21
      0x7C200200,  //  0045  CALL	R8	1
      0xB8220200,  //  0046  GETNGBL	R8	K1
      0x88201117,  //  0047  GETMBR	R8	R8	K23
      0x900A2C08,  //  0048  SETMBR	R2	K22	R8
      0x50200000,  //  0049  LDBOOL	R8	0	0
      0x80041000,  //  004A  RET	1	R8
      0x80000000,  //  004B  RET	0
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
