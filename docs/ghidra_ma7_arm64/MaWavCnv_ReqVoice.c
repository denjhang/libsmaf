/* MaWavCnv_ReqVoice @ 00215d8c 140B */


/* YAMAHA::MaWavCnv_ReqVoice(_MACNV_SEQ_INFO*) */

undefined8 YAMAHA::MaWavCnv_ReqVoice(_MACNV_SEQ_INFO *param_1)

{
  undefined8 uVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  
  if ((param_1 != (_MACNV_SEQ_INFO *)0x0) && (lVar2 = *(long *)(param_1 + 8), lVar2 != 0)) {
    if (*(char *)(lVar2 + 0xc) != '\x01') {
      return 0xffffffff;
    }
    if (*(int *)(lVar2 + 0x10) == 0x20) {
      uVar3 = 0x50;
      uVar4 = 0x10;
    }
    else if (*(int *)(lVar2 + 0x24) == 8) {
      uVar3 = 0x42;
      uVar4 = 2;
    }
    else {
      if (*(int *)(lVar2 + 0x24) != 0x10) {
        return 0xffffffff;
      }
      uVar3 = 0x41;
      uVar4 = 1;
    }
    if (*(int *)(lVar2 + 0x14) == 2) {
      uVar4 = uVar3;
    }
    uVar1 = MaSndDrv_SetStream(param_1,0,uVar4,*(uint *)(lVar2 + 0x18),*(uint *)(lVar2 + 0x20),
                               *(uchar **)(lVar2 + 0x28),*(uint *)(lVar2 + 0x30));
    return uVar1;
  }
  return 0xfffffffe;
}

