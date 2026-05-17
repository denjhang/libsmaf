/* LSendReverb @ 00248260 692B */


/* YAMAHA::LSendReverb() */

void YAMAHA::LSendReverb(void)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  byte *pbVar8;
  uchar local_10 [8];
  long local_8;
  
  puVar6 = PTR_ltatt_mute_00567618;
  puVar5 = PTR_lprm_00567530;
  local_8 = *(long *)PTR___stack_chk_guard_00567868;
  if (PTR_lprm_00567530[8] == '\0') {
    iVar7 = 0;
    if (*PTR_lgsendoff_00567b48 != '\0') goto LAB_002482a0;
    pbVar8 = PTR_ltatt_mute_00567618 + 2;
    bVar1 = PTR_ltatt_mute_00567618[2];
    bVar2 = PTR_ltatt_mute_00567618[5];
    bVar3 = PTR_ltatt_mute_00567618[4];
    bVar4 = PTR_ltatt_mute_00567618[3];
    *(undefined2 *)(PTR_lprm_00567530 + (ulong)(byte)PTR_ltatt_mute_00567618[7] * 2 + 0x26) = 0;
    *(undefined2 *)(puVar5 + (long)(int)(uint)bVar2 * 2 + 0x26) = 0;
    *(undefined2 *)(puVar5 + (long)(int)(uint)bVar3 * 2 + 0x26) = 0;
    *(undefined2 *)(puVar5 + (long)(int)(uint)bVar4 * 2 + 0x26) = 0;
    *(undefined2 *)(puVar5 + (long)(int)(uint)bVar1 * 2 + 0x26) = 0;
    LSendCoef('\x03',pbVar8);
    LSendCoef('\x01',puVar6 + 5);
    LSendCoef('\x01',puVar6 + 7);
    iVar7 = MaDevDrv_ClearDspDelayRam(0xffff0000);
    if (iVar7 < 0) {
      if (puVar5[8] == '\x02') {
LAB_002484f4:
        FUN_0024734c();
        goto LAB_002482a0;
      }
    }
    else {
      iVar7 = MaDevDrv_SetDspRamAddress(0x76,0xcc);
      if (-1 < iVar7) {
        _MaDevDrv_SendDspProgram(0x76,PTR_gabProgReverb_00567fe0,0x20a);
        iVar7 = MaDevDrv_SetDspRamAddress(0,0);
      }
      if (puVar5[8] == '\x02') {
        local_10[1] = 0xff;
        local_10[0] = '\x7f';
        _MaDevDrv_SendDspCoef(0x286,local_10,2);
        _MaDevDrv_SendDspCoef(0x28d,local_10,2);
        goto LAB_002482a0;
      }
    }
    *(short *)(puVar5 + (long)(int)(uint)bVar1 * 2 + 0x26) = (short)*(undefined4 *)(puVar5 + 0x20);
  }
  else {
    if (PTR_lprm_00567530[8] != '\x02') {
      iVar7 = 0;
      goto LAB_002482a0;
    }
    iVar7 = 0;
    if (*PTR_lgsendoff_00567b48 != '\0') goto LAB_002482a0;
    MaDevDrv_ClearDspCoef(0x286,0x286);
    MaDevDrv_ClearDspCoef(0x28d,0x28d);
    iVar7 = MaDevDrv_ClearDspDelayRam(0xffff0000);
    if (iVar7 < 0) {
      if (puVar5[8] == '\x02') goto LAB_002484f4;
    }
    else {
      iVar7 = MaDevDrv_SetDspRamAddress(0x76,0xcc);
      if (-1 < iVar7) {
        _MaDevDrv_SendDspProgram(0x76,PTR_gabProg3DRev_005673f0,0x20a);
        iVar7 = MaDevDrv_SetDspRamAddress(0,0);
      }
      if (puVar5[8] == '\x02') {
        local_10[0] = '\x7f';
        local_10[1] = 0xff;
        _MaDevDrv_SendDspCoef(0x286,local_10,2);
        _MaDevDrv_SendDspCoef(0x28d,local_10,2);
        goto LAB_002482a0;
      }
    }
    pbVar8 = PTR_ltatt_mute_00567618 + 2;
    *(short *)(puVar5 + (ulong)*pbVar8 * 2 + 0x26) = (short)*(undefined4 *)(puVar5 + 0x20);
  }
  LSendCoef('\x01',pbVar8);
  lup_tconnect('\x04');
  lup_tconnect('\0');
LAB_002482a0:
  if (local_8 != *(long *)PTR___stack_chk_guard_00567868) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar7);
  }
  return;
}

