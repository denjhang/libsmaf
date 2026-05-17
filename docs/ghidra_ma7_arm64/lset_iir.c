/* lset_iir @ 002448f8 1764B */


/* YAMAHA::lset_iir(unsigned char, unsigned char, unsigned char, unsigned char, unsigned char,
   unsigned char const*, unsigned char const*) */

undefined8
YAMAHA::lset_iir(uchar param_1,uchar param_2,uchar param_3,uchar param_4,uchar param_5,
                uchar *param_6,uchar *param_7)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined *puVar4;
  bool bVar5;
  short sVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  undefined2 uVar10;
  undefined2 uVar11;
  uint uVar12;
  short sVar14;
  short sVar15;
  int iVar16;
  uint uVar17;
  int iVar13;
  
  puVar4 = PTR_lprm_00567530;
  uVar3 = param_4 - 0x34;
  if ((0x18 < (uVar3 & 0xff)) || (0x3c < param_3)) {
    return 0xfffffffe;
  }
  uVar12 = (uint)param_4;
  uVar7 = (uint)param_5;
  if (param_2 == '\n') {
    if (0x77 < (uVar7 - 1 & 0xff)) {
      return 0xfffffffe;
    }
    uVar17 = (uint)*param_6;
    bVar5 = *param_7 != *param_6;
    if (param_1 == '\x05') goto LAB_00244a6c;
    iVar9 = *(int *)(PTR_ltan_fc_tbl_i_00567d70 + (long)(int)(uint)param_3 * 4);
switchD_00244aa0_caseD_a:
    iVar16 = iVar9 * iVar9;
    iVar1 = 0;
    if (uVar7 != 0) {
      iVar1 = (iVar9 * 10) / (int)uVar7;
    }
    if (param_4 < 0x40) {
      iVar9 = iVar1 * *(int *)(PTR_lpow_fil_tbl_i_00567780 + (long)(int)(0x4c - (uint)param_4) * 4)
              + iVar16;
      iVar13 = iVar9 + 0x1fff;
      if (-1 < iVar9) {
        iVar13 = iVar9;
      }
      iVar9 = (iVar13 >> 0xd) + 0x2000;
      iVar2 = 0;
      if (iVar9 != 0) {
        iVar2 = (iVar16 * 2 + -0x8000000) / iVar9;
      }
      iVar13 = 0x10000 - iVar2;
      sVar6 = 0;
      if (iVar9 != 0) {
        sVar6 = (short)((iVar16 + (iVar1 + 0x2000) * 0x2000) / iVar9);
      }
      sVar14 = 0;
      if (iVar9 != 0) {
        sVar14 = (short)((iVar16 + (0x2000 - iVar1) * 0x2000) / iVar9);
      }
      uVar10 = 0;
      sVar15 = (short)iVar2;
      if (iVar9 != 0) {
        uVar10 = (undefined2)
                 (((iVar1 * *(int *)(PTR_lpow_fil_tbl_i_00567780 +
                                    (long)(int)(0x4c - (uint)param_4) * 4) + -0x4000000) - iVar16) /
                 iVar9);
      }
    }
    else {
      iVar9 = iVar1 + 0x2000 + (iVar16 >> 0xd);
      iVar2 = 0;
      if (iVar9 != 0) {
        iVar2 = (iVar16 * 2 + -0x8000000) / iVar9;
      }
      iVar13 = 0x10000 - iVar2;
      sVar6 = 0;
      if (iVar9 != 0) {
        sVar6 = (short)((iVar1 * *(int *)(PTR_lpow_fil_tbl_i_00567780 + (long)(int)uVar3 * 4) +
                         0x4000000 + iVar16) / iVar9);
      }
      sVar14 = 0;
      if (iVar9 != 0) {
        sVar14 = (short)(((0x4000000 -
                          iVar1 * *(int *)(PTR_lpow_fil_tbl_i_00567780 + (long)(int)uVar3 * 4)) +
                         iVar16) / iVar9);
      }
      uVar10 = 0;
      sVar15 = (short)iVar2;
      if (iVar9 != 0) {
        uVar10 = (undefined2)(((iVar1 + -0x2000) * 0x2000 - iVar16) / iVar9);
      }
    }
    goto LAB_0024497c;
  }
  uVar17 = (uint)*param_6;
  bVar5 = *param_7 != *param_6;
  if (param_1 != '\x05') {
    iVar9 = *(int *)(PTR_ltan_fc_tbl_i_00567d70 + (long)(int)(uint)param_3 * 4);
    switch(param_2) {
    case '\0':
      goto switchD_002449c0_caseD_0;
    case '\x01':
      goto switchD_002449c0_caseD_1;
    case '\x02':
      goto switchD_002449c0_caseD_2;
    case '\x03':
      goto switchD_002449c0_caseD_3;
    case '\x04':
    case '\x11':
      goto switchD_002449c0_caseD_4;
    case '\x05':
      goto switchD_002449c0_caseD_5;
    default:
      uVar10 = 0;
      iVar13 = 0;
      sVar6 = 0;
      sVar15 = 0;
      sVar14 = 0;
      break;
    case '\v':
      goto switchD_002449c0_caseD_b;
    }
    goto LAB_0024497c;
  }
LAB_00244a6c:
  if (param_3 < 0x37) {
    iVar9 = *(int *)(PTR_ltan_fc_tbl_i_00567d70 + (long)(int)(param_3 + 6) * 4);
  }
  else {
    iVar9 = *(int *)(PTR_ltan_fc_tbl_i_00567d70 + 0xf0);
  }
  switch(param_2) {
  case '\0':
switchD_002449c0_caseD_0:
    iVar16 = iVar9 + 0x2000;
    uVar10 = 0;
    sVar14 = 0;
    iVar13 = 0;
    if (iVar16 != 0) {
      iVar13 = ((0x2000 - iVar9) * 0x2000) / iVar16;
    }
    sVar6 = 0;
    sVar15 = sVar6;
    if (iVar16 != 0) {
      sVar6 = (short)((iVar9 * *(int *)(PTR_lpow_fil_tbl_i_00567780 + (long)(int)uVar3 * 4)) /
                     iVar16);
      sVar15 = sVar6;
    }
    break;
  case '\x01':
switchD_002449c0_caseD_1:
    iVar16 = iVar9 + 0x2000;
    uVar10 = 0;
    iVar13 = 0;
    if (iVar16 != 0) {
      iVar13 = ((0x2000 - iVar9) * 0x2000) / iVar16;
    }
    sVar6 = 0;
    if (iVar16 != 0) {
      sVar6 = (short)((*(int *)(PTR_lpow_fil_tbl_i_00567780 + (long)(int)uVar3 * 4) << 0xd) / iVar16
                     );
    }
    sVar15 = -sVar6;
    sVar14 = 0;
    break;
  case '\x02':
switchD_002449c0_caseD_2:
    if (uVar12 < 0x40) {
      uVar10 = 0;
      iVar16 = (iVar9 + 0x2000) * 0x2000;
      sVar14 = 0;
      iVar9 = iVar9 * *(int *)(PTR_lpow_fil_tbl_i_00567780 + (long)(int)(0x4c - uVar12) * 4);
      iVar13 = iVar9 + 0x1fff;
      if (-1 < iVar9) {
        iVar13 = iVar9;
      }
      iVar1 = (iVar13 >> 0xd) + 0x2000;
      sVar6 = 0;
      if (iVar1 != 0) {
        sVar6 = (short)(iVar16 / iVar1);
      }
      sVar15 = 0;
      if (iVar1 != 0) {
        sVar15 = (short)((iVar16 + -0x8000000) / iVar1);
      }
      iVar13 = 0;
      if (iVar1 != 0) {
        iVar13 = (0x4000000 - iVar9) / iVar1;
      }
    }
    else {
      iVar16 = iVar9 + 0x2000;
      uVar10 = 0;
      sVar14 = 0;
      iVar13 = 0;
      if (iVar16 != 0) {
        iVar13 = ((0x2000 - iVar9) * 0x2000) / iVar16;
      }
      sVar6 = 0;
      if (iVar16 != 0) {
        sVar6 = (short)((iVar9 * *(int *)(PTR_lpow_fil_tbl_i_00567780 + (long)(int)uVar3 * 4) +
                        0x4000000) / iVar16);
      }
      sVar15 = 0;
      if (iVar16 != 0) {
        sVar15 = (short)((iVar9 * *(int *)(PTR_lpow_fil_tbl_i_00567780 + (long)(int)uVar3 * 4) +
                         -0x4000000) / iVar16);
      }
    }
    break;
  case '\x03':
switchD_002449c0_caseD_3:
    if (param_4 < 0x40) {
      iVar13 = 0x2000;
      iVar16 = *(int *)(PTR_lpow_fil_tbl_i_00567780 + (long)(int)(0x4c - uVar12) * 4);
    }
    else {
      iVar16 = 0x2000;
      iVar13 = *(int *)(PTR_lpow_fil_tbl_i_00567780 + (long)(int)uVar3 * 4);
    }
    iVar1 = iVar16 + iVar9;
    uVar10 = 0;
    sVar14 = 0;
    sVar6 = 0;
    if (iVar1 != 0) {
      sVar6 = (short)(((iVar13 + iVar9) * 0x2000) / iVar1);
    }
    sVar15 = 0;
    if (iVar1 != 0) {
      sVar15 = (short)(((iVar9 - iVar13) * 0x2000) / iVar1);
    }
    iVar13 = 0;
    if (iVar1 != 0) {
      iVar13 = ((iVar16 - iVar9) * 0x2000) / iVar1;
    }
    break;
  case '\x04':
  case '\x11':
switchD_002449c0_caseD_4:
    iVar16 = iVar9 * iVar9;
    iVar1 = 0;
    if (uVar7 != 0) {
      iVar1 = (iVar9 * 10) / (int)uVar7;
    }
    iVar2 = iVar1 + 0x2000 + (iVar16 >> 0xd);
    if (iVar9 < 0x101) {
      iVar9 = *(int *)(PTR_lpow_fil_tbl_i_00567780 + (long)(int)uVar3 * 4) * iVar9 * iVar9;
      if (param_2 == '\x04') {
        iVar8 = 0;
        if (iVar2 != 0) {
          iVar8 = (iVar9 >> 0xd) / iVar2;
        }
      }
      else {
        iVar8 = 0;
        if (iVar2 != 0) {
          iVar8 = (iVar9 >> 0xb) / iVar2;
        }
      }
    }
    else {
      iVar13 = 0;
      if (iVar2 != 0) {
        iVar13 = ((*(int *)(PTR_lpow_fil_tbl_i_00567780 + (long)(int)uVar3 * 4) * iVar9 >> 0xe) *
                 iVar9) / iVar2;
      }
      iVar8 = iVar13 << 3;
      if (param_2 == '\x04') {
        iVar8 = iVar13 << 1;
      }
    }
    sVar6 = (short)iVar8;
    sVar15 = (short)(iVar8 << 1);
    iVar13 = 0;
    if (iVar2 != 0) {
      iVar13 = (iVar16 * -2 + 0x8000000) / iVar2;
    }
    uVar10 = 0;
    sVar14 = sVar6;
    if (iVar2 != 0) {
      uVar10 = (undefined2)(((iVar1 * 0x2000 + -0x4000000) - iVar16) / iVar2);
    }
    break;
  case '\x05':
switchD_002449c0_caseD_5:
    iVar16 = iVar9 * iVar9;
    iVar1 = 0;
    if (uVar7 != 0) {
      iVar1 = (iVar9 * 10) / (int)uVar7;
    }
    iVar9 = iVar1 + 0x2000 + (iVar16 >> 0xd);
    sVar6 = 0;
    if (iVar9 != 0) {
      sVar6 = (short)((*(int *)(PTR_lpow_fil_tbl_i_00567780 + (long)(int)uVar3 * 4) << 0xd) / iVar9)
      ;
    }
    iVar13 = 0;
    if (iVar9 != 0) {
      iVar13 = (iVar16 * -2 + 0x8000000) / iVar9;
    }
    uVar10 = 0;
    sVar15 = sVar6 * -2;
    sVar14 = sVar6;
    if (iVar9 != 0) {
      uVar10 = (undefined2)(((iVar1 * 0x2000 + -0x4000000) - iVar16) / iVar9);
    }
    break;
  default:
    goto switchD_00244aa0_caseD_6;
  case '\n':
    goto switchD_00244aa0_caseD_a;
  case '\v':
switchD_002449c0_caseD_b:
    uVar10 = 0;
    iVar13 = 0;
    uVar11 = 0;
    sVar14 = 0;
    sVar15 = 0;
    sVar6 = (short)*(undefined4 *)(PTR_lpow_fil_tbl_i_00567780 + (long)(int)uVar3 * 4);
    goto joined_r0x00244c18;
  }
LAB_0024497c:
  uVar11 = (undefined2)iVar13;
joined_r0x00244c18:
  if (param_1 < 2) {
    uVar10 = (short)(iVar13 << 2);
    if (param_1 != '\x01') {
      uVar10 = (short)iVar13;
    }
    *(short *)(PTR_lprm_00567530 + (long)(int)uVar17 * 2 + 0x26) = sVar6;
    *(short *)(puVar4 + (ulong)param_6[1] * 2 + 0x26) = sVar15;
    *(undefined2 *)(puVar4 + (ulong)param_6[2] * 2 + 0x26) = uVar10;
    LSendCoef('\x01',param_6);
    LSendCoef('\x01',param_6 + 1);
    LSendCoef('\x01',param_6 + 2);
    if (bVar5) {
      *(undefined2 *)(puVar4 + (ulong)*param_7 * 2 + 0x26) =
           *(undefined2 *)(puVar4 + (ulong)*param_6 * 2 + 0x26);
      *(undefined2 *)(puVar4 + (ulong)param_7[1] * 2 + 0x26) =
           *(undefined2 *)(puVar4 + (ulong)param_6[1] * 2 + 0x26);
      *(undefined2 *)(puVar4 + (ulong)param_7[2] * 2 + 0x26) =
           *(undefined2 *)(puVar4 + (ulong)param_6[2] * 2 + 0x26);
      LSendCoef('\x01',param_7);
      LSendCoef('\x01',param_7 + 1);
      LSendCoef('\x01',param_7 + 2);
      return 0;
    }
  }
  else if (param_1 == '\x02') {
    *(short *)(PTR_lprm_00567530 + (long)(int)uVar17 * 2 + 0x26) = sVar6;
    *(short *)(puVar4 + (ulong)param_6[1] * 2 + 0x26) = sVar15;
    *(short *)(puVar4 + (ulong)param_6[2] * 2 + 0x26) = sVar14;
    *(undefined2 *)(puVar4 + (ulong)param_6[3] * 2 + 0x26) = uVar11;
    *(undefined2 *)(puVar4 + (ulong)param_6[4] * 2 + 0x26) = uVar10;
    LSendCoef('\x01',param_6);
    LSendCoef('\x01',param_6 + 1);
    LSendCoef('\x01',param_6 + 2);
    LSendCoef('\x01',param_6 + 3);
    LSendCoef('\x01',param_6 + 4);
    if (bVar5) {
      *(undefined2 *)(puVar4 + (ulong)*param_7 * 2 + 0x26) =
           *(undefined2 *)(puVar4 + (ulong)*param_6 * 2 + 0x26);
      *(undefined2 *)(puVar4 + (ulong)param_7[1] * 2 + 0x26) =
           *(undefined2 *)(puVar4 + (ulong)param_6[1] * 2 + 0x26);
      *(undefined2 *)(puVar4 + (ulong)param_7[2] * 2 + 0x26) =
           *(undefined2 *)(puVar4 + (ulong)param_6[2] * 2 + 0x26);
      *(undefined2 *)(puVar4 + (ulong)param_7[3] * 2 + 0x26) =
           *(undefined2 *)(puVar4 + (ulong)param_6[3] * 2 + 0x26);
      *(undefined2 *)(puVar4 + (ulong)param_7[4] * 2 + 0x26) =
           *(undefined2 *)(puVar4 + (ulong)param_6[4] * 2 + 0x26);
      LSendCoef('\x01',param_7);
      LSendCoef('\x01',param_7 + 1);
      LSendCoef('\x01',param_7 + 2);
      LSendCoef('\x01',param_7 + 3);
      LSendCoef('\x01',param_7 + 4);
      return 0;
    }
  }
switchD_00244aa0_caseD_6:
  return 0;
}

