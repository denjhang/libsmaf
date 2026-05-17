/* MaSrm_StreamOn @ 001a7494 564B */


/* YAMAHA::MaSrm_StreamOn(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int) */

void YAMAHA::MaSrm_StreamOn(uint param_1,uint param_2,uint param_3,uint param_4,uint param_5)

{
  long lVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  char cVar4;
  byte bVar5;
  uchar uVar6;
  int iVar7;
  uint uVar8;
  ulong uVar9;
  uchar *puVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  uint uVar14;
  uchar local_18;
  byte local_17;
  undefined1 local_16;
  byte local_15;
  undefined1 local_14;
  undefined1 local_13;
  undefined1 local_12;
  undefined1 local_11;
  long local_8;
  
  uVar9 = (ulong)param_2;
  uVar11 = (ulong)param_3;
  lVar12 = uVar9 * 0x600 + uVar11 * 0x18;
  local_8 = *(long *)PTR___stack_chk_guard_00567868;
  lVar13 = (&DAT_005dc1c0)[uVar11 * 3 + uVar9 * 0xc0];
  if (lVar13 == 0) goto LAB_001a7628;
  bVar5 = (byte)param_1 | 0x80;
  uVar3 = (&DAT_005dc1c8)[lVar12];
  lVar1 = DAT_005dd9b8 + (ulong)param_1 * 0x78;
  uVar2 = (&DAT_005dc1bc)[uVar11 * 6 + uVar9 * 0x180];
  cVar4 = (&DAT_005dc1ca)[lVar12];
  *(undefined4 *)(lVar1 + 4) = 1;
  *(char *)(lVar1 + 0x40) = (char)param_2;
  *(char *)(lVar1 + 0x43) = (char)param_5;
  *(char *)(lVar1 + 0x47) = (char)param_3;
  *(undefined4 *)(lVar1 + 0x10) = uVar2;
  *(long *)(lVar1 + 0x38) = lVar13;
  *(undefined1 *)(lVar1 + 0x42) = uVar3;
  *(undefined4 *)(lVar1 + 0x1c) = 1;
  *(byte *)(lVar1 + 0x48) = (byte)param_4;
  local_18 = 0xdd;
  local_16 = 0xe4;
  local_15 = 0xa0;
  local_14 = 0xe4;
  local_13 = 0xb0;
  if (cVar4 == '\x01') {
    local_12 = 0xe0;
    uVar8 = 10;
    local_11 = 0x80;
    lVar12 = 9;
    lVar13 = 8;
  }
  else {
    uVar8 = 8;
    lVar12 = 7;
    lVar13 = 6;
  }
  (&local_18)[lVar13] = 0xa8;
  (&local_18)[lVar12] = 0x80;
  local_17 = bVar5;
  iVar7 = MaDevDrv_SendDirectPacket(&local_18,uVar8);
  if ((iVar7 < 0) || (iVar7 = MaDevDrv_WaitStreamFifoEmpty(param_1), iVar7 < 0)) goto LAB_001a7628;
  uVar6 = (uchar)(1 << (ulong)(param_1 & 0x1f));
  MaDevDrv_ResetIrqCtrl(uVar6,'\0');
  if ((*(byte *)(lVar1 + 0x42) >> 6 & 1) == 0) {
    lVar12 = 0x400;
    uVar8 = *(uint *)(lVar1 + 0x10);
    uVar14 = 0x400;
    puVar10 = *(uchar **)(lVar1 + 0x38);
    if (0x400 < uVar8) goto LAB_001a7690;
LAB_001a75e8:
    MaDevDrv_SendStreamData(param_1,puVar10,uVar8);
    *(undefined8 *)(lVar1 + 0x38) = 0;
    *(undefined4 *)(lVar1 + 0x14) = 0;
  }
  else {
    lVar12 = 0x800;
    uVar8 = *(uint *)(lVar1 + 0x10);
    uVar14 = 0x800;
    puVar10 = *(uchar **)(lVar1 + 0x38);
    if (uVar8 < 0x801) goto LAB_001a75e8;
LAB_001a7690:
    MaDevDrv_SendStreamData(param_1,puVar10,uVar14);
    MaDevDrv_SetIrqCtrl(uVar6,'\0');
    *(long *)(lVar1 + 0x38) = *(long *)(lVar1 + 0x38) + lVar12;
    *(uint *)(lVar1 + 0x14) = *(int *)(lVar1 + 0x10) - uVar14;
  }
  local_15 = (byte)param_4 | 0xe0;
  local_18 = 0xdd;
  local_16 = 0xe4;
  local_17 = bVar5;
  MaDevDrv_SendDirectPacket(&local_18,4);
  *(undefined4 *)(lVar1 + 0x4c) = 2;
LAB_001a7628:
  if (local_8 == *(long *)PTR___stack_chk_guard_00567868) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

