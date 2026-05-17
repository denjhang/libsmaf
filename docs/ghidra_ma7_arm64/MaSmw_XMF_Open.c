/* MaSmw_XMF_Open @ 001ab590 1712B */


/* YAMAHA::MaSmw_XMF_Open(YAMAHA::_tagmaXMF_Info*, unsigned char*, unsigned int) */

void YAMAHA::MaSmw_XMF_Open(_tagmaXMF_Info *param_1,uchar *param_2,uint param_3)

{
  _tagmaXMF_Info *p_Var1;
  _tagmaXMF_Info *p_Var2;
  byte bVar3;
  uint uVar4;
  ulong uVar5;
  uint uVar6;
  long lVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  long lVar11;
  int iVar12;
  uint uVar13;
  uint local_e0 [6];
  undefined8 local_c8;
  undefined4 local_c0;
  long local_a8;
  int local_a0;
  uint local_98 [4];
  uint local_88;
  undefined8 local_80;
  undefined4 local_78;
  long local_60;
  int local_58;
  int local_50 [4];
  uint local_40;
  undefined8 local_38;
  undefined4 local_30;
  long local_18;
  undefined4 local_10;
  long local_8;
  
  local_8 = *(long *)PTR___stack_chk_guard_00567868;
  if ((param_2 == (uchar *)0x0 || param_3 == 0) || (param_1 == (_tagmaXMF_Info *)0x0)) {
    uVar5 = 0xfffffffe;
    goto LAB_001ab8dc;
  }
  *(undefined4 *)param_1 = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  p_Var1 = param_1 + 0x38;
  *(undefined8 *)(param_1 + 0x28) = 0;
  p_Var2 = param_1 + 0x48;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined4 *)(param_1 + 0x80) = 0;
  if (param_3 < 9) goto LAB_001ab8d8;
  if ((((*param_2 != 'X') || (param_2[1] != 'M')) || (param_2[2] != 'F')) || (param_2[3] != '_')) {
    uVar5 = 0xfffffff0;
    goto LAB_001ab8dc;
  }
  if (((param_2[5] != '.') || (param_2[6] != '0')) || (param_2[7] != '0')) {
LAB_001ab924:
    uVar5 = 0xffffffe5;
    goto LAB_001ab8dc;
  }
  if (param_2[4] == '1') {
    lVar11 = 8;
    *(undefined4 *)(param_1 + 4) = 0;
    iVar12 = 8;
  }
  else {
    if (param_2[4] != '2') goto LAB_001ab924;
    if (param_3 < 0x11) goto LAB_001ab8d8;
    *(undefined4 *)(param_1 + 4) = 1;
    lVar11 = 0x10;
    iVar12 = 0x10;
    *(uint *)(param_1 + 8) =
         (uint)param_2[9] * 0x10000 + (uint)param_2[8] * 0x1000000 + (uint)param_2[0xb] +
         (uint)param_2[10] * 0x100;
    *(uint *)(param_1 + 0xc) =
         (uint)param_2[0xd] * 0x10000 + (uint)param_2[0xc] * 0x1000000 + (uint)param_2[0xf] +
         (uint)param_2[0xe] * 0x100;
  }
  uVar10 = 0;
  uVar9 = 0;
  do {
    if ((3 < uVar9) || (param_3 - iVar12 <= uVar9)) goto LAB_001ab8d8;
    uVar5 = (ulong)uVar9;
    uVar9 = uVar9 + 1;
    uVar10 = (param_2[uVar5 + lVar11] & 0x7f) + uVar10 * 0x80;
  } while ((char)param_2[uVar5 + lVar11] < '\0');
  if (uVar10 <= param_3) {
    uVar9 = uVar9 + iVar12;
    uVar4 = 0;
    iVar12 = 0;
    do {
      if ((3 < uVar4) || (uVar10 - uVar9 <= uVar4)) goto LAB_001ab8d8;
      bVar3 = (param_2 + uVar9)[uVar4];
      uVar4 = uVar4 + 1;
      iVar12 = (bVar3 & 0x7f) + iVar12 * 0x80;
    } while ((char)bVar3 < '\0');
    uVar13 = uVar4 + iVar12 + uVar9;
    if (uVar13 <= uVar10) {
      *(uchar **)(param_1 + 0x28) = param_2 + uVar9;
      *(uint *)(param_1 + 0x30) = uVar4 + iVar12;
      uVar9 = 0;
      uVar4 = 0;
      do {
        if ((3 < uVar9) || (uVar10 - uVar13 <= uVar9)) goto LAB_001ab8d8;
        uVar5 = (ulong)uVar9;
        uVar9 = uVar9 + 1;
        uVar4 = (param_2[uVar5 + uVar13] & 0x7f) + uVar4 * 0x80;
      } while ((char)param_2[uVar5 + uVar13] < '\0');
      if (uVar4 < uVar10) {
        uVar13 = uVar13 + uVar9;
        uVar9 = 0;
        uVar6 = 0;
        do {
          if ((3 < uVar9) || (uVar10 - uVar13 <= uVar9)) goto LAB_001ab8d8;
          uVar5 = (ulong)uVar9;
          uVar9 = uVar9 + 1;
          uVar6 = (param_2[uVar5 + uVar13] & 0x7f) + uVar6 * 0x80;
        } while ((char)param_2[uVar5 + uVar13] < '\0');
        if (uVar6 < uVar10) {
          if ((uVar4 < uVar9 + uVar13) || (uVar6 < uVar4)) {
            uVar5 = 0xffffffe3;
            goto LAB_001ab8dc;
          }
          uVar5 = (ulong)uVar10;
          if ((int)uVar10 < 0) goto LAB_001ab8dc;
          *(uchar **)(param_1 + 0x18) = param_2;
          *(uint *)(param_1 + 0x20) = uVar10;
          uVar5 = FUN_001aaee0(param_1,param_2 + uVar4,(uVar6 - uVar4) + 1,local_e0);
          if ((int)uVar5 < 0) goto LAB_001ab8dc;
          *(undefined8 *)(param_1 + 0x58) = local_c8;
          *(undefined4 *)(param_1 + 0x60) = local_c0;
          if (local_e0[0] == 0) {
            if (local_a8 == 0) goto LAB_001ab8c0;
            uVar5 = FUN_001ab21c(local_c8,local_c0,3,8,0x10);
            switch(uVar5 & 0xffffffff) {
            case 0:
            case 1:
              goto switchD_001abb7c_caseD_0;
            case 2:
            case 3:
            case 4:
            case 5:
              if (*(long *)(param_1 + 0x48) != 0) goto LAB_001ab8c0;
              *(long *)(param_1 + 0x48) = local_a8;
              *(int *)(param_1 + 0x50) = local_a0;
              *(undefined8 *)(param_1 + 0x68) = local_c8;
              lVar11 = *(long *)(param_1 + 0x38);
              *(undefined4 *)(param_1 + 0x70) = local_c0;
              goto joined_r0x001ab8c4;
            default:
              goto switchD_001abb7c_default;
            }
          }
          if (local_a8 == 0) {
LAB_001ab8c0:
            lVar11 = *(long *)(param_1 + 0x38);
joined_r0x001ab8c4:
            if (lVar11 == 0) goto LAB_001abc1c;
LAB_001ab8c8:
            uVar5 = 0;
          }
          else {
            uVar9 = local_e0[0];
            if (0x10 < local_e0[0]) {
              uVar9 = 0x10;
            }
            uVar10 = 0;
            lVar11 = local_a8;
            iVar12 = local_a0;
            do {
              uVar5 = FUN_001aaee0(param_1,lVar11,iVar12,local_98);
              if ((int)uVar5 < 0) goto LAB_001ab8dc;
              lVar11 = lVar11 + (ulong)local_88;
              iVar12 = iVar12 - local_88;
              if (local_98[0] == 0) {
                if (local_60 != 0) {
                  uVar5 = FUN_001ab21c(local_80,local_78,3,8,0x10);
                  switch(uVar5 & 0xffffffff) {
                  case 0:
                  case 1:
                    if (*(long *)p_Var1 == 0) {
                      *(long *)p_Var1 = local_60;
                      *(int *)(param_1 + 0x40) = local_58;
                      *(undefined4 *)(param_1 + 0x80) = local_78;
                      *(undefined8 *)(param_1 + 0x78) = local_80;
                    }
                    break;
                  case 2:
                  case 3:
                  case 4:
                  case 5:
                    if (*(long *)p_Var2 == 0) {
                      *(long *)p_Var2 = local_60;
                      *(int *)(param_1 + 0x50) = local_58;
                      *(undefined4 *)(param_1 + 0x70) = local_78;
                      *(undefined8 *)(param_1 + 0x68) = local_80;
                    }
                    break;
                  default:
switchD_001ab9d8_default:
                    if (-1 < (int)uVar5) goto LAB_001ab9ec;
                    goto LAB_001ab8dc;
                  }
                }
                uVar5 = 0;
              }
              else {
                if (local_60 != 0) {
                  uVar4 = local_98[0];
                  if (0x10 < local_98[0]) {
                    uVar4 = 0x10;
                  }
                  uVar13 = 0;
                  lVar7 = local_60;
                  iVar8 = local_58;
LAB_001aba60:
                  do {
                    uVar5 = FUN_001aaee0(param_1,lVar7,iVar8,local_50);
                    if ((int)uVar5 < 0) goto LAB_001ab8dc;
                    lVar7 = lVar7 + (ulong)local_40;
                    iVar8 = iVar8 - local_40;
                    if (local_50[0] == 0) {
                      if (local_18 == 0) goto LAB_001abafc;
                      uVar5 = FUN_001ab21c(local_38,local_30,3,8,0x10);
                      switch(uVar5 & 0xffffffff) {
                      case 0:
                      case 1:
                        if (*(long *)p_Var1 == 0) {
                          *(long *)p_Var1 = local_18;
                          *(undefined4 *)(param_1 + 0x40) = local_10;
                          *(undefined4 *)(param_1 + 0x80) = local_30;
                          *(undefined8 *)(param_1 + 0x78) = local_38;
                        }
                        break;
                      case 2:
                      case 3:
                      case 4:
                      case 5:
                        if (*(long *)p_Var2 == 0) {
                          *(long *)p_Var2 = local_18;
                          *(undefined4 *)(param_1 + 0x50) = local_10;
                          *(undefined4 *)(param_1 + 0x70) = local_30;
                          *(undefined8 *)(param_1 + 0x68) = local_38;
                          uVar5 = 0;
                          goto LAB_001aba54;
                        }
                        break;
                      default:
                        if (-1 < (int)uVar5) goto code_r0x001abab8;
                        goto LAB_001ab8dc;
                      }
LAB_001abafc:
                      uVar5 = 0;
                    }
LAB_001aba54:
                    uVar13 = uVar13 + 1;
                  } while (uVar13 != uVar4);
                  goto switchD_001ab9d8_default;
                }
                uVar5 = 0;
              }
LAB_001ab9ec:
              uVar10 = uVar10 + 1;
            } while (uVar10 != uVar9);
switchD_001abb7c_default:
            if ((int)uVar5 == 0) goto LAB_001ab8c0;
            if ((int)uVar5 < 0) goto LAB_001ab8dc;
          }
          *(undefined4 *)param_1 = 1;
          goto LAB_001ab8dc;
        }
      }
    }
  }
LAB_001ab8d8:
  uVar5 = 0xffffffe4;
LAB_001ab8dc:
  if (local_8 == *(long *)PTR___stack_chk_guard_00567868) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
code_r0x001abab8:
  uVar13 = uVar13 + 1;
  if (uVar13 == uVar4) goto switchD_001ab9d8_default;
  goto LAB_001aba60;
switchD_001abb7c_caseD_0:
  if (*(long *)(param_1 + 0x38) != 0) goto LAB_001ab8c8;
  *(long *)(param_1 + 0x38) = local_a8;
  *(int *)(param_1 + 0x40) = local_a0;
  *(undefined8 *)(param_1 + 0x78) = local_c8;
  *(undefined4 *)(param_1 + 0x80) = local_c0;
  if (local_a8 != 0) goto LAB_001ab8c8;
LAB_001abc1c:
  uVar5 = 0xffffffff;
  goto LAB_001ab8dc;
}

