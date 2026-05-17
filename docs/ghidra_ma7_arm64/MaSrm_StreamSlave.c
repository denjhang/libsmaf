/* MaSrm_StreamSlave @ 001a76c8 512B */


/* YAMAHA::MaSrm_StreamSlave(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int)
    */

void YAMAHA::MaSrm_StreamSlave(uint param_1,uint param_2,uint param_3,uint param_4,uint param_5)

{
  undefined4 uVar1;
  undefined1 uVar2;
  char cVar3;
  uchar uVar4;
  int iVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  uint uVar10;
  long lVar11;
  long lVar12;
  uchar local_18;
  byte local_17;
  undefined1 local_16;
  undefined1 local_15;
  undefined1 local_14;
  undefined1 local_13;
  undefined1 local_12;
  undefined1 local_11;
  long local_8;
  
  uVar7 = (ulong)param_2;
  uVar8 = (ulong)param_3;
  local_8 = *(long *)PTR___stack_chk_guard_00567868;
  if ((&DAT_005dc1c0)[uVar8 * 3 + uVar7 * 0xc0] != 0) {
    if (param_1 < 3) {
      uVar10 = *(uint *)(&DAT_0048c510 + (ulong)param_1 * 4);
      local_17 = (byte)uVar10 | 0x80;
      lVar9 = (ulong)uVar10 * 0x78;
    }
    else {
      local_17 = 0x82;
      lVar9 = 0xf0;
      uVar10 = 2;
    }
    lVar11 = uVar7 * 0x600 + uVar8 * 0x18;
    uVar1 = (&DAT_005dc1bc)[uVar8 * 6 + uVar7 * 0x180];
    lVar9 = DAT_005dd9b8 + lVar9;
    uVar2 = (&DAT_005dc1c8)[lVar11];
    *(undefined8 *)(lVar9 + 0x38) = (&DAT_005dc1c0)[uVar8 * 3 + uVar7 * 0xc0];
    cVar3 = (&DAT_005dc1ca)[lVar11];
    *(undefined4 *)(lVar9 + 4) = 1;
    *(char *)(lVar9 + 0x40) = (char)param_2;
    *(char *)(lVar9 + 0x43) = (char)param_5;
    *(char *)(lVar9 + 0x47) = (char)param_3;
    *(undefined4 *)(lVar9 + 0x10) = uVar1;
    *(undefined1 *)(lVar9 + 0x42) = uVar2;
    *(undefined4 *)(lVar9 + 0x1c) = 1;
    local_18 = 0xdd;
    local_16 = 0xe4;
    local_15 = 0xa0;
    local_14 = 0xe4;
    local_13 = 0xb0;
    if (cVar3 == '\x01') {
      local_12 = 0xe0;
      uVar6 = 10;
      local_11 = 0x80;
      lVar11 = 9;
      lVar12 = 8;
    }
    else {
      uVar6 = 8;
      lVar11 = 7;
      lVar12 = 6;
    }
    (&local_18)[lVar12] = 0xa8;
    (&local_18)[lVar11] = 0x80;
    iVar5 = MaDevDrv_SendDirectPacket(&local_18,uVar6);
    if ((-1 < iVar5) && (iVar5 = MaDevDrv_WaitStreamFifoEmpty(uVar10), -1 < iVar5)) {
      uVar4 = (uchar)(1 << (ulong)(uVar10 & 0x1f));
      MaDevDrv_ResetIrqCtrl(uVar4,'\0');
      if (*(uint *)(lVar9 + 0x10) < 0x401) {
        MaDevDrv_SendStreamData(uVar10,*(uchar **)(lVar9 + 0x38),*(uint *)(lVar9 + 0x10));
        *(undefined8 *)(lVar9 + 0x38) = 0;
        *(undefined4 *)(lVar9 + 0x14) = 0;
      }
      else {
        MaDevDrv_SendStreamData(uVar10,*(uchar **)(lVar9 + 0x38),0x400);
        MaDevDrv_SetIrqCtrl(uVar4,'\0');
        *(long *)(lVar9 + 0x38) = *(long *)(lVar9 + 0x38) + 0x400;
        *(int *)(lVar9 + 0x14) = *(int *)(lVar9 + 0x10) + -0x400;
      }
    }
  }
  if (local_8 == *(long *)PTR___stack_chk_guard_00567868) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

