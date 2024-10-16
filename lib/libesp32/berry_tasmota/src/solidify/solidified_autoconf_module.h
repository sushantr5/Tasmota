/* Solidification of autoconf_module.h */
/********************************************************************\
* Generated code, don't edit                                         *
\********************************************************************/
#include "be_constobj.h"

extern const bclass be_class_Autoconf;

/********************************************************************
** Solidified function: page_autoconf_ctl
********************************************************************/
be_local_closure(Autoconf_page_autoconf_ctl,   /* name */
  be_nested_proto(
    12,                          /* nstack */
    1,                          /* argc */
    2,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    ( &(const bvalue[40]) {     /* constants */
    /* K0   */  be_nested_str(webserver),
    /* K1   */  be_nested_str(string),
    /* K2   */  be_nested_str(path),
    /* K3   */  be_nested_str(check_privileged_access),
    /* K4   */  be_nested_str(has_arg),
    /* K5   */  be_nested_str(reapply),
    /* K6   */  be_nested_str(tasmota),
    /* K7   */  be_nested_str(log),
    /* K8   */  be_nested_str(CFG_X3A_X20removing_X20first_X20time_X20marker),
    /* K9   */  be_const_int(2),
    /* K10  */  be_nested_str(clear_first_time),
    /* K11  */  be_nested_str(redirect),
    /* K12  */  be_nested_str(_X2F_X3Frst_X3D),
    /* K13  */  be_nested_str(zip),
    /* K14  */  be_nested_str(CFG_X3A_X20removing_X20autoconf_X20files),
    /* K15  */  be_nested_str(delete_all_configs),
    /* K16  */  be_nested_str(arg),
    /* K17  */  be_nested_str(reset),
    /* K18  */  be_nested_str(https_X3A_X2F_X2Fraw_X2Egithubusercontent_X2Ecom_X2Fsushantr5_X2FEZIE_X2Fmain_X2Fautoconf_X2F_X25s_X2F_X25s_X2Eautoconf),
    /* K19  */  be_nested_str(arch),
    /* K20  */  be_nested_str(CFG_X3A_X20downloading_X20_X27_X25s_X27),
    /* K21  */  be_nested_str(_X25s_X2Eautoconf),
    /* K22  */  be_nested_str(webclient),
    /* K23  */  be_nested_str(begin),
    /* K24  */  be_nested_str(GET),
    /* K25  */  be_nested_str(return_X20code_X3D_X25i),
    /* K26  */  be_nested_str(connection_error),
    /* K27  */  be_nested_str(write_file),
    /* K28  */  be_nested_str(close),
    /* K29  */  be_nested_str(value_error),
    /* K30  */  be_nested_str(Unknown_X20command),
    /* K31  */  be_nested_str(CFG_X3A_X20Exception_X3E_X20_X27_X25s_X27_X20_X2D_X20_X25s),
    /* K32  */  be_nested_str(content_start),
    /* K33  */  be_nested_str(Parameter_X20error),
    /* K34  */  be_nested_str(content_send_style),
    /* K35  */  be_nested_str(content_send),
    /* K36  */  be_nested_str(_X3Cp_X20style_X3D_X27width_X3A340px_X3B_X27_X3E_X3Cb_X3EException_X3A_X3C_X2Fb_X3E_X3Cbr_X3E_X27_X25s_X27_X3Cbr_X3E_X25s_X3C_X2Fp_X3E),
    /* K37  */  be_nested_str(content_button),
    /* K38  */  be_nested_str(BUTTON_CONFIGURATION),
    /* K39  */  be_nested_str(content_stop),
    }),
    &be_const_str_page_autoconf_ctl,
    &be_const_str_solidified,
    ( &(const binstruction[117]) {  /* code */
      0xA4060000,  //  0000  IMPORT	R1	K0
      0xA40A0200,  //  0001  IMPORT	R2	K1
      0xA40E0400,  //  0002  IMPORT	R3	K2
      0x8C100303,  //  0003  GETMET	R4	R1	K3
      0x7C100200,  //  0004  CALL	R4	1
      0x74120001,  //  0005  JMPT	R4	#0008
      0x4C100000,  //  0006  LDNIL	R4
      0x80040800,  //  0007  RET	1	R4
      0xA802004E,  //  0008  EXBLK	0	#0058
      0x8C100304,  //  0009  GETMET	R4	R1	K4
      0x58180005,  //  000A  LDCONST	R6	K5
      0x7C100400,  //  000B  CALL	R4	2
      0x7812000A,  //  000C  JMPF	R4	#0018
      0xB8120C00,  //  000D  GETNGBL	R4	K6
      0x8C100907,  //  000E  GETMET	R4	R4	K7
      0x58180008,  //  000F  LDCONST	R6	K8
      0x581C0009,  //  0010  LDCONST	R7	K9
      0x7C100600,  //  0011  CALL	R4	3
      0x8C10010A,  //  0012  GETMET	R4	R0	K10
      0x7C100200,  //  0013  CALL	R4	1
      0x8C10030B,  //  0014  GETMET	R4	R1	K11
      0x5818000C,  //  0015  LDCONST	R6	K12
      0x7C100400,  //  0016  CALL	R4	2
      0x7002003D,  //  0017  JMP		#0056
      0x8C100304,  //  0018  GETMET	R4	R1	K4
      0x5818000D,  //  0019  LDCONST	R6	K13
      0x7C100400,  //  001A  CALL	R4	2
      0x78120038,  //  001B  JMPF	R4	#0055
      0xB8120C00,  //  001C  GETNGBL	R4	K6
      0x8C100907,  //  001D  GETMET	R4	R4	K7
      0x5818000E,  //  001E  LDCONST	R6	K14
      0x581C0009,  //  001F  LDCONST	R7	K9
      0x7C100600,  //  0020  CALL	R4	3
      0x8C10010F,  //  0021  GETMET	R4	R0	K15
      0x7C100200,  //  0022  CALL	R4	1
      0x8C100310,  //  0023  GETMET	R4	R1	K16
      0x5818000D,  //  0024  LDCONST	R6	K13
      0x7C100400,  //  0025  CALL	R4	2
      0x20140911,  //  0026  NE	R5	R4	K17
      0x78160026,  //  0027  JMPF	R5	#004F
      0x60140018,  //  0028  GETGBL	R5	G24
      0x58180012,  //  0029  LDCONST	R6	K18
      0xB81E0C00,  //  002A  GETNGBL	R7	K6
      0x8C1C0F13,  //  002B  GETMET	R7	R7	K19
      0x7C1C0200,  //  002C  CALL	R7	1
      0x5C200800,  //  002D  MOVE	R8	R4
      0x7C140600,  //  002E  CALL	R5	3
      0xB81A0C00,  //  002F  GETNGBL	R6	K6
      0x8C180D07,  //  0030  GETMET	R6	R6	K7
      0x60200018,  //  0031  GETGBL	R8	G24
      0x58240014,  //  0032  LDCONST	R9	K20
      0x5C280A00,  //  0033  MOVE	R10	R5
      0x7C200400,  //  0034  CALL	R8	2
      0x58240009,  //  0035  LDCONST	R9	K9
      0x7C180600,  //  0036  CALL	R6	3
      0x60180018,  //  0037  GETGBL	R6	G24
      0x581C0015,  //  0038  LDCONST	R7	K21
      0x5C200800,  //  0039  MOVE	R8	R4
      0x7C180400,  //  003A  CALL	R6	2
      0xB81E2C00,  //  003B  GETNGBL	R7	K22
      0x7C1C0000,  //  003C  CALL	R7	0
      0x8C200F17,  //  003D  GETMET	R8	R7	K23
      0x5C280A00,  //  003E  MOVE	R10	R5
      0x7C200400,  //  003F  CALL	R8	2
      0x8C200F18,  //  0040  GETMET	R8	R7	K24
      0x7C200200,  //  0041  CALL	R8	1
      0x542600C7,  //  0042  LDINT	R9	200
      0x20241009,  //  0043  NE	R9	R8	R9
      0x78260004,  //  0044  JMPF	R9	#004A
      0x60240018,  //  0045  GETGBL	R9	G24
      0x58280019,  //  0046  LDCONST	R10	K25
      0x5C2C1000,  //  0047  MOVE	R11	R8
      0x7C240400,  //  0048  CALL	R9	2
      0xB0063409,  //  0049  RAISE	1	K26	R9
      0x8C240F1B,  //  004A  GETMET	R9	R7	K27
      0x5C2C0C00,  //  004B  MOVE	R11	R6
      0x7C240400,  //  004C  CALL	R9	2
      0x8C240F1C,  //  004D  GETMET	R9	R7	K28
      0x7C240200,  //  004E  CALL	R9	1
      0x8C14010A,  //  004F  GETMET	R5	R0	K10
      0x7C140200,  //  0050  CALL	R5	1
      0x8C14030B,  //  0051  GETMET	R5	R1	K11
      0x581C000C,  //  0052  LDCONST	R7	K12
      0x7C140400,  //  0053  CALL	R5	2
      0x70020000,  //  0054  JMP		#0056
      0xB0063B1E,  //  0055  RAISE	1	K29	K30
      0xA8040001,  //  0056  EXBLK	1	1
      0x7002001B,  //  0057  JMP		#0074
      0xAC100002,  //  0058  CATCH	R4	0	2
      0x70020018,  //  0059  JMP		#0073
      0x60180001,  //  005A  GETGBL	R6	G1
      0x601C0018,  //  005B  GETGBL	R7	G24
      0x5820001F,  //  005C  LDCONST	R8	K31
      0x5C240800,  //  005D  MOVE	R9	R4
      0x5C280A00,  //  005E  MOVE	R10	R5
      0x7C1C0600,  //  005F  CALL	R7	3
      0x7C180200,  //  0060  CALL	R6	1
      0x8C180320,  //  0061  GETMET	R6	R1	K32
      0x58200021,  //  0062  LDCONST	R8	K33
      0x7C180400,  //  0063  CALL	R6	2
      0x8C180322,  //  0064  GETMET	R6	R1	K34
      0x7C180200,  //  0065  CALL	R6	1
      0x8C180323,  //  0066  GETMET	R6	R1	K35
      0x60200018,  //  0067  GETGBL	R8	G24
      0x58240024,  //  0068  LDCONST	R9	K36
      0x5C280800,  //  0069  MOVE	R10	R4
      0x5C2C0A00,  //  006A  MOVE	R11	R5
      0x7C200600,  //  006B  CALL	R8	3
      0x7C180400,  //  006C  CALL	R6	2
      0x8C180325,  //  006D  GETMET	R6	R1	K37
      0x88200326,  //  006E  GETMBR	R8	R1	K38
      0x7C180400,  //  006F  CALL	R6	2
      0x8C180327,  //  0070  GETMET	R6	R1	K39
      0x7C180200,  //  0071  CALL	R6	1
      0x70020000,  //  0072  JMP		#0074
      0xB0080000,  //  0073  RAISE	2	R0	R0
      0x80000000,  //  0074  RET	0
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: autoexec
********************************************************************/
be_local_closure(Autoconf_autoexec,   /* name */
  be_nested_proto(
    13,                          /* nstack */
    1,                          /* argc */
    2,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    ( &(const bvalue[35]) {     /* constants */
    /* K0   */  be_nested_str(_archive),
    /* K1   */  be_nested_str(path),
    /* K2   */  be_nested_str(_X23_matter_device_X2Ejson),
    /* K3   */  be_nested_str(exists),
    /* K4   */  be_nested_str(is_first_time),
    /* K5   */  be_nested_str(tasmota),
    /* K6   */  be_nested_str(log),
    /* K7   */  be_nested_str(MTR_X20CFG_X3A_X20loading_X20),
    /* K8   */  be_const_int(3),
    /* K9   */  be_nested_str(r),
    /* K10  */  be_nested_str(_matter_device_X2Ejson),
    /* K11  */  be_nested_str(w),
    /* K12  */  be_nested_str(readbytes),
    /* K13  */  be_nested_str(write),
    /* K14  */  be_nested_str(close),
    /* K15  */  be_nested_str(MTR_X20CFG_X3A_X20loaded_X20_X20),
    /* K16  */  be_nested_str(MTR_X20CFG_X3A_X20could_X20not_X20copy_X20_X27_matter_device_X2Ejson_X27_X20_X28_X25s_X20_X2D_X20_X25s_X29_X27),
    /* K17  */  be_nested_str(_X23init_X2Ebat),
    /* K18  */  be_nested_str(set_first_time),
    /* K19  */  be_nested_str(run_bat),
    /* K20  */  be_nested_str(CFG_X3A_X20_X27init_X2Ebat_X27_X20done_X2C_X20restarting),
    /* K21  */  be_const_int(2),
    /* K22  */  be_nested_str(_X23display_X2Eini),
    /* K23  */  be_nested_str(display_X2Eini),
    /* K24  */  be_nested_str(CFG_X3A_X20_X27display_X2Eini_X27_X20extracted_X2C_X20restarting),
    /* K25  */  be_nested_str(CFG_X3A_X20could_X20not_X20copy_X20_X27display_X2Eini_X27_X20_X28_X25s_X20_X2D_X20_X25s_X29_X27),
    /* K26  */  be_nested_str(cmd),
    /* K27  */  be_nested_str(Restart_X201),
    /* K28  */  be_nested_str(_X23autoexec_X2Ebat),
    /* K29  */  be_nested_str(CFG_X3A_X20running_X20),
    /* K30  */  be_nested_str(CFG_X3A_X20ran_X20_X20),
    /* K31  */  be_nested_str(_X23autoexec_X2Ebe),
    /* K32  */  be_nested_str(CFG_X3A_X20loading_X20),
    /* K33  */  be_nested_str(load),
    /* K34  */  be_nested_str(CFG_X3A_X20loaded_X20_X20),
    }),
    &be_const_str_autoexec,
    &be_const_str_solidified,
    ( &(const binstruction[212]) {  /* code */
      0x88040100,  //  0000  GETMBR	R1	R0	K0
      0x4C080000,  //  0001  LDNIL	R2
      0x1C040202,  //  0002  EQ	R1	R1	R2
      0x78060000,  //  0003  JMPF	R1	#0005
      0x80000200,  //  0004  RET	0
      0xA4060200,  //  0005  IMPORT	R1	K1
      0x50080000,  //  0006  LDBOOL	R2	0	0
      0x880C0100,  //  0007  GETMBR	R3	R0	K0
      0x000C0702,  //  0008  ADD	R3	R3	K2
      0x8C100303,  //  0009  GETMET	R4	R1	K3
      0x5C180600,  //  000A  MOVE	R6	R3
      0x7C100400,  //  000B  CALL	R4	2
      0x78120039,  //  000C  JMPF	R4	#0047
      0x8C100104,  //  000D  GETMET	R4	R0	K4
      0x7C100200,  //  000E  CALL	R4	1
      0x78120036,  //  000F  JMPF	R4	#0047
      0xB8120A00,  //  0010  GETNGBL	R4	K5
      0x8C100906,  //  0011  GETMET	R4	R4	K6
      0x001A0E03,  //  0012  ADD	R6	K7	R3
      0x581C0008,  //  0013  LDCONST	R7	K8
      0x7C100600,  //  0014  CALL	R4	3
      0x4C100000,  //  0015  LDNIL	R4
      0x4C140000,  //  0016  LDNIL	R5
      0xA8020019,  //  0017  EXBLK	0	#0032
      0x60180011,  //  0018  GETGBL	R6	G17
      0x5C1C0600,  //  0019  MOVE	R7	R3
      0x58200009,  //  001A  LDCONST	R8	K9
      0x7C180400,  //  001B  CALL	R6	2
      0x5C100C00,  //  001C  MOVE	R4	R6
      0x60180011,  //  001D  GETGBL	R6	G17
      0x581C000A,  //  001E  LDCONST	R7	K10
      0x5820000B,  //  001F  LDCONST	R8	K11
      0x7C180400,  //  0020  CALL	R6	2
      0x5C140C00,  //  0021  MOVE	R5	R6
      0x8C18090C,  //  0022  GETMET	R6	R4	K12
      0x7C180200,  //  0023  CALL	R6	1
      0x8C1C0B0D,  //  0024  GETMET	R7	R5	K13
      0x5C240C00,  //  0025  MOVE	R9	R6
      0x7C1C0400,  //  0026  CALL	R7	2
      0x8C1C090E,  //  0027  GETMET	R7	R4	K14
      0x7C1C0200,  //  0028  CALL	R7	1
      0x8C1C0B0E,  //  0029  GETMET	R7	R5	K14
      0x7C1C0200,  //  002A  CALL	R7	1
      0xB81E0A00,  //  002B  GETNGBL	R7	K5
      0x8C1C0F06,  //  002C  GETMET	R7	R7	K6
      0x00261E03,  //  002D  ADD	R9	K15	R3
      0x58280008,  //  002E  LDCONST	R10	K8
      0x7C1C0600,  //  002F  CALL	R7	3
      0xA8040001,  //  0030  EXBLK	1	1
      0x70020014,  //  0031  JMP		#0047
      0xAC180002,  //  0032  CATCH	R6	0	2
      0x70020011,  //  0033  JMP		#0046
      0x60200001,  //  0034  GETGBL	R8	G1
      0x60240018,  //  0035  GETGBL	R9	G24
      0x58280010,  //  0036  LDCONST	R10	K16
      0x5C2C0C00,  //  0037  MOVE	R11	R6
      0x5C300E00,  //  0038  MOVE	R12	R7
      0x7C240600,  //  0039  CALL	R9	3
      0x7C200200,  //  003A  CALL	R8	1
      0x4C200000,  //  003B  LDNIL	R8
      0x20200808,  //  003C  NE	R8	R4	R8
      0x78220001,  //  003D  JMPF	R8	#0040
      0x8C20090E,  //  003E  GETMET	R8	R4	K14
      0x7C200200,  //  003F  CALL	R8	1
      0x4C200000,  //  0040  LDNIL	R8
      0x20200A08,  //  0041  NE	R8	R5	R8
      0x78220001,  //  0042  JMPF	R8	#0045
      0x8C200B0E,  //  0043  GETMET	R8	R5	K14
      0x7C200200,  //  0044  CALL	R8	1
      0x70020000,  //  0045  JMP		#0047
      0xB0080000,  //  0046  RAISE	2	R0	R0
      0x88100100,  //  0047  GETMBR	R4	R0	K0
      0x00100911,  //  0048  ADD	R4	R4	K17
      0x5C0C0800,  //  0049  MOVE	R3	R4
      0x8C100104,  //  004A  GETMET	R4	R0	K4
      0x7C100200,  //  004B  CALL	R4	1
      0x7812000F,  //  004C  JMPF	R4	#005D
      0x8C100303,  //  004D  GETMET	R4	R1	K3
      0x5C180600,  //  004E  MOVE	R6	R3
      0x7C100400,  //  004F  CALL	R4	2
      0x7812000B,  //  0050  JMPF	R4	#005D
      0x8C100112,  //  0051  GETMET	R4	R0	K18
      0x7C100200,  //  0052  CALL	R4	1
      0x8C100113,  //  0053  GETMET	R4	R0	K19
      0x5C180600,  //  0054  MOVE	R6	R3
      0x7C100400,  //  0055  CALL	R4	2
      0xB8120A00,  //  0056  GETNGBL	R4	K5
      0x8C100906,  //  0057  GETMET	R4	R4	K6
      0x58180014,  //  0058  LDCONST	R6	K20
      0x581C0015,  //  0059  LDCONST	R7	K21
      0x7C100600,  //  005A  CALL	R4	3
      0x50080200,  //  005B  LDBOOL	R2	1	0
      0x80000800,  //  005C  RET	0
      0x88100100,  //  005D  GETMBR	R4	R0	K0
      0x00100916,  //  005E  ADD	R4	R4	K22
      0x5C0C0800,  //  005F  MOVE	R3	R4
      0x8C100303,  //  0060  GETMET	R4	R1	K3
      0x5C180600,  //  0061  MOVE	R6	R3
      0x7C100400,  //  0062  CALL	R4	2
      0x78120040,  //  0063  JMPF	R4	#00A5
      0x8C100104,  //  0064  GETMET	R4	R0	K4
      0x7C100200,  //  0065  CALL	R4	1
      0x74120003,  //  0066  JMPT	R4	#006B
      0x8C100303,  //  0067  GETMET	R4	R1	K3
      0x58180017,  //  0068  LDCONST	R6	K23
      0x7C100400,  //  0069  CALL	R4	2
      0x74120039,  //  006A  JMPT	R4	#00A5
      0x8C100104,  //  006B  GETMET	R4	R0	K4
      0x7C100200,  //  006C  CALL	R4	1
      0x78120003,  //  006D  JMPF	R4	#0072
      0x5C100400,  //  006E  MOVE	R4	R2
      0x74120001,  //  006F  JMPT	R4	#0072
      0x8C100112,  //  0070  GETMET	R4	R0	K18
      0x7C100200,  //  0071  CALL	R4	1
      0x4C100000,  //  0072  LDNIL	R4
      0x4C140000,  //  0073  LDNIL	R5
      0xA802001A,  //  0074  EXBLK	0	#0090
      0x60180011,  //  0075  GETGBL	R6	G17
      0x5C1C0600,  //  0076  MOVE	R7	R3
      0x58200009,  //  0077  LDCONST	R8	K9
      0x7C180400,  //  0078  CALL	R6	2
      0x5C100C00,  //  0079  MOVE	R4	R6
      0x60180011,  //  007A  GETGBL	R6	G17
      0x581C0017,  //  007B  LDCONST	R7	K23
      0x5820000B,  //  007C  LDCONST	R8	K11
      0x7C180400,  //  007D  CALL	R6	2
      0x5C140C00,  //  007E  MOVE	R5	R6
      0x8C18090C,  //  007F  GETMET	R6	R4	K12
      0x7C180200,  //  0080  CALL	R6	1
      0x8C1C0B0D,  //  0081  GETMET	R7	R5	K13
      0x5C240C00,  //  0082  MOVE	R9	R6
      0x7C1C0400,  //  0083  CALL	R7	2
      0x8C1C090E,  //  0084  GETMET	R7	R4	K14
      0x7C1C0200,  //  0085  CALL	R7	1
      0x8C1C0B0E,  //  0086  GETMET	R7	R5	K14
      0x7C1C0200,  //  0087  CALL	R7	1
      0x50080200,  //  0088  LDBOOL	R2	1	0
      0xB81E0A00,  //  0089  GETNGBL	R7	K5
      0x8C1C0F06,  //  008A  GETMET	R7	R7	K6
      0x58240018,  //  008B  LDCONST	R9	K24
      0x58280015,  //  008C  LDCONST	R10	K21
      0x7C1C0600,  //  008D  CALL	R7	3
      0xA8040001,  //  008E  EXBLK	1	1
      0x70020014,  //  008F  JMP		#00A5
      0xAC180002,  //  0090  CATCH	R6	0	2
      0x70020011,  //  0091  JMP		#00A4
      0x60200001,  //  0092  GETGBL	R8	G1
      0x60240018,  //  0093  GETGBL	R9	G24
      0x58280019,  //  0094  LDCONST	R10	K25
      0x5C2C0C00,  //  0095  MOVE	R11	R6
      0x5C300E00,  //  0096  MOVE	R12	R7
      0x7C240600,  //  0097  CALL	R9	3
      0x7C200200,  //  0098  CALL	R8	1
      0x4C200000,  //  0099  LDNIL	R8
      0x20200808,  //  009A  NE	R8	R4	R8
      0x78220001,  //  009B  JMPF	R8	#009E
      0x8C20090E,  //  009C  GETMET	R8	R4	K14
      0x7C200200,  //  009D  CALL	R8	1
      0x4C200000,  //  009E  LDNIL	R8
      0x20200A08,  //  009F  NE	R8	R5	R8
      0x78220001,  //  00A0  JMPF	R8	#00A3
      0x8C200B0E,  //  00A1  GETMET	R8	R5	K14
      0x7C200200,  //  00A2  CALL	R8	1
      0x70020000,  //  00A3  JMP		#00A5
      0xB0080000,  //  00A4  RAISE	2	R0	R0
      0x780A0004,  //  00A5  JMPF	R2	#00AB
      0xB8120A00,  //  00A6  GETNGBL	R4	K5
      0x8C10091A,  //  00A7  GETMET	R4	R4	K26
      0x5818001B,  //  00A8  LDCONST	R6	K27
      0x7C100400,  //  00A9  CALL	R4	2
      0x80000800,  //  00AA  RET	0
      0x88100100,  //  00AB  GETMBR	R4	R0	K0
      0x0010091C,  //  00AC  ADD	R4	R4	K28
      0x5C0C0800,  //  00AD  MOVE	R3	R4
      0x8C100303,  //  00AE  GETMET	R4	R1	K3
      0x5C180600,  //  00AF  MOVE	R6	R3
      0x7C100400,  //  00B0  CALL	R4	2
      0x7812000C,  //  00B1  JMPF	R4	#00BF
      0xB8120A00,  //  00B2  GETNGBL	R4	K5
      0x8C100906,  //  00B3  GETMET	R4	R4	K6
      0x001A3A03,  //  00B4  ADD	R6	K29	R3
      0x581C0008,  //  00B5  LDCONST	R7	K8
      0x7C100600,  //  00B6  CALL	R4	3
      0x8C100113,  //  00B7  GETMET	R4	R0	K19
      0x5C180600,  //  00B8  MOVE	R6	R3
      0x7C100400,  //  00B9  CALL	R4	2
      0xB8120A00,  //  00BA  GETNGBL	R4	K5
      0x8C100906,  //  00BB  GETMET	R4	R4	K6
      0x001A3C03,  //  00BC  ADD	R6	K30	R3
      0x581C0008,  //  00BD  LDCONST	R7	K8
      0x7C100600,  //  00BE  CALL	R4	3
      0x88100100,  //  00BF  GETMBR	R4	R0	K0
      0x0010091F,  //  00C0  ADD	R4	R4	K31
      0x5C0C0800,  //  00C1  MOVE	R3	R4
      0x8C100303,  //  00C2  GETMET	R4	R1	K3
      0x5C180600,  //  00C3  MOVE	R6	R3
      0x7C100400,  //  00C4  CALL	R4	2
      0x7812000C,  //  00C5  JMPF	R4	#00D3
      0xB8120A00,  //  00C6  GETNGBL	R4	K5
      0x8C100906,  //  00C7  GETMET	R4	R4	K6
      0x001A4003,  //  00C8  ADD	R6	K32	R3
      0x581C0008,  //  00C9  LDCONST	R7	K8
      0x7C100600,  //  00CA  CALL	R4	3
      0xB8124200,  //  00CB  GETNGBL	R4	K33
      0x5C140600,  //  00CC  MOVE	R5	R3
      0x7C100200,  //  00CD  CALL	R4	1
      0xB8120A00,  //  00CE  GETNGBL	R4	K5
      0x8C100906,  //  00CF  GETMET	R4	R4	K6
      0x001A4403,  //  00D0  ADD	R6	K34	R3
      0x581C0008,  //  00D1  LDCONST	R7	K8
      0x7C100600,  //  00D2  CALL	R4	3
      0x80000000,  //  00D3  RET	0
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: run_bat
********************************************************************/
be_local_closure(Autoconf_run_bat,   /* name */
  be_nested_proto(
    13,                          /* nstack */
    2,                          /* argc */
    2,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    ( &(const bvalue[12]) {     /* constants */
    /* K0   */  be_nested_str(string),
    /* K1   */  be_nested_str(r),
    /* K2   */  be_nested_str(readline),
    /* K3   */  be_const_int(0),
    /* K4   */  be_nested_str(_X0A),
    /* K5   */  be_nested_str(_X0D),
    /* K6   */  be_nested_str(tasmota),
    /* K7   */  be_nested_str(cmd),
    /* K8   */  be_nested_str(close),
    /* K9   */  be_nested_str(log),
    /* K10  */  be_nested_str(CFG_X3A_X20could_X20not_X20run_X20_X25s_X20_X28_X25s_X20_X2D_X20_X25s_X29),
    /* K11  */  be_const_int(1),
    }),
    &be_const_str_run_bat,
    &be_const_str_solidified,
    ( &(const binstruction[69]) {  /* code */
      0xA40A0000,  //  0000  IMPORT	R2	K0
      0x4C0C0000,  //  0001  LDNIL	R3
      0xA802002D,  //  0002  EXBLK	0	#0031
      0x60100011,  //  0003  GETGBL	R4	G17
      0x5C140200,  //  0004  MOVE	R5	R1
      0x58180001,  //  0005  LDCONST	R6	K1
      0x7C100400,  //  0006  CALL	R4	2
      0x5C0C0800,  //  0007  MOVE	R3	R4
      0x50100200,  //  0008  LDBOOL	R4	1	0
      0x78120022,  //  0009  JMPF	R4	#002D
      0x8C100702,  //  000A  GETMET	R4	R3	K2
      0x7C100200,  //  000B  CALL	R4	1
      0x6014000C,  //  000C  GETGBL	R5	G12
      0x5C180800,  //  000D  MOVE	R6	R4
      0x7C140200,  //  000E  CALL	R5	1
      0x1C140B03,  //  000F  EQ	R5	R5	K3
      0x78160000,  //  0010  JMPF	R5	#0012
      0x7002001A,  //  0011  JMP		#002D
      0x6014000C,  //  0012  GETGBL	R5	G12
      0x5C180800,  //  0013  MOVE	R6	R4
      0x7C140200,  //  0014  CALL	R5	1
      0x24140B03,  //  0015  GT	R5	R5	K3
      0x7816000B,  //  0016  JMPF	R5	#0023
      0x5415FFFE,  //  0017  LDINT	R5	-1
      0x94140805,  //  0018  GETIDX	R5	R4	R5
      0x1C140B04,  //  0019  EQ	R5	R5	K4
      0x74160003,  //  001A  JMPT	R5	#001F
      0x5415FFFE,  //  001B  LDINT	R5	-1
      0x94140805,  //  001C  GETIDX	R5	R4	R5
      0x1C140B05,  //  001D  EQ	R5	R5	K5
      0x78160003,  //  001E  JMPF	R5	#0023
      0x5415FFFD,  //  001F  LDINT	R5	-2
      0x40160605,  //  0020  CONNECT	R5	K3	R5
      0x94100805,  //  0021  GETIDX	R4	R4	R5
      0x7001FFEE,  //  0022  JMP		#0012
      0x6014000C,  //  0023  GETGBL	R5	G12
      0x5C180800,  //  0024  MOVE	R6	R4
      0x7C140200,  //  0025  CALL	R5	1
      0x24140B03,  //  0026  GT	R5	R5	K3
      0x78160003,  //  0027  JMPF	R5	#002C
      0xB8160C00,  //  0028  GETNGBL	R5	K6
      0x8C140B07,  //  0029  GETMET	R5	R5	K7
      0x5C1C0800,  //  002A  MOVE	R7	R4
      0x7C140400,  //  002B  CALL	R5	2
      0x7001FFDA,  //  002C  JMP		#0008
      0x8C100708,  //  002D  GETMET	R4	R3	K8
      0x7C100200,  //  002E  CALL	R4	1
      0xA8040001,  //  002F  EXBLK	1	1
      0x70020012,  //  0030  JMP		#0044
      0xAC100002,  //  0031  CATCH	R4	0	2
      0x7002000F,  //  0032  JMP		#0043
      0xB81A0C00,  //  0033  GETNGBL	R6	K6
      0x8C180D09,  //  0034  GETMET	R6	R6	K9
      0x60200018,  //  0035  GETGBL	R8	G24
      0x5824000A,  //  0036  LDCONST	R9	K10
      0x5C280200,  //  0037  MOVE	R10	R1
      0x5C2C0800,  //  0038  MOVE	R11	R4
      0x5C300A00,  //  0039  MOVE	R12	R5
      0x7C200800,  //  003A  CALL	R8	4
      0x5824000B,  //  003B  LDCONST	R9	K11
      0x7C180600,  //  003C  CALL	R6	3
      0x4C180000,  //  003D  LDNIL	R6
      0x20180606,  //  003E  NE	R6	R3	R6
      0x781A0001,  //  003F  JMPF	R6	#0042
      0x8C180708,  //  0040  GETMET	R6	R3	K8
      0x7C180200,  //  0041  CALL	R6	1
      0x70020000,  //  0042  JMP		#0044
      0xB0080000,  //  0043  RAISE	2	R0	R0
      0x80000000,  //  0044  RET	0
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: page_autoconf_mgr
********************************************************************/
be_local_closure(Autoconf_page_autoconf_mgr,   /* name */
  be_nested_proto(
    18,                          /* nstack */
    1,                          /* argc */
    2,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    ( &(const bvalue[38]) {     /* constants */
    /* K0   */  be_nested_str(webserver),
    /* K1   */  be_nested_str(string),
    /* K2   */  be_nested_str(check_privileged_access),
    /* K3   */  be_nested_str(content_start),
    /* K4   */  be_nested_str(Auto_X2Dconfiguration),
    /* K5   */  be_nested_str(content_send_style),
    /* K6   */  be_nested_str(content_send),
    /* K7   */  be_nested_str(_X3Cp_X3E_X3Csmall_X3E_X26nbsp_X3B_X28This_X20feature_X20requires_X20an_X20internet_X20connection_X29_X3C_X2Fsmall_X3E_X3C_X2Fp_X3E),
    /* K8   */  be_nested_str(get_current_module_path),
    /* K9   */  be_nested_str(tr),
    /* K10  */  be_nested_str(get_current_module_name),
    /* K11  */  be_nested_str(_),
    /* K12  */  be_nested_str(_X20),
    /* K13  */  be_nested_str(_error),
    /* K14  */  be_nested_str(_X26lt_X3BError_X3A_X20apply_X20new_X20or_X20remove_X26gt_X3B),
    /* K15  */  be_nested_str(_X26lt_X3BNone_X26gt_X3B),
    /* K16  */  be_nested_str(_X3Cfieldset_X3E_X3Cstyle_X3E_X2Ebdis_X7Bbackground_X3A_X23888_X3B_X7D_X2Ebdis_X3Ahover_X7Bbackground_X3A_X23888_X3B_X7D_X3C_X2Fstyle_X3E),
    /* K17  */  be_nested_str(_X3Clegend_X3E_X3Cb_X20title_X3D_X27Autoconfiguration_X27_X3E_X26nbsp_X3BCurrent_X20auto_X2Dconfiguration_X3C_X2Fb_X3E_X3C_X2Flegend_X3E),
    /* K18  */  be_nested_str(_X3Cp_X3ECurrent_X20configuration_X3A_X20_X3C_X2Fp_X3E_X3Cp_X3E_X3Cb_X3E_X25s_X3C_X2Fb_X3E_X3C_X2Fp_X3E),
    /* K19  */  be_nested_str(_X3Cp_X3E_X3Cform_X20id_X3Dreapply_X20style_X3D_X27display_X3A_X20block_X3B_X27_X20action_X3D_X27_X2Fac_X27_X20method_X3D_X27post_X27_X20),
    /* K20  */  be_nested_str(onsubmit_X3D_X27return_X20confirm_X28_X22This_X20will_X20cause_X20a_X20restart_X2E_X22_X29_X3B_X27_X3E),
    /* K21  */  be_nested_str(_X3Cbutton_X20name_X3D_X27reapply_X27_X20class_X3D_X27button_X20bgrn_X27_X3ERe_X2Dapply_X20current_X20configuration_X3C_X2Fbutton_X3E),
    /* K22  */  be_nested_str(_X3C_X2Fform_X3E_X3C_X2Fp_X3E),
    /* K23  */  be_nested_str(_X3Cp_X3E_X3C_X2Fp_X3E_X3C_X2Ffieldset_X3E_X3Cp_X3E_X3C_X2Fp_X3E),
    /* K24  */  be_nested_str(_X3Clegend_X3E_X3Cb_X20title_X3D_X27New_X20autoconf_X27_X3E_X26nbsp_X3BSelect_X20new_X20auto_X2Dconfiguration_X3C_X2Fb_X3E_X3C_X2Flegend_X3E),
    /* K25  */  be_nested_str(_X3Cp_X3E_X3Cform_X20id_X3Dzip_X20style_X3D_X27display_X3A_X20block_X3B_X27_X20action_X3D_X27_X2Fac_X27_X20method_X3D_X27post_X27_X20),
    /* K26  */  be_nested_str(onsubmit_X3D_X27return_X20confirm_X28_X22This_X20will_X20change_X20the_X20current_X20configuration_X20and_X20cause_X20a_X20restart_X2E_X22_X29_X3B_X27_X3E),
    /* K27  */  be_nested_str(_X3Clabel_X3EChoose_X20a_X20device_X20configuration_X3A_X3C_X2Flabel_X3E_X3Cbr_X3E),
    /* K28  */  be_nested_str(_X3Cselect_X20name_X3D_X27zip_X27_X3E),
    /* K29  */  be_nested_str(load_templates),
    /* K30  */  be_nested_str(_X3Coption_X20value_X3D_X27reset_X27_X3E_X26lt_X3BRemove_X20autoconf_X26gt_X3B_X3C_X2Foption_X3E),
    /* K31  */  be_nested_str(_X3Coption_X20value_X3D_X27_X25s_X27_X3E_X25s_X3C_X2Foption_X3E),
    /* K32  */  be_nested_str(stop_iteration),
    /* K33  */  be_nested_str(_X3C_X2Fselect_X3E_X3Cp_X3E_X3C_X2Fp_X3E),
    /* K34  */  be_nested_str(_X3Cbutton_X20name_X3D_X27zipapply_X27_X20class_X3D_X27button_X20bgrn_X27_X3EApply_X20configuration_X3C_X2Fbutton_X3E),
    /* K35  */  be_nested_str(content_button),
    /* K36  */  be_nested_str(BUTTON_CONFIGURATION),
    /* K37  */  be_nested_str(content_stop),
    }),
    &be_const_str_page_autoconf_mgr,
    &be_const_str_solidified,
    ( &(const binstruction[124]) {  /* code */
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
      0x780E0006,  //  0011  JMPF	R3	#0019
      0x8C100509,  //  0012  GETMET	R4	R2	K9
      0x8C18010A,  //  0013  GETMET	R6	R0	K10
      0x7C180200,  //  0014  CALL	R6	1
      0x581C000B,  //  0015  LDCONST	R7	K11
      0x5820000C,  //  0016  LDCONST	R8	K12
      0x7C100800,  //  0017  CALL	R4	4
      0x70020004,  //  0018  JMP		#001E
      0x8810010D,  //  0019  GETMBR	R4	R0	K13
      0x78120001,  //  001A  JMPF	R4	#001D
      0x5810000E,  //  001B  LDCONST	R4	K14
      0x70020000,  //  001C  JMP		#001E
      0x5810000F,  //  001D  LDCONST	R4	K15
      0x8C140306,  //  001E  GETMET	R5	R1	K6
      0x581C0010,  //  001F  LDCONST	R7	K16
      0x7C140400,  //  0020  CALL	R5	2
      0x8C140306,  //  0021  GETMET	R5	R1	K6
      0x601C0018,  //  0022  GETGBL	R7	G24
      0x58200011,  //  0023  LDCONST	R8	K17
      0x7C1C0200,  //  0024  CALL	R7	1
      0x7C140400,  //  0025  CALL	R5	2
      0x8C140306,  //  0026  GETMET	R5	R1	K6
      0x601C0018,  //  0027  GETGBL	R7	G24
      0x58200012,  //  0028  LDCONST	R8	K18
      0x5C240800,  //  0029  MOVE	R9	R4
      0x7C1C0400,  //  002A  CALL	R7	2
      0x7C140400,  //  002B  CALL	R5	2
      0x780E000B,  //  002C  JMPF	R3	#0039
      0x8C140306,  //  002D  GETMET	R5	R1	K6
      0x581C0013,  //  002E  LDCONST	R7	K19
      0x7C140400,  //  002F  CALL	R5	2
      0x8C140306,  //  0030  GETMET	R5	R1	K6
      0x581C0014,  //  0031  LDCONST	R7	K20
      0x7C140400,  //  0032  CALL	R5	2
      0x8C140306,  //  0033  GETMET	R5	R1	K6
      0x581C0015,  //  0034  LDCONST	R7	K21
      0x7C140400,  //  0035  CALL	R5	2
      0x8C140306,  //  0036  GETMET	R5	R1	K6
      0x581C0016,  //  0037  LDCONST	R7	K22
      0x7C140400,  //  0038  CALL	R5	2
      0x8C140306,  //  0039  GETMET	R5	R1	K6
      0x581C0017,  //  003A  LDCONST	R7	K23
      0x7C140400,  //  003B  CALL	R5	2
      0x8C140306,  //  003C  GETMET	R5	R1	K6
      0x581C0010,  //  003D  LDCONST	R7	K16
      0x7C140400,  //  003E  CALL	R5	2
      0x8C140306,  //  003F  GETMET	R5	R1	K6
      0x601C0018,  //  0040  GETGBL	R7	G24
      0x58200018,  //  0041  LDCONST	R8	K24
      0x7C1C0200,  //  0042  CALL	R7	1
      0x7C140400,  //  0043  CALL	R5	2
      0x8C140306,  //  0044  GETMET	R5	R1	K6
      0x581C0019,  //  0045  LDCONST	R7	K25
      0x7C140400,  //  0046  CALL	R5	2
      0x8C140306,  //  0047  GETMET	R5	R1	K6
      0x581C001A,  //  0048  LDCONST	R7	K26
      0x7C140400,  //  0049  CALL	R5	2
      0x8C140306,  //  004A  GETMET	R5	R1	K6
      0x581C001B,  //  004B  LDCONST	R7	K27
      0x7C140400,  //  004C  CALL	R5	2
      0x8C140306,  //  004D  GETMET	R5	R1	K6
      0x581C001C,  //  004E  LDCONST	R7	K28
      0x7C140400,  //  004F  CALL	R5	2
      0x8C14011D,  //  0050  GETMET	R5	R0	K29
      0x7C140200,  //  0051  CALL	R5	1
      0x8C180306,  //  0052  GETMET	R6	R1	K6
      0x5820001E,  //  0053  LDCONST	R8	K30
      0x7C180400,  //  0054  CALL	R6	2
      0x60180010,  //  0055  GETGBL	R6	G16
      0x5C1C0A00,  //  0056  MOVE	R7	R5
      0x7C180200,  //  0057  CALL	R6	1
      0xA802000D,  //  0058  EXBLK	0	#0067
      0x5C1C0C00,  //  0059  MOVE	R7	R6
      0x7C1C0000,  //  005A  CALL	R7	0
      0x8C200306,  //  005B  GETMET	R8	R1	K6
      0x60280018,  //  005C  GETGBL	R10	G24
      0x582C001F,  //  005D  LDCONST	R11	K31
      0x5C300E00,  //  005E  MOVE	R12	R7
      0x8C340509,  //  005F  GETMET	R13	R2	K9
      0x5C3C0E00,  //  0060  MOVE	R15	R7
      0x5840000B,  //  0061  LDCONST	R16	K11
      0x5844000C,  //  0062  LDCONST	R17	K12
      0x7C340800,  //  0063  CALL	R13	4
      0x7C280600,  //  0064  CALL	R10	3
      0x7C200400,  //  0065  CALL	R8	2
      0x7001FFF1,  //  0066  JMP		#0059
      0x58180020,  //  0067  LDCONST	R6	K32
      0xAC180200,  //  0068  CATCH	R6	1	0
      0xB0080000,  //  0069  RAISE	2	R0	R0
      0x8C180306,  //  006A  GETMET	R6	R1	K6
      0x58200021,  //  006B  LDCONST	R8	K33
      0x7C180400,  //  006C  CALL	R6	2
      0x8C180306,  //  006D  GETMET	R6	R1	K6
      0x58200022,  //  006E  LDCONST	R8	K34
      0x7C180400,  //  006F  CALL	R6	2
      0x8C180306,  //  0070  GETMET	R6	R1	K6
      0x58200016,  //  0071  LDCONST	R8	K22
      0x7C180400,  //  0072  CALL	R6	2
      0x8C180306,  //  0073  GETMET	R6	R1	K6
      0x58200017,  //  0074  LDCONST	R8	K23
      0x7C180400,  //  0075  CALL	R6	2
      0x8C180323,  //  0076  GETMET	R6	R1	K35
      0x88200324,  //  0077  GETMBR	R8	R1	K36
      0x7C180400,  //  0078  CALL	R6	2
      0x8C180325,  //  0079  GETMET	R6	R1	K37
      0x7C180200,  //  007A  CALL	R6	1
      0x80000000,  //  007B  RET	0
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: get_current_module_name
********************************************************************/
be_local_closure(Autoconf_get_current_module_name,   /* name */
  be_nested_proto(
    3,                          /* nstack */
    1,                          /* argc */
    2,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    ( &(const bvalue[ 2]) {     /* constants */
    /* K0   */  be_nested_str(_archive),
    /* K1   */  be_const_int(0),
    }),
    &be_const_str_get_current_module_name,
    &be_const_str_solidified,
    ( &(const binstruction[ 5]) {  /* code */
      0x5405FFF5,  //  0000  LDINT	R1	-10
      0x40060201,  //  0001  CONNECT	R1	K1	R1
      0x88080100,  //  0002  GETMBR	R2	R0	K0
      0x94040401,  //  0003  GETIDX	R1	R2	R1
      0x80040200,  //  0004  RET	1	R1
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: delete_all_configs
********************************************************************/
be_local_closure(Autoconf_delete_all_configs,   /* name */
  be_nested_proto(
    10,                          /* nstack */
    1,                          /* argc */
    2,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    ( &(const bvalue[ 9]) {     /* constants */
    /* K0   */  be_nested_str(path),
    /* K1   */  be_nested_str(string),
    /* K2   */  be_nested_str(listdir),
    /* K3   */  be_nested_str(_X2F),
    /* K4   */  be_nested_str(find),
    /* K5   */  be_nested_str(_X2Eautoconf),
    /* K6   */  be_const_int(0),
    /* K7   */  be_nested_str(remove),
    /* K8   */  be_nested_str(stop_iteration),
    }),
    &be_const_str_delete_all_configs,
    &be_const_str_solidified,
    ( &(const binstruction[25]) {  /* code */
      0xA4060000,  //  0000  IMPORT	R1	K0
      0xA40A0200,  //  0001  IMPORT	R2	K1
      0x8C0C0302,  //  0002  GETMET	R3	R1	K2
      0x58140003,  //  0003  LDCONST	R5	K3
      0x7C0C0400,  //  0004  CALL	R3	2
      0x60100010,  //  0005  GETGBL	R4	G16
      0x5C140600,  //  0006  MOVE	R5	R3
      0x7C100200,  //  0007  CALL	R4	1
      0xA802000B,  //  0008  EXBLK	0	#0015
      0x5C140800,  //  0009  MOVE	R5	R4
      0x7C140000,  //  000A  CALL	R5	0
      0x8C180504,  //  000B  GETMET	R6	R2	K4
      0x5C200A00,  //  000C  MOVE	R8	R5
      0x58240005,  //  000D  LDCONST	R9	K5
      0x7C180600,  //  000E  CALL	R6	3
      0x24180D06,  //  000F  GT	R6	R6	K6
      0x781A0002,  //  0010  JMPF	R6	#0014
      0x8C180307,  //  0011  GETMET	R6	R1	K7
      0x5C200A00,  //  0012  MOVE	R8	R5
      0x7C180400,  //  0013  CALL	R6	2
      0x7001FFF3,  //  0014  JMP		#0009
      0x58100008,  //  0015  LDCONST	R4	K8
      0xAC100200,  //  0016  CATCH	R4	1	0
      0xB0080000,  //  0017  RAISE	2	R0	R0
      0x80000000,  //  0018  RET	0
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: set_first_time
********************************************************************/
be_local_closure(Autoconf_set_first_time,   /* name */
  be_nested_proto(
    4,                          /* nstack */
    1,                          /* argc */
    2,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    ( &(const bvalue[ 3]) {     /* constants */
    /* K0   */  be_nested_str(_X2F_X2Eautoconf),
    /* K1   */  be_nested_str(w),
    /* K2   */  be_nested_str(close),
    }),
    &be_const_str_set_first_time,
    &be_const_str_solidified,
    ( &(const binstruction[ 7]) {  /* code */
      0x60040011,  //  0000  GETGBL	R1	G17
      0x58080000,  //  0001  LDCONST	R2	K0
      0x580C0001,  //  0002  LDCONST	R3	K1
      0x7C040400,  //  0003  CALL	R1	2
      0x8C080302,  //  0004  GETMET	R2	R1	K2
      0x7C080200,  //  0005  CALL	R2	1
      0x80000000,  //  0006  RET	0
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: load_templates
********************************************************************/
be_local_closure(Autoconf_load_templates,   /* name */
  be_nested_proto(
    14,                          /* nstack */
    1,                          /* argc */
    2,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    ( &(const bvalue[20]) {     /* constants */
    /* K0   */  be_nested_str(string),
    /* K1   */  be_nested_str(json),
    /* K2   */  be_nested_str(https_X3A_X2F_X2Fraw_X2Egithubusercontent_X2Ecom_X2Fsushantr5_X2FEZIE_X2Fmain_X2Fautoconf_X2F_X25s_manifest_X2Ejson),
    /* K3   */  be_nested_str(tasmota),
    /* K4   */  be_nested_str(arch),
    /* K5   */  be_nested_str(log),
    /* K6   */  be_nested_str(CFG_X3A_X20loading_X20_X27_X25s_X27),
    /* K7   */  be_const_int(3),
    /* K8   */  be_nested_str(webclient),
    /* K9   */  be_nested_str(begin),
    /* K10  */  be_nested_str(GET),
    /* K11  */  be_nested_str(CFG_X3A_X20return_code_X3D_X25i),
    /* K12  */  be_const_int(2),
    /* K13  */  be_nested_str(get_string),
    /* K14  */  be_nested_str(close),
    /* K15  */  be_nested_str(load),
    /* K16  */  be_nested_str(CFG_X3A_X20loaded_X20_X27_X25s_X27),
    /* K17  */  be_nested_str(find),
    /* K18  */  be_nested_str(files),
    /* K19  */  be_nested_str(CFG_X3A_X20exception_X20_X27_X25s_X27_X20_X2D_X20_X27_X25s_X27),
    }),
    &be_const_str_load_templates,
    &be_const_str_solidified,
    ( &(const binstruction[86]) {  /* code */
      0xA4060000,  //  0000  IMPORT	R1	K0
      0xA40A0200,  //  0001  IMPORT	R2	K1
      0xA8020042,  //  0002  EXBLK	0	#0046
      0x600C0018,  //  0003  GETGBL	R3	G24
      0x58100002,  //  0004  LDCONST	R4	K2
      0xB8160600,  //  0005  GETNGBL	R5	K3
      0x8C140B04,  //  0006  GETMET	R5	R5	K4
      0x7C140200,  //  0007  CALL	R5	1
      0x7C0C0400,  //  0008  CALL	R3	2
      0xB8120600,  //  0009  GETNGBL	R4	K3
      0x8C100905,  //  000A  GETMET	R4	R4	K5
      0x60180018,  //  000B  GETGBL	R6	G24
      0x581C0006,  //  000C  LDCONST	R7	K6
      0x5C200600,  //  000D  MOVE	R8	R3
      0x7C180400,  //  000E  CALL	R6	2
      0x581C0007,  //  000F  LDCONST	R7	K7
      0x7C100600,  //  0010  CALL	R4	3
      0xB8121000,  //  0011  GETNGBL	R4	K8
      0x7C100000,  //  0012  CALL	R4	0
      0x8C140909,  //  0013  GETMET	R5	R4	K9
      0x5C1C0600,  //  0014  MOVE	R7	R3
      0x7C140400,  //  0015  CALL	R5	2
      0x8C14090A,  //  0016  GETMET	R5	R4	K10
      0x7C140200,  //  0017  CALL	R5	1
      0x541A00C7,  //  0018  LDINT	R6	200
      0x20180A06,  //  0019  NE	R6	R5	R6
      0x781A000A,  //  001A  JMPF	R6	#0026
      0xB81A0600,  //  001B  GETNGBL	R6	K3
      0x8C180D05,  //  001C  GETMET	R6	R6	K5
      0x60200018,  //  001D  GETGBL	R8	G24
      0x5824000B,  //  001E  LDCONST	R9	K11
      0x5C280A00,  //  001F  MOVE	R10	R5
      0x7C200400,  //  0020  CALL	R8	2
      0x5824000C,  //  0021  LDCONST	R9	K12
      0x7C180600,  //  0022  CALL	R6	3
      0x4C180000,  //  0023  LDNIL	R6
      0xA8040001,  //  0024  EXBLK	1	1
      0x80040C00,  //  0025  RET	1	R6
      0x8C18090D,  //  0026  GETMET	R6	R4	K13
      0x7C180200,  //  0027  CALL	R6	1
      0x8C1C090E,  //  0028  GETMET	R7	R4	K14
      0x7C1C0200,  //  0029  CALL	R7	1
      0x8C1C050F,  //  002A  GETMET	R7	R2	K15
      0x5C240C00,  //  002B  MOVE	R9	R6
      0x7C1C0400,  //  002C  CALL	R7	2
      0xB8220600,  //  002D  GETNGBL	R8	K3
      0x8C201105,  //  002E  GETMET	R8	R8	K5
      0x60280018,  //  002F  GETGBL	R10	G24
      0x582C0010,  //  0030  LDCONST	R11	K16
      0x60300008,  //  0031  GETGBL	R12	G8
      0x5C340E00,  //  0032  MOVE	R13	R7
      0x7C300200,  //  0033  CALL	R12	1
      0x7C280400,  //  0034  CALL	R10	2
      0x582C0007,  //  0035  LDCONST	R11	K7
      0x7C200600,  //  0036  CALL	R8	3
      0x8C200F11,  //  0037  GETMET	R8	R7	K17
      0x58280012,  //  0038  LDCONST	R10	K18
      0x7C200400,  //  0039  CALL	R8	2
      0x6024000F,  //  003A  GETGBL	R9	G15
      0x5C281000,  //  003B  MOVE	R10	R8
      0x602C0012,  //  003C  GETGBL	R11	G18
      0x7C240400,  //  003D  CALL	R9	2
      0x78260001,  //  003E  JMPF	R9	#0041
      0xA8040001,  //  003F  EXBLK	1	1
      0x80041000,  //  0040  RET	1	R8
      0x4C240000,  //  0041  LDNIL	R9
      0xA8040001,  //  0042  EXBLK	1	1
      0x80041200,  //  0043  RET	1	R9
      0xA8040001,  //  0044  EXBLK	1	1
      0x7002000E,  //  0045  JMP		#0055
      0xAC0C0002,  //  0046  CATCH	R3	0	2
      0x7002000B,  //  0047  JMP		#0054
      0xB8160600,  //  0048  GETNGBL	R5	K3
      0x8C140B05,  //  0049  GETMET	R5	R5	K5
      0x601C0018,  //  004A  GETGBL	R7	G24
      0x58200013,  //  004B  LDCONST	R8	K19
      0x5C240600,  //  004C  MOVE	R9	R3
      0x5C280800,  //  004D  MOVE	R10	R4
      0x7C1C0600,  //  004E  CALL	R7	3
      0x5820000C,  //  004F  LDCONST	R8	K12
      0x7C140600,  //  0050  CALL	R5	3
      0x4C140000,  //  0051  LDNIL	R5
      0x80040A00,  //  0052  RET	1	R5
      0x70020000,  //  0053  JMP		#0055
      0xB0080000,  //  0054  RAISE	2	R0	R0
      0x80000000,  //  0055  RET	0
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: web_add_config_button
********************************************************************/
be_local_closure(Autoconf_web_add_config_button,   /* name */
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
    /* K2   */  be_nested_str(_X3Cp_X3E_X3Cform_X20id_X3Dac_X20action_X3D_X27ac_X27_X20style_X3D_X27display_X3A_X20block_X3B_X27_X20method_X3D_X27get_X27_X3E_X3Cbutton_X3EAuto_X2Dconfiguration_X3C_X2Fbutton_X3E_X3C_X2Fform_X3E_X3C_X2Fp_X3E),
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
** Solidified function: is_first_time
********************************************************************/
be_local_closure(Autoconf_is_first_time,   /* name */
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
    /* K0   */  be_nested_str(path),
    /* K1   */  be_nested_str(exists),
    /* K2   */  be_nested_str(_X2F_X2Eautoconf),
    }),
    &be_const_str_is_first_time,
    &be_const_str_solidified,
    ( &(const binstruction[ 8]) {  /* code */
      0xA4060000,  //  0000  IMPORT	R1	K0
      0x8C080301,  //  0001  GETMET	R2	R1	K1
      0x58100002,  //  0002  LDCONST	R4	K2
      0x7C080400,  //  0003  CALL	R2	2
      0x780A0000,  //  0004  JMPF	R2	#0006
      0x50080001,  //  0005  LDBOOL	R2	0	1
      0x50080200,  //  0006  LDBOOL	R2	1	0
      0x80040400,  //  0007  RET	1	R2
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: init
********************************************************************/
be_local_closure(Autoconf_init,   /* name */
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
    /* K0   */  be_nested_str(path),
    /* K1   */  be_nested_str(string),
    /* K2   */  be_nested_str(listdir),
    /* K3   */  be_nested_str(_X2F),
    /* K4   */  be_nested_str(tasmota),
    /* K5   */  be_nested_str(add_driver),
    /* K6   */  be_const_int(0),
    /* K7   */  be_nested_str(find),
    /* K8   */  be_nested_str(_X2Eautoconf),
    /* K9   */  be_nested_str(log),
    /* K10  */  be_nested_str(CFG_X3A_X20multiple_X20autoconf_X20files_X20found_X2C_X20aborting_X20_X28_X27_X25s_X27_X20_X2B_X20_X27_X25s_X27_X29),
    /* K11  */  be_const_int(2),
    /* K12  */  be_nested_str(_error),
    /* K13  */  be_const_int(1),
    /* K14  */  be_nested_str(CFG_X3A_X20No_X20_X27_X2A_X2Eautoconf_X27_X20file_X20found),
    /* K15  */  be_const_int(3),
    /* K16  */  be_nested_str(_archive),
    }),
    &be_const_str_init,
    &be_const_str_solidified,
    ( &(const binstruction[53]) {  /* code */
      0xA4060000,  //  0000  IMPORT	R1	K0
      0xA40A0200,  //  0001  IMPORT	R2	K1
      0x8C0C0302,  //  0002  GETMET	R3	R1	K2
      0x58140003,  //  0003  LDCONST	R5	K3
      0x7C0C0400,  //  0004  CALL	R3	2
      0x4C100000,  //  0005  LDNIL	R4
      0xB8160800,  //  0006  GETNGBL	R5	K4
      0x8C140B05,  //  0007  GETMET	R5	R5	K5
      0x5C1C0000,  //  0008  MOVE	R7	R0
      0x7C140400,  //  0009  CALL	R5	2
      0x58140006,  //  000A  LDCONST	R5	K6
      0x6018000C,  //  000B  GETGBL	R6	G12
      0x5C1C0600,  //  000C  MOVE	R7	R3
      0x7C180200,  //  000D  CALL	R6	1
      0x14180A06,  //  000E  LT	R6	R5	R6
      0x781A0018,  //  000F  JMPF	R6	#0029
      0x8C180507,  //  0010  GETMET	R6	R2	K7
      0x94200605,  //  0011  GETIDX	R8	R3	R5
      0x58240008,  //  0012  LDCONST	R9	K8
      0x7C180600,  //  0013  CALL	R6	3
      0x24180D06,  //  0014  GT	R6	R6	K6
      0x781A0010,  //  0015  JMPF	R6	#0027
      0x4C180000,  //  0016  LDNIL	R6
      0x20180806,  //  0017  NE	R6	R4	R6
      0x781A000C,  //  0018  JMPF	R6	#0026
      0xB81A0800,  //  0019  GETNGBL	R6	K4
      0x8C180D09,  //  001A  GETMET	R6	R6	K9
      0x60200018,  //  001B  GETGBL	R8	G24
      0x5824000A,  //  001C  LDCONST	R9	K10
      0x5C280800,  //  001D  MOVE	R10	R4
      0x942C0605,  //  001E  GETIDX	R11	R3	R5
      0x7C200600,  //  001F  CALL	R8	3
      0x5824000B,  //  0020  LDCONST	R9	K11
      0x7C180600,  //  0021  CALL	R6	3
      0x50180200,  //  0022  LDBOOL	R6	1	0
      0x90021806,  //  0023  SETMBR	R0	K12	R6
      0x4C180000,  //  0024  LDNIL	R6
      0x80040C00,  //  0025  RET	1	R6
      0x94100605,  //  0026  GETIDX	R4	R3	R5
      0x00140B0D,  //  0027  ADD	R5	R5	K13
      0x7001FFE1,  //  0028  JMP		#000B
      0x4C180000,  //  0029  LDNIL	R6
      0x1C180806,  //  002A  EQ	R6	R4	R6
      0x781A0006,  //  002B  JMPF	R6	#0033
      0xB81A0800,  //  002C  GETNGBL	R6	K4
      0x8C180D09,  //  002D  GETMET	R6	R6	K9
      0x5820000E,  //  002E  LDCONST	R8	K14
      0x5824000F,  //  002F  LDCONST	R9	K15
      0x7C180600,  //  0030  CALL	R6	3
      0x4C180000,  //  0031  LDNIL	R6
      0x80040C00,  //  0032  RET	1	R6
      0x90022004,  //  0033  SETMBR	R0	K16	R4
      0x80000000,  //  0034  RET	0
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: preinit
********************************************************************/
be_local_closure(Autoconf_preinit,   /* name */
  be_nested_proto(
    7,                          /* nstack */
    1,                          /* argc */
    2,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    ( &(const bvalue[10]) {     /* constants */
    /* K0   */  be_nested_str(_archive),
    /* K1   */  be_nested_str(path),
    /* K2   */  be_nested_str(_X23preinit_X2Ebe),
    /* K3   */  be_nested_str(exists),
    /* K4   */  be_nested_str(tasmota),
    /* K5   */  be_nested_str(log),
    /* K6   */  be_nested_str(CFG_X3A_X20loading_X20),
    /* K7   */  be_const_int(3),
    /* K8   */  be_nested_str(load),
    /* K9   */  be_nested_str(CFG_X3A_X20loaded_X20_X20),
    }),
    &be_const_str_preinit,
    &be_const_str_solidified,
    ( &(const binstruction[26]) {  /* code */
      0x88040100,  //  0000  GETMBR	R1	R0	K0
      0x4C080000,  //  0001  LDNIL	R2
      0x1C040202,  //  0002  EQ	R1	R1	R2
      0x78060000,  //  0003  JMPF	R1	#0005
      0x80000200,  //  0004  RET	0
      0xA4060200,  //  0005  IMPORT	R1	K1
      0x88080100,  //  0006  GETMBR	R2	R0	K0
      0x00080502,  //  0007  ADD	R2	R2	K2
      0x8C0C0303,  //  0008  GETMET	R3	R1	K3
      0x5C140400,  //  0009  MOVE	R5	R2
      0x7C0C0400,  //  000A  CALL	R3	2
      0x780E000C,  //  000B  JMPF	R3	#0019
      0xB80E0800,  //  000C  GETNGBL	R3	K4
      0x8C0C0705,  //  000D  GETMET	R3	R3	K5
      0x00160C02,  //  000E  ADD	R5	K6	R2
      0x58180007,  //  000F  LDCONST	R6	K7
      0x7C0C0600,  //  0010  CALL	R3	3
      0xB80E1000,  //  0011  GETNGBL	R3	K8
      0x5C100400,  //  0012  MOVE	R4	R2
      0x7C0C0200,  //  0013  CALL	R3	1
      0xB80E0800,  //  0014  GETNGBL	R3	K4
      0x8C0C0705,  //  0015  GETMET	R3	R3	K5
      0x00161202,  //  0016  ADD	R5	K9	R2
      0x58180007,  //  0017  LDCONST	R6	K7
      0x7C0C0600,  //  0018  CALL	R3	3
      0x80000000,  //  0019  RET	0
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: reset
********************************************************************/
be_local_closure(Autoconf_reset,   /* name */
  be_nested_proto(
    11,                          /* nstack */
    1,                          /* argc */
    2,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    ( &(const bvalue[12]) {     /* constants */
    /* K0   */  be_nested_str(path),
    /* K1   */  be_nested_str(string),
    /* K2   */  be_nested_str(listdir),
    /* K3   */  be_nested_str(_X2F),
    /* K4   */  be_const_int(0),
    /* K5   */  be_nested_str(find),
    /* K6   */  be_nested_str(_X2Eautoconf),
    /* K7   */  be_nested_str(remove),
    /* K8   */  be_nested_str(CFG_X3A_X20removed_X20file_X20_X27_X25s_X27),
    /* K9   */  be_const_int(1),
    /* K10  */  be_nested_str(_archive),
    /* K11  */  be_nested_str(_error),
    }),
    &be_const_str_reset,
    &be_const_str_solidified,
    ( &(const binstruction[35]) {  /* code */
      0xA4060000,  //  0000  IMPORT	R1	K0
      0xA40A0200,  //  0001  IMPORT	R2	K1
      0x8C0C0302,  //  0002  GETMET	R3	R1	K2
      0x58140003,  //  0003  LDCONST	R5	K3
      0x7C0C0400,  //  0004  CALL	R3	2
      0x4C100000,  //  0005  LDNIL	R4
      0x58140004,  //  0006  LDCONST	R5	K4
      0x6018000C,  //  0007  GETGBL	R6	G12
      0x5C1C0600,  //  0008  MOVE	R7	R3
      0x7C180200,  //  0009  CALL	R6	1
      0x14180A06,  //  000A  LT	R6	R5	R6
      0x781A0011,  //  000B  JMPF	R6	#001E
      0x94180605,  //  000C  GETIDX	R6	R3	R5
      0x8C1C0505,  //  000D  GETMET	R7	R2	K5
      0x5C240C00,  //  000E  MOVE	R9	R6
      0x58280006,  //  000F  LDCONST	R10	K6
      0x7C1C0600,  //  0010  CALL	R7	3
      0x241C0F04,  //  0011  GT	R7	R7	K4
      0x781E0008,  //  0012  JMPF	R7	#001C
      0x8C1C0307,  //  0013  GETMET	R7	R1	K7
      0x5C240C00,  //  0014  MOVE	R9	R6
      0x7C1C0400,  //  0015  CALL	R7	2
      0x601C0001,  //  0016  GETGBL	R7	G1
      0x60200018,  //  0017  GETGBL	R8	G24
      0x58240008,  //  0018  LDCONST	R9	K8
      0x5C280C00,  //  0019  MOVE	R10	R6
      0x7C200400,  //  001A  CALL	R8	2
      0x7C1C0200,  //  001B  CALL	R7	1
      0x00140B09,  //  001C  ADD	R5	R5	K9
      0x7001FFE8,  //  001D  JMP		#0007
      0x4C180000,  //  001E  LDNIL	R6
      0x90021406,  //  001F  SETMBR	R0	K10	R6
      0x4C180000,  //  0020  LDNIL	R6
      0x90021606,  //  0021  SETMBR	R0	K11	R6
      0x80000000,  //  0022  RET	0
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: web_add_handler
********************************************************************/
be_local_closure(Autoconf_web_add_handler,   /* name */
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
        /* K0   */  be_nested_str(page_autoconf_mgr),
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
        /* K0   */  be_nested_str(page_autoconf_ctl),
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
    /* K2   */  be_nested_str(_X2Fac),
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
** Solidified function: clear_first_time
********************************************************************/
be_local_closure(Autoconf_clear_first_time,   /* name */
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
    /* K0   */  be_nested_str(path),
    /* K1   */  be_nested_str(remove),
    /* K2   */  be_nested_str(_X2F_X2Eautoconf),
    }),
    &be_const_str_clear_first_time,
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
** Solidified function: get_current_module_path
********************************************************************/
be_local_closure(Autoconf_get_current_module_path,   /* name */
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
    /* K0   */  be_nested_str(_archive),
    }),
    &be_const_str_get_current_module_path,
    &be_const_str_solidified,
    ( &(const binstruction[ 2]) {  /* code */
      0x88040100,  //  0000  GETMBR	R1	R0	K0
      0x80040200,  //  0001  RET	1	R1
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified class: Autoconf
********************************************************************/
be_local_class(Autoconf,
    2,
    NULL,
    be_nested_map(18,
    ( (struct bmapnode*) &(const bmapnode[]) {
        { be_const_key(page_autoconf_ctl, -1), be_const_closure(Autoconf_page_autoconf_ctl_closure) },
        { be_const_key(autoexec, -1), be_const_closure(Autoconf_autoexec_closure) },
        { be_const_key(run_bat, 17), be_const_closure(Autoconf_run_bat_closure) },
        { be_const_key(page_autoconf_mgr, -1), be_const_closure(Autoconf_page_autoconf_mgr_closure) },
        { be_const_key(get_current_module_path, 13), be_const_closure(Autoconf_get_current_module_path_closure) },
        { be_const_key(preinit, -1), be_const_closure(Autoconf_preinit_closure) },
        { be_const_key(clear_first_time, -1), be_const_closure(Autoconf_clear_first_time_closure) },
        { be_const_key(load_templates, -1), be_const_closure(Autoconf_load_templates_closure) },
        { be_const_key(_archive, -1), be_const_var(0) },
        { be_const_key(web_add_config_button, -1), be_const_closure(Autoconf_web_add_config_button_closure) },
        { be_const_key(is_first_time, -1), be_const_closure(Autoconf_is_first_time_closure) },
        { be_const_key(web_add_handler, -1), be_const_closure(Autoconf_web_add_handler_closure) },
        { be_const_key(delete_all_configs, 4), be_const_closure(Autoconf_delete_all_configs_closure) },
        { be_const_key(reset, 5), be_const_closure(Autoconf_reset_closure) },
        { be_const_key(get_current_module_name, 11), be_const_closure(Autoconf_get_current_module_name_closure) },
        { be_const_key(init, 6), be_const_closure(Autoconf_init_closure) },
        { be_const_key(_error, -1), be_const_var(1) },
        { be_const_key(set_first_time, -1), be_const_closure(Autoconf_set_first_time_closure) },
    })),
    (bstring*) &be_const_str_Autoconf
);

/********************************************************************
** Solidified function: _anonymous_
********************************************************************/
be_local_closure(autoconf__anonymous_,   /* name */
  be_nested_proto(
    3,                          /* nstack */
    1,                          /* argc */
    0,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    ( &(const bvalue[ 1]) {     /* constants */
    /* K0   */  be_const_class(be_class_Autoconf),
    }),
    &be_const_str__anonymous_,
    &be_const_str_solidified,
    ( &(const binstruction[ 5]) {  /* code */
      0x58040000,  //  0000  LDCONST	R1	K0
      0xB4000000,  //  0001  CLASS	K0
      0x5C080200,  //  0002  MOVE	R2	R1
      0x7C080000,  //  0003  CALL	R2	0
      0x80040400,  //  0004  RET	1	R2
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified module: autoconf
********************************************************************/
be_local_module(autoconf,
    "autoconf",
    be_nested_map(1,
    ( (struct bmapnode*) &(const bmapnode[]) {
        { be_const_key(init, -1), be_const_closure(autoconf__anonymous__closure) },
    }))
);
BE_EXPORT_VARIABLE be_define_const_native_module(autoconf);
/********************************************************************/
/********************************************************************/
/* End of solidification */
