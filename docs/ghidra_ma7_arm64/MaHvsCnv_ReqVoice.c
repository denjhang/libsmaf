/* MaHvsCnv_ReqVoice @ 001b63a8 48B */


/* YAMAHA::MaHvsCnv_ReqVoice(_MACNV_SEQ_INFO*) */

undefined8 YAMAHA::MaHvsCnv_ReqVoice(_MACNV_SEQ_INFO *param_1)

{
  undefined8 uVar1;
  char *pcVar2;
  
  if ((param_1 != (_MACNV_SEQ_INFO *)0x0) &&
     (pcVar2 = *(char **)(param_1 + 8), pcVar2 != (char *)0x0)) {
    if (*pcVar2 == '\x01') {
      uVar1 = MaSndDrv_SetHvLangType(param_1,(uint)(byte)pcVar2[2]);
      return uVar1;
    }
    return 0xffffffff;
  }
  return 0xfffffffe;
}

