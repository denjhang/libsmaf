/* MaWavCnv_ReqVoice @ 000d739c 92B */


/* YAMAHA::MaWavCnv_ReqVoice(_MACNV_SEQ_INFO*) */

undefined4 YAMAHA::MaWavCnv_ReqVoice(_MACNV_SEQ_INFO *param_1)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  if ((param_1 == (_MACNV_SEQ_INFO *)0x0) || (iVar3 = *(int *)(param_1 + 4), iVar3 == 0)) {
    uVar1 = 0xfffffffe;
  }
  else {
    if (*(char *)(iVar3 + 8) != '\x01') {
      return 0xffffffff;
    }
    if (*(int *)(iVar3 + 0xc) == 0x20) {
      uVar4 = 0x50;
      uVar2 = 0x10;
    }
    else if (*(int *)(iVar3 + 0x20) == 8) {
      uVar4 = 0x42;
      uVar2 = 2;
    }
    else {
      if (*(int *)(iVar3 + 0x20) != 0x10) {
        return 0xffffffff;
      }
      uVar4 = 0x41;
      uVar2 = 1;
    }
    if (*(int *)(iVar3 + 0x10) == 2) {
      uVar2 = uVar4;
    }
    uVar1 = MaSndDrv_SetStream(param_1,0,uVar2,*(uint *)(iVar3 + 0x14),*(uint *)(iVar3 + 0x1c),
                               *(uchar **)(iVar3 + 0x24),*(uint *)(iVar3 + 0x28));
  }
  return uVar1;
}

