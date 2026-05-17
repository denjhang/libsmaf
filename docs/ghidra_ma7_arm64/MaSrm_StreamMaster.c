/* MaSrm_StreamMaster @ 001a78c8 632B */


/* YAMAHA::MaSrm_StreamMaster(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int)
    */

void YAMAHA::MaSrm_StreamMaster(uint param_1,uint param_2,uint param_3,uint param_4,uint param_5)

{
  long lVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  char cVar4;
  byte bVar5;
  byte bVar6;
  uchar uVar7;
  int iVar8;
  uint uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  uchar local_18;
  byte local_17;
  undefined1 local_16;
  byte local_15;
  undefined1 local_14;
  byte local_13;
  undefined1 local_12;
  byte local_11;
  long local_8;
  
  uVar10 = (ulong)param_2;
  uVar11 = (ulong)param_3;
  lVar12 = uVar10 * 0x600 + uVar11 * 0x18;
  local_8 = *(long *)PTR___stack_chk_guard_00567868;
  lVar13 = (&DAT_005dc1c0)[uVar11 * 3 + uVar10 * 0xc0];
  if (lVar13 != 0) {
    bVar5 = (byte)param_4;
    uVar3 = (&DAT_005dc1c8)[lVar12];
    bVar6 = (byte)param_1 | 0x80;
    uVar2 = (&DAT_005dc1bc)[uVar11 * 6 + uVar10 * 0x180];
    lVar1 = DAT_005dd9b8 + (ulong)param_1 * 0x78;
    cVar4 = (&DAT_005dc1ca)[lVar12];
    *(undefined4 *)(lVar1 + 4) = 1;
    *(char *)(lVar1 + 0x40) = (char)param_2;
    *(char *)(lVar1 + 0x43) = (char)param_5;
    *(char *)(lVar1 + 0x47) = (char)param_3;
    *(undefined4 *)(lVar1 + 0x10) = uVar2;
    *(long *)(lVar1 + 0x38) = lVar13;
    *(undefined1 *)(lVar1 + 0x42) = uVar3;
    *(undefined4 *)(lVar1 + 0x1c) = 1;
    *(byte *)(lVar1 + 0x48) = bVar5;
    local_18 = 0xdd;
    local_16 = 0xe4;
    local_15 = 0xa0;
    local_14 = 0xe4;
    local_13 = 0xb0;
    if (cVar4 == '\x01') {
      local_12 = 0xe0;
      uVar9 = 10;
      local_11 = 0x80;
      lVar12 = 9;
      lVar13 = 8;
    }
    else {
      uVar9 = 8;
      lVar12 = 7;
      lVar13 = 6;
    }
    (&local_18)[lVar13] = 0xa8;
    (&local_18)[lVar12] = 0x80;
    local_17 = bVar6;
    iVar8 = MaDevDrv_SendDirectPacket(&local_18,uVar9);
    if ((-1 < iVar8) && (iVar8 = MaDevDrv_WaitStreamFifoEmpty(param_1), -1 < iVar8)) {
      uVar7 = (uchar)(1 << (ulong)(param_1 & 0x1f));
      MaDevDrv_ResetIrqCtrl(uVar7,'\0');
      if (*(uint *)(lVar1 + 0x10) < 0x401) {
        MaDevDrv_SendStreamData(param_1,*(uchar **)(lVar1 + 0x38),*(uint *)(lVar1 + 0x10));
        *(undefined8 *)(lVar1 + 0x38) = 0;
        *(undefined4 *)(lVar1 + 0x14) = 0;
      }
      else {
        MaDevDrv_SendStreamData(param_1,*(uchar **)(lVar1 + 0x38),0x400);
        MaDevDrv_SetIrqCtrl(uVar7,'\0');
        *(long *)(lVar1 + 0x38) = *(long *)(lVar1 + 0x38) + 0x400;
        *(int *)(lVar1 + 0x14) = *(int *)(lVar1 + 0x10) + -0x400;
      }
      local_15 = bVar5 | 0xe0;
      local_18 = 0xdd;
      local_16 = 0xe4;
      if (param_1 < 3) {
        local_13 = (byte)*(uint *)(&DAT_0048c520 + (ulong)param_1 * 4) | 0x80;
        lVar12 = (ulong)*(uint *)(&DAT_0048c520 + (ulong)param_1 * 4) * 0x78;
      }
      else {
        lVar12 = 0xf0;
        local_13 = 0x82;
      }
      local_14 = 0xdd;
      local_12 = 0xe4;
      local_17 = bVar6;
      local_11 = local_15;
      MaDevDrv_SendDirectPacket(&local_18,8);
      lVar12 = DAT_005dd9b8 + lVar12;
      *(undefined4 *)(DAT_005dd9b8 + (ulong)param_1 * 0x78 + 0x4c) = 2;
      *(undefined4 *)(lVar12 + 0x4c) = 2;
      *(byte *)(lVar12 + 0x48) = bVar5;
    }
  }
  if (local_8 == *(long *)PTR___stack_chk_guard_00567868) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

