/* Solidification of Matter_Plugin_Fan.h */
/********************************************************************\
* Generated code, don't edit                                         *
\********************************************************************/
#include "be_constobj.h"

extern const bclass be_class_Matter_Plugin_Fan;

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
    ( &(const bvalue[18]) {     /* constants */
    /* K0   */  be_nested_str_weak(matter),
    /* K1   */  be_nested_str_weak(TLV),
    /* K2   */  be_nested_str_weak(cluster),
    /* K3   */  be_nested_str_weak(command),
    /* K4   */  be_nested_str_weak(_X23_X23_X23SRR_X3AINVOKE_X20REQUEST_X20_X25s_X3A_X25s),
    /* K5   */  be_const_int(0),
    /* K6   */  be_nested_str_weak(findsubval),
    /* K7   */  be_nested_str_weak(tasmota),
    /* K8   */  be_nested_str_weak(scale_uint),
    /* K9   */  be_nested_str_weak(cmd),
    /* K10  */  be_nested_str_weak(fanspeed_X20),
    /* K11  */  be_nested_str_weak(update_shadow),
    /* K12  */  be_nested_str_weak(log),
    /* K13  */  be_nested_str_weak(speed_X3A),
    /* K14  */  be_const_int(1),
    /* K15  */  be_const_int(2),
    /* K16  */  be_const_int(3),
    /* K17  */  be_nested_str_weak(invoke_request),
    }),
    be_str_weak(invoke_request),
    &be_const_str_solidified,
    ( &(const binstruction[145]) {  /* code */
      0xB8120000,  //  0000  GETNGBL	R4	K0
      0x88100901,  //  0001  GETMBR	R4	R4	K1
      0x88140702,  //  0002  GETMBR	R5	R3	K2
      0x88180703,  //  0003  GETMBR	R6	R3	K3
      0x601C0001,  //  0004  GETGBL	R7	G1
      0x58200004,  //  0005  LDCONST	R8	K4
      0x60240008,  //  0006  GETGBL	R9	G8
      0x5C280A00,  //  0007  MOVE	R10	R5
      0x7C240200,  //  0008  CALL	R9	1
      0x60280008,  //  0009  GETGBL	R10	G8
      0x5C2C0C00,  //  000A  MOVE	R11	R6
      0x7C280200,  //  000B  CALL	R10	1
      0x7C1C0600,  //  000C  CALL	R7	3
      0x541E0007,  //  000D  LDINT	R7	8
      0x1C1C0A07,  //  000E  EQ	R7	R5	R7
      0x781E0076,  //  000F  JMPF	R7	#0087
      0x1C1C0D05,  //  0010  EQ	R7	R6	K5
      0x781E001B,  //  0011  JMPF	R7	#002E
      0x8C1C0506,  //  0012  GETMET	R7	R2	K6
      0x58240005,  //  0013  LDCONST	R9	K5
      0x7C1C0400,  //  0014  CALL	R7	2
      0xB8220E00,  //  0015  GETNGBL	R8	K7
      0x8C201108,  //  0016  GETMET	R8	R8	K8
      0x5C280E00,  //  0017  MOVE	R10	R7
      0x582C0005,  //  0018  LDCONST	R11	K5
      0x543200FD,  //  0019  LDINT	R12	254
      0x58340005,  //  001A  LDCONST	R13	K5
      0x543A0003,  //  001B  LDINT	R14	4
      0x7C200C00,  //  001C  CALL	R8	6
      0xB8260E00,  //  001D  GETNGBL	R9	K7
      0x8C241309,  //  001E  GETMET	R9	R9	K9
      0x602C0008,  //  001F  GETGBL	R11	G8
      0x5C301000,  //  0020  MOVE	R12	R8
      0x7C2C0200,  //  0021  CALL	R11	1
      0x002E140B,  //  0022  ADD	R11	K10	R11
      0x7C240400,  //  0023  CALL	R9	2
      0x8C24010B,  //  0024  GETMET	R9	R0	K11
      0x7C240200,  //  0025  CALL	R9	1
      0x60240008,  //  0026  GETGBL	R9	G8
      0x5C280E00,  //  0027  MOVE	R10	R7
      0x7C240200,  //  0028  CALL	R9	1
      0x00261A09,  //  0029  ADD	R9	K13	R9
      0x900E1809,  //  002A  SETMBR	R3	K12	R9
      0x50240200,  //  002B  LDBOOL	R9	1	0
      0x80041200,  //  002C  RET	1	R9
      0x70020057,  //  002D  JMP		#0086
      0x1C1C0D0E,  //  002E  EQ	R7	R6	K14
      0x781E0002,  //  002F  JMPF	R7	#0033
      0x501C0200,  //  0030  LDBOOL	R7	1	0
      0x80040E00,  //  0031  RET	1	R7
      0x70020052,  //  0032  JMP		#0086
      0x1C1C0D0F,  //  0033  EQ	R7	R6	K15
      0x781E001B,  //  0034  JMPF	R7	#0051
      0x8C1C0506,  //  0035  GETMET	R7	R2	K6
      0x58240005,  //  0036  LDCONST	R9	K5
      0x7C1C0400,  //  0037  CALL	R7	2
      0xB8220E00,  //  0038  GETNGBL	R8	K7
      0x8C201108,  //  0039  GETMET	R8	R8	K8
      0x5C280E00,  //  003A  MOVE	R10	R7
      0x582C0005,  //  003B  LDCONST	R11	K5
      0x543200FD,  //  003C  LDINT	R12	254
      0x58340005,  //  003D  LDCONST	R13	K5
      0x543A0003,  //  003E  LDINT	R14	4
      0x7C200C00,  //  003F  CALL	R8	6
      0xB8260E00,  //  0040  GETNGBL	R9	K7
      0x8C241309,  //  0041  GETMET	R9	R9	K9
      0x602C0008,  //  0042  GETGBL	R11	G8
      0x5C301000,  //  0043  MOVE	R12	R8
      0x7C2C0200,  //  0044  CALL	R11	1
      0x002E140B,  //  0045  ADD	R11	K10	R11
      0x7C240400,  //  0046  CALL	R9	2
      0x8C24010B,  //  0047  GETMET	R9	R0	K11
      0x7C240200,  //  0048  CALL	R9	1
      0x60240008,  //  0049  GETGBL	R9	G8
      0x5C280E00,  //  004A  MOVE	R10	R7
      0x7C240200,  //  004B  CALL	R9	1
      0x00261A09,  //  004C  ADD	R9	K13	R9
      0x900E1809,  //  004D  SETMBR	R3	K12	R9
      0x50240200,  //  004E  LDBOOL	R9	1	0
      0x80041200,  //  004F  RET	1	R9
      0x70020034,  //  0050  JMP		#0086
      0x1C1C0D10,  //  0051  EQ	R7	R6	K16
      0x781E0002,  //  0052  JMPF	R7	#0056
      0x501C0200,  //  0053  LDBOOL	R7	1	0
      0x80040E00,  //  0054  RET	1	R7
      0x7002002F,  //  0055  JMP		#0086
      0x541E0003,  //  0056  LDINT	R7	4
      0x1C1C0C07,  //  0057  EQ	R7	R6	R7
      0x781E001B,  //  0058  JMPF	R7	#0075
      0x8C1C0506,  //  0059  GETMET	R7	R2	K6
      0x58240005,  //  005A  LDCONST	R9	K5
      0x7C1C0400,  //  005B  CALL	R7	2
      0xB8220E00,  //  005C  GETNGBL	R8	K7
      0x8C201108,  //  005D  GETMET	R8	R8	K8
      0x5C280E00,  //  005E  MOVE	R10	R7
      0x582C0005,  //  005F  LDCONST	R11	K5
      0x543200FD,  //  0060  LDINT	R12	254
      0x58340005,  //  0061  LDCONST	R13	K5
      0x543A0003,  //  0062  LDINT	R14	4
      0x7C200C00,  //  0063  CALL	R8	6
      0xB8260E00,  //  0064  GETNGBL	R9	K7
      0x8C241309,  //  0065  GETMET	R9	R9	K9
      0x602C0008,  //  0066  GETGBL	R11	G8
      0x5C301000,  //  0067  MOVE	R12	R8
      0x7C2C0200,  //  0068  CALL	R11	1
      0x002E140B,  //  0069  ADD	R11	K10	R11
      0x7C240400,  //  006A  CALL	R9	2
      0x8C24010B,  //  006B  GETMET	R9	R0	K11
      0x7C240200,  //  006C  CALL	R9	1
      0x60240008,  //  006D  GETGBL	R9	G8
      0x5C280E00,  //  006E  MOVE	R10	R7
      0x7C240200,  //  006F  CALL	R9	1
      0x00261A09,  //  0070  ADD	R9	K13	R9
      0x900E1809,  //  0071  SETMBR	R3	K12	R9
      0x50240200,  //  0072  LDBOOL	R9	1	0
      0x80041200,  //  0073  RET	1	R9
      0x70020010,  //  0074  JMP		#0086
      0x541E0004,  //  0075  LDINT	R7	5
      0x1C1C0C07,  //  0076  EQ	R7	R6	R7
      0x781E0002,  //  0077  JMPF	R7	#007B
      0x501C0200,  //  0078  LDBOOL	R7	1	0
      0x80040E00,  //  0079  RET	1	R7
      0x7002000A,  //  007A  JMP		#0086
      0x541E0005,  //  007B  LDINT	R7	6
      0x1C1C0C07,  //  007C  EQ	R7	R6	R7
      0x781E0002,  //  007D  JMPF	R7	#0081
      0x501C0200,  //  007E  LDBOOL	R7	1	0
      0x80040E00,  //  007F  RET	1	R7
      0x70020004,  //  0080  JMP		#0086
      0x541E0006,  //  0081  LDINT	R7	7
      0x1C1C0C07,  //  0082  EQ	R7	R6	R7
      0x781E0001,  //  0083  JMPF	R7	#0086
      0x501C0200,  //  0084  LDBOOL	R7	1	0
      0x80040E00,  //  0085  RET	1	R7
      0x70020008,  //  0086  JMP		#0090
      0x601C0003,  //  0087  GETGBL	R7	G3
      0x5C200000,  //  0088  MOVE	R8	R0
      0x7C1C0200,  //  0089  CALL	R7	1
      0x8C1C0F11,  //  008A  GETMET	R7	R7	K17
      0x5C240200,  //  008B  MOVE	R9	R1
      0x5C280400,  //  008C  MOVE	R10	R2
      0x5C2C0600,  //  008D  MOVE	R11	R3
      0x7C1C0800,  //  008E  CALL	R7	4
      0x80040E00,  //  008F  RET	1	R7
      0x80000000,  //  0090  RET	0
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
    /* K5   */  be_nested_str_weak(_X23_X23_X23SRR_X3AREAD_X20ATTRIBUTE_X20_X25s_X3A_X25s),
    /* K6   */  be_nested_str_weak(update_shadow_lazy),
    /* K7   */  be_const_int(0),
    /* K8   */  be_nested_str_weak(tasmota),
    /* K9   */  be_nested_str_weak(scale_uint),
    /* K10  */  be_nested_str_weak(fanspeed),
    /* K11  */  be_nested_str_weak(create_TLV),
    /* K12  */  be_nested_str_weak(U1),
    /* K13  */  be_const_int(2),
    /* K14  */  be_const_int(3),
    /* K15  */  be_nested_str_weak(U4),
    /* K16  */  be_const_int(1),
    /* K17  */  be_nested_str_weak(read_attribute),
    }),
    be_str_weak(read_attribute),
    &be_const_str_solidified,
    ( &(const binstruction[96]) {  /* code */
      0xA40E0000,  //  0000  IMPORT	R3	K0
      0xB8120200,  //  0001  GETNGBL	R4	K1
      0x88100902,  //  0002  GETMBR	R4	R4	K2
      0x88140503,  //  0003  GETMBR	R5	R2	K3
      0x88180504,  //  0004  GETMBR	R6	R2	K4
      0x601C0001,  //  0005  GETGBL	R7	G1
      0x58200005,  //  0006  LDCONST	R8	K5
      0x60240008,  //  0007  GETGBL	R9	G8
      0x5C280A00,  //  0008  MOVE	R10	R5
      0x7C240200,  //  0009  CALL	R9	1
      0x60280008,  //  000A  GETGBL	R10	G8
      0x5C2C0C00,  //  000B  MOVE	R11	R6
      0x7C280200,  //  000C  CALL	R10	1
      0x7C1C0600,  //  000D  CALL	R7	3
      0x541E0007,  //  000E  LDINT	R7	8
      0x1C1C0A07,  //  000F  EQ	R7	R5	R7
      0x781E0045,  //  0010  JMPF	R7	#0057
      0x8C1C0106,  //  0011  GETMET	R7	R0	K6
      0x7C1C0200,  //  0012  CALL	R7	1
      0x1C1C0D07,  //  0013  EQ	R7	R6	K7
      0x781E000D,  //  0014  JMPF	R7	#0023
      0xB81E1000,  //  0015  GETNGBL	R7	K8
      0x8C1C0F09,  //  0016  GETMET	R7	R7	K9
      0x8824010A,  //  0017  GETMBR	R9	R0	K10
      0x58280007,  //  0018  LDCONST	R10	K7
      0x542E0003,  //  0019  LDINT	R11	4
      0x58300007,  //  001A  LDCONST	R12	K7
      0x543600FD,  //  001B  LDINT	R13	254
      0x7C1C0C00,  //  001C  CALL	R7	6
      0x8C20090B,  //  001D  GETMET	R8	R4	K11
      0x8828090C,  //  001E  GETMBR	R10	R4	K12
      0x5C2C0E00,  //  001F  MOVE	R11	R7
      0x7C200600,  //  0020  CALL	R8	3
      0x80041000,  //  0021  RET	1	R8
      0x70020032,  //  0022  JMP		#0056
      0x1C1C0D0D,  //  0023  EQ	R7	R6	K13
      0x781E0005,  //  0024  JMPF	R7	#002B
      0x8C1C090B,  //  0025  GETMET	R7	R4	K11
      0x8824090C,  //  0026  GETMBR	R9	R4	K12
      0x58280007,  //  0027  LDCONST	R10	K7
      0x7C1C0600,  //  0028  CALL	R7	3
      0x80040E00,  //  0029  RET	1	R7
      0x7002002A,  //  002A  JMP		#0056
      0x1C1C0D0E,  //  002B  EQ	R7	R6	K14
      0x781E0005,  //  002C  JMPF	R7	#0033
      0x8C1C090B,  //  002D  GETMET	R7	R4	K11
      0x8824090C,  //  002E  GETMBR	R9	R4	K12
      0x542A00FD,  //  002F  LDINT	R10	254
      0x7C1C0600,  //  0030  CALL	R7	3
      0x80040E00,  //  0031  RET	1	R7
      0x70020022,  //  0032  JMP		#0056
      0x541E000E,  //  0033  LDINT	R7	15
      0x1C1C0C07,  //  0034  EQ	R7	R6	R7
      0x781E0005,  //  0035  JMPF	R7	#003C
      0x8C1C090B,  //  0036  GETMET	R7	R4	K11
      0x8824090C,  //  0037  GETMBR	R9	R4	K12
      0x58280007,  //  0038  LDCONST	R10	K7
      0x7C1C0600,  //  0039  CALL	R7	3
      0x80040E00,  //  003A  RET	1	R7
      0x70020019,  //  003B  JMP		#0056
      0x541E0010,  //  003C  LDINT	R7	17
      0x1C1C0C07,  //  003D  EQ	R7	R6	R7
      0x781E0005,  //  003E  JMPF	R7	#0045
      0x8C1C090B,  //  003F  GETMET	R7	R4	K11
      0x8824090C,  //  0040  GETMBR	R9	R4	K12
      0x542A003B,  //  0041  LDINT	R10	60
      0x7C1C0600,  //  0042  CALL	R7	3
      0x80040E00,  //  0043  RET	1	R7
      0x70020010,  //  0044  JMP		#0056
      0x541EFFFB,  //  0045  LDINT	R7	65532
      0x1C1C0C07,  //  0046  EQ	R7	R6	R7
      0x781E0005,  //  0047  JMPF	R7	#004E
      0x8C1C090B,  //  0048  GETMET	R7	R4	K11
      0x8824090F,  //  0049  GETMBR	R9	R4	K15
      0x58280010,  //  004A  LDCONST	R10	K16
      0x7C1C0600,  //  004B  CALL	R7	3
      0x80040E00,  //  004C  RET	1	R7
      0x70020007,  //  004D  JMP		#0056
      0x541EFFFC,  //  004E  LDINT	R7	65533
      0x1C1C0C07,  //  004F  EQ	R7	R6	R7
      0x781E0004,  //  0050  JMPF	R7	#0056
      0x8C1C090B,  //  0051  GETMET	R7	R4	K11
      0x8824090F,  //  0052  GETMBR	R9	R4	K15
      0x542A0004,  //  0053  LDINT	R10	5
      0x7C1C0600,  //  0054  CALL	R7	3
      0x80040E00,  //  0055  RET	1	R7
      0x70020007,  //  0056  JMP		#005F
      0x601C0003,  //  0057  GETGBL	R7	G3
      0x5C200000,  //  0058  MOVE	R8	R0
      0x7C1C0200,  //  0059  CALL	R7	1
      0x8C1C0F11,  //  005A  GETMET	R7	R7	K17
      0x5C240200,  //  005B  MOVE	R9	R1
      0x5C280400,  //  005C  MOVE	R10	R2
      0x7C1C0600,  //  005D  CALL	R7	3
      0x80040E00,  //  005E  RET	1	R7
      0x80000000,  //  005F  RET	0
    })
  )
);
/*******************************************************************/


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
    /* K0   */  be_nested_str_weak(tasmota),
    /* K1   */  be_nested_str_weak(cmd),
    /* K2   */  be_nested_str_weak(fanspeed),
    /* K3   */  be_nested_str_weak(find),
    /* K4   */  be_nested_str_weak(attribute_updated),
    /* K5   */  be_const_int(0),
    /* K6   */  be_nested_str_weak(_X23_X23_X23SRR_X3AATTRIBUTE_X20UPDATE3_X23_X23_X23),
    /* K7   */  be_nested_str_weak(update_shadow),
    }),
    be_str_weak(update_shadow),
    &be_const_str_solidified,
    ( &(const binstruction[34]) {  /* code */
      0xB8060000,  //  0000  GETNGBL	R1	K0
      0x8C040301,  //  0001  GETMET	R1	R1	K1
      0x580C0002,  //  0002  LDCONST	R3	K2
      0x7C040400,  //  0003  CALL	R1	2
      0x8C080303,  //  0004  GETMET	R2	R1	K3
      0x58100002,  //  0005  LDCONST	R4	K2
      0x7C080400,  //  0006  CALL	R2	2
      0x600C0009,  //  0007  GETGBL	R3	G9
      0x5C100400,  //  0008  MOVE	R4	R2
      0x7C0C0200,  //  0009  CALL	R3	1
      0x4C100000,  //  000A  LDNIL	R4
      0x1C100604,  //  000B  EQ	R4	R3	R4
      0x78120000,  //  000C  JMPF	R4	#000E
      0x880C0102,  //  000D  GETMBR	R3	R0	K2
      0x88100102,  //  000E  GETMBR	R4	R0	K2
      0x20100604,  //  000F  NE	R4	R3	R4
      0x7812000A,  //  0010  JMPF	R4	#001C
      0x60100009,  //  0011  GETGBL	R4	G9
      0x5C140600,  //  0012  MOVE	R5	R3
      0x7C100200,  //  0013  CALL	R4	1
      0x90020404,  //  0014  SETMBR	R0	K2	R4
      0x8C100104,  //  0015  GETMET	R4	R0	K4
      0x541A0007,  //  0016  LDINT	R6	8
      0x581C0005,  //  0017  LDCONST	R7	K5
      0x7C100600,  //  0018  CALL	R4	3
      0x60100001,  //  0019  GETGBL	R4	G1
      0x58140006,  //  001A  LDCONST	R5	K6
      0x7C100200,  //  001B  CALL	R4	1
      0x60100003,  //  001C  GETGBL	R4	G3
      0x5C140000,  //  001D  MOVE	R5	R0
      0x7C100200,  //  001E  CALL	R4	1
      0x8C100907,  //  001F  GETMET	R4	R4	K7
      0x7C100200,  //  0020  CALL	R4	1
      0x80000000,  //  0021  RET	0
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
    be_nested_map(9,
    ( (struct bmapnode*) &(const bmapnode[]) {
        { be_const_key_weak(fanspeed, 8), be_const_var(0) },
        { be_const_key_weak(TYPE, -1), be_nested_str_weak(fan) },
        { be_const_key_weak(TYPES, -1), be_const_simple_instance(be_nested_simple_instance(&be_class_map, {
        be_const_map( *     be_nested_map(1,
    ( (struct bmapnode*) &(const bmapnode[]) {
        { be_const_key_int(43, -1), be_const_int(2) },
    }))    ) } )) },
        { be_const_key_weak(NAME, -1), be_nested_str_weak(Fan) },
        { be_const_key_weak(CLUSTERS, -1), be_const_simple_instance(be_nested_simple_instance(&be_class_map, {
        be_const_map( *     be_nested_map(1,
    ( (struct bmapnode*) &(const bmapnode[]) {
        { be_const_key_int(8, -1), be_const_simple_instance(be_nested_simple_instance(&be_class_list, {
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
        { be_const_key_weak(invoke_request, -1), be_const_closure(Matter_Plugin_Fan_invoke_request_closure) },
        { be_const_key_weak(init, 0), be_const_closure(Matter_Plugin_Fan_init_closure) },
        { be_const_key_weak(update_shadow, -1), be_const_closure(Matter_Plugin_Fan_update_shadow_closure) },
        { be_const_key_weak(read_attribute, -1), be_const_closure(Matter_Plugin_Fan_read_attribute_closure) },
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
