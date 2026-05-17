/* MaAudCnv_ReqVoice @ 001b4fa8 76B */


/* YAMAHA::MaAudCnv_ReqVoice(_MACNV_SEQ_INFO*) */

undefined8 YAMAHA::MaAudCnv_ReqVoice(_MACNV_SEQ_INFO *param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  if ((param_1 != (_MACNV_SEQ_INFO *)0x0) && (lVar2 = *(long *)(param_1 + 8), lVar2 != 0)) {
    if (*(char *)(lVar2 + 0xc) == '\x01') {
      *(undefined4 *)(lVar2 + 0x48) = 0;
      *(undefined4 *)(lVar2 + 0x50) = 1;
      uVar1 = MaSndDrv_SetStream(param_1,0,*(uint *)(lVar2 + 0x14),*(uint *)(lVar2 + 0x40),0,
                                 *(uchar **)(lVar2 + 0x38),*(uint *)(lVar2 + 0x44));
      return uVar1;
    }
    return 0xffffffff;
  }
  return 0xfffffffe;
}

