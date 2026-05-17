/* lup_tconnect @ 002486fc 1728B */


/* YAMAHA::lup_tconnect(unsigned char) */

void YAMAHA::lup_tconnect(uchar param_1)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  undefined *puVar4;
  undefined2 uVar5;
  uint uVar6;
  short sVar7;
  int iVar8;
  uint uVar9;
  uchar local_10;
  undefined1 local_f;
  uchar local_e;
  undefined1 local_d;
  long local_8;
  
  puVar4 = PTR_lgsendoff_00567b48;
  local_8 = *(long *)PTR___stack_chk_guard_00567868;
  if (param_1 == '\x03') {
    uVar6 = (uint)*(ushort *)(PTR_lprm_00567530 + 0x34a);
LAB_002488a4:
    uVar1 = *(ushort *)(PTR_lprm_00567530 + 0x34c);
    if (uVar1 == 0xff) {
      sVar7 = (short)((uVar6 * 0x7fff) / 0x7f);
      if (PTR_lprm_00567530[0x24] == '\x02') {
        sVar7 = (short)(((ulong)(((uint)((int)sVar7 * *(int *)(PTR_lprm_00567530 + 0x1c)) / 0x7f) *
                                *(int *)(PTR_lprm_00567530 + 0x20)) << 0x21) >> 0x30);
      }
      else if (PTR_lprm_00567530[0x24] == '\x01') {
        sVar7 = (short)(((ulong)(uint)((int)sVar7 * *(int *)(PTR_lprm_00567530 + 0x20)) << 0x21) >>
                       0x30);
      }
      local_10 = (uchar)((ushort)sVar7 >> 8);
      local_f = (undefined1)sVar7;
      local_e = local_10;
      local_d = local_f;
    }
    else {
      if (uVar1 == 0) {
        iVar8 = 0x7f;
        *(undefined2 *)(PTR_lprm_00567530 + 0x34c) = 1;
        uVar9 = 1;
      }
      else {
        uVar9 = (uint)uVar1;
        if (uVar9 < 0x80) {
          iVar8 = 0x80 - uVar9;
        }
        else {
          iVar8 = 1;
          *(undefined2 *)(PTR_lprm_00567530 + 0x34c) = 0x7f;
          uVar9 = 0x7f;
        }
      }
      iVar8 = (int)((int)*(short *)(PTR_ltb_wet_00567b98 + (long)iVar8 * 2) * uVar6) / 0x7f;
      if (PTR_lprm_00567530[0x24] == '\x02') {
        uVar2 = ((uint)((int)(short)iVar8 * *(int *)(PTR_lprm_00567530 + 0x1c)) / 0x7f) *
                *(int *)(PTR_lprm_00567530 + 0x20) >> 0xf;
        local_f = (undefined1)uVar2;
        local_10 = (uchar)(uVar2 >> 8);
        uVar5 = (undefined2)
                (((ulong)(((uint)((int)(short)((int)((int)*(short *)(PTR_ltb_wet_00567b98 +
                                                                    (long)(int)uVar9 * 2) * uVar6) /
                                              0x7f) * *(int *)(PTR_lprm_00567530 + 0x1c)) / 0x7f) *
                         *(int *)(PTR_lprm_00567530 + 0x20)) << 0x21) >> 0x30);
      }
      else if (PTR_lprm_00567530[0x24] == '\x01') {
        uVar2 = (uint)((int)(short)iVar8 * *(int *)(PTR_lprm_00567530 + 0x20)) >> 0xf;
        local_f = (undefined1)uVar2;
        local_10 = (uchar)(uVar2 >> 8);
        uVar5 = (undefined2)
                (((ulong)(uint)((int)(short)((int)((int)*(short *)(PTR_ltb_wet_00567b98 +
                                                                  (long)(int)uVar9 * 2) * uVar6) /
                                            0x7f) * *(int *)(PTR_lprm_00567530 + 0x20)) << 0x21) >>
                0x30);
      }
      else {
        local_f = (undefined1)iVar8;
        local_10 = (uchar)((uint)iVar8 >> 8);
        uVar5 = (undefined2)
                ((int)((int)*(short *)(PTR_ltb_wet_00567b98 + (long)(int)uVar9 * 2) * uVar6) / 0x7f)
        ;
      }
      local_d = (undefined1)uVar5;
      local_e = (uchar)((ushort)uVar5 >> 8);
    }
    MaDevDrv_SendDspCoef(0xd2,&local_10,2);
    MaDevDrv_SendDspCoef(0xd4,&local_e,2);
    goto switchD_00248b3c_caseD_1;
  }
  if (3 < param_1) {
    if (param_1 == '\x05') {
      if (*(ushort *)(PTR_lprm_00567530 + 0x18) < 6) {
        local_10 = '\x7f';
        local_f = 0xff;
                    /* WARNING: Could not recover jumptable at 0x00248b3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)((long)(short)(&switchD_00248b3c::switchdataD_005360d0)
                                [*(ushort *)(PTR_lprm_00567530 + 0x18)] * 4 + 0x248b40))();
        return;
      }
      *(undefined2 *)(PTR_lprm_00567530 + 0x18) = 5;
      local_10 = '\x7f';
      local_f = 0xff;
      MaDevDrv_ClearDspCoef(0xe3,0xe5);
      MaDevDrv_ClearDspCoef(0xeb,0xeb);
      MaDevDrv_ClearDspCoef(0xed,0xed);
      MaDevDrv_SendDspCoef(0xe9,&local_10,2);
    }
    else if (param_1 < 5) {
      sVar7 = (short)((((ulong)((long)(int)((uint)*(ushort *)(PTR_lprm_00567530 + 0x34e) * 0x4000) *
                               0x81020409) >> 0x20) << 0x2a) >> 0x30);
      if (PTR_lprm_00567530[0x24] == '\x02') {
        sVar7 = (short)(((ulong)(((uint)((int)sVar7 * *(int *)(PTR_lprm_00567530 + 0x1c)) / 0x7f) *
                                *(int *)(PTR_lprm_00567530 + 0x20)) << 0x21) >> 0x30);
      }
      else if (PTR_lprm_00567530[0x24] == '\x01') {
        sVar7 = (short)(((ulong)(uint)((int)sVar7 * *(int *)(PTR_lprm_00567530 + 0x20)) << 0x21) >>
                       0x30);
      }
      local_f = (undefined1)sVar7;
      local_10 = (uchar)((ushort)sVar7 >> 8);
      MaDevDrv_SendDspCoef(0x74,&local_10,2);
      MaDevDrv_SendDspCoef(0x75,&local_10,2);
    }
    else if (param_1 == '\x10') {
      lchk_cho_type();
      lup_tconnect('\x02');
      lup_tconnect('\x04');
    }
    else if (param_1 == 0xff) {
      *PTR_lgsendoff_00567b48 = 1;
      lup_tconnect('\0');
      lup_tconnect('\x02');
      lup_tconnect('\x05');
      *puVar4 = 0;
    }
    goto switchD_00248b3c_caseD_1;
  }
  if (param_1 == '\x01') {
    uVar1 = *(ushort *)(PTR_lprm_00567530 + 0x348);
    uVar6 = (uint)*(ushort *)(PTR_lprm_00567530 + 0x346);
    if (uVar1 == 0) goto LAB_002487cc;
LAB_00248990:
    uVar9 = (uint)uVar1;
    if (uVar9 < 0x80) {
      iVar8 = 0x80 - uVar9;
    }
    else {
      iVar8 = 1;
      *(undefined2 *)(PTR_lprm_00567530 + 0x348) = 0x7f;
      uVar9 = 0x7f;
    }
  }
  else {
    if (1 < param_1) {
      uVar6 = (uint)*(ushort *)(PTR_lprm_00567530 + 0x34a);
      if (0x7f < *(ushort *)(PTR_lprm_00567530 + 0x34a)) {
        uVar6 = 0x7f;
        *(undefined2 *)(PTR_lprm_00567530 + 0x34a) = 0x7f;
      }
      goto LAB_002488a4;
    }
    uVar6 = (uint)*(ushort *)(PTR_lprm_00567530 + 0x346);
    if (0x7f < *(ushort *)(PTR_lprm_00567530 + 0x346)) {
      uVar6 = 0x7f;
      *(undefined2 *)(PTR_lprm_00567530 + 0x346) = 0x7f;
    }
    uVar1 = *(ushort *)(PTR_lprm_00567530 + 0x348);
    if (uVar1 != 0) goto LAB_00248990;
LAB_002487cc:
    iVar8 = 0x7f;
    *(undefined2 *)(PTR_lprm_00567530 + 0x348) = 1;
    uVar9 = 1;
  }
  iVar8 = (int)((int)*(short *)(PTR_ltb_wet_00567b98 + (long)iVar8 * 2) * uVar6) / 0x7f;
  iVar3 = (int)((int)*(short *)(PTR_ltb_wet_00567b98 + (long)(int)uVar9 * 2) * uVar6) / 0x7f;
  local_f = (undefined1)iVar8;
  local_10 = (uchar)((uint)iVar8 >> 8);
  local_e = (uchar)((uint)iVar3 >> 8);
  local_d = (undefined1)iVar3;
  MaDevDrv_SendDspCoef(0xd1,&local_10,2);
  MaDevDrv_SendDspCoef(0xd3,&local_e,2);
switchD_00248b3c_caseD_1:
  if (local_8 == *(long *)PTR___stack_chk_guard_00567868) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

