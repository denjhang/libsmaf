/* MaSmw_XMF_Open @ 0008cd18 1048B */


/* YAMAHA::MaSmw_XMF_Open(YAMAHA::_tagmaXMF_Info*, unsigned char*, unsigned int) */

uint YAMAHA::MaSmw_XMF_Open(_tagmaXMF_Info *param_1,uchar *param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint local_a4;
  uint local_94 [3];
  undefined4 local_88;
  undefined4 local_84;
  int local_78;
  int local_74;
  uint local_70 [2];
  int local_68;
  undefined4 local_64;
  undefined4 local_60;
  int local_54;
  int local_50;
  int local_4c [2];
  int local_44;
  undefined4 local_40;
  undefined4 local_3c;
  int local_30;
  undefined4 local_2c;
  
  if (((param_1 == (_tagmaXMF_Info *)0x0) || (param_2 == (uchar *)0x0)) || (param_3 == 0)) {
    return 0xfffffffe;
  }
  *(undefined4 *)param_1 = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (param_3 < 9) {
    return 0xffffffe4;
  }
  if (((*param_2 != 'X') || (param_2[1] != 'M')) || ((param_2[2] != 'F' || (param_2[3] != '_')))) {
    return 0xfffffff0;
  }
  if (((param_2[5] != '.') || (param_2[6] != '0')) || (param_2[7] != '0')) {
    return 0xffffffe5;
  }
  if (param_2[4] == '1') {
    iVar8 = 8;
    *(undefined4 *)(param_1 + 4) = 0;
  }
  else {
    if (param_2[4] != '2') {
      return 0xffffffe5;
    }
    if (param_3 < 0x11) {
      return 0xffffffe4;
    }
    *(undefined4 *)(param_1 + 4) = 1;
    iVar8 = 0x10;
    *(uint *)(param_1 + 8) =
         (uint)param_2[0xb] + (uint)param_2[9] * 0x10000 + (uint)param_2[8] * 0x1000000 +
         (uint)param_2[10] * 0x100;
    *(uint *)(param_1 + 0xc) =
         (uint)param_2[0xf] + (uint)param_2[0xd] * 0x10000 + (uint)param_2[0xc] * 0x1000000 +
         (uint)param_2[0xe] * 0x100;
  }
  uVar4 = 0;
  uVar7 = 0;
  do {
    if (3 < uVar7 || param_3 - iVar8 <= uVar7) {
      return 0xffffffe4;
    }
    iVar2 = uVar7 + iVar8;
    uVar7 = uVar7 + 1;
    uVar4 = (param_2[iVar2] & 0x7f) + uVar4 * 0x80;
  } while ((int)((uint)param_2[iVar2] << 0x18) < 0);
  if (param_3 < uVar4) {
    return 0xffffffe4;
  }
  iVar8 = iVar8 + uVar7;
  uVar7 = 0;
  iVar2 = 0;
  do {
    if (3 < uVar7 || uVar4 - iVar8 <= uVar7) {
      return 0xffffffe4;
    }
    uVar1 = (uint)(param_2 + iVar8)[uVar7];
    uVar7 = uVar7 + 1;
    iVar2 = (uVar1 & 0x7f) + iVar2 * 0x80;
  } while ((int)(uVar1 << 0x18) < 0);
  uVar1 = iVar8 + uVar7 + iVar2;
  if (uVar4 < uVar1) {
    return 0xffffffe4;
  }
  *(uchar **)(param_1 + 0x1c) = param_2 + iVar8;
  *(uint *)(param_1 + 0x20) = uVar7 + iVar2;
  uVar7 = 0;
  uVar6 = 0;
  do {
    if (3 < uVar7 || uVar4 - uVar1 <= uVar7) {
      return 0xffffffe4;
    }
    iVar8 = uVar7 + uVar1;
    uVar7 = uVar7 + 1;
    uVar6 = (param_2[iVar8] & 0x7f) + uVar6 * 0x80;
  } while ((int)((uint)param_2[iVar8] << 0x18) < 0);
  if (uVar4 <= uVar6) {
    return 0xffffffe4;
  }
  iVar8 = uVar7 + uVar1;
  uVar7 = 0;
  uVar1 = 0;
  do {
    if (3 < uVar7 || uVar4 - iVar8 <= uVar7) {
      return 0xffffffe4;
    }
    iVar2 = uVar7 + iVar8;
    uVar7 = uVar7 + 1;
    uVar1 = (param_2[iVar2] & 0x7f) + uVar1 * 0x80;
  } while ((int)((uint)param_2[iVar2] << 0x18) < 0);
  if (uVar4 <= uVar1) {
    return 0xffffffe4;
  }
  if ((uVar6 < iVar8 + uVar7) || (uVar1 < uVar6)) {
    return 0xffffffe3;
  }
  if ((int)uVar4 < 0) {
    return uVar4;
  }
  *(uchar **)(param_1 + 0x14) = param_2;
  *(uint *)(param_1 + 0x18) = uVar4;
  uVar4 = FUN_0008c700(param_1,param_2 + uVar6,(1 - uVar6) + uVar1,local_94);
  if ((int)uVar4 < 0) {
    return uVar4;
  }
  *(undefined4 *)(param_1 + 0x34) = local_88;
  *(undefined4 *)(param_1 + 0x38) = local_84;
  if (local_94[0] == 0) {
    if (local_78 == 0) goto LAB_0008cf68;
    uVar7 = FUN_0008c9d8(local_88,local_84,3,4,8);
    switch(uVar7) {
    case 0:
    case 1:
      iVar8 = *(int *)(param_1 + 0x24);
      if (*(int *)(param_1 + 0x24) == 0) {
        *(int *)(param_1 + 0x28) = local_74;
        *(int *)(param_1 + 0x24) = local_78;
        *(undefined4 *)(param_1 + 0x44) = local_88;
        *(undefined4 *)(param_1 + 0x48) = local_84;
        iVar8 = local_78;
      }
      break;
    case 2:
    case 3:
    case 4:
    case 5:
      if (*(int *)(param_1 + 0x2c) != 0) goto LAB_0008cf68;
      *(int *)(param_1 + 0x30) = local_74;
      *(int *)(param_1 + 0x2c) = local_78;
      *(undefined4 *)(param_1 + 0x3c) = local_88;
      *(undefined4 *)(param_1 + 0x40) = local_84;
      iVar8 = *(int *)(param_1 + 0x24);
      break;
    default:
      goto switchD_0008cf54_default;
    }
  }
  else {
    if (local_78 != 0) {
      uVar4 = local_94[0];
      if (0xf < local_94[0]) {
        uVar4 = 0x10;
      }
      local_a4 = 0;
      iVar8 = local_78;
      iVar2 = local_74;
      do {
        uVar7 = FUN_0008c700(param_1,iVar8,iVar2,local_70);
        if ((int)uVar7 < 0) {
          return uVar7;
        }
        iVar8 = iVar8 + local_68;
        iVar2 = iVar2 - local_68;
        if (local_70[0] == 0) {
          if (local_54 == 0) {
LAB_0008d00e:
            uVar7 = 0;
          }
          else {
            uVar7 = FUN_0008c9d8(local_64,local_60,3,4,8);
            switch(uVar7) {
            case 0:
            case 1:
              if (*(int *)(param_1 + 0x24) != 0) goto LAB_0008d00e;
              *(int *)(param_1 + 0x28) = local_50;
              *(int *)(param_1 + 0x24) = local_54;
              *(undefined4 *)(param_1 + 0x44) = local_64;
              *(undefined4 *)(param_1 + 0x48) = local_60;
              uVar7 = 0;
              break;
            case 2:
            case 3:
            case 4:
            case 5:
              if (*(int *)(param_1 + 0x2c) != 0) goto LAB_0008d00e;
              *(int *)(param_1 + 0x30) = local_50;
              *(int *)(param_1 + 0x2c) = local_54;
              *(undefined4 *)(param_1 + 0x3c) = local_64;
              *(undefined4 *)(param_1 + 0x40) = local_60;
              uVar7 = 0;
              break;
            default:
              goto switchD_0008cffc_default;
            }
          }
        }
        else {
          if (local_54 == 0) {
            uVar7 = 0;
            goto LAB_0008d010;
          }
          uVar1 = local_70[0];
          if (0xf < local_70[0]) {
            uVar1 = 0x10;
          }
          uVar6 = 0;
          iVar3 = local_54;
          iVar5 = local_50;
          do {
            uVar7 = FUN_0008c700(param_1,iVar3,iVar5,local_4c);
            if ((int)uVar7 < 0) {
              return uVar7;
            }
            iVar3 = iVar3 + local_44;
            iVar5 = iVar5 - local_44;
            if (local_4c[0] == 0) {
              if (local_30 != 0) {
                uVar7 = FUN_0008c9d8(local_40,local_3c,3,4,8);
                switch(uVar7) {
                case 0:
                case 1:
                  if (*(int *)(param_1 + 0x24) == 0) {
                    *(undefined4 *)(param_1 + 0x28) = local_2c;
                    *(int *)(param_1 + 0x24) = local_30;
                    *(undefined4 *)(param_1 + 0x44) = local_40;
                    *(undefined4 *)(param_1 + 0x48) = local_3c;
                  }
                  break;
                case 2:
                case 3:
                case 4:
                case 5:
                  if (*(int *)(param_1 + 0x2c) == 0) {
                    *(undefined4 *)(param_1 + 0x30) = local_2c;
                    *(int *)(param_1 + 0x2c) = local_30;
                    *(undefined4 *)(param_1 + 0x3c) = local_40;
                    *(undefined4 *)(param_1 + 0x40) = local_3c;
                  }
                  break;
                default:
                  if ((int)uVar7 < 0) {
                    return uVar7;
                  }
                  goto LAB_0008d05e;
                }
              }
              uVar7 = 0;
            }
LAB_0008d05e:
            uVar6 = uVar6 + 1;
          } while (uVar6 < uVar1);
switchD_0008cffc_default:
          if ((int)uVar7 < 0) {
            return uVar7;
          }
        }
LAB_0008d010:
        local_a4 = local_a4 + 1;
      } while (local_a4 < uVar4);
switchD_0008cf54_default:
      if (uVar7 != 0) {
        if ((int)uVar7 < 0) {
          return uVar7;
        }
        goto LAB_0008cf74;
      }
    }
LAB_0008cf68:
    iVar8 = *(int *)(param_1 + 0x24);
  }
  uVar7 = 0;
  if (iVar8 == 0) {
    return 0xffffffff;
  }
LAB_0008cf74:
  *(undefined4 *)param_1 = 1;
  return uVar7;
}

