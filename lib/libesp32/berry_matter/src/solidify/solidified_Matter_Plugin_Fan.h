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
    9,                          /* nstack */
    1,                          /* argc */
    2,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    ( &(const bvalue[11]) {     /* constants */
    /* K0   */  be_nested_str_weak(UPDATE_X20SHADOW),
    /* K1   */  be_nested_str_weak(tasmota),
    /* K2   */  be_nested_str_weak(cmd),
    /* K3   */  be_nested_str_weak(fanspeed),
    /* K4   */  be_nested_str_weak(_X2A_X2A_X2A),
    /* K5   */  be_nested_str_weak(find),
    /* K6   */  be_nested_str_weak(ATTRIBUTE_X20UPDATE),
    /* K7   */  be_nested_str_weak(_X2A_X2A_X2AATTRIBUTE_X20UPDATE),
    /* K8   */  be_nested_str_weak(attribute_updated),
    /* K9   */  be_const_int(0),
    /* K10  */  be_nested_str_weak(update_shadow),
    }),
    be_str_weak(update_shadow),
    &be_const_str_solidified,
    ( &(const binstruction[53]) {  /* code */
      0x60040001,  //  0000  GETGBL	R1	G1
      0x58080000,  //  0001  LDCONST	R2	K0
      0x7C040200,  //  0002  CALL	R1	1
      0xB8060200,  //  0003  GETNGBL	R1	K1
      0x8C040302,  //  0004  GETMET	R1	R1	K2
      0x580C0003,  //  0005  LDCONST	R3	K3
      0x7C040400,  //  0006  CALL	R1	2
      0x60080001,  //  0007  GETGBL	R2	G1
      0x600C0008,  //  0008  GETGBL	R3	G8
      0x5C100200,  //  0009  MOVE	R4	R1
      0x7C0C0200,  //  000A  CALL	R3	1
      0x000E0803,  //  000B  ADD	R3	K4	R3
      0x7C080200,  //  000C  CALL	R2	1
      0x8C080305,  //  000D  GETMET	R2	R1	K5
      0x58100003,  //  000E  LDCONST	R4	K3
      0x7C080400,  //  000F  CALL	R2	2
      0x600C0001,  //  0010  GETGBL	R3	G1
      0x60100008,  //  0011  GETGBL	R4	G8
      0x5C140400,  //  0012  MOVE	R5	R2
      0x7C100200,  //  0013  CALL	R4	1
      0x00120804,  //  0014  ADD	R4	K4	R4
      0x7C0C0200,  //  0015  CALL	R3	1
      0x600C0009,  //  0016  GETGBL	R3	G9
      0x5C100400,  //  0017  MOVE	R4	R2
      0x7C0C0200,  //  0018  CALL	R3	1
      0x4C100000,  //  0019  LDNIL	R4
      0x1C100604,  //  001A  EQ	R4	R3	R4
      0x78120000,  //  001B  JMPF	R4	#001D
      0x880C0103,  //  001C  GETMBR	R3	R0	K3
      0x88100103,  //  001D  GETMBR	R4	R0	K3
      0x20100604,  //  001E  NE	R4	R3	R4
      0x78120006,  //  001F  JMPF	R4	#0027
      0x60100009,  //  0020  GETGBL	R4	G9
      0x5C140600,  //  0021  MOVE	R5	R3
      0x7C100200,  //  0022  CALL	R4	1
      0x90020604,  //  0023  SETMBR	R0	K3	R4
      0x60100001,  //  0024  GETGBL	R4	G1
      0x58140006,  //  0025  LDCONST	R5	K6
      0x7C100200,  //  0026  CALL	R4	1
      0x60100001,  //  0027  GETGBL	R4	G1
      0x58140007,  //  0028  LDCONST	R5	K7
      0x7C100200,  //  0029  CALL	R4	1
      0x8C100108,  //  002A  GETMET	R4	R0	K8
      0x4C180000,  //  002B  LDNIL	R6
      0x541E0007,  //  002C  LDINT	R7	8
      0x58200009,  //  002D  LDCONST	R8	K9
      0x7C100800,  //  002E  CALL	R4	4
      0x60100003,  //  002F  GETGBL	R4	G3
      0x5C140000,  //  0030  MOVE	R5	R0
      0x7C100200,  //  0031  CALL	R4	1
      0x8C10090A,  //  0032  GETMET	R4	R4	K10
      0x7C100200,  //  0033  CALL	R4	1
      0x80000000,  //  0034  RET	0
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
    ( &(const bvalue[26]) {     /* constants */
    /* K0   */  be_nested_str_weak(READ_X20ATTRIBUTE),
    /* K1   */  be_nested_str_weak(string),
    /* K2   */  be_nested_str_weak(matter),
    /* K3   */  be_nested_str_weak(TLV),
    /* K4   */  be_nested_str_weak(cluster),
    /* K5   */  be_nested_str_weak(attribute),
    /* K6   */  be_nested_str_weak(_X230_X3A),
    /* K7   */  be_nested_str_weak(update_shadow_lazy),
    /* K8   */  be_const_int(0),
    /* K9   */  be_nested_str_weak(tasmota),
    /* K10  */  be_nested_str_weak(scale_uint),
    /* K11  */  be_nested_str_weak(fanspeed),
    /* K12  */  be_nested_str_weak(_X231_X3A),
    /* K13  */  be_nested_str_weak(create_TLV),
    /* K14  */  be_nested_str_weak(U1),
    /* K15  */  be_const_int(2),
    /* K16  */  be_nested_str_weak(_X232_X3A),
    /* K17  */  be_const_int(3),
    /* K18  */  be_nested_str_weak(_X233_X3A),
    /* K19  */  be_nested_str_weak(_X234_X3A),
    /* K20  */  be_nested_str_weak(_X235_X3A),
    /* K21  */  be_nested_str_weak(_X236_X3A),
    /* K22  */  be_nested_str_weak(U4),
    /* K23  */  be_const_int(1),
    /* K24  */  be_nested_str_weak(_X237_X3A),
    /* K25  */  be_nested_str_weak(read_attribute),
    }),
    be_str_weak(read_attribute),
    &be_const_str_solidified,
    ( &(const binstruction[120]) {  /* code */
      0x600C0001,  //  0000  GETGBL	R3	G1
      0x58100000,  //  0001  LDCONST	R4	K0
      0x7C0C0200,  //  0002  CALL	R3	1
      0xA40E0200,  //  0003  IMPORT	R3	K1
      0xB8120400,  //  0004  GETNGBL	R4	K2
      0x88100903,  //  0005  GETMBR	R4	R4	K3
      0x88140504,  //  0006  GETMBR	R5	R2	K4
      0x88180505,  //  0007  GETMBR	R6	R2	K5
      0x601C0001,  //  0008  GETGBL	R7	G1
      0x60200008,  //  0009  GETGBL	R8	G8
      0x5C240A00,  //  000A  MOVE	R9	R5
      0x7C200200,  //  000B  CALL	R8	1
      0x00220C08,  //  000C  ADD	R8	K6	R8
      0x7C1C0200,  //  000D  CALL	R7	1
      0x541E0007,  //  000E  LDINT	R7	8
      0x1C1C0A07,  //  000F  EQ	R7	R5	R7
      0x781E005D,  //  0010  JMPF	R7	#006F
      0x8C1C0107,  //  0011  GETMET	R7	R0	K7
      0x7C1C0200,  //  0012  CALL	R7	1
      0x1C1C0D08,  //  0013  EQ	R7	R6	K8
      0x781E0013,  //  0014  JMPF	R7	#0029
      0xB81E1200,  //  0015  GETNGBL	R7	K9
      0x8C1C0F0A,  //  0016  GETMET	R7	R7	K10
      0x8824010B,  //  0017  GETMBR	R9	R0	K11
      0x58280008,  //  0018  LDCONST	R10	K8
      0x542E0003,  //  0019  LDINT	R11	4
      0x58300008,  //  001A  LDCONST	R12	K8
      0x543600FD,  //  001B  LDINT	R13	254
      0x7C1C0C00,  //  001C  CALL	R7	6
      0x60200001,  //  001D  GETGBL	R8	G1
      0x60240008,  //  001E  GETGBL	R9	G8
      0x5C280E00,  //  001F  MOVE	R10	R7
      0x7C240200,  //  0020  CALL	R9	1
      0x00261809,  //  0021  ADD	R9	K12	R9
      0x7C200200,  //  0022  CALL	R8	1
      0x8C20090D,  //  0023  GETMET	R8	R4	K13
      0x8828090E,  //  0024  GETMBR	R10	R4	K14
      0x5C2C0E00,  //  0025  MOVE	R11	R7
      0x7C200600,  //  0026  CALL	R8	3
      0x80041000,  //  0027  RET	1	R8
      0x70020044,  //  0028  JMP		#006E
      0x1C1C0D0F,  //  0029  EQ	R7	R6	K15
      0x781E0008,  //  002A  JMPF	R7	#0034
      0x601C0001,  //  002B  GETGBL	R7	G1
      0x58200010,  //  002C  LDCONST	R8	K16
      0x7C1C0200,  //  002D  CALL	R7	1
      0x8C1C090D,  //  002E  GETMET	R7	R4	K13
      0x8824090E,  //  002F  GETMBR	R9	R4	K14
      0x58280008,  //  0030  LDCONST	R10	K8
      0x7C1C0600,  //  0031  CALL	R7	3
      0x80040E00,  //  0032  RET	1	R7
      0x70020039,  //  0033  JMP		#006E
      0x1C1C0D11,  //  0034  EQ	R7	R6	K17
      0x781E0008,  //  0035  JMPF	R7	#003F
      0x601C0001,  //  0036  GETGBL	R7	G1
      0x58200012,  //  0037  LDCONST	R8	K18
      0x7C1C0200,  //  0038  CALL	R7	1
      0x8C1C090D,  //  0039  GETMET	R7	R4	K13
      0x8824090E,  //  003A  GETMBR	R9	R4	K14
      0x542A00FD,  //  003B  LDINT	R10	254
      0x7C1C0600,  //  003C  CALL	R7	3
      0x80040E00,  //  003D  RET	1	R7
      0x7002002E,  //  003E  JMP		#006E
      0x541E000E,  //  003F  LDINT	R7	15
      0x1C1C0C07,  //  0040  EQ	R7	R6	R7
      0x781E0008,  //  0041  JMPF	R7	#004B
      0x601C0001,  //  0042  GETGBL	R7	G1
      0x58200013,  //  0043  LDCONST	R8	K19
      0x7C1C0200,  //  0044  CALL	R7	1
      0x8C1C090D,  //  0045  GETMET	R7	R4	K13
      0x8824090E,  //  0046  GETMBR	R9	R4	K14
      0x58280008,  //  0047  LDCONST	R10	K8
      0x7C1C0600,  //  0048  CALL	R7	3
      0x80040E00,  //  0049  RET	1	R7
      0x70020022,  //  004A  JMP		#006E
      0x541E0010,  //  004B  LDINT	R7	17
      0x1C1C0C07,  //  004C  EQ	R7	R6	R7
      0x781E0008,  //  004D  JMPF	R7	#0057
      0x601C0001,  //  004E  GETGBL	R7	G1
      0x58200014,  //  004F  LDCONST	R8	K20
      0x7C1C0200,  //  0050  CALL	R7	1
      0x8C1C090D,  //  0051  GETMET	R7	R4	K13
      0x8824090E,  //  0052  GETMBR	R9	R4	K14
      0x542A003B,  //  0053  LDINT	R10	60
      0x7C1C0600,  //  0054  CALL	R7	3
      0x80040E00,  //  0055  RET	1	R7
      0x70020016,  //  0056  JMP		#006E
      0x541EFFFB,  //  0057  LDINT	R7	65532
      0x1C1C0C07,  //  0058  EQ	R7	R6	R7
      0x781E0008,  //  0059  JMPF	R7	#0063
      0x601C0001,  //  005A  GETGBL	R7	G1
      0x58200015,  //  005B  LDCONST	R8	K21
      0x7C1C0200,  //  005C  CALL	R7	1
      0x8C1C090D,  //  005D  GETMET	R7	R4	K13
      0x88240916,  //  005E  GETMBR	R9	R4	K22
      0x58280017,  //  005F  LDCONST	R10	K23
      0x7C1C0600,  //  0060  CALL	R7	3
      0x80040E00,  //  0061  RET	1	R7
      0x7002000A,  //  0062  JMP		#006E
      0x541EFFFC,  //  0063  LDINT	R7	65533
      0x1C1C0C07,  //  0064  EQ	R7	R6	R7
      0x781E0007,  //  0065  JMPF	R7	#006E
      0x601C0001,  //  0066  GETGBL	R7	G1
      0x58200018,  //  0067  LDCONST	R8	K24
      0x7C1C0200,  //  0068  CALL	R7	1
      0x8C1C090D,  //  0069  GETMET	R7	R4	K13
      0x88240916,  //  006A  GETMBR	R9	R4	K22
      0x542A0004,  //  006B  LDINT	R10	5
      0x7C1C0600,  //  006C  CALL	R7	3
      0x80040E00,  //  006D  RET	1	R7
      0x70020007,  //  006E  JMP		#0077
      0x601C0003,  //  006F  GETGBL	R7	G3
      0x5C200000,  //  0070  MOVE	R8	R0
      0x7C1C0200,  //  0071  CALL	R7	1
      0x8C1C0F19,  //  0072  GETMET	R7	R7	K25
      0x5C240200,  //  0073  MOVE	R9	R1
      0x5C280400,  //  0074  MOVE	R10	R2
      0x7C1C0600,  //  0075  CALL	R7	3
      0x80040E00,  //  0076  RET	1	R7
      0x80000000,  //  0077  RET	0
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: init
********************************************************************/
be_local_closure(Matter_Plugin_Fan_init,   /* name */
  be_nested_proto(
    8,                          /* nstack */
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
    ( &(const binstruction[ 9]) {  /* code */
      0x60100003,  //  0000  GETGBL	R4	G3
      0x5C140000,  //  0001  MOVE	R5	R0
      0x7C100200,  //  0002  CALL	R4	1
      0x8C100900,  //  0003  GETMET	R4	R4	K0
      0x5C180200,  //  0004  MOVE	R6	R1
      0x5C1C0400,  //  0005  MOVE	R7	R2
      0x7C100600,  //  0006  CALL	R4	3
      0x90020302,  //  0007  SETMBR	R0	K1	K2
      0x80000000,  //  0008  RET	0
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: setspeed
********************************************************************/
be_local_closure(Matter_Plugin_Fan_setspeed,   /* name */
  be_nested_proto(
    2,                          /* nstack */
    2,                          /* argc */
    2,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    0,                          /* has constants */
    NULL,                       /* no const */
    be_str_weak(setspeed),
    &be_const_str_solidified,
    ( &(const binstruction[ 1]) {  /* code */
      0x80000000,  //  0000  RET	0
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
    ( &(const bvalue[20]) {     /* constants */
    /* K0   */  be_nested_str_weak(INVOKE_X20REQUEST),
    /* K1   */  be_nested_str_weak(matter),
    /* K2   */  be_nested_str_weak(TLV),
    /* K3   */  be_nested_str_weak(cluster),
    /* K4   */  be_nested_str_weak(command),
    /* K5   */  be_const_int(0),
    /* K6   */  be_nested_str_weak(findsubval),
    /* K7   */  be_nested_str_weak(_X23_X23_X23SPEED1),
    /* K8   */  be_nested_str_weak(tasmota),
    /* K9   */  be_nested_str_weak(scale_uint),
    /* K10  */  be_nested_str_weak(cmd),
    /* K11  */  be_nested_str_weak(fanspeed_X20),
    /* K12  */  be_nested_str_weak(update_shadow),
    /* K13  */  be_nested_str_weak(log),
    /* K14  */  be_nested_str_weak(speed_X3A),
    /* K15  */  be_const_int(1),
    /* K16  */  be_const_int(2),
    /* K17  */  be_const_int(3),
    /* K18  */  be_nested_str_weak(_X23_X23_X23SPEED2),
    /* K19  */  be_nested_str_weak(invoke_request),
    }),
    be_str_weak(invoke_request),
    &be_const_str_solidified,
    ( &(const binstruction[126]) {  /* code */
      0x60100001,  //  0000  GETGBL	R4	G1
      0x58140000,  //  0001  LDCONST	R5	K0
      0x7C100200,  //  0002  CALL	R4	1
      0xB8120200,  //  0003  GETNGBL	R4	K1
      0x88100902,  //  0004  GETMBR	R4	R4	K2
      0x88140703,  //  0005  GETMBR	R5	R3	K3
      0x88180704,  //  0006  GETMBR	R6	R3	K4
      0x541E0007,  //  0007  LDINT	R7	8
      0x1C1C0A07,  //  0008  EQ	R7	R5	R7
      0x781E0069,  //  0009  JMPF	R7	#0074
      0x1C1C0D05,  //  000A  EQ	R7	R6	K5
      0x781E0021,  //  000B  JMPF	R7	#002E
      0x8C1C0506,  //  000C  GETMET	R7	R2	K6
      0x58240005,  //  000D  LDCONST	R9	K5
      0x7C1C0400,  //  000E  CALL	R7	2
      0x60200001,  //  000F  GETGBL	R8	G1
      0x60240008,  //  0010  GETGBL	R9	G8
      0x5C280E00,  //  0011  MOVE	R10	R7
      0x7C240200,  //  0012  CALL	R9	1
      0x00260E09,  //  0013  ADD	R9	K7	R9
      0x7C200200,  //  0014  CALL	R8	1
      0xB8221000,  //  0015  GETNGBL	R8	K8
      0x8C201109,  //  0016  GETMET	R8	R8	K9
      0x5C280E00,  //  0017  MOVE	R10	R7
      0x582C0005,  //  0018  LDCONST	R11	K5
      0x543200FD,  //  0019  LDINT	R12	254
      0x58340005,  //  001A  LDCONST	R13	K5
      0x543A0003,  //  001B  LDINT	R14	4
      0x7C200C00,  //  001C  CALL	R8	6
      0xB8261000,  //  001D  GETNGBL	R9	K8
      0x8C24130A,  //  001E  GETMET	R9	R9	K10
      0x602C0008,  //  001F  GETGBL	R11	G8
      0x5C301000,  //  0020  MOVE	R12	R8
      0x7C2C0200,  //  0021  CALL	R11	1
      0x002E160B,  //  0022  ADD	R11	K11	R11
      0x7C240400,  //  0023  CALL	R9	2
      0x8C24010C,  //  0024  GETMET	R9	R0	K12
      0x7C240200,  //  0025  CALL	R9	1
      0x60240008,  //  0026  GETGBL	R9	G8
      0x5C280E00,  //  0027  MOVE	R10	R7
      0x7C240200,  //  0028  CALL	R9	1
      0x00261C09,  //  0029  ADD	R9	K14	R9
      0x900E1A09,  //  002A  SETMBR	R3	K13	R9
      0x50240200,  //  002B  LDBOOL	R9	1	0
      0x80041200,  //  002C  RET	1	R9
      0x70020044,  //  002D  JMP		#0073
      0x1C1C0D0F,  //  002E  EQ	R7	R6	K15
      0x781E0002,  //  002F  JMPF	R7	#0033
      0x501C0200,  //  0030  LDBOOL	R7	1	0
      0x80040E00,  //  0031  RET	1	R7
      0x7002003F,  //  0032  JMP		#0073
      0x1C1C0D10,  //  0033  EQ	R7	R6	K16
      0x781E0002,  //  0034  JMPF	R7	#0038
      0x501C0200,  //  0035  LDBOOL	R7	1	0
      0x80040E00,  //  0036  RET	1	R7
      0x7002003A,  //  0037  JMP		#0073
      0x1C1C0D11,  //  0038  EQ	R7	R6	K17
      0x781E0002,  //  0039  JMPF	R7	#003D
      0x501C0200,  //  003A  LDBOOL	R7	1	0
      0x80040E00,  //  003B  RET	1	R7
      0x70020035,  //  003C  JMP		#0073
      0x541E0003,  //  003D  LDINT	R7	4
      0x1C1C0C07,  //  003E  EQ	R7	R6	R7
      0x781E0021,  //  003F  JMPF	R7	#0062
      0x8C1C0506,  //  0040  GETMET	R7	R2	K6
      0x58240005,  //  0041  LDCONST	R9	K5
      0x7C1C0400,  //  0042  CALL	R7	2
      0x60200001,  //  0043  GETGBL	R8	G1
      0x60240008,  //  0044  GETGBL	R9	G8
      0x5C280E00,  //  0045  MOVE	R10	R7
      0x7C240200,  //  0046  CALL	R9	1
      0x00262409,  //  0047  ADD	R9	K18	R9
      0x7C200200,  //  0048  CALL	R8	1
      0xB8221000,  //  0049  GETNGBL	R8	K8
      0x8C201109,  //  004A  GETMET	R8	R8	K9
      0x5C280E00,  //  004B  MOVE	R10	R7
      0x582C0005,  //  004C  LDCONST	R11	K5
      0x543200FD,  //  004D  LDINT	R12	254
      0x58340005,  //  004E  LDCONST	R13	K5
      0x543A0003,  //  004F  LDINT	R14	4
      0x7C200C00,  //  0050  CALL	R8	6
      0xB8261000,  //  0051  GETNGBL	R9	K8
      0x8C24130A,  //  0052  GETMET	R9	R9	K10
      0x602C0008,  //  0053  GETGBL	R11	G8
      0x5C301000,  //  0054  MOVE	R12	R8
      0x7C2C0200,  //  0055  CALL	R11	1
      0x002E160B,  //  0056  ADD	R11	K11	R11
      0x7C240400,  //  0057  CALL	R9	2
      0x8C24010C,  //  0058  GETMET	R9	R0	K12
      0x7C240200,  //  0059  CALL	R9	1
      0x60240008,  //  005A  GETGBL	R9	G8
      0x5C280E00,  //  005B  MOVE	R10	R7
      0x7C240200,  //  005C  CALL	R9	1
      0x00261C09,  //  005D  ADD	R9	K14	R9
      0x900E1A09,  //  005E  SETMBR	R3	K13	R9
      0x50240200,  //  005F  LDBOOL	R9	1	0
      0x80041200,  //  0060  RET	1	R9
      0x70020010,  //  0061  JMP		#0073
      0x541E0004,  //  0062  LDINT	R7	5
      0x1C1C0C07,  //  0063  EQ	R7	R6	R7
      0x781E0002,  //  0064  JMPF	R7	#0068
      0x501C0200,  //  0065  LDBOOL	R7	1	0
      0x80040E00,  //  0066  RET	1	R7
      0x7002000A,  //  0067  JMP		#0073
      0x541E0005,  //  0068  LDINT	R7	6
      0x1C1C0C07,  //  0069  EQ	R7	R6	R7
      0x781E0002,  //  006A  JMPF	R7	#006E
      0x501C0200,  //  006B  LDBOOL	R7	1	0
      0x80040E00,  //  006C  RET	1	R7
      0x70020004,  //  006D  JMP		#0073
      0x541E0006,  //  006E  LDINT	R7	7
      0x1C1C0C07,  //  006F  EQ	R7	R6	R7
      0x781E0001,  //  0070  JMPF	R7	#0073
      0x501C0200,  //  0071  LDBOOL	R7	1	0
      0x80040E00,  //  0072  RET	1	R7
      0x70020008,  //  0073  JMP		#007D
      0x601C0003,  //  0074  GETGBL	R7	G3
      0x5C200000,  //  0075  MOVE	R8	R0
      0x7C1C0200,  //  0076  CALL	R7	1
      0x8C1C0F13,  //  0077  GETMET	R7	R7	K19
      0x5C240200,  //  0078  MOVE	R9	R1
      0x5C280400,  //  0079  MOVE	R10	R2
      0x5C2C0600,  //  007A  MOVE	R11	R3
      0x7C1C0800,  //  007B  CALL	R7	4
      0x80040E00,  //  007C  RET	1	R7
      0x80000000,  //  007D  RET	0
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
        { be_const_key_weak(init, -1), be_const_closure(Matter_Plugin_Fan_init_closure) },
        { be_const_key_weak(setspeed, -1), be_const_closure(Matter_Plugin_Fan_setspeed_closure) },
        { be_const_key_weak(invoke_request, -1), be_const_closure(Matter_Plugin_Fan_invoke_request_closure) },
        { be_const_key_weak(CLUSTERS, -1), be_const_simple_instance(be_nested_simple_instance(&be_class_map, {
        be_const_map( *     be_nested_map(1,
    ( (struct bmapnode*) &(const bmapnode[]) {
        { be_const_key_int(514, -1), be_const_simple_instance(be_nested_simple_instance(&be_class_list, {
        be_const_list( *     be_nested_list(7,
    ( (struct bvalue*) &(const bvalue[]) {
        be_const_int(0),
        be_const_int(2),
        be_const_int(3),
        be_const_int(15),
        be_const_int(17),
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
