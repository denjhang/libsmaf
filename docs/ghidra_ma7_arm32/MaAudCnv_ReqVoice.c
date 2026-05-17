/* MaAudCnv_ReqVoice @ 000932a0 58B */


/* YAMAHA::MaAudCnv_ReqVoice(_MACNV_SEQ_INFO*) */

undefined4 YAMAHA::MaAudCnv_ReqVoice(_MACNV_SEQ_INFO *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if ((param_1 == (_MACNV_SEQ_INFO *)0x0) || (iVar2 = *(int *)(param_1 + 4), iVar2 == 0)) {
    uVar1 = 0xfffffffe;
  }
  else if (*(char *)(iVar2 + 8) == '\x01') {
    *(undefined4 *)(iVar2 + 0x38) = 1;
    *(undefined4 *)(iVar2 + 0x30) = 0;
    uVar1 = MaSndDrv_SetStream(param_1,0,*(uint *)(iVar2 + 0x10),*(uint *)(iVar2 + 0x28),0,
                               *(uchar **)(iVar2 + 0x24),*(uint *)(iVar2 + 0x2c));
  }
  else {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

