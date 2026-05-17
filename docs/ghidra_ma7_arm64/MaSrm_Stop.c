/* MaSrm_Stop @ 001a9200 284B */


/* YAMAHA::MaSrm_Stop(unsigned int) */

void YAMAHA::MaSrm_Stop(uint param_1)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  byte bVar4;
  undefined4 uVar5;
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
  if (*(int *)(lVar1 + 0x4c) == 0) {
    uVar5 = 0xffffffff;
  }
  else {
    local_f = (byte)uVar3 | 0x80;
    local_10 = 0xdd;
    local_e = 0xe0;
    local_d = 0;
    local_c = 0;
    local_b = 0x80;
    uVar5 = MaDevDrv_SendDirectPacket(&local_10,6);
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
    *(undefined4 *)(lVar1 + 0x4c) = 1;
  }
  if (local_8 == *(long *)PTR___stack_chk_guard_00567868) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}

