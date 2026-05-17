/* MaSrm_Close @ 0008b9cc 118B */


/* YAMAHA::MaSrm_Close(unsigned int) */

void YAMAHA::MaSrm_Close(uint param_1)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  uchar local_20;
  undefined1 local_1f;
  byte local_1e;
  undefined1 local_1d;
  undefined1 local_1c;
  
  uVar1 = param_1 & 3;
  iVar2 = uVar1 * 0x70;
  if (*(int *)(*(int *)(DAT_0008ba44 + 0x8b9d8) + iVar2 + 0x44) == 3) {
    MaSrm_CtrlProc(uVar1);
  }
  piVar3 = (int *)(DAT_0008ba48 + 0x8b9f6);
  MaDevDrv_ResetIrqCtrl((uchar)(1 << uVar1),'\0');
  local_1f = (undefined1)uVar1;
  local_20 = 0xdd;
  local_1d = 0xe4;
  local_1c = 0x80;
  local_1e = *(byte *)(*piVar3 + iVar2 + 0x3a) & 3 | 0x80;
  MaDevDrv_SendDirectPacket(&local_20,5);
  *(undefined4 *)(iVar2 + *piVar3 + 0x44) = 0;
  return;
}

