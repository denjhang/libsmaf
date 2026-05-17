/* MaSrm_Seek @ 001a84d0 3028B */


/* YAMAHA::MaSrm_Seek(unsigned int, unsigned int) */

void YAMAHA::MaSrm_Seek(uint param_1,uint param_2)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  byte bVar5;
  uint uVar6;
  int iVar7;
  uchar uVar8;
  byte bVar9;
  bool bVar10;
  bool bVar11;
  byte bVar12;
  undefined8 uVar13;
  int iVar14;
  uint uVar15;
  char cVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  ulong uVar21;
  uint uVar22;
  long lVar23;
  uchar local_10;
  byte local_f;
  undefined1 local_e;
  undefined1 local_d;
  undefined1 local_c;
  undefined1 local_b;
  undefined1 local_a;
  undefined1 local_9;
  long local_8;
  
  uVar3 = param_1 & 3;
  uVar21 = (ulong)param_2;
  lVar23 = (ulong)uVar3 * 0x78;
  lVar1 = DAT_005dd9b8 + lVar23;
  local_8 = *(long *)PTR___stack_chk_guard_00567868;
  if (*(int *)(lVar1 + 0x4c) == 0) {
switchD_001a85b4_caseD_4:
    uVar13 = 0xffffffff;
    goto LAB_001a8560;
  }
  bVar9 = (byte)uVar3;
  if (*(int *)(lVar1 + 4) == 0) {
    if (*(char *)(lVar1 + 0x74) != '\0') {
      if (param_2 <= *(uint *)(lVar1 + 0x70)) goto LAB_001a85cc;
LAB_001a85fc:
      uVar13 = 0xfffffffe;
      goto LAB_001a8560;
    }
    if (*(uint *)(lVar1 + 0x10) < param_2) goto LAB_001a85fc;
LAB_001a85cc:
    switch(*(undefined1 *)(lVar1 + 0x42)) {
    case 0:
      uVar18 = *(uint *)(DAT_005dd9b8 + lVar23) >> 1;
      break;
    case 1:
    case 0x42:
    case 0x43:
      uVar18 = *(int *)(DAT_005dd9b8 + lVar23) << 1;
      break;
    case 2:
    case 3:
    case 0x40:
      uVar18 = *(uint *)(DAT_005dd9b8 + lVar23);
      break;
    default:
      goto switchD_001a85b4_caseD_4;
    case 0x41:
      uVar18 = *(int *)(DAT_005dd9b8 + lVar23) << 2;
    }
    uVar20 = 0;
    if (uVar18 != 0) {
      uVar20 = param_2 / uVar18;
    }
    bVar12 = bVar9 | 0x80;
    iVar4 = 0;
    if ((ulong)uVar18 != 0) {
      iVar4 = (int)(((ulong)(param_2 - uVar20 * uVar18) * 1000) / (ulong)uVar18);
    }
    *(uint *)(lVar1 + 0x24) = iVar4 + uVar20 * 1000;
    local_10 = 0xdd;
    local_e = 0xe4;
    local_d = 0xa0;
    local_c = 0xe4;
    local_b = 0xb0;
    local_a = 0xa8;
    local_9 = 0x80;
    local_f = bVar12;
    uVar13 = MaDevDrv_SendDirectPacket(&local_10,8);
    if ((int)uVar13 < 0) goto LAB_001a8560;
    *(undefined4 *)(lVar1 + 0x28) = 0;
    uVar13 = MaDevDrv_WaitStreamFifoEmpty(uVar3);
    if ((int)uVar13 < 0) goto LAB_001a8560;
    bVar10 = true;
    *(uint *)(lVar1 + 0xc) = param_2;
    uVar8 = (uchar)(1 << (ulong)uVar3);
    MaDevDrv_ResetIrqCtrl(uVar8,'\0');
    uVar18 = 0x400;
    if ((*(byte *)(lVar1 + 0x42) & 0x40) != 0) {
      uVar18 = 0x800;
    }
    if (*(char *)(lVar1 + 0x74) == '\0') {
      uVar20 = *(int *)(lVar1 + 0x10) - param_2;
      if (uVar18 < uVar20) {
        MaDevDrv_SendStreamData(uVar3,(uchar *)(*(long *)(lVar1 + 0x30) + uVar21),uVar18);
        *(uint *)(lVar1 + 0xc) = uVar18 + param_2;
        MaDevDrv_SetIrqCtrl(uVar8,'\0');
        cVar16 = *(char *)(lVar1 + 0x54);
        *(uint *)(lVar1 + 0x2c) = uVar18;
        *(int *)(lVar1 + 0x14) = *(int *)(lVar1 + 0x10) - *(int *)(lVar1 + 0xc);
        *(uint *)(lVar1 + 0x28) = *(int *)(lVar1 + 0x28) + uVar18;
        if (cVar16 == '\0') goto LAB_001a8c24;
        bVar10 = false;
LAB_001a8bb8:
        if (*(uint *)(lVar1 + 0x50) < param_2) {
          *(undefined1 *)(lVar1 + 0x46) = 1;
        }
        if (*(char *)(lVar1 + 0x5c) != '\0') {
          if (*(uint *)(lVar1 + 0x58) < param_2) {
            *(undefined1 *)(lVar1 + 0x46) = 2;
          }
          if (*(char *)(lVar1 + 100) != '\0') {
            if (*(uint *)(lVar1 + 0x60) < param_2) {
              *(undefined1 *)(lVar1 + 0x46) = 3;
            }
            if ((*(char *)(lVar1 + 0x6c) != '\0') && (*(uint *)(lVar1 + 0x68) < param_2)) {
              *(undefined1 *)(lVar1 + 0x46) = 4;
            }
          }
        }
        if (!bVar10) goto LAB_001a8c24;
      }
      else {
        MaDevDrv_SendStreamData(uVar3,(uchar *)(*(long *)(lVar1 + 0x30) + uVar21),uVar20);
        MaDevDrv_SendStreamData
                  (uVar3,*(uchar **)(lVar1 + 0x30),(param_2 - *(int *)(lVar1 + 0x10)) + uVar18);
        *(uint *)(lVar1 + 0xc) = (param_2 - *(int *)(lVar1 + 0x10)) + uVar18;
        MaDevDrv_SetIrqCtrl(uVar8,'\0');
        *(uint *)(lVar1 + 0x2c) = uVar18;
        cVar16 = *(char *)(lVar1 + 0x54);
        *(uint *)(lVar1 + 0x28) = *(int *)(lVar1 + 0x28) + uVar18;
        *(int *)(lVar1 + 0x14) = *(int *)(lVar1 + 0x10) - *(int *)(lVar1 + 0xc);
        if (cVar16 != '\0') goto LAB_001a8bb8;
      }
      bVar5 = *(byte *)(lVar1 + 0x46);
      *(undefined1 *)(lVar1 + 0x46) = 0;
      if (cVar16 == '\0') {
        if (3 < bVar5) goto LAB_001a8f98;
LAB_001a8e88:
        if (*(char *)(lVar1 + (ulong)bVar5 * 8 + 0x54) != '\x01') goto LAB_001a8b08;
      }
      else {
        uVar3 = *(uint *)(lVar1 + 0xc);
        if (*(uint *)(lVar1 + 0x50) < uVar3) {
          *(undefined1 *)(lVar1 + 0x46) = 1;
        }
        if (*(char *)(lVar1 + 0x5c) != '\0') {
          if (*(uint *)(lVar1 + 0x58) < uVar3) {
            *(undefined1 *)(lVar1 + 0x46) = 2;
          }
          if (*(char *)(lVar1 + 100) != '\0') {
            if (*(uint *)(lVar1 + 0x60) < uVar3) {
              *(undefined1 *)(lVar1 + 0x46) = 3;
            }
            if ((*(char *)(lVar1 + 0x6c) != '\0') && (*(uint *)(lVar1 + 0x68) < uVar3)) {
              *(undefined1 *)(lVar1 + 0x46) = 4;
            }
          }
        }
        if (bVar5 < 4) {
          if (*(char *)(lVar1 + 0x46) == '\0') goto LAB_001a8e88;
        }
        else {
LAB_001a8f98:
          if (*(char *)(lVar1 + 0x46) == '\0') goto LAB_001a8b08;
        }
      }
      local_10 = 0xdd;
      local_e = 0xe4;
      local_d = 0xe0;
      local_f = bVar12;
      uVar13 = MaDevDrv_SendDirectPacket(&local_10,4);
      if ((int)uVar13 < 0) goto LAB_001a8560;
      *(undefined4 *)(lVar1 + 0x4c) = 1;
LAB_001a8d28:
      MaSmw_ReceiveMsg(6,(uint)*(byte *)(lVar1 + 0x40),5,0);
      uVar13 = 0;
      goto LAB_001a8560;
    }
    uVar20 = *(int *)(lVar1 + 0x70) - param_2;
    if (uVar18 < uVar20) {
      MaDevDrv_SendStreamData(uVar3,(uchar *)(*(long *)(lVar1 + 0x30) + uVar21),uVar18);
      *(uint *)(lVar1 + 0x28) = *(int *)(lVar1 + 0x28) + uVar18;
      MaDevDrv_SetIrqCtrl(uVar8,'\0');
      *(uint *)(lVar1 + 0x2c) = uVar18;
      *(uint *)(lVar1 + 0xc) = uVar18 + param_2;
      *(uint *)(lVar1 + 0x14) = *(int *)(lVar1 + 0x70) - (uVar18 + param_2);
    }
    else {
      MaDevDrv_SendStreamData(uVar3,(uchar *)(*(long *)(lVar1 + 0x30) + uVar21),uVar20);
      *(undefined4 *)(lVar1 + 0x14) = 0;
      iVar4 = *(int *)(lVar1 + 0x70) - param_2;
      *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0x70);
      *(int *)(lVar1 + 0x2c) = iVar4;
      *(int *)(lVar1 + 0x28) = *(int *)(lVar1 + 0x28) + iVar4;
    }
    cVar16 = *(char *)(lVar1 + 0x54);
    if (cVar16 != '\0') {
      bVar10 = false;
      goto LAB_001a8bb8;
    }
LAB_001a8c24:
    bVar5 = *(byte *)(lVar1 + 0x46);
    if (bVar5 < 4) {
      lVar23 = lVar1 + (ulong)bVar5 * 8;
      if (*(char *)(lVar23 + 0x54) != '\0') {
        uVar3 = *(uint *)(lVar1 + 0xc);
        bVar10 = *(uint *)(lVar23 + 0x50) < uVar3;
        if (bVar10) {
          *(byte *)(lVar1 + 0x46) = bVar5 + 1;
        }
        uVar18 = bVar5 + 1;
        if ((uVar18 != 4) &&
           (lVar23 = ((ulong)uVar18 + 10) * 8, *(char *)(lVar1 + lVar23 + 4) != '\0')) {
          bVar11 = *(uint *)(lVar1 + lVar23) < uVar3;
          if (bVar11) {
            *(byte *)(lVar1 + 0x46) = bVar5 + 2;
          }
          bVar10 = bVar11 || bVar10;
          uVar18 = bVar5 + 2;
          if ((uVar18 != 4) &&
             (lVar23 = ((ulong)uVar18 + 10) * 8, *(char *)(lVar1 + lVar23 + 4) != '\0')) {
            bVar11 = *(uint *)(lVar1 + lVar23) < uVar3;
            if (bVar11) {
              *(byte *)(lVar1 + 0x46) = bVar5 + 3;
            }
            bVar10 = bVar11 || bVar10;
            if (((bVar5 == 0) && (*(char *)(lVar1 + 0x6c) != '\0')) &&
               (*(uint *)(lVar1 + 0x68) < uVar3)) {
              bVar10 = true;
              *(undefined1 *)(lVar1 + 0x46) = 4;
            }
          }
        }
        local_10 = 0xdd;
        local_e = 0xe4;
        local_d = 0xe0;
        local_f = bVar12;
        uVar13 = MaDevDrv_SendDirectPacket(&local_10,4);
        if ((int)uVar13 < 0) goto LAB_001a8560;
        *(undefined4 *)(lVar1 + 0x4c) = 1;
        uVar13 = 0;
        if (!bVar10) goto LAB_001a8560;
        goto LAB_001a8d28;
      }
    }
    goto LAB_001a8b08;
  }
  if (*(uint *)(lVar1 + 0x1c) < param_2) goto LAB_001a85fc;
  iVar4 = *(int *)(lVar1 + 8);
  switch(*(undefined1 *)(lVar1 + 0x42)) {
  case 0:
  case 0x40:
    if (param_2 != 0) goto LAB_001a85fc;
    iVar14 = 0;
    uVar20 = 0;
    uVar18 = 0;
    break;
  case 1:
  case 0x42:
  case 0x43:
    uVar18 = *(int *)(DAT_005dd9b8 + lVar23) * 2;
    iVar14 = 0;
    uVar20 = ((param_2 % 1000) * uVar18) / 1000 + (param_2 / 1000) * uVar18 & 0xfffffffe;
    break;
  case 2:
  case 3:
    uVar18 = *(uint *)(DAT_005dd9b8 + lVar23);
    iVar14 = 0;
    goto LAB_001a8620;
  default:
    goto switchD_001a85b4_caseD_4;
  case 0x10:
    uVar18 = *(uint *)(DAT_005dd9b8 + lVar23) >> 1;
    iVar14 = 4;
    goto LAB_001a8620;
  case 0x41:
    uVar18 = *(int *)(DAT_005dd9b8 + lVar23) * 4;
    iVar14 = 0;
    uVar20 = ((param_2 % 1000) * uVar18) / 1000 + (param_2 / 1000) * uVar18 & 0xfffffffc;
    break;
  case 0x50:
    uVar18 = *(uint *)(DAT_005dd9b8 + lVar23);
    iVar14 = 8;
LAB_001a8620:
    uVar20 = ((param_2 % 1000) * uVar18) / 1000 + (param_2 / 1000) * uVar18;
  }
  local_f = bVar9 | 0x80;
  local_10 = 0xdd;
  local_e = 0xe4;
  local_d = 0xa0;
  local_c = 0xe4;
  local_b = 0xb0;
  local_a = 0xa8;
  local_9 = 0x80;
  uVar13 = MaDevDrv_SendDirectPacket(&local_10,8);
  if ((int)uVar13 < 0) goto LAB_001a8560;
  *(undefined4 *)(lVar1 + 0x28) = 0;
  uVar13 = MaDevDrv_WaitStreamFifoEmpty(uVar3);
  if ((int)uVar13 < 0) goto LAB_001a8560;
  *(undefined4 *)(lVar1 + 0xc) = 0;
  bVar5 = (byte)(1 << (ulong)uVar3);
  MaDevDrv_ResetIrqCtrl(bVar5,'\0');
  bVar12 = *(byte *)(lVar1 + 0x42);
  uVar22 = bVar12 & 0x10;
  uVar17 = 0x400;
  if ((bVar12 & 0x40) != 0) {
    uVar17 = 0x800;
  }
  if ((bVar12 & 0x10) == 0) {
    if (uVar20 < *(uint *)(lVar1 + 0x10)) {
      uVar18 = *(uint *)(lVar1 + 0x10) - uVar20;
      if (uVar17 < uVar18) {
        MaDevDrv_SendStreamData(uVar3,(uchar *)(*(long *)(lVar1 + 0x30) + (ulong)uVar20),uVar17);
        *(uint *)(lVar1 + 0x28) = *(int *)(lVar1 + 0x28) + uVar17;
        MaDevDrv_SetIrqCtrl(bVar5,(uchar)uVar22);
        *(uint *)(lVar1 + 0x2c) = uVar17;
        *(ulong *)(lVar1 + 0x38) = *(long *)(lVar1 + 0x30) + (ulong)(uVar17 + uVar20);
        *(uint *)(lVar1 + 0x14) = (*(int *)(lVar1 + 0x10) - uVar20) - uVar17;
      }
      else {
        MaDevDrv_SendStreamData(uVar3,(uchar *)(*(long *)(lVar1 + 0x30) + (ulong)uVar20),uVar18);
        *(undefined8 *)(lVar1 + 0x38) = 0;
        iVar4 = *(int *)(lVar1 + 0x10) - uVar20;
        *(uint *)(lVar1 + 0x14) = uVar22;
        *(int *)(lVar1 + 0x28) = *(int *)(lVar1 + 0x28) + iVar4;
        *(int *)(lVar1 + 0x2c) = iVar4;
      }
    }
    else {
      *(undefined8 *)(lVar1 + 0x38) = 0;
      *(uint *)(lVar1 + 0x14) = uVar22;
      *(uint *)(lVar1 + 0x2c) = uVar22;
    }
    *(uint *)(lVar1 + 0x24) = param_2;
  }
  else {
    uVar22 = iVar4 - iVar14;
    uVar6 = 0;
    if (uVar22 != 0) {
      uVar6 = uVar20 / uVar22;
    }
    uVar19 = uVar6 * uVar22;
    if (uVar22 >> 1 < uVar20 - uVar19) {
      uVar19 = uVar22 + uVar6 * uVar22;
    }
    uVar20 = 0;
    if (uVar18 != 0) {
      uVar20 = uVar19 / uVar18;
    }
    uVar15 = *(uint *)(lVar1 + 0x10);
    lVar2 = DAT_005dd9b8 + lVar23;
    uVar6 = 0;
    if (uVar22 != 0) {
      uVar6 = uVar19 / uVar22;
    }
    iVar7 = 0;
    if ((ulong)uVar18 != 0) {
      iVar7 = (int)(((ulong)(uVar19 - uVar20 * uVar18) * 1000) / (ulong)uVar18);
    }
    uVar6 = uVar6 * iVar4;
    if (uVar15 < uVar6) {
      uVar6 = uVar15;
    }
    *(ulong *)(lVar1 + 0x38) = *(long *)(lVar1 + 0x30) + (ulong)uVar6;
    *(uint *)(lVar1 + 0x14) = uVar15 - uVar6;
    *(uint *)(lVar1 + 0x24) = iVar7 + uVar20 * 1000;
    bVar12 = MaDevDrv_ReadIntermediateReg(0x8e);
    if ((*(byte *)(lVar2 + 0x42) >> 6 & 1) == 0) {
      MaDevDrv_WriteIntermediateReg(0x8e,bVar5 | bVar12);
    }
    else {
      MaDevDrv_WriteIntermediateReg(0x8e,(byte)(3 << (ulong)uVar3) | bVar12);
    }
    if (*(int *)(lVar2 + 0x14) != 0) {
      iVar4 = uVar3 * 4;
      MaDevDrv_WriteIntermediateReg(iVar4 + 0x8f,*(uchar *)(*(long *)(lVar2 + 0x38) + 1));
      MaDevDrv_WriteIntermediateReg(iVar4 + 0x90,**(uchar **)(lVar2 + 0x38));
      MaDevDrv_WriteIntermediateReg(iVar4 + 0x91,*(byte *)(*(long *)(lVar2 + 0x38) + 3) & 0x7f);
      MaDevDrv_WriteIntermediateReg(iVar4 + 0x92,*(uchar *)(*(long *)(lVar2 + 0x38) + 2));
      if ((*(byte *)(lVar2 + 0x42) >> 6 & 1) != 0) {
        MaDevDrv_WriteIntermediateReg(iVar4 + 0x93,*(uchar *)(*(long *)(lVar2 + 0x38) + 5));
        MaDevDrv_WriteIntermediateReg(iVar4 + 0x94,*(uchar *)(*(long *)(lVar2 + 0x38) + 4));
        MaDevDrv_WriteIntermediateReg(iVar4 + 0x95,*(byte *)(*(long *)(lVar2 + 0x38) + 7) & 0x7f);
        MaDevDrv_WriteIntermediateReg(iVar4 + 0x96,*(uchar *)(*(long *)(lVar2 + 0x38) + 6));
      }
    }
    lVar23 = DAT_005dd9b8 + lVar23;
    iVar4 = *(int *)(lVar23 + 8);
    uVar18 = *(uint *)(lVar23 + 0xc);
    uVar20 = iVar4 - iVar14;
    if (uVar18 == 0) {
      uVar18 = 0;
      uVar22 = uVar17;
LAB_001a87ec:
      uVar15 = *(uint *)(lVar23 + 0x14);
      uVar19 = uVar18 + iVar14;
      if (uVar19 < uVar15) {
        if ((uVar20 <= uVar22) && (uVar18 = uVar19 + uVar20, uVar18 < uVar15)) {
          do {
            MaDevDrv_SendStreamData
                      (uVar3,(uchar *)(*(long *)(lVar23 + 0x38) + (ulong)uVar19),uVar20);
            uVar22 = uVar22 - uVar20;
            if (uVar22 == 0) goto LAB_001a8868;
            uVar15 = *(uint *)(lVar23 + 0x14);
            uVar19 = uVar19 + uVar20 + iVar14;
            if (uVar15 <= uVar19) goto LAB_001a8868;
          } while ((uVar20 <= uVar22) && (uVar18 = uVar18 + iVar4, uVar18 < uVar15));
        }
        if (uVar22 < uVar15 - uVar19) {
          MaDevDrv_SendStreamData(uVar3,(uchar *)(*(long *)(lVar23 + 0x38) + (ulong)uVar19),uVar22);
          uVar3 = *(int *)(lVar23 + 0x14) - uVar19;
          iVar4 = uVar20 - uVar22;
          if (uVar3 < uVar20) {
            iVar4 = uVar3 - uVar22;
          }
          *(int *)(lVar23 + 0xc) = iVar4;
          uVar18 = uVar19 + uVar22;
        }
        else {
          MaDevDrv_SendStreamData
                    (uVar3,(uchar *)(*(long *)(lVar23 + 0x38) + (ulong)uVar19),uVar15 - uVar19);
          *(undefined4 *)(lVar23 + 0xc) = 0;
          uVar18 = *(uint *)(lVar23 + 0x14);
        }
      }
    }
    else if (uVar18 < uVar17) {
      MaDevDrv_SendStreamData(uVar3,*(uchar **)(lVar23 + 0x38),uVar18);
      uVar18 = *(uint *)(lVar23 + 0xc);
      *(undefined4 *)(lVar23 + 0xc) = 0;
      uVar22 = uVar17 - uVar18;
      if (uVar17 - uVar18 != 0) goto LAB_001a87ec;
    }
    else {
      MaDevDrv_SendStreamData(uVar3,*(uchar **)(lVar23 + 0x38),uVar17);
      *(uint *)(lVar23 + 0xc) = *(int *)(lVar23 + 0xc) - uVar17;
      uVar18 = uVar17;
    }
LAB_001a8868:
    if (uVar18 < uVar17) {
      *(undefined8 *)(lVar1 + 0x38) = 0;
      *(undefined4 *)(lVar1 + 0x14) = 0;
    }
    else {
      MaDevDrv_SetIrqCtrl(bVar5,'\0');
      *(ulong *)(lVar1 + 0x38) = *(long *)(lVar1 + 0x30) + (ulong)(uVar18 + uVar6);
      *(uint *)(lVar1 + 0x14) = *(int *)(lVar1 + 0x10) - (uVar18 + uVar6);
    }
    *(uint *)(lVar1 + 0x2c) = uVar18;
    *(uint *)(lVar1 + 0x28) = *(int *)(lVar1 + 0x28) + uVar18;
  }
LAB_001a8b08:
  local_f = bVar9 | 0x80;
  local_10 = 0xdd;
  local_e = 0xe4;
  local_d = 0xe0;
  uVar13 = MaDevDrv_SendDirectPacket(&local_10,4);
  if (-1 < (int)uVar13) {
    uVar13 = 0;
    *(undefined4 *)(lVar1 + 0x4c) = 1;
  }
LAB_001a8560:
  if (local_8 == *(long *)PTR___stack_chk_guard_00567868) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar13);
}

