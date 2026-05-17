/* MaSrm_CtrlProc2 @ 0008ba4c 86B */


/* YAMAHA::MaSrm_CtrlProc2(unsigned int) */

undefined4 YAMAHA::MaSrm_CtrlProc2(uint param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uchar local_18;
  byte local_17;
  undefined1 local_16;
  undefined1 local_15;
  
  uVar2 = param_1 & 3;
  iVar3 = *(int *)(DAT_0008baa4 + 0x8ba58);
  iVar1 = MaDevDrv_ReadStreamFifoStatus(uVar2);
  if (iVar1 << 0x18 < 0) {
    local_17 = (byte)uVar2 | 0x80;
    local_18 = 0xdd;
    local_16 = 0xe4;
    local_15 = 0xa0;
    MaDevDrv_SendDirectPacket(&local_18,4);
    *(undefined4 *)(iVar3 + uVar2 * 0x70 + 0x44) = 1;
    return 1;
  }
  return 0;
}

