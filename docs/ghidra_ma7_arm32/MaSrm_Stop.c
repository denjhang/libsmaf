/* MaSrm_Stop @ 0008b184 148B */


/* YAMAHA::MaSrm_Stop(unsigned int) */

undefined4 YAMAHA::MaSrm_Stop(uint param_1)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  uchar local_20;
  byte local_1f;
  undefined1 local_1e;
  undefined1 local_1d;
  undefined1 local_1c;
  undefined1 local_1b;
  
  uVar4 = param_1 & 3;
  piVar6 = (int *)(DAT_0008b218 + 0x8b198);
  iVar5 = *piVar6 + uVar4 * 0x70;
  if (*(int *)(iVar5 + 0x44) == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    local_1f = (byte)uVar4 | 0x80;
    local_20 = 0xdd;
    local_1e = 0xe0;
    local_1d = 0;
    local_1c = 0;
    local_1b = 0x80;
    uVar2 = MaDevDrv_SendDirectPacket(&local_20,6);
    if ((int)((uint)*(byte *)(iVar5 + 0x3a) << 0x1b) < 0) {
      iVar3 = *piVar6;
      bVar1 = MaDevDrv_ReadIntermediateReg(0x8e);
      if ((int)((uint)*(byte *)(uVar4 * 0x70 + iVar3 + 0x3a) << 0x19) < 0) {
        iVar3 = 3;
      }
      else {
        iVar3 = 1;
      }
      MaDevDrv_WriteIntermediateReg(0x8e,bVar1 & ~(byte)(iVar3 << uVar4));
    }
    *(undefined4 *)(iVar5 + 0x44) = 1;
  }
  return uVar2;
}

