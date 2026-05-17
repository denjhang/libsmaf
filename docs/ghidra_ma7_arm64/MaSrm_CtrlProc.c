/* MaSrm_CtrlProc @ 001a9d04 464B */


/* YAMAHA::MaSrm_CtrlProc(unsigned int) */

void YAMAHA::MaSrm_CtrlProc(uint param_1)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  uchar local_10;
  byte local_f;
  undefined1 local_e;
  undefined1 local_d;
  undefined1 local_c;
  undefined1 local_b;
  long local_8;
  
  uVar3 = param_1 & 3;
  lVar2 = (ulong)uVar3 * 0x78;
  lVar1 = DAT_005dd9b8 + lVar2;
  local_8 = *(long *)PTR___stack_chk_guard_00567868;
  if (*(int *)(lVar1 + 0x4c) == 2) {
    uVar5 = MaDevDrv_ReadStreamFifoStatus(uVar3);
    uVar6 = MaSrm_GetPos(uVar3);
    if ((*(char *)(lVar1 + 0x45) == '\x01') && (*(uint *)(lVar1 + 0x18) <= uVar6)) {
      *(undefined1 *)(lVar1 + 0x45) = 0;
      if (*(int *)(lVar1 + 4) == 0) {
        MaSmw_ReceiveMsg(6,(uint)*(byte *)(lVar1 + 0x40),6,0);
      }
      else {
        MaSmw_ReceiveMsg(2,(uint)*(byte *)(lVar1 + 0x40),6,0);
      }
    }
    if (*(uint *)(lVar1 + 4) == *(uint *)(lVar1 + 0x1c)) {
      if ((uVar5 >> 7 & 1) == 0) goto LAB_001a9d58;
    }
    else if (uVar6 < *(uint *)(lVar1 + 0x1c)) goto LAB_001a9d58;
    local_f = (byte)uVar3 | 0x80;
    local_10 = 0xdd;
    local_e = 0xe0;
    local_d = 0;
    local_c = 0;
    local_b = 0x80;
    MaDevDrv_SendDirectPacket(&local_10,6);
    *(undefined4 *)(lVar1 + 0x4c) = 1;
    if ((*(byte *)(lVar1 + 0x42) >> 4 & 1) != 0) {
      lVar2 = DAT_005dd9b8 + lVar2;
      bVar4 = MaDevDrv_ReadIntermediateReg(0x8e);
      if ((*(byte *)(lVar2 + 0x42) >> 6 & 1) == 0) {
        MaDevDrv_WriteIntermediateReg(0x8e,bVar4 & ((byte)(1 << (ulong)uVar3) ^ 0xff));
      }
      else {
        MaDevDrv_WriteIntermediateReg(0x8e,bVar4 & ((byte)(3 << (ulong)uVar3) ^ 0xff));
      }
    }
    if (*(int *)(lVar1 + 4) == 0) {
      MaSmw_ReceiveMsg(6,(uint)*(byte *)(lVar1 + 0x40),7,0);
    }
    else {
      MaSmw_ReceiveMsg(2,(uint)*(byte *)(lVar1 + 0x40),7,0);
    }
  }
LAB_001a9d58:
  if (local_8 != *(long *)PTR___stack_chk_guard_00567868) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

