/* MaSrm_CtrlProc @ 0008b8b4 272B */


/* YAMAHA::MaSrm_CtrlProc(unsigned int) */

void YAMAHA::MaSrm_CtrlProc(uint param_1)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  byte bVar5;
  uint uVar6;
  int iVar7;
  uchar local_28;
  byte local_27;
  undefined1 local_26;
  undefined1 local_25;
  undefined1 local_24;
  undefined1 local_23;
  
  uVar6 = param_1 & 3;
  iVar7 = *(int *)(DAT_0008b9c4 + 0x8b8c2) + uVar6 * 0x70;
  if (*(int *)(iVar7 + 0x44) == 2) {
    uVar2 = MaDevDrv_ReadStreamFifoStatus(uVar6);
    uVar3 = MaSrm_GetPos(uVar6);
    if ((*(char *)(iVar7 + 0x3d) == '\x01') && (*(uint *)(iVar7 + 0x18) <= uVar3)) {
      *(undefined1 *)(iVar7 + 0x3d) = 0;
      if (*(int *)(iVar7 + 4) == 0) {
        MaSmw_ReceiveMsg(6,(uint)*(byte *)(iVar7 + 0x38),6,0);
      }
      else {
        MaSmw_ReceiveMsg(2,(uint)*(byte *)(iVar7 + 0x38),6,0);
      }
    }
    if (*(uint *)(iVar7 + 4) == *(uint *)(iVar7 + 0x1c)) {
      if ((uVar2 & 0x80) == 0) {
        return;
      }
    }
    else if (uVar3 < *(uint *)(iVar7 + 0x1c)) {
      return;
    }
    local_27 = (byte)uVar6 | 0x80;
    local_23 = 0x80;
    local_28 = 0xdd;
    local_26 = 0xe0;
    local_25 = 0;
    local_24 = 0;
    MaDevDrv_SendDirectPacket(&local_28,6);
    *(undefined4 *)(iVar7 + 0x44) = 1;
    if ((int)((uint)*(byte *)(iVar7 + 0x3a) << 0x1b) < 0) {
      iVar4 = *(int *)(DAT_0008b9c8 + 0x8b980);
      bVar1 = MaDevDrv_ReadIntermediateReg(0x8e);
      if ((int)((uint)*(byte *)(uVar6 * 0x70 + iVar4 + 0x3a) << 0x19) < 0) {
        bVar5 = (byte)(3 << uVar6);
      }
      else {
        bVar5 = (byte)(1 << uVar6);
      }
      MaDevDrv_WriteIntermediateReg(0x8e,bVar1 & ~bVar5);
    }
    if (*(int *)(iVar7 + 4) == 0) {
      MaSmw_ReceiveMsg(6,(uint)*(byte *)(iVar7 + 0x38),7,0);
    }
    else {
      MaSmw_ReceiveMsg(2,(uint)*(byte *)(iVar7 + 0x38),7,0);
    }
  }
  return;
}

