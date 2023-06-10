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
    ( &(const bvalue[20]) {     /* constants */
    /* K0   */  be_nested_str_weak(matter),
    /* K1   */  be_nested_str_weak(TLV),
    /* K2   */  be_nested_str_weak(cluster),
    /* K3   */  be_nested_str_weak(command),
    /* K4   */  be_nested_str_weak(string),
    /* K5   */  be_nested_str_weak(format),
    /* K6   */  be_nested_str_weak(_X23_X23_X23SRR_X3AINVOKE_X20REQUEST_X20_X25s_X3A_X25s),
    /* K7   */  be_const_int(0),
    /* K8   */  be_nested_str_weak(findsubval),
    /* K9   */  be_nested_str_weak(tasmota),
    /* K10  */  be_nested_str_weak(scale_uint),
    /* K11  */  be_nested_str_weak(cmd),
    /* K12  */  be_nested_str_weak(fanspeed_X20),
    /* K13  */  be_nested_str_weak(update_shadow),
    /* K14  */  be_nested_str_weak(log),
    /* K15  */  be_nested_str_weak(speed_X3A),
    /* K16  */  be_const_int(1),
    /* K17  */  be_const_int(2),
    /* K18  */  be_const_int(3),
    /* K19  */  be_nested_str_weak(invoke_request),
    }),
    be_str_weak(invoke_request),
    &be_const_str_solidified,
    ( &(const binstruction[148]) {  /* code */
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
      0x541E0007,  //  0010  LDINT	R7	8
      0x1C1C0A07,  //  0011  EQ	R7	R5	R7
      0x781E0076,  //  0012  JMPF	R7	#008A
      0x1C1C0D07,  //  0013  EQ	R7	R6	K7
      0x781E001B,  //  0014  JMPF	R7	#0031
      0x8C1C0508,  //  0015  GETMET	R7	R2	K8
      0x58240007,  //  0016  LDCONST	R9	K7
      0x7C1C0400,  //  0017  CALL	R7	2
      0xB8221200,  //  0018  GETNGBL	R8	K9
      0x8C20110A,  //  0019  GETMET	R8	R8	K10
      0x5C280E00,  //  001A  MOVE	R10	R7
      0x582C0007,  //  001B  LDCONST	R11	K7
      0x543200FD,  //  001C  LDINT	R12	254
      0x58340007,  //  001D  LDCONST	R13	K7
      0x543A0003,  //  001E  LDINT	R14	4
      0x7C200C00,  //  001F  CALL	R8	6
      0xB8261200,  //  0020  GETNGBL	R9	K9
      0x8C24130B,  //  0021  GETMET	R9	R9	K11
      0x602C0008,  //  0022  GETGBL	R11	G8
      0x5C301000,  //  0023  MOVE	R12	R8
      0x7C2C0200,  //  0024  CALL	R11	1
      0x002E180B,  //  0025  ADD	R11	K12	R11
      0x7C240400,  //  0026  CALL	R9	2
      0x8C24010D,  //  0027  GETMET	R9	R0	K13
      0x7C240200,  //  0028  CALL	R9	1
      0x60240008,  //  0029  GETGBL	R9	G8
      0x5C280E00,  //  002A  MOVE	R10	R7
      0x7C240200,  //  002B  CALL	R9	1
      0x00261E09,  //  002C  ADD	R9	K15	R9
      0x900E1C09,  //  002D  SETMBR	R3	K14	R9
      0x50240200,  //  002E  LDBOOL	R9	1	0
      0x80041200,  //  002F  RET	1	R9
      0x70020057,  //  0030  JMP		#0089
      0x1C1C0D10,  //  0031  EQ	R7	R6	K16
      0x781E0002,  //  0032  JMPF	R7	#0036
      0x501C0200,  //  0033  LDBOOL	R7	1	0
      0x80040E00,  //  0034  RET	1	R7
      0x70020052,  //  0035  JMP		#0089
      0x1C1C0D11,  //  0036  EQ	R7	R6	K17
      0x781E001B,  //  0037  JMPF	R7	#0054
      0x8C1C0508,  //  0038  GETMET	R7	R2	K8
      0x58240007,  //  0039  LDCONST	R9	K7
      0x7C1C0400,  //  003A  CALL	R7	2
      0xB8221200,  //  003B  GETNGBL	R8	K9
      0x8C20110A,  //  003C  GETMET	R8	R8	K10
      0x5C280E00,  //  003D  MOVE	R10	R7
      0x582C0007,  //  003E  LDCONST	R11	K7
      0x543200FD,  //  003F  LDINT	R12	254
      0x58340007,  //  0040  LDCONST	R13	K7
      0x543A0003,  //  0041  LDINT	R14	4
      0x7C200C00,  //  0042  CALL	R8	6
      0xB8261200,  //  0043  GETNGBL	R9	K9
      0x8C24130B,  //  0044  GETMET	R9	R9	K11
      0x602C0008,  //  0045  GETGBL	R11	G8
      0x5C301000,  //  0046  MOVE	R12	R8
      0x7C2C0200,  //  0047  CALL	R11	1
      0x002E180B,  //  0048  ADD	R11	K12	R11
      0x7C240400,  //  0049  CALL	R9	2
      0x8C24010D,  //  004A  GETMET	R9	R0	K13
      0x7C240200,  //  004B  CALL	R9	1
      0x60240008,  //  004C  GETGBL	R9	G8
      0x5C280E00,  //  004D  MOVE	R10	R7
      0x7C240200,  //  004E  CALL	R9	1
      0x00261E09,  //  004F  ADD	R9	K15	R9
      0x900E1C09,  //  0050  SETMBR	R3	K14	R9
      0x50240200,  //  0051  LDBOOL	R9	1	0
      0x80041200,  //  0052  RET	1	R9
      0x70020034,  //  0053  JMP		#0089
      0x1C1C0D12,  //  0054  EQ	R7	R6	K18
      0x781E0002,  //  0055  JMPF	R7	#0059
      0x501C0200,  //  0056  LDBOOL	R7	1	0
      0x80040E00,  //  0057  RET	1	R7
      0x7002002F,  //  0058  JMP		#0089
      0x541E0003,  //  0059  LDINT	R7	4
      0x1C1C0C07,  //  005A  EQ	R7	R6	R7
      0x781E001B,  //  005B  JMPF	R7	#0078
      0x8C1C0508,  //  005C  GETMET	R7	R2	K8
      0x58240007,  //  005D  LDCONST	R9	K7
      0x7C1C0400,  //  005E  CALL	R7	2
      0xB8221200,  //  005F  GETNGBL	R8	K9
      0x8C20110A,  //  0060  GETMET	R8	R8	K10
      0x5C280E00,  //  0061  MOVE	R10	R7
      0x582C0007,  //  0062  LDCONST	R11	K7
      0x543200FD,  //  0063  LDINT	R12	254
      0x58340007,  //  0064  LDCONST	R13	K7
      0x543A0003,  //  0065  LDINT	R14	4
      0x7C200C00,  //  0066  CALL	R8	6
      0xB8261200,  //  0067  GETNGBL	R9	K9
      0x8C24130B,  //  0068  GETMET	R9	R9	K11
      0x602C0008,  //  0069  GETGBL	R11	G8
      0x5C301000,  //  006A  MOVE	R12	R8
      0x7C2C0200,  //  006B  CALL	R11	1
      0x002E180B,  //  006C  ADD	R11	K12	R11
      0x7C240400,  //  006D  CALL	R9	2
      0x8C24010D,  //  006E  GETMET	R9	R0	K13
      0x7C240200,  //  006F  CALL	R9	1
      0x60240008,  //  0070  GETGBL	R9	G8
      0x5C280E00,  //  0071  MOVE	R10	R7
      0x7C240200,  //  0072  CALL	R9	1
      0x00261E09,  //  0073  ADD	R9	K15	R9
      0x900E1C09,  //  0074  SETMBR	R3	K14	R9
      0x50240200,  //  0075  LDBOOL	R9	1	0
      0x80041200,  //  0076  RET	1	R9
      0x70020010,  //  0077  JMP		#0089
      0x541E0004,  //  0078  LDINT	R7	5
      0x1C1C0C07,  //  0079  EQ	R7	R6	R7
      0x781E0002,  //  007A  JMPF	R7	#007E
      0x501C0200,  //  007B  LDBOOL	R7	1	0
      0x80040E00,  //  007C  RET	1	R7
      0x7002000A,  //  007D  JMP		#0089
      0x541E0005,  //  007E  LDINT	R7	6
      0x1C1C0C07,  //  007F  EQ	R7	R6	R7
      0x781E0002,  //  0080  JMPF	R7	#0084
      0x501C0200,  //  0081  LDBOOL	R7	1	0
      0x80040E00,  //  0082  RET	1	R7
      0x70020004,  //  0083  JMP		#0089
      0x541E0006,  //  0084  LDINT	R7	7
      0x1C1C0C07,  //  0085  EQ	R7	R6	R7
      0x781E0001,  //  0086  JMPF	R7	#0089
      0x501C0200,  //  0087  LDBOOL	R7	1	0
      0x80040E00,  //  0088  RET	1	R7
      0x70020008,  //  0089  JMP		#0093
      0x601C0003,  //  008A  GETGBL	R7	G3
      0x5C200000,  //  008B  MOVE	R8	R0
      0x7C1C0200,  //  008C  CALL	R7	1
      0x8C1C0F13,  //  008D  GETMET	R7	R7	K19
      0x5C240200,  //  008E  MOVE	R9	R1
      0x5C280400,  //  008F  MOVE	R10	R2
      0x5C2C0600,  //  0090  MOVE	R11	R3
      0x7C1C0800,  //  0091  CALL	R7	4
      0x80040E00,  //  0092  RET	1	R7
      0x80000000,  //  0093  RET	0
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
    ( &(const bvalue[19]) {     /* constants */
    /* K0   */  be_nested_str_weak(string),
    /* K1   */  be_nested_str_weak(matter),
    /* K2   */  be_nested_str_weak(TLV),
    /* K3   */  be_nested_str_weak(cluster),
    /* K4   */  be_nested_str_weak(attribute),
    /* K5   */  be_nested_str_weak(format),
    /* K6   */  be_nested_str_weak(_X23_X23_X23SRR_X3AREAD_X20ATTRIBUTE_X20_X25s_X3A_X25s),
    /* K7   */  be_nested_str_weak(update_shadow_lazy),
    /* K8   */  be_const_int(0),
    /* K9   */  be_nested_str_weak(tasmota),
    /* K10  */  be_nested_str_weak(scale_uint),
    /* K11  */  be_nested_str_weak(fanspeed),
    /* K12  */  be_nested_str_weak(create_TLV),
    /* K13  */  be_nested_str_weak(U1),
    /* K14  */  be_const_int(2),
    /* K15  */  be_const_int(3),
    /* K16  */  be_nested_str_weak(U4),
    /* K17  */  be_const_int(1),
    /* K18  */  be_nested_str_weak(read_attribute),
    }),
    be_str_weak(read_attribute),
    &be_const_str_solidified,
    ( &(const binstruction[98]) {  /* code */
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
      0x541E0007,  //  0010  LDINT	R7	8
      0x1C1C0A07,  //  0011  EQ	R7	R5	R7
      0x781E0045,  //  0012  JMPF	R7	#0059
      0x8C1C0107,  //  0013  GETMET	R7	R0	K7
      0x7C1C0200,  //  0014  CALL	R7	1
      0x1C1C0D08,  //  0015  EQ	R7	R6	K8
      0x781E000D,  //  0016  JMPF	R7	#0025
      0xB81E1200,  //  0017  GETNGBL	R7	K9
      0x8C1C0F0A,  //  0018  GETMET	R7	R7	K10
      0x8824010B,  //  0019  GETMBR	R9	R0	K11
      0x58280008,  //  001A  LDCONST	R10	K8
      0x542E0003,  //  001B  LDINT	R11	4
      0x58300008,  //  001C  LDCONST	R12	K8
      0x543600FD,  //  001D  LDINT	R13	254
      0x7C1C0C00,  //  001E  CALL	R7	6
      0x8C20090C,  //  001F  GETMET	R8	R4	K12
      0x8828090D,  //  0020  GETMBR	R10	R4	K13
      0x5C2C0E00,  //  0021  MOVE	R11	R7
      0x7C200600,  //  0022  CALL	R8	3
      0x80041000,  //  0023  RET	1	R8
      0x70020032,  //  0024  JMP		#0058
      0x1C1C0D0E,  //  0025  EQ	R7	R6	K14
      0x781E0005,  //  0026  JMPF	R7	#002D
      0x8C1C090C,  //  0027  GETMET	R7	R4	K12
      0x8824090D,  //  0028  GETMBR	R9	R4	K13
      0x58280008,  //  0029  LDCONST	R10	K8
      0x7C1C0600,  //  002A  CALL	R7	3
      0x80040E00,  //  002B  RET	1	R7
      0x7002002A,  //  002C  JMP		#0058
      0x1C1C0D0F,  //  002D  EQ	R7	R6	K15
      0x781E0005,  //  002E  JMPF	R7	#0035
      0x8C1C090C,  //  002F  GETMET	R7	R4	K12
      0x8824090D,  //  0030  GETMBR	R9	R4	K13
      0x542A00FD,  //  0031  LDINT	R10	254
      0x7C1C0600,  //  0032  CALL	R7	3
      0x80040E00,  //  0033  RET	1	R7
      0x70020022,  //  0034  JMP		#0058
      0x541E000E,  //  0035  LDINT	R7	15
      0x1C1C0C07,  //  0036  EQ	R7	R6	R7
      0x781E0005,  //  0037  JMPF	R7	#003E
      0x8C1C090C,  //  0038  GETMET	R7	R4	K12
      0x8824090D,  //  0039  GETMBR	R9	R4	K13
      0x58280008,  //  003A  LDCONST	R10	K8
      0x7C1C0600,  //  003B  CALL	R7	3
      0x80040E00,  //  003C  RET	1	R7
      0x70020019,  //  003D  JMP		#0058
      0x541E0010,  //  003E  LDINT	R7	17
      0x1C1C0C07,  //  003F  EQ	R7	R6	R7
      0x781E0005,  //  0040  JMPF	R7	#0047
      0x8C1C090C,  //  0041  GETMET	R7	R4	K12
      0x8824090D,  //  0042  GETMBR	R9	R4	K13
      0x542A003B,  //  0043  LDINT	R10	60
      0x7C1C0600,  //  0044  CALL	R7	3
      0x80040E00,  //  0045  RET	1	R7
      0x70020010,  //  0046  JMP		#0058
      0x541EFFFB,  //  0047  LDINT	R7	65532
      0x1C1C0C07,  //  0048  EQ	R7	R6	R7
      0x781E0005,  //  0049  JMPF	R7	#0050
      0x8C1C090C,  //  004A  GETMET	R7	R4	K12
      0x88240910,  //  004B  GETMBR	R9	R4	K16
      0x58280011,  //  004C  LDCONST	R10	K17
      0x7C1C0600,  //  004D  CALL	R7	3
      0x80040E00,  //  004E  RET	1	R7
      0x70020007,  //  004F  JMP		#0058
      0x541EFFFC,  //  0050  LDINT	R7	65533
      0x1C1C0C07,  //  0051  EQ	R7	R6	R7
      0x781E0004,  //  0052  JMPF	R7	#0058
      0x8C1C090C,  //  0053  GETMET	R7	R4	K12
      0x88240910,  //  0054  GETMBR	R9	R4	K16
      0x542A0004,  //  0055  LDINT	R10	5
      0x7C1C0600,  //  0056  CALL	R7	3
      0x80040E00,  //  0057  RET	1	R7
      0x70020007,  //  0058  JMP		#0061
      0x601C0003,  //  0059  GETGBL	R7	G3
      0x5C200000,  //  005A  MOVE	R8	R0
      0x7C1C0200,  //  005B  CALL	R7	1
      0x8C1C0F12,  //  005C  GETMET	R7	R7	K18
      0x5C240200,  //  005D  MOVE	R9	R1
      0x5C280400,  //  005E  MOVE	R10	R2
      0x7C1C0600,  //  005F  CALL	R7	3
      0x80040E00,  //  0060  RET	1	R7
      0x80000000,  //  0061  RET	0
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
    ( &(const bvalue[ 7]) {     /* constants */
    /* K0   */  be_nested_str_weak(tasmota),
    /* K1   */  be_nested_str_weak(cmd),
    /* K2   */  be_nested_str_weak(fanspeed),
    /* K3   */  be_nested_str_weak(find),
    /* K4   */  be_nested_str_weak(attribute_updated),
    /* K5   */  be_const_int(0),
    /* K6   */  be_nested_str_weak(update_shadow),
    }),
    be_str_weak(update_shadow),
    &be_const_str_solidified,
    ( &(const binstruction[31]) {  /* code */
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
      0x78120007,  //  0010  JMPF	R4	#0019
      0x60100009,  //  0011  GETGBL	R4	G9
      0x5C140600,  //  0012  MOVE	R5	R3
      0x7C100200,  //  0013  CALL	R4	1
      0x90020404,  //  0014  SETMBR	R0	K2	R4
      0x8C100104,  //  0015  GETMET	R4	R0	K4
      0x541A0007,  //  0016  LDINT	R6	8
      0x581C0005,  //  0017  LDCONST	R7	K5
      0x7C100600,  //  0018  CALL	R4	3
      0x60100003,  //  0019  GETGBL	R4	G3
      0x5C140000,  //  001A  MOVE	R5	R0
      0x7C100200,  //  001B  CALL	R4	1
      0x8C100906,  //  001C  GETMET	R4	R4	K6
      0x7C100200,  //  001D  CALL	R4	1
      0x80000000,  //  001E  RET	0
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
