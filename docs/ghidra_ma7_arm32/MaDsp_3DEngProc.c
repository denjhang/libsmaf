/* MaDsp_3DEngProc @ 00105484 58444B */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* YAMAHA::MaDsp_3DEngProc(_MASMW_P3DASNDSRCCTRL*, _MASMW_P3DASNDSRCMOVE*, _MASMW_P3DACALCRESULT*)
    */

uint YAMAHA::MaDsp_3DEngProc
               (_MASMW_P3DASNDSRCCTRL *param_1,_MASMW_P3DASNDSRCMOVE *param_2,
               _MASMW_P3DACALCRESULT *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  int iVar20;
  uint uVar21;
  uint uVar22;
  undefined4 uVar23;
  uint uVar24;
  uint uVar25;
  _MASMW_P3DACALCRESULT *p_Var26;
  int iVar27;
  uint uVar28;
  int iVar29;
  _MASMW_P3DASNDSRCMOVE *p_Var30;
  uint uVar31;
  int iVar32;
  _MASMW_P3DACALCRESULT *p_Var33;
  uint uVar34;
  uint uVar35;
  char cVar36;
  bool bVar37;
  uint local_84;
  int local_80;
  uint local_7c;
  uint local_78;
  uint local_74;
  int local_70;
  int local_6c;
  int local_68;
  uint local_3c;
  uint local_34;
  uint local_30;
  uint local_2c;
  
  iVar20 = DAT_00106038 + 0x10549a;
  if (*(int *)param_2 != 1) {
    return 0;
  }
  uVar31 = *(uint *)param_1;
  local_74 = *(uint *)(param_2 + 0xec);
  local_80 = *(int *)(param_2 + 0xf0);
  if ((uVar31 & 2) != 0) {
    iVar5 = *(int *)(param_2 + 0xf8);
    if ((int)local_74 < 1) {
LAB_00105dce:
      p_Var30 = param_2 + 0x14;
    }
    else {
      if (0 < local_80) {
        if ((int)local_74 <= local_80) goto LAB_00105dce;
        iVar6 = local_80;
        iVar7 = local_74;
        if (1 < iVar5) {
          iVar6 = __divsi3(local_80,iVar5);
          iVar7 = __divsi3(local_74,iVar5);
        }
        iVar5 = *(int *)(param_2 + 0x24);
        iVar10 = *(int *)(param_2 + 0x28);
        iVar15 = *(int *)(param_2 + 0x20);
        iVar32 = *(int *)(param_2 + 0x18) - iVar5;
        iVar3 = *(int *)(param_2 + 0x14) - iVar15;
        uVar28 = *(int *)(param_2 + 0x1c) - iVar10;
        if (iVar3 == 0) {
LAB_0010bc8e:
          iVar1 = 1;
        }
        else {
          iVar1 = FUN_00100a74(iVar3);
          switch(iVar1) {
          case 0:
            goto LAB_0010bc8e;
          case 1:
            iVar1 = 2;
            break;
          case 2:
            iVar1 = 4;
            break;
          case 3:
            iVar1 = 8;
            break;
          case 4:
            iVar1 = 0x10;
            break;
          case 5:
            iVar1 = 0x20;
            break;
          case 6:
            iVar1 = 0x40;
            break;
          case 7:
            iVar1 = 0x80;
            break;
          case 8:
            iVar1 = 0x100;
            break;
          case 9:
            iVar1 = 0x200;
            break;
          case 10:
            iVar1 = 0x400;
            break;
          case 0xb:
            iVar1 = 0x800;
            break;
          case 0xc:
            iVar1 = 0x1000;
            break;
          case 0xd:
            iVar1 = 0x2000;
            break;
          case 0xe:
            iVar1 = 0x4000;
            break;
          case 0xf:
            iVar1 = 0x8000;
            break;
          case 0x10:
            iVar1 = 0x10000;
            break;
          case 0x11:
            iVar1 = 0x20000;
            break;
          case 0x12:
            iVar1 = 0x40000;
            break;
          case 0x13:
            iVar1 = 0x80000;
            break;
          case 0x14:
            iVar1 = 0x100000;
            break;
          case 0x15:
            iVar1 = 0x200000;
            break;
          case 0x16:
            iVar1 = 0x400000;
            break;
          case 0x17:
            iVar1 = 0x800000;
            break;
          case 0x18:
            iVar1 = 0x1000000;
            break;
          case 0x19:
            iVar1 = 0x2000000;
            break;
          case 0x1a:
            iVar1 = 0x4000000;
            break;
          case 0x1b:
            iVar1 = 0x8000000;
            break;
          case 0x1c:
            iVar1 = 0x10000000;
            break;
          case 0x1d:
            iVar1 = 0x20000000;
            break;
          case 0x1e:
            iVar1 = 0x40000000;
            break;
          default:
            if (iVar1 < 0) {
              iVar1 = 1;
            }
            else {
              iVar1 = 0x40000000;
            }
          }
        }
        iVar3 = __divsi3(iVar3,iVar1);
        iVar3 = __divsi3(iVar6 * iVar3,iVar7);
        if (iVar32 == 0) {
LAB_0010bc96:
          iVar2 = 1;
        }
        else {
          iVar2 = FUN_00100a74(iVar32);
          switch(iVar2) {
          case 0:
            goto LAB_0010bc96;
          case 1:
            iVar2 = 2;
            break;
          case 2:
            iVar2 = 4;
            break;
          case 3:
            iVar2 = 8;
            break;
          case 4:
            iVar2 = 0x10;
            break;
          case 5:
            iVar2 = 0x20;
            break;
          case 6:
            iVar2 = 0x40;
            break;
          case 7:
            iVar2 = 0x80;
            break;
          case 8:
            iVar2 = 0x100;
            break;
          case 9:
            iVar2 = 0x200;
            break;
          case 10:
            iVar2 = 0x400;
            break;
          case 0xb:
            iVar2 = 0x800;
            break;
          case 0xc:
            iVar2 = 0x1000;
            break;
          case 0xd:
            iVar2 = 0x2000;
            break;
          case 0xe:
            iVar2 = 0x4000;
            break;
          case 0xf:
            iVar2 = 0x8000;
            break;
          case 0x10:
            iVar2 = 0x10000;
            break;
          case 0x11:
            iVar2 = 0x20000;
            break;
          case 0x12:
            iVar2 = 0x40000;
            break;
          case 0x13:
            iVar2 = 0x80000;
            break;
          case 0x14:
            iVar2 = 0x100000;
            break;
          case 0x15:
            iVar2 = 0x200000;
            break;
          case 0x16:
            iVar2 = 0x400000;
            break;
          case 0x17:
            iVar2 = 0x800000;
            break;
          case 0x18:
            iVar2 = 0x1000000;
            break;
          case 0x19:
            iVar2 = 0x2000000;
            break;
          case 0x1a:
            iVar2 = 0x4000000;
            break;
          case 0x1b:
            iVar2 = 0x8000000;
            break;
          case 0x1c:
            iVar2 = 0x10000000;
            break;
          case 0x1d:
            iVar2 = 0x20000000;
            break;
          case 0x1e:
            iVar2 = 0x40000000;
            break;
          default:
            if (iVar2 < 0) {
              iVar2 = 1;
            }
            else {
              iVar2 = 0x40000000;
            }
          }
        }
        iVar32 = __divsi3(iVar32,iVar2);
        iVar32 = __divsi3(iVar32 * iVar6,iVar7);
        if (uVar28 == 0) {
LAB_0010b8c4:
          iVar27 = 1;
        }
        else {
          if ((uVar28 & 0x80000000) == 0x80000000) {
            if ((uVar28 & 0xffff8000) != 0xffff8000) {
              if (-1 < (int)(uVar28 * 2)) goto LAB_001138d4;
              if (-1 < (int)(uVar28 * 4)) goto LAB_00113724;
              if (-1 < (int)(uVar28 * 8)) goto LAB_0011371e;
              if (-1 < (int)(uVar28 * 0x10)) goto LAB_00113718;
              if (-1 < (int)(uVar28 * 0x20)) goto LAB_00113712;
              if (-1 < (int)(uVar28 * 0x40)) goto LAB_001143aa;
              if (-1 < (int)(uVar28 * 0x80)) goto LAB_001143a4;
              if (-1 < (int)(uVar28 * 0x100)) goto LAB_0011439e;
              if (-1 < (int)(uVar28 * 0x200)) goto LAB_00114398;
              if (-1 < (int)(uVar28 * 0x400)) goto LAB_00114392;
              if (-1 < (int)(uVar28 * 0x800)) goto LAB_0011438c;
              if (-1 < (int)(uVar28 * 0x1000)) goto LAB_00114386;
              if (-1 < (int)(uVar28 * 0x2000)) goto LAB_00114380;
              if (-1 < (int)(uVar28 * 0x4000)) goto LAB_00114a3c;
              if (-1 < (int)(uVar28 * 0x8000)) goto LAB_00114a36;
              uVar24 = (uint)((uVar28 & 0x8000) == 0);
              goto LAB_00106326;
            }
            goto LAB_0010b8c4;
          }
          if ((uVar28 & 0xffff8000) == 0) goto LAB_0010b8c4;
          if ((int)(uVar28 * 2) < 0) {
LAB_001138d4:
            uVar24 = 0x10;
          }
          else if ((int)(uVar28 * 4) < 0) {
LAB_00113724:
            uVar24 = 0xf;
          }
          else if ((int)(uVar28 * 8) < 0) {
LAB_0011371e:
            uVar24 = 0xe;
          }
          else if ((int)(uVar28 * 0x10) < 0) {
LAB_00113718:
            uVar24 = 0xd;
          }
          else if ((int)(uVar28 * 0x20) < 0) {
LAB_00113712:
            uVar24 = 0xc;
          }
          else if ((int)(uVar28 * 0x40) < 0) {
LAB_001143aa:
            uVar24 = 0xb;
          }
          else if ((int)(uVar28 * 0x80) < 0) {
LAB_001143a4:
            uVar24 = 10;
          }
          else if ((int)(uVar28 * 0x100) < 0) {
LAB_0011439e:
            uVar24 = 9;
          }
          else if ((int)(uVar28 * 0x200) < 0) {
LAB_00114398:
            uVar24 = 8;
          }
          else if ((int)(uVar28 * 0x400) < 0) {
LAB_00114392:
            uVar24 = 7;
          }
          else if ((int)(uVar28 * 0x800) < 0) {
LAB_0011438c:
            uVar24 = 6;
          }
          else if ((int)(uVar28 * 0x1000) < 0) {
LAB_00114386:
            uVar24 = 5;
          }
          else if ((int)(uVar28 * 0x2000) < 0) {
LAB_00114380:
            uVar24 = 4;
          }
          else if ((int)(uVar28 * 0x4000) < 0) {
LAB_00114a3c:
            uVar24 = 3;
          }
          else if ((int)(uVar28 * 0x8000) < 0) {
LAB_00114a36:
            uVar24 = 2;
          }
          else {
            uVar24 = (uVar28 & 0xffff) >> 0xf;
          }
LAB_00106326:
          switch(uVar24) {
          case 1:
            iVar27 = 2;
            break;
          case 2:
            iVar27 = 4;
            break;
          case 3:
            iVar27 = 8;
            break;
          case 4:
            iVar27 = 0x10;
            break;
          case 5:
            iVar27 = 0x20;
            break;
          case 6:
            iVar27 = 0x40;
            break;
          case 7:
            iVar27 = 0x80;
            break;
          case 8:
            iVar27 = 0x100;
            break;
          case 9:
            iVar27 = 0x200;
            break;
          case 10:
            iVar27 = 0x400;
            break;
          case 0xb:
            iVar27 = 0x800;
            break;
          case 0xc:
            iVar27 = 0x1000;
            break;
          case 0xd:
            iVar27 = 0x2000;
            break;
          case 0xe:
            iVar27 = 0x4000;
            break;
          case 0xf:
            iVar27 = 0x8000;
            break;
          case 0x10:
            iVar27 = 0x10000;
            break;
          default:
            goto LAB_0010b8c4;
          }
        }
        *(int *)(param_2 + 0x2c) = iVar15 + iVar1 * iVar3;
        *(int *)(param_2 + 0x30) = iVar5 + iVar2 * iVar32;
        iVar5 = __divsi3(uVar28,iVar27);
        iVar5 = __divsi3(iVar5 * iVar6,iVar7);
        *(int *)(param_2 + 0x34) = iVar27 * iVar5 + iVar10;
        goto LAB_001054c0;
      }
      p_Var30 = param_2 + 0x20;
    }
    uVar23 = *(undefined4 *)(p_Var30 + 4);
    uVar4 = *(undefined4 *)(p_Var30 + 8);
    *(undefined4 *)(param_2 + 0x2c) = *(undefined4 *)p_Var30;
    *(undefined4 *)(param_2 + 0x30) = uVar23;
    *(undefined4 *)(param_2 + 0x34) = uVar4;
    local_74 = *(uint *)(param_2 + 0xec);
    local_80 = *(int *)(param_2 + 0xf0);
  }
LAB_001054c0:
  if ((uVar31 & 0x10) != 0) {
    iVar5 = *(int *)(param_2 + 0xf8);
    if ((int)local_74 < 1) {
LAB_00105d90:
      p_Var30 = param_2 + 0x38;
    }
    else {
      if (0 < local_80) {
        if ((int)local_74 <= local_80) goto LAB_00105d90;
        iVar6 = *(int *)(param_2 + 0x178);
        if (iVar6 == 0x7fffffff) {
          p_Var30 = param_2 + 0x180;
          local_34 = *(uint *)(param_2 + 0x38);
          local_30 = *(uint *)(param_2 + 0x3c);
          local_2c = *(uint *)(param_2 + 0x40);
          *(undefined4 *)p_Var30 = *(undefined4 *)(param_2 + 0x44);
          *(undefined4 *)(param_2 + 0x184) = *(undefined4 *)(param_2 + 0x48);
          *(undefined4 *)(param_2 + 0x188) = *(undefined4 *)(param_2 + 0x4c);
          iVar6 = FUN_00101094(&local_34);
          if (iVar6 == 0) {
            local_34 = 0;
            local_30 = 0;
            local_2c = 0;
          }
          else {
            FUN_00100b5c(&local_34,iVar6);
          }
          iVar6 = FUN_00101094(p_Var30);
          if (iVar6 == 0) {
            *(undefined4 *)(param_2 + 0x180) = 0;
            *(undefined4 *)(param_2 + 0x184) = 0;
            *(undefined4 *)(param_2 + 0x188) = 0;
          }
          else {
            FUN_00100b5c(p_Var30,iVar6);
          }
          iVar6 = FUN_00102354(&local_34,p_Var30);
          *(int *)(param_2 + 0x178) = iVar6;
          if (iVar6 == 0) {
            *(undefined4 *)(param_2 + 0x18c) = 0;
            *(undefined4 *)(param_2 + 400) = 0;
            *(undefined4 *)(param_2 + 0x194) = 0;
          }
          else {
            *(uint *)(param_2 + 400) =
                 local_34 * *(int *)(param_2 + 0x188) - *(int *)(param_2 + 0x180) * local_2c;
            *(uint *)(param_2 + 0x18c) =
                 local_2c * *(int *)(param_2 + 0x184) - local_30 * *(int *)(param_2 + 0x188);
            *(uint *)(param_2 + 0x194) =
                 *(int *)(param_2 + 0x180) * local_30 - local_34 * *(int *)(param_2 + 0x184);
            FUN_00101730(param_2 + 0x18c);
          }
          iVar6 = *(int *)(param_2 + 0x178);
          *(undefined4 *)(param_2 + 0x17c) = 0x7fffffff;
        }
        if (iVar6 == 0) {
          if (1 < iVar5) {
            local_80 = __divsi3(local_80,iVar5);
            local_74 = __divsi3(local_74,iVar5);
          }
          iVar5 = *(int *)(param_2 + 0x4c);
          iVar15 = *(int *)(param_2 + 0x44);
          iVar10 = *(int *)(param_2 + 0x48);
          iVar3 = *(int *)(param_2 + 0x38) - iVar15;
          iVar6 = *(int *)(param_2 + 0x3c) - iVar10;
          iVar7 = *(int *)(param_2 + 0x40) - iVar5;
          if (iVar3 != 0) {
            FUN_00100a74(iVar3);
          }
          iVar32 = FUN_001008e4();
          iVar3 = __divsi3(iVar3,iVar32);
          iVar3 = __divsi3(local_80 * iVar3,local_74);
          if (iVar6 != 0) {
            FUN_00100a74(iVar6);
          }
          iVar1 = FUN_001008e4();
          iVar6 = __divsi3(iVar6,iVar1);
          iVar6 = __divsi3(iVar6 * local_80,local_74);
          if (iVar7 != 0) {
            FUN_00100a74(iVar7);
          }
          iVar2 = FUN_001008e4();
          *(int *)(param_2 + 0x50) = iVar15 + iVar3 * iVar32;
          *(int *)(param_2 + 0x54) = iVar6 * iVar1 + iVar10;
          iVar6 = __divsi3(iVar7,iVar2);
          iVar6 = __divsi3(iVar6 * local_80,local_74);
          local_74 = *(uint *)(param_2 + 0xec);
          local_80 = *(int *)(param_2 + 0xf0);
          *(int *)(param_2 + 0x58) = iVar6 * iVar2 + iVar5;
          goto LAB_001054ca;
        }
        iVar7 = *(int *)(param_2 + 0x18c);
        if (((iVar7 == 0) && (*(int *)(param_2 + 400) == 0)) && (*(int *)(param_2 + 0x194) == 0)) {
          if (local_80 <= (int)local_74 >> 1) goto LAB_00105c20;
          goto LAB_00105d90;
        }
        iVar6 = __divsi3(iVar6 * local_80,local_74);
        if (iVar6 == *(int *)(param_2 + 0x17c)) {
          p_Var30 = param_2 + 0x198;
          goto LAB_00105c24;
        }
        *(int *)(param_2 + 0x17c) = iVar6;
        iVar6 = iVar6 / 2;
        iVar15 = iVar6;
        if (iVar6 < 0xb5) {
          if (iVar6 < -0xb4) {
            iVar6 = -0xb4;
LAB_0010b5b0:
            uVar28 = -*(int *)(DAT_0010c180 + iVar6 * 4 + 0x10c108);
            goto LAB_0010b5c0;
          }
          if (iVar6 < -0x59) goto LAB_0010b5b0;
          if (iVar6 < 0) {
            uVar28 = -*(int *)(DAT_00111648 + iVar6 * -4 + 0x111446);
          }
          else {
            iVar10 = iVar6;
            if (0x5a < iVar6) goto LAB_0010d398;
            uVar28 = *(uint *)(DAT_00111658 + iVar6 * 4 + 0x111548);
          }
LAB_00110bce:
          iVar6 = iVar15 + 0x5a;
          if (0xb4 < iVar6) {
LAB_0010d3b4:
            iVar6 = iVar15 + -0x10e;
            if (iVar6 < -0xb4) {
              iVar6 = -0xb4;
              goto LAB_0010b5ce;
            }
          }
          if (iVar6 < -0x59) goto LAB_0010b5ce;
          if (iVar6 < 0) {
            uVar24 = -*(int *)(DAT_001124c0 + iVar6 * -4 + 0x112988);
          }
          else if (iVar6 < 0x5b) {
            uVar24 = *(uint *)(DAT_00111654 + iVar6 * 4 + 0x111536);
          }
          else {
            uVar24 = *(uint *)(DAT_0010dde0 + (0xb4 - iVar6) * 4 + 0x10dc66);
          }
        }
        else {
          iVar10 = 0xb4;
LAB_0010d398:
          if (0xb4 < iVar6) {
            iVar15 = 0xb4;
          }
          uVar28 = *(uint *)(DAT_0010dddc + (0xb4 - iVar10) * 4 + 0x10dc26);
          if (0xb4 < iVar6) goto LAB_0010d3b4;
LAB_0010b5c0:
          if (-0xb5 < iVar15) goto LAB_00110bce;
          iVar6 = -0x5a;
LAB_0010b5ce:
          uVar24 = -*(int *)(DAT_0010c184 + iVar6 * 4 + 0x10c126);
        }
        uVar25 = uVar28 + 3 & (int)uVar28 >> 0x20;
        if (uVar28 < 0xfffffffd) {
          uVar25 = uVar28;
        }
        iVar6 = (int)uVar25 >> 2;
        uVar28 = uVar24 & ~((int)uVar24 >> 0x20);
        if ((int)uVar24 < 0) {
          uVar28 = uVar24 + 3;
        }
        iVar27 = *(int *)(param_2 + 0x180);
        iVar15 = (int)uVar28 >> 2;
        iVar16 = *(int *)(param_2 + 0x188);
        iVar32 = (*(int *)(param_2 + 400) * iVar6) / 0x7fff;
        iVar1 = (iVar6 * iVar7) / 0x7fff;
        iVar2 = (*(int *)(param_2 + 0x194) * iVar6) / 0x7fff;
        iVar6 = -iVar32;
        iVar12 = *(int *)(param_2 + 0x184);
        iVar7 = -iVar1;
        iVar10 = -iVar2;
        iVar3 = -(iVar16 * iVar2 + iVar27 * iVar1 + *(int *)(param_2 + 0x184) * iVar32);
        iVar29 = iVar27 * iVar15 + (iVar16 * iVar32 - iVar12 * iVar2);
        iVar2 = iVar12 * iVar15 + (iVar27 * iVar2 - iVar16 * iVar1);
        iVar1 = iVar16 * iVar15 + (iVar12 * iVar1 - iVar27 * iVar32);
        iVar32 = 0;
        if (iVar3 != 0) {
          iVar32 = FUN_00100a74(iVar3);
        }
        iVar27 = 0;
        if (iVar29 != 0) {
          iVar27 = FUN_00100a74();
        }
        if (iVar32 <= iVar27) {
          iVar32 = iVar27;
        }
        iVar27 = 0;
        if (iVar2 != 0) {
          iVar27 = FUN_00100a74();
        }
        if (iVar32 < iVar27) {
          iVar32 = iVar27;
        }
        iVar27 = 0;
        if (iVar1 != 0) {
          iVar27 = FUN_00100a74();
        }
        if (iVar27 <= iVar32) {
          iVar27 = iVar32;
        }
        p_Var30 = param_2 + 0x50;
        uVar23 = FUN_001008e4(iVar27);
        iVar3 = __divsi3(iVar3,uVar23);
        iVar32 = __divsi3(iVar29,uVar23);
        iVar2 = __divsi3(iVar2,uVar23);
        iVar1 = __divsi3(iVar1,uVar23);
        *(int *)(param_2 + 0x50) =
             (iVar2 * iVar10 - iVar1 * iVar6) + iVar3 * iVar7 + iVar32 * iVar15;
        *(int *)(param_2 + 0x58) =
             (iVar32 * iVar6 - iVar2 * iVar7) + iVar3 * iVar10 + iVar1 * iVar15;
        *(int *)(param_2 + 0x54) =
             (iVar1 * iVar7 - iVar32 * iVar10) + iVar3 * iVar6 + iVar2 * iVar15;
        iVar6 = FUN_00101094(p_Var30);
        if (iVar6 == 0) {
          *(undefined4 *)(param_2 + 0x50) = 0;
          *(undefined4 *)(param_2 + 0x54) = 0;
          *(undefined4 *)(param_2 + 0x58) = 0;
        }
        else {
          FUN_00100b5c(p_Var30,iVar6);
        }
        if (1 < iVar5) {
          local_80 = __divsi3(local_80);
          local_74 = __divsi3(local_74,iVar5);
        }
        iVar5 = FUN_00101094(param_2 + 0x38);
        iVar6 = FUN_00101094(param_2 + 0x44);
        iVar5 = iVar5 - iVar6;
        if (iVar5 != 0) {
          FUN_00100a74(iVar5);
        }
        iVar7 = FUN_001008e4();
        iVar5 = __divsi3(iVar5,iVar7);
        iVar5 = __divsi3(local_80 * iVar5,local_74);
        iVar6 = iVar5 * iVar7 + iVar6;
        if (iVar6 != 0) {
          FUN_00100a74(iVar6);
        }
        iVar5 = FUN_001008e4();
        *(int *)(param_2 + 0x54) = ((*(int *)(param_2 + 0x54) * iVar6) / 0x7fff) * iVar5;
        *(int *)(param_2 + 0x50) = ((*(int *)(param_2 + 0x50) * iVar6) / 0x7fff) * iVar5;
        *(int *)(param_2 + 0x58) = ((*(int *)(param_2 + 0x58) * iVar6) / 0x7fff) * iVar5;
        *(undefined4 *)(param_2 + 0x198) = *(undefined4 *)p_Var30;
        *(undefined4 *)(param_2 + 0x19c) = *(undefined4 *)(param_2 + 0x54);
        *(undefined4 *)(param_2 + 0x1a0) = *(undefined4 *)(param_2 + 0x58);
        local_74 = *(uint *)(param_2 + 0xec);
        local_80 = *(int *)(param_2 + 0xf0);
        goto LAB_001054ca;
      }
LAB_00105c20:
      p_Var30 = param_2 + 0x44;
    }
LAB_00105c24:
    uVar23 = *(undefined4 *)(p_Var30 + 4);
    uVar4 = *(undefined4 *)(p_Var30 + 8);
    *(undefined4 *)(param_2 + 0x50) = *(undefined4 *)p_Var30;
    *(undefined4 *)(param_2 + 0x54) = uVar23;
    *(undefined4 *)(param_2 + 0x58) = uVar4;
    local_74 = *(uint *)(param_2 + 0xec);
    local_80 = *(int *)(param_2 + 0xf0);
  }
LAB_001054ca:
  if ((uVar31 & 0x800) != 0) {
    iVar5 = *(int *)(param_2 + 0xf8);
    if ((int)local_74 < 1) {
LAB_00105db2:
      p_Var30 = param_2 + 0x5c;
    }
    else {
      if (0 < local_80) {
        if ((int)local_74 <= local_80) goto LAB_00105db2;
        iVar6 = local_80;
        iVar7 = local_74;
        if (1 < iVar5) {
          iVar6 = __divsi3(local_80,iVar5);
          iVar7 = __divsi3(local_74,iVar5);
        }
        iVar5 = *(int *)(param_2 + 0x6c);
        iVar3 = *(int *)(param_2 + 0x70);
        iVar15 = *(int *)(param_2 + 0x68);
        iVar32 = *(int *)(param_2 + 0x60) - iVar5;
        iVar10 = *(int *)(param_2 + 0x5c) - iVar15;
        uVar28 = *(int *)(param_2 + 100) - iVar3;
        if (iVar10 == 0) {
LAB_0010bc80:
          iVar1 = 1;
        }
        else {
          iVar1 = FUN_00100a74(iVar10);
          switch(iVar1) {
          case 0:
            goto LAB_0010bc80;
          case 1:
            iVar1 = 2;
            break;
          case 2:
            iVar1 = 4;
            break;
          case 3:
            iVar1 = 8;
            break;
          case 4:
            iVar1 = 0x10;
            break;
          case 5:
            iVar1 = 0x20;
            break;
          case 6:
            iVar1 = 0x40;
            break;
          case 7:
            iVar1 = 0x80;
            break;
          case 8:
            iVar1 = 0x100;
            break;
          case 9:
            iVar1 = 0x200;
            break;
          case 10:
            iVar1 = 0x400;
            break;
          case 0xb:
            iVar1 = 0x800;
            break;
          case 0xc:
            iVar1 = 0x1000;
            break;
          case 0xd:
            iVar1 = 0x2000;
            break;
          case 0xe:
            iVar1 = 0x4000;
            break;
          case 0xf:
            iVar1 = 0x8000;
            break;
          case 0x10:
            iVar1 = 0x10000;
            break;
          case 0x11:
            iVar1 = 0x20000;
            break;
          case 0x12:
            iVar1 = 0x40000;
            break;
          case 0x13:
            iVar1 = 0x80000;
            break;
          case 0x14:
            iVar1 = 0x100000;
            break;
          case 0x15:
            iVar1 = 0x200000;
            break;
          case 0x16:
            iVar1 = 0x400000;
            break;
          case 0x17:
            iVar1 = 0x800000;
            break;
          case 0x18:
            iVar1 = 0x1000000;
            break;
          case 0x19:
            iVar1 = 0x2000000;
            break;
          case 0x1a:
            iVar1 = 0x4000000;
            break;
          case 0x1b:
            iVar1 = 0x8000000;
            break;
          case 0x1c:
            iVar1 = 0x10000000;
            break;
          case 0x1d:
            iVar1 = 0x20000000;
            break;
          case 0x1e:
            iVar1 = 0x40000000;
            break;
          default:
            if (iVar1 < 0) {
              iVar1 = 1;
            }
            else {
              iVar1 = 0x40000000;
            }
          }
        }
        iVar10 = __divsi3(iVar10,iVar1);
        iVar10 = __divsi3(iVar6 * iVar10,iVar7);
        if (iVar32 == 0) {
LAB_0010bc70:
          iVar2 = 1;
        }
        else {
          iVar2 = FUN_00100a74(iVar32);
          switch(iVar2) {
          case 0:
            goto LAB_0010bc70;
          case 1:
            iVar2 = 2;
            break;
          case 2:
            iVar2 = 4;
            break;
          case 3:
            iVar2 = 8;
            break;
          case 4:
            iVar2 = 0x10;
            break;
          case 5:
            iVar2 = 0x20;
            break;
          case 6:
            iVar2 = 0x40;
            break;
          case 7:
            iVar2 = 0x80;
            break;
          case 8:
            iVar2 = 0x100;
            break;
          case 9:
            iVar2 = 0x200;
            break;
          case 10:
            iVar2 = 0x400;
            break;
          case 0xb:
            iVar2 = 0x800;
            break;
          case 0xc:
            iVar2 = 0x1000;
            break;
          case 0xd:
            iVar2 = 0x2000;
            break;
          case 0xe:
            iVar2 = 0x4000;
            break;
          case 0xf:
            iVar2 = 0x8000;
            break;
          case 0x10:
            iVar2 = 0x10000;
            break;
          case 0x11:
            iVar2 = 0x20000;
            break;
          case 0x12:
            iVar2 = 0x40000;
            break;
          case 0x13:
            iVar2 = 0x80000;
            break;
          case 0x14:
            iVar2 = 0x100000;
            break;
          case 0x15:
            iVar2 = 0x200000;
            break;
          case 0x16:
            iVar2 = 0x400000;
            break;
          case 0x17:
            iVar2 = 0x800000;
            break;
          case 0x18:
            iVar2 = 0x1000000;
            break;
          case 0x19:
            iVar2 = 0x2000000;
            break;
          case 0x1a:
            iVar2 = 0x4000000;
            break;
          case 0x1b:
            iVar2 = 0x8000000;
            break;
          case 0x1c:
            iVar2 = 0x10000000;
            break;
          case 0x1d:
            iVar2 = 0x20000000;
            break;
          case 0x1e:
            iVar2 = 0x40000000;
            break;
          default:
            if (iVar2 < 0) {
              iVar2 = 1;
            }
            else {
              iVar2 = 0x40000000;
            }
          }
        }
        iVar32 = __divsi3(iVar32,iVar2);
        iVar32 = __divsi3(iVar32 * iVar6,iVar7);
        if (uVar28 == 0) {
LAB_0010b8cc:
          iVar27 = 1;
        }
        else {
          if ((uVar28 & 0x80000000) == 0x80000000) {
            if ((uVar28 & 0xffff8000) != 0xffff8000) {
              if (-1 < (int)(uVar28 * 2)) goto LAB_0011370c;
              if (-1 < (int)(uVar28 * 4)) goto LAB_00113ef4;
              if (-1 < (int)(uVar28 * 8)) goto LAB_00113eee;
              if (-1 < (int)(uVar28 * 0x10)) goto LAB_00113ee8;
              if (-1 < (int)(uVar28 * 0x20)) goto LAB_00113ee2;
              if (-1 < (int)(uVar28 * 0x40)) goto LAB_00114340;
              if (-1 < (int)(uVar28 * 0x80)) goto LAB_0011433a;
              if (-1 < (int)(uVar28 * 0x100)) goto LAB_00114334;
              if (-1 < (int)(uVar28 * 0x200)) goto LAB_0011432e;
              if (-1 < (int)(uVar28 * 0x400)) goto LAB_00114328;
              if (-1 < (int)(uVar28 * 0x800)) goto LAB_00114322;
              if (-1 < (int)(uVar28 * 0x1000)) goto LAB_0011431c;
              if (-1 < (int)(uVar28 * 0x2000)) goto LAB_00114316;
              if (-1 < (int)(uVar28 * 0x4000)) goto LAB_00114054;
              if (-1 < (int)(uVar28 * 0x8000)) goto LAB_00114a30;
              uVar24 = (uint)((uVar28 & 0x8000) == 0);
              goto LAB_00106976;
            }
            goto LAB_0010b8cc;
          }
          if ((uVar28 & 0xffff8000) == 0) goto LAB_0010b8cc;
          if ((int)(uVar28 * 2) < 0) {
LAB_0011370c:
            uVar24 = 0x10;
          }
          else if ((int)(uVar28 * 4) < 0) {
LAB_00113ef4:
            uVar24 = 0xf;
          }
          else if ((int)(uVar28 * 8) < 0) {
LAB_00113eee:
            uVar24 = 0xe;
          }
          else if ((int)(uVar28 * 0x10) < 0) {
LAB_00113ee8:
            uVar24 = 0xd;
          }
          else if ((int)(uVar28 * 0x20) < 0) {
LAB_00113ee2:
            uVar24 = 0xc;
          }
          else if ((int)(uVar28 * 0x40) < 0) {
LAB_00114340:
            uVar24 = 0xb;
          }
          else if ((int)(uVar28 * 0x80) < 0) {
LAB_0011433a:
            uVar24 = 10;
          }
          else if ((int)(uVar28 * 0x100) < 0) {
LAB_00114334:
            uVar24 = 9;
          }
          else if ((int)(uVar28 * 0x200) < 0) {
LAB_0011432e:
            uVar24 = 8;
          }
          else if ((int)(uVar28 * 0x400) < 0) {
LAB_00114328:
            uVar24 = 7;
          }
          else if ((int)(uVar28 * 0x800) < 0) {
LAB_00114322:
            uVar24 = 6;
          }
          else if ((int)(uVar28 * 0x1000) < 0) {
LAB_0011431c:
            uVar24 = 5;
          }
          else if ((int)(uVar28 * 0x2000) < 0) {
LAB_00114316:
            uVar24 = 4;
          }
          else if ((int)(uVar28 * 0x4000) < 0) {
LAB_00114054:
            uVar24 = 3;
          }
          else if ((int)(uVar28 * 0x8000) < 0) {
LAB_00114a30:
            uVar24 = 2;
          }
          else {
            uVar24 = (uVar28 & 0xffff) >> 0xf;
          }
LAB_00106976:
          switch(uVar24) {
          case 1:
            iVar27 = 2;
            break;
          case 2:
            iVar27 = 4;
            break;
          case 3:
            iVar27 = 8;
            break;
          case 4:
            iVar27 = 0x10;
            break;
          case 5:
            iVar27 = 0x20;
            break;
          case 6:
            iVar27 = 0x40;
            break;
          case 7:
            iVar27 = 0x80;
            break;
          case 8:
            iVar27 = 0x100;
            break;
          case 9:
            iVar27 = 0x200;
            break;
          case 10:
            iVar27 = 0x400;
            break;
          case 0xb:
            iVar27 = 0x800;
            break;
          case 0xc:
            iVar27 = 0x1000;
            break;
          case 0xd:
            iVar27 = 0x2000;
            break;
          case 0xe:
            iVar27 = 0x4000;
            break;
          case 0xf:
            iVar27 = 0x8000;
            break;
          case 0x10:
            iVar27 = 0x10000;
            break;
          default:
            goto LAB_0010b8cc;
          }
        }
        *(int *)(param_2 + 0x74) = iVar15 + iVar1 * iVar10;
        *(int *)(param_2 + 0x78) = iVar5 + iVar2 * iVar32;
        iVar5 = __divsi3(uVar28,iVar27);
        iVar5 = __divsi3(iVar5 * iVar6,iVar7);
        *(int *)(param_2 + 0x7c) = iVar27 * iVar5 + iVar3;
        goto LAB_001054d4;
      }
      p_Var30 = param_2 + 0x68;
    }
    uVar23 = *(undefined4 *)(p_Var30 + 4);
    uVar4 = *(undefined4 *)(p_Var30 + 8);
    *(undefined4 *)(param_2 + 0x74) = *(undefined4 *)p_Var30;
    *(undefined4 *)(param_2 + 0x78) = uVar23;
    *(undefined4 *)(param_2 + 0x7c) = uVar4;
    local_74 = *(uint *)(param_2 + 0xec);
    local_80 = *(int *)(param_2 + 0xf0);
  }
LAB_001054d4:
  if ((uVar31 & 0x2000) != 0) {
    iVar5 = *(int *)(param_2 + 0xf8);
    if ((int)local_74 < 1) {
LAB_00105d8a:
      p_Var30 = param_2 + 0x80;
LAB_00105af4:
      uVar23 = *(undefined4 *)(p_Var30 + 4);
      uVar4 = *(undefined4 *)(p_Var30 + 8);
      *(undefined4 *)(param_2 + 0x98) = *(undefined4 *)p_Var30;
      *(undefined4 *)(param_2 + 0x9c) = uVar23;
      *(undefined4 *)(param_2 + 0xa0) = uVar4;
      local_74 = *(uint *)(param_2 + 0xec);
      local_80 = *(int *)(param_2 + 0xf0);
      goto LAB_001054de;
    }
    if (local_80 < 1) {
LAB_00105af0:
      p_Var30 = param_2 + 0x8c;
      goto LAB_00105af4;
    }
    if ((int)local_74 <= local_80) goto LAB_00105d8a;
    iVar6 = *(int *)(param_2 + 0x1a4);
    if (iVar6 == 0x7fffffff) {
      uVar24 = *(uint *)(param_2 + 0x80);
      uVar28 = *(uint *)(param_2 + 0x84);
      uVar25 = *(uint *)(param_2 + 0x88);
      *(undefined4 *)(param_2 + 0x1ac) = *(undefined4 *)(param_2 + 0x8c);
      *(undefined4 *)(param_2 + 0x1b0) = *(undefined4 *)(param_2 + 0x90);
      *(undefined4 *)(param_2 + 0x1b4) = *(undefined4 *)(param_2 + 0x94);
      if (uVar24 == 0) {
        if ((uVar28 != 0) || (uVar25 != 0)) {
          uVar14 = 0;
          goto LAB_0010ee96;
        }
LAB_0010f2ea:
        local_34 = 0;
        local_30 = 0;
        local_2c = 0;
      }
      else {
        if ((uVar24 & 0x80000000) == 0x80000000) {
          if ((uVar24 & 0xffffc000) == 0xffffc000) {
            uVar14 = 0;
          }
          else {
            if (-1 < (int)(uVar24 << 1)) goto LAB_001159a4;
            if (-1 < (int)(uVar24 << 2)) goto LAB_001159b6;
            if (-1 < (int)(uVar24 << 3)) goto LAB_001159b0;
            if (-1 < (int)(uVar24 << 4)) goto LAB_00115a96;
            if (-1 < (int)(uVar24 << 5)) goto LAB_00115a90;
            if (-1 < (int)(uVar24 << 6)) goto LAB_00115a8a;
            if (-1 < (int)(uVar24 << 7)) goto LAB_00115a84;
            if (-1 < (int)(uVar24 << 8)) goto LAB_00115ac6;
            if (-1 < (int)(uVar24 << 9)) goto LAB_00115ac0;
            if (-1 < (int)(uVar24 << 10)) goto LAB_00115aba;
            if (-1 < (int)(uVar24 << 0xb)) goto LAB_00115ab4;
            if (-1 < (int)(uVar24 << 0xc)) goto LAB_00115aae;
            if (-1 < (int)(uVar24 << 0xd)) goto LAB_00115aa8;
            if (-1 < (int)(uVar24 << 0xe)) goto LAB_00115aa2;
            if (-1 < (int)(uVar24 << 0xf)) goto LAB_00115a9c;
            if (-1 < (int)(uVar24 << 0x10)) goto LAB_0011639e;
            uVar14 = (uint)((uVar24 & 0x4000) == 0);
          }
        }
        else {
          uVar14 = 0;
          if ((uVar24 & 0xffffc000) != 0) {
            if ((int)(uVar24 << 1) < 0) {
LAB_001159a4:
              uVar14 = 0x11;
            }
            else if ((int)(uVar24 << 2) < 0) {
LAB_001159b6:
              uVar14 = 0x10;
            }
            else if ((int)(uVar24 << 3) < 0) {
LAB_001159b0:
              uVar14 = 0xf;
            }
            else if ((int)(uVar24 << 4) < 0) {
LAB_00115a96:
              uVar14 = 0xe;
            }
            else if ((int)(uVar24 << 5) < 0) {
LAB_00115a90:
              uVar14 = 0xd;
            }
            else if ((int)(uVar24 << 6) < 0) {
LAB_00115a8a:
              uVar14 = 0xc;
            }
            else if ((int)(uVar24 << 7) < 0) {
LAB_00115a84:
              uVar14 = 0xb;
            }
            else if ((int)(uVar24 << 8) < 0) {
LAB_00115ac6:
              uVar14 = 10;
            }
            else if ((int)(uVar24 << 9) < 0) {
LAB_00115ac0:
              uVar14 = 9;
            }
            else if ((int)(uVar24 << 10) < 0) {
LAB_00115aba:
              uVar14 = 8;
            }
            else if ((int)(uVar24 << 0xb) < 0) {
LAB_00115ab4:
              uVar14 = 7;
            }
            else if ((int)(uVar24 << 0xc) < 0) {
LAB_00115aae:
              uVar14 = 6;
            }
            else if ((int)(uVar24 << 0xd) < 0) {
LAB_00115aa8:
              uVar14 = 5;
            }
            else if ((int)(uVar24 << 0xe) < 0) {
LAB_00115aa2:
              uVar14 = 4;
            }
            else if ((int)(uVar24 << 0xf) < 0) {
LAB_00115a9c:
              uVar14 = 3;
            }
            else if ((int)(uVar24 << 0x10) < 0) {
LAB_0011639e:
              uVar14 = 2;
            }
            else {
              uVar14 = (uVar24 & 0x7fff) >> 0xe;
            }
          }
        }
LAB_0010ee96:
        uVar22 = 0;
        if (uVar28 != 0) {
          if ((uVar28 & 0x80000000) == 0x80000000) {
            if ((uVar28 & 0xffffc000) == 0xffffc000) {
              uVar22 = 0;
            }
            else {
              if ((uVar28 & 0x40000000) == 0) goto LAB_001155d2;
              if ((uVar28 & 0x20000000) == 0) goto LAB_0011560e;
              if ((uVar28 & 0x10000000) == 0) goto LAB_00115608;
              if ((uVar28 & 0x8000000) == 0) goto LAB_00115512;
              if ((uVar28 & 0x4000000) == 0) goto LAB_0011550c;
              if ((uVar28 & 0x2000000) == 0) goto LAB_00115506;
              if ((uVar28 & 0x1000000) == 0) goto LAB_00115500;
              if ((uVar28 & 0x800000) == 0) goto LAB_00115542;
              if ((uVar28 & 0x400000) == 0) goto LAB_0011553c;
              if ((uVar28 & 0x200000) == 0) goto LAB_00115536;
              if ((uVar28 & 0x100000) == 0) goto LAB_00115530;
              if ((uVar28 & 0x80000) == 0) goto LAB_0011552a;
              if ((uVar28 & 0x40000) == 0) goto LAB_00115524;
              if ((uVar28 & 0x20000) == 0) goto LAB_0011551e;
              if ((uVar28 & 0x10000) == 0) goto LAB_00115518;
              if ((uVar28 & 0x8000) == 0) goto LAB_00115614;
              uVar22 = (uint)((uVar28 & 0x4000) == 0);
            }
          }
          else {
            uVar22 = 0;
            if ((uVar28 & 0xffffc000) != 0) {
              if ((uVar28 & 0x40000000) == 0) {
                if ((uVar28 & 0x20000000) == 0) {
                  if ((uVar28 & 0x10000000) == 0) {
                    if ((uVar28 & 0x8000000) == 0) {
                      if ((uVar28 & 0x4000000) == 0) {
                        if ((uVar28 & 0x2000000) == 0) {
                          if ((uVar28 & 0x1000000) == 0) {
                            if ((uVar28 & 0x800000) == 0) {
                              if ((uVar28 & 0x400000) == 0) {
                                if ((uVar28 & 0x200000) == 0) {
                                  if ((uVar28 & 0x100000) == 0) {
                                    if ((uVar28 & 0x80000) == 0) {
                                      if ((uVar28 & 0x40000) == 0) {
                                        if ((uVar28 & 0x20000) == 0) {
                                          if ((uVar28 & 0x10000) == 0) {
                                            if ((uVar28 & 0x8000) == 0) {
                                              uVar22 = (uVar28 & 0x7fff) >> 0xe;
                                            }
                                            else {
LAB_00115614:
                                              uVar22 = 2;
                                            }
                                          }
                                          else {
LAB_00115518:
                                            uVar22 = 3;
                                          }
                                        }
                                        else {
LAB_0011551e:
                                          uVar22 = 4;
                                        }
                                      }
                                      else {
LAB_00115524:
                                        uVar22 = 5;
                                      }
                                    }
                                    else {
LAB_0011552a:
                                      uVar22 = 6;
                                    }
                                  }
                                  else {
LAB_00115530:
                                    uVar22 = 7;
                                  }
                                }
                                else {
LAB_00115536:
                                  uVar22 = 8;
                                }
                              }
                              else {
LAB_0011553c:
                                uVar22 = 9;
                              }
                            }
                            else {
LAB_00115542:
                              uVar22 = 10;
                            }
                          }
                          else {
LAB_00115500:
                            uVar22 = 0xb;
                          }
                        }
                        else {
LAB_00115506:
                          uVar22 = 0xc;
                        }
                      }
                      else {
LAB_0011550c:
                        uVar22 = 0xd;
                      }
                    }
                    else {
LAB_00115512:
                      uVar22 = 0xe;
                    }
                  }
                  else {
LAB_00115608:
                    uVar22 = 0xf;
                  }
                }
                else {
LAB_0011560e:
                  uVar22 = 0x10;
                }
              }
              else {
LAB_001155d2:
                uVar22 = 0x11;
              }
            }
          }
        }
        uVar11 = 0;
        if (uVar25 != 0) {
          if ((uVar25 & 0x80000000) == 0x80000000) {
            if ((uVar25 & 0xffffc000) == 0xffffc000) {
              uVar11 = 0;
            }
            else {
              if (-1 < (int)(uVar25 << 1)) goto LAB_001154ae;
              if (-1 < (int)(uVar25 << 2)) goto LAB_001154a8;
              if (-1 < (int)(uVar25 << 3)) goto LAB_001154a2;
              if (-1 < (int)(uVar25 << 4)) goto LAB_00115256;
              if (-1 < (int)(uVar25 << 5)) goto LAB_00115250;
              if (-1 < (int)(uVar25 << 6)) goto LAB_0011524a;
              if (-1 < (int)(uVar25 << 7)) goto LAB_00115244;
              if (-1 < (int)(uVar25 << 8)) goto LAB_00115662;
              if (-1 < (int)(uVar25 << 9)) goto LAB_0011565c;
              if (-1 < (int)(uVar25 << 10)) goto LAB_00115656;
              if (-1 < (int)(uVar25 << 0xb)) goto LAB_00115650;
              if (-1 < (int)(uVar25 << 0xc)) goto LAB_0011564a;
              if (-1 < (int)(uVar25 << 0xd)) goto LAB_00115644;
              if (-1 < (int)(uVar25 << 0xe)) goto LAB_0011563e;
              if (-1 < (int)(uVar25 << 0xf)) goto LAB_00115638;
              if (-1 < (int)(uVar25 << 0x10)) goto LAB_0011561a;
              uVar11 = (uint)((uVar25 & 0x4000) == 0);
            }
          }
          else {
            uVar11 = 0;
            if ((uVar25 & 0xffffc000) != 0) {
              if ((int)(uVar25 << 1) < 0) {
LAB_001154ae:
                uVar11 = 0x11;
              }
              else if ((int)(uVar25 << 2) < 0) {
LAB_001154a8:
                uVar11 = 0x10;
              }
              else if ((int)(uVar25 << 3) < 0) {
LAB_001154a2:
                uVar11 = 0xf;
              }
              else if ((int)(uVar25 << 4) < 0) {
LAB_00115256:
                uVar11 = 0xe;
              }
              else if ((int)(uVar25 << 5) < 0) {
LAB_00115250:
                uVar11 = 0xd;
              }
              else if ((int)(uVar25 << 6) < 0) {
LAB_0011524a:
                uVar11 = 0xc;
              }
              else if ((int)(uVar25 << 7) < 0) {
LAB_00115244:
                uVar11 = 0xb;
              }
              else if ((int)(uVar25 << 8) < 0) {
LAB_00115662:
                uVar11 = 10;
              }
              else if ((int)(uVar25 << 9) < 0) {
LAB_0011565c:
                uVar11 = 9;
              }
              else if ((int)(uVar25 << 10) < 0) {
LAB_00115656:
                uVar11 = 8;
              }
              else if ((int)(uVar25 << 0xb) < 0) {
LAB_00115650:
                uVar11 = 7;
              }
              else if ((int)(uVar25 << 0xc) < 0) {
LAB_0011564a:
                uVar11 = 6;
              }
              else if ((int)(uVar25 << 0xd) < 0) {
LAB_00115644:
                uVar11 = 5;
              }
              else if ((int)(uVar25 << 0xe) < 0) {
LAB_0011563e:
                uVar11 = 4;
              }
              else if ((int)(uVar25 << 0xf) < 0) {
LAB_00115638:
                uVar11 = 3;
              }
              else if ((int)(uVar25 << 0x10) < 0) {
LAB_0011561a:
                uVar11 = 2;
              }
              else {
                uVar11 = (uVar25 & 0x7fff) >> 0xe;
              }
            }
          }
        }
        if (uVar14 <= uVar22) {
          uVar14 = uVar22;
        }
        if (uVar11 <= uVar14) {
          uVar11 = uVar14;
        }
        switch(uVar11) {
        case 0:
          iVar6 = 1;
          break;
        case 1:
          iVar6 = 2;
          break;
        case 2:
          iVar6 = 4;
          break;
        case 3:
          iVar6 = 8;
          break;
        case 4:
          iVar6 = 0x10;
          break;
        case 5:
          iVar6 = 0x20;
          break;
        case 6:
          iVar6 = 0x40;
          break;
        case 7:
          iVar6 = 0x80;
          break;
        case 8:
          iVar6 = 0x100;
          break;
        case 9:
          iVar6 = 0x200;
          break;
        case 10:
          iVar6 = 0x400;
          break;
        case 0xb:
          iVar6 = 0x800;
          break;
        case 0xc:
          iVar6 = 0x1000;
          break;
        case 0xd:
          iVar6 = 0x2000;
          break;
        case 0xe:
          iVar6 = 0x4000;
          break;
        case 0xf:
          iVar6 = 0x8000;
          break;
        case 0x10:
          iVar6 = 0x10000;
          break;
        case 0x11:
          iVar6 = 0x20000;
          break;
        case 0x12:
          iVar6 = 0x40000;
          break;
        case 0x13:
          iVar6 = 0x80000;
          break;
        case 0x14:
          iVar6 = 0x100000;
          break;
        case 0x15:
          iVar6 = 0x200000;
          break;
        case 0x16:
          iVar6 = 0x400000;
          break;
        case 0x17:
          iVar6 = 0x800000;
          break;
        case 0x18:
          iVar6 = 0x1000000;
          break;
        case 0x19:
          iVar6 = 0x2000000;
          break;
        case 0x1a:
          iVar6 = 0x4000000;
          break;
        case 0x1b:
          iVar6 = 0x8000000;
          break;
        case 0x1c:
          iVar6 = 0x10000000;
          break;
        case 0x1d:
          iVar6 = 0x20000000;
          break;
        default:
          iVar6 = 0x40000000;
        }
        local_34 = uVar24;
        local_30 = uVar28;
        local_2c = uVar25;
        iVar7 = __divsi3(uVar24,iVar6);
        iVar15 = __divsi3(uVar28,iVar6);
        iVar10 = __divsi3(uVar25,iVar6);
        iVar7 = iVar10 * iVar10 + iVar7 * iVar7 + iVar15 * iVar15;
        if (iVar7 < 1) {
          iVar7 = 0;
        }
        else {
          iVar15 = 0x7ffffffe;
          iVar10 = 0x7ffffffe;
          if (iVar7 != 0x7fffffff) {
            iVar15 = iVar7;
            iVar10 = iVar7;
          }
          do {
            iVar7 = __divsi3(iVar10,iVar15);
            iVar3 = (iVar15 + iVar7) / 2;
            iVar7 = iVar15;
            if (iVar15 <= iVar3) break;
            iVar7 = __divsi3(iVar10,iVar3);
            iVar15 = (iVar3 + iVar7) / 2;
            iVar7 = iVar3;
            if (iVar3 <= iVar15) break;
            iVar7 = __divsi3(iVar10);
            iVar3 = (iVar15 + iVar7) / 2;
            iVar7 = iVar15;
            if (iVar15 <= iVar3) break;
            iVar7 = __divsi3(iVar10,iVar3);
            iVar15 = (iVar3 + iVar7) / 2;
            iVar7 = iVar3;
            if (iVar3 <= iVar15) break;
            iVar7 = __divsi3(iVar10,iVar15);
            iVar3 = (iVar15 + iVar7) / 2;
            iVar7 = iVar15;
            if (iVar15 <= iVar3) break;
            iVar7 = __divsi3(iVar10,iVar3);
            iVar15 = (iVar3 + iVar7) / 2;
            iVar7 = iVar3;
            if (iVar3 <= iVar15) break;
            iVar7 = __divsi3(iVar10);
            iVar3 = (iVar15 + iVar7) / 2;
            iVar7 = iVar15;
            if (iVar15 <= iVar3) break;
            iVar7 = __divsi3(iVar10,iVar3);
            iVar15 = (iVar7 + iVar3) / 2;
            iVar7 = iVar3;
          } while (iVar15 < iVar3);
        }
        if ((int)uVar28 < (int)uVar24) {
          uVar28 = uVar24;
        }
        if ((int)uVar28 < (int)uVar25) {
          uVar28 = uVar25;
        }
        if ((int)uVar28 < iVar6 * iVar7) {
          uVar28 = iVar6 * iVar7;
        }
        if (uVar28 == 0) goto LAB_0010f2ea;
        FUN_00100b5c(&local_34);
      }
      uVar28 = *(uint *)(param_2 + 0x1ac);
      if (uVar28 == 0) {
        if ((*(int *)(param_2 + 0x1b0) != 0) || (*(int *)(param_2 + 0x1b4) != 0)) {
          uVar25 = *(uint *)(param_2 + 0x1b0);
          uVar14 = 0;
          uVar24 = *(uint *)(param_2 + 0x1b4);
          goto LAB_0010f318;
        }
LAB_0010f676:
        *(undefined4 *)(param_2 + 0x1ac) = 0;
        *(undefined4 *)(param_2 + 0x1b0) = 0;
        *(undefined4 *)(param_2 + 0x1b4) = 0;
      }
      else {
        uVar25 = *(uint *)(param_2 + 0x1b0);
        uVar24 = *(uint *)(param_2 + 0x1b4);
        if ((uVar28 & 0x80000000) == 0x80000000) {
          if ((uVar28 & 0xffffc000) == 0xffffc000) {
            uVar14 = 0;
          }
          else {
            if ((uVar28 & 0x40000000) == 0) goto LAB_00115c0c;
            if ((uVar28 & 0x20000000) == 0) goto LAB_00115c18;
            if ((uVar28 & 0x10000000) == 0) goto LAB_00115c12;
            if ((uVar28 & 0x8000000) == 0) goto LAB_00115c30;
            if ((uVar28 & 0x4000000) == 0) goto LAB_00115c2a;
            if ((uVar28 & 0x2000000) == 0) goto LAB_00115c24;
            if ((uVar28 & 0x1000000) == 0) goto LAB_00115c1e;
            if ((uVar28 & 0x800000) == 0) goto LAB_00115c60;
            if ((uVar28 & 0x400000) == 0) goto LAB_00115c5a;
            if ((uVar28 & 0x200000) == 0) goto LAB_00115c54;
            if ((uVar28 & 0x100000) == 0) goto LAB_00115c4e;
            if ((uVar28 & 0x80000) == 0) goto LAB_00115c48;
            if ((uVar28 & 0x40000) == 0) goto LAB_00115c42;
            if ((uVar28 & 0x20000) == 0) goto LAB_00115c3c;
            if ((uVar28 & 0x10000) == 0) goto LAB_00115c36;
            if ((uVar28 & 0x8000) == 0) goto LAB_00115c06;
            uVar14 = (uint)((uVar28 & 0x4000) == 0);
          }
        }
        else {
          uVar14 = 0;
          if ((uVar28 & 0xffffc000) != 0) {
            if ((uVar28 & 0x40000000) == 0) {
              if ((uVar28 & 0x20000000) == 0) {
                if ((uVar28 & 0x10000000) == 0) {
                  if ((uVar28 & 0x8000000) == 0) {
                    if ((uVar28 & 0x4000000) == 0) {
                      if ((uVar28 & 0x2000000) == 0) {
                        if ((uVar28 & 0x1000000) == 0) {
                          if ((uVar28 & 0x800000) == 0) {
                            if ((uVar28 & 0x400000) == 0) {
                              if ((uVar28 & 0x200000) == 0) {
                                if ((uVar28 & 0x100000) == 0) {
                                  if ((uVar28 & 0x80000) == 0) {
                                    if ((uVar28 & 0x40000) == 0) {
                                      if ((uVar28 & 0x20000) == 0) {
                                        if ((uVar28 & 0x10000) == 0) {
                                          if ((uVar28 & 0x8000) == 0) {
                                            uVar14 = (uVar28 & 0x7fff) >> 0xe;
                                          }
                                          else {
LAB_00115c06:
                                            uVar14 = 2;
                                          }
                                        }
                                        else {
LAB_00115c36:
                                          uVar14 = 3;
                                        }
                                      }
                                      else {
LAB_00115c3c:
                                        uVar14 = 4;
                                      }
                                    }
                                    else {
LAB_00115c42:
                                      uVar14 = 5;
                                    }
                                  }
                                  else {
LAB_00115c48:
                                    uVar14 = 6;
                                  }
                                }
                                else {
LAB_00115c4e:
                                  uVar14 = 7;
                                }
                              }
                              else {
LAB_00115c54:
                                uVar14 = 8;
                              }
                            }
                            else {
LAB_00115c5a:
                              uVar14 = 9;
                            }
                          }
                          else {
LAB_00115c60:
                            uVar14 = 10;
                          }
                        }
                        else {
LAB_00115c1e:
                          uVar14 = 0xb;
                        }
                      }
                      else {
LAB_00115c24:
                        uVar14 = 0xc;
                      }
                    }
                    else {
LAB_00115c2a:
                      uVar14 = 0xd;
                    }
                  }
                  else {
LAB_00115c30:
                    uVar14 = 0xe;
                  }
                }
                else {
LAB_00115c12:
                  uVar14 = 0xf;
                }
              }
              else {
LAB_00115c18:
                uVar14 = 0x10;
              }
            }
            else {
LAB_00115c0c:
              uVar14 = 0x11;
            }
          }
        }
LAB_0010f318:
        uVar22 = 0;
        if (uVar25 != 0) {
          if ((uVar25 & 0x80000000) == 0x80000000) {
            if ((uVar25 & 0xffffc000) == 0xffffc000) {
              uVar22 = 0;
            }
            else {
              if ((uVar25 & 0x40000000) == 0) goto LAB_00115b70;
              if ((uVar25 & 0x20000000) == 0) goto LAB_00115b62;
              if ((uVar25 & 0x10000000) == 0) goto LAB_00115b5c;
              if ((uVar25 & 0x8000000) == 0) goto LAB_00115b56;
              if ((uVar25 & 0x4000000) == 0) goto LAB_00115b50;
              if ((uVar25 & 0x2000000) == 0) goto LAB_00115b4a;
              if ((uVar25 & 0x1000000) == 0) goto LAB_00115b44;
              if ((uVar25 & 0x800000) == 0) goto LAB_00115c00;
              if ((uVar25 & 0x400000) == 0) goto LAB_00115bfa;
              if ((uVar25 & 0x200000) == 0) goto LAB_00115bf4;
              if ((uVar25 & 0x100000) == 0) goto LAB_00115bee;
              if ((uVar25 & 0x80000) == 0) goto LAB_00115be8;
              if ((uVar25 & 0x40000) == 0) goto LAB_00115be2;
              if ((uVar25 & 0x20000) == 0) goto LAB_00115bdc;
              if ((uVar25 & 0x10000) == 0) goto LAB_00115bd6;
              if ((uVar25 & 0x8000) == 0) goto LAB_00115c7e;
              uVar22 = (uint)((uVar25 & 0x4000) == 0);
            }
          }
          else {
            uVar22 = 0;
            if ((uVar25 & 0xffffc000) != 0) {
              if ((uVar25 & 0x40000000) == 0) {
                if ((uVar25 & 0x20000000) == 0) {
                  if ((uVar25 & 0x10000000) == 0) {
                    if ((uVar25 & 0x8000000) == 0) {
                      if ((uVar25 & 0x4000000) == 0) {
                        if ((uVar25 & 0x2000000) == 0) {
                          if ((uVar25 & 0x1000000) == 0) {
                            if ((uVar25 & 0x800000) == 0) {
                              if ((uVar25 & 0x400000) == 0) {
                                if ((uVar25 & 0x200000) == 0) {
                                  if ((uVar25 & 0x100000) == 0) {
                                    if ((uVar25 & 0x80000) == 0) {
                                      if ((uVar25 & 0x40000) == 0) {
                                        if ((uVar25 & 0x20000) == 0) {
                                          if ((uVar25 & 0x10000) == 0) {
                                            if ((uVar25 & 0x8000) == 0) {
                                              uVar22 = (uVar25 & 0x7fff) >> 0xe;
                                            }
                                            else {
LAB_00115c7e:
                                              uVar22 = 2;
                                            }
                                          }
                                          else {
LAB_00115bd6:
                                            uVar22 = 3;
                                          }
                                        }
                                        else {
LAB_00115bdc:
                                          uVar22 = 4;
                                        }
                                      }
                                      else {
LAB_00115be2:
                                        uVar22 = 5;
                                      }
                                    }
                                    else {
LAB_00115be8:
                                      uVar22 = 6;
                                    }
                                  }
                                  else {
LAB_00115bee:
                                    uVar22 = 7;
                                  }
                                }
                                else {
LAB_00115bf4:
                                  uVar22 = 8;
                                }
                              }
                              else {
LAB_00115bfa:
                                uVar22 = 9;
                              }
                            }
                            else {
LAB_00115c00:
                              uVar22 = 10;
                            }
                          }
                          else {
LAB_00115b44:
                            uVar22 = 0xb;
                          }
                        }
                        else {
LAB_00115b4a:
                          uVar22 = 0xc;
                        }
                      }
                      else {
LAB_00115b50:
                        uVar22 = 0xd;
                      }
                    }
                    else {
LAB_00115b56:
                      uVar22 = 0xe;
                    }
                  }
                  else {
LAB_00115b5c:
                    uVar22 = 0xf;
                  }
                }
                else {
LAB_00115b62:
                  uVar22 = 0x10;
                }
              }
              else {
LAB_00115b70:
                uVar22 = 0x11;
              }
            }
          }
        }
        uVar11 = 0;
        if (uVar24 != 0) {
          if ((uVar24 & 0x80000000) == 0x80000000) {
            if ((uVar24 & 0xffffc000) == 0xffffc000) {
              uVar11 = 0;
            }
            else {
              if (-1 < (int)(uVar24 << 1)) goto LAB_0011530a;
              if (-1 < (int)(uVar24 << 2)) goto LAB_00115316;
              if (-1 < (int)(uVar24 << 3)) goto LAB_00115310;
              if (-1 < (int)(uVar24 << 4)) goto LAB_0011532e;
              if (-1 < (int)(uVar24 << 5)) goto LAB_00115328;
              if (-1 < (int)(uVar24 << 6)) goto LAB_00115322;
              if (-1 < (int)(uVar24 << 7)) goto LAB_0011531c;
              if (-1 < (int)(uVar24 << 8)) goto LAB_0011535e;
              if (-1 < (int)(uVar24 << 9)) goto LAB_00115358;
              if (-1 < (int)(uVar24 << 10)) goto LAB_00115352;
              if (-1 < (int)(uVar24 << 0xb)) goto LAB_0011534c;
              if (-1 < (int)(uVar24 << 0xc)) goto LAB_00115346;
              if (-1 < (int)(uVar24 << 0xd)) goto LAB_00115340;
              if (-1 < (int)(uVar24 << 0xe)) goto LAB_0011533a;
              if (-1 < (int)(uVar24 << 0xf)) goto LAB_00115334;
              if (-1 < (int)(uVar24 << 0x10)) goto LAB_00115c84;
              uVar11 = (uint)((uVar24 & 0x4000) == 0);
            }
          }
          else {
            uVar11 = 0;
            if ((uVar24 & 0xffffc000) != 0) {
              if ((int)(uVar24 << 1) < 0) {
LAB_0011530a:
                uVar11 = 0x11;
              }
              else if ((int)(uVar24 << 2) < 0) {
LAB_00115316:
                uVar11 = 0x10;
              }
              else if ((int)(uVar24 << 3) < 0) {
LAB_00115310:
                uVar11 = 0xf;
              }
              else if ((int)(uVar24 << 4) < 0) {
LAB_0011532e:
                uVar11 = 0xe;
              }
              else if ((int)(uVar24 << 5) < 0) {
LAB_00115328:
                uVar11 = 0xd;
              }
              else if ((int)(uVar24 << 6) < 0) {
LAB_00115322:
                uVar11 = 0xc;
              }
              else if ((int)(uVar24 << 7) < 0) {
LAB_0011531c:
                uVar11 = 0xb;
              }
              else if ((int)(uVar24 << 8) < 0) {
LAB_0011535e:
                uVar11 = 10;
              }
              else if ((int)(uVar24 << 9) < 0) {
LAB_00115358:
                uVar11 = 9;
              }
              else if ((int)(uVar24 << 10) < 0) {
LAB_00115352:
                uVar11 = 8;
              }
              else if ((int)(uVar24 << 0xb) < 0) {
LAB_0011534c:
                uVar11 = 7;
              }
              else if ((int)(uVar24 << 0xc) < 0) {
LAB_00115346:
                uVar11 = 6;
              }
              else if ((int)(uVar24 << 0xd) < 0) {
LAB_00115340:
                uVar11 = 5;
              }
              else if ((int)(uVar24 << 0xe) < 0) {
LAB_0011533a:
                uVar11 = 4;
              }
              else if ((int)(uVar24 << 0xf) < 0) {
LAB_00115334:
                uVar11 = 3;
              }
              else if ((int)(uVar24 << 0x10) < 0) {
LAB_00115c84:
                uVar11 = 2;
              }
              else {
                uVar11 = (uVar24 & 0x7fff) >> 0xe;
              }
            }
          }
        }
        if (uVar14 <= uVar22) {
          uVar14 = uVar22;
        }
        if (uVar11 <= uVar14) {
          uVar11 = uVar14;
        }
        switch(uVar11) {
        case 0:
          iVar6 = 1;
          break;
        case 1:
          iVar6 = 2;
          break;
        case 2:
          iVar6 = 4;
          break;
        case 3:
          iVar6 = 8;
          break;
        case 4:
          iVar6 = 0x10;
          break;
        case 5:
          iVar6 = 0x20;
          break;
        case 6:
          iVar6 = 0x40;
          break;
        case 7:
          iVar6 = 0x80;
          break;
        case 8:
          iVar6 = 0x100;
          break;
        case 9:
          iVar6 = 0x200;
          break;
        case 10:
          iVar6 = 0x400;
          break;
        case 0xb:
          iVar6 = 0x800;
          break;
        case 0xc:
          iVar6 = 0x1000;
          break;
        case 0xd:
          iVar6 = 0x2000;
          break;
        case 0xe:
          iVar6 = 0x4000;
          break;
        case 0xf:
          iVar6 = 0x8000;
          break;
        case 0x10:
          iVar6 = 0x10000;
          break;
        case 0x11:
          iVar6 = 0x20000;
          break;
        case 0x12:
          iVar6 = 0x40000;
          break;
        case 0x13:
          iVar6 = 0x80000;
          break;
        case 0x14:
          iVar6 = 0x100000;
          break;
        case 0x15:
          iVar6 = 0x200000;
          break;
        case 0x16:
          iVar6 = 0x400000;
          break;
        case 0x17:
          iVar6 = 0x800000;
          break;
        case 0x18:
          iVar6 = 0x1000000;
          break;
        case 0x19:
          iVar6 = 0x2000000;
          break;
        case 0x1a:
          iVar6 = 0x4000000;
          break;
        case 0x1b:
          iVar6 = 0x8000000;
          break;
        case 0x1c:
          iVar6 = 0x10000000;
          break;
        case 0x1d:
          iVar6 = 0x20000000;
          break;
        default:
          iVar6 = 0x40000000;
        }
        iVar7 = __divsi3(uVar28,iVar6);
        iVar15 = __divsi3(uVar25,iVar6);
        iVar10 = __divsi3(uVar24,iVar6);
        iVar7 = iVar10 * iVar10 + iVar7 * iVar7 + iVar15 * iVar15;
        if (iVar7 < 1) {
          iVar15 = 0;
        }
        else {
          iVar10 = iVar7;
          if (iVar7 == 0x7fffffff) {
            iVar7 = 0x7ffffffe;
            iVar10 = 0x7ffffffe;
          }
          do {
            iVar15 = __divsi3(iVar10,iVar7);
            iVar3 = (iVar7 + iVar15) / 2;
            iVar15 = iVar7;
            if (iVar7 <= iVar3) break;
            iVar7 = __divsi3(iVar10);
            iVar7 = (iVar3 + iVar7) / 2;
            iVar15 = iVar3;
            if (iVar3 <= iVar7) break;
            iVar15 = __divsi3(iVar10,iVar7);
            iVar3 = (iVar7 + iVar15) / 2;
            iVar15 = iVar7;
            if (iVar7 <= iVar3) break;
            iVar7 = __divsi3(iVar10,iVar3);
            iVar7 = (iVar3 + iVar7) / 2;
            iVar15 = iVar3;
            if (iVar3 <= iVar7) break;
            iVar15 = __divsi3(iVar10,iVar7);
            iVar3 = (iVar7 + iVar15) / 2;
            iVar15 = iVar7;
            if (iVar7 <= iVar3) break;
            iVar7 = __divsi3(iVar10,iVar3);
            iVar7 = (iVar3 + iVar7) / 2;
            iVar15 = iVar3;
            if (iVar3 <= iVar7) break;
            iVar15 = __divsi3(iVar10);
            iVar3 = (iVar7 + iVar15) / 2;
            iVar15 = iVar7;
            if (iVar7 <= iVar3) break;
            iVar7 = __divsi3(iVar10,iVar3);
            iVar7 = (iVar7 + iVar3) / 2;
            iVar15 = iVar3;
          } while (iVar7 < iVar3);
        }
        if ((int)uVar24 < (int)uVar25) {
          uVar24 = uVar25;
        }
        if ((int)uVar24 < (int)uVar28) {
          uVar24 = uVar28;
        }
        if ((int)uVar24 < iVar6 * iVar15) {
          uVar24 = iVar6 * iVar15;
        }
        if (uVar24 == 0) goto LAB_0010f676;
        FUN_00100b5c(param_2 + 0x1ac);
      }
      uVar14 = local_2c;
      uVar25 = local_30;
      uVar24 = local_34;
      uVar11 = *(uint *)(param_2 + 0x1b4);
      uVar34 = *(uint *)(param_2 + 0x1ac);
      uVar22 = *(uint *)(param_2 + 0x1b0);
      uVar28 = 0;
      if (local_34 != 0) {
        if ((local_34 & 0x80000000) == 0x80000000) {
          if ((local_34 & 0xffffc000) == 0xffffc000) {
            uVar28 = 0;
          }
          else {
            if (-1 < (int)(local_34 << 1)) goto LAB_001155cc;
            if (-1 < (int)(local_34 << 2)) goto LAB_001155c6;
            if (-1 < (int)(local_34 << 3)) goto LAB_001155c0;
            if (-1 < (int)(local_34 << 4)) goto LAB_0011526e;
            if (-1 < (int)(local_34 << 5)) goto LAB_00115268;
            if (-1 < (int)(local_34 << 6)) goto LAB_00115262;
            if (-1 < (int)(local_34 << 7)) goto LAB_0011525c;
            if (-1 < (int)(local_34 << 8)) goto LAB_0011529e;
            if (-1 < (int)(local_34 << 9)) goto LAB_00115298;
            if (-1 < (int)(local_34 << 10)) goto LAB_00115292;
            if (-1 < (int)(local_34 << 0xb)) goto LAB_0011528c;
            if (-1 < (int)(local_34 << 0xc)) goto LAB_00115286;
            if (-1 < (int)(local_34 << 0xd)) goto LAB_00115280;
            if (-1 < (int)(local_34 << 0xe)) goto LAB_0011527a;
            if (-1 < (int)(local_34 << 0xf)) goto LAB_00115274;
            if (-1 < (int)(local_34 << 0x10)) goto LAB_001151ea;
            uVar28 = (uint)((local_34 & 0x4000) == 0);
          }
        }
        else {
          uVar28 = 0;
          if ((local_34 & 0xffffc000) != 0) {
            if ((int)(local_34 << 1) < 0) {
LAB_001155cc:
              uVar28 = 0x11;
            }
            else if ((int)(local_34 << 2) < 0) {
LAB_001155c6:
              uVar28 = 0x10;
            }
            else if ((int)(local_34 << 3) < 0) {
LAB_001155c0:
              uVar28 = 0xf;
            }
            else if ((int)(local_34 << 4) < 0) {
LAB_0011526e:
              uVar28 = 0xe;
            }
            else if ((int)(local_34 << 5) < 0) {
LAB_00115268:
              uVar28 = 0xd;
            }
            else if ((int)(local_34 << 6) < 0) {
LAB_00115262:
              uVar28 = 0xc;
            }
            else if ((int)(local_34 << 7) < 0) {
LAB_0011525c:
              uVar28 = 0xb;
            }
            else if ((int)(local_34 << 8) < 0) {
LAB_0011529e:
              uVar28 = 10;
            }
            else if ((int)(local_34 << 9) < 0) {
LAB_00115298:
              uVar28 = 9;
            }
            else if ((int)(local_34 << 10) < 0) {
LAB_00115292:
              uVar28 = 8;
            }
            else if ((int)(local_34 << 0xb) < 0) {
LAB_0011528c:
              uVar28 = 7;
            }
            else if ((int)(local_34 << 0xc) < 0) {
LAB_00115286:
              uVar28 = 6;
            }
            else if ((int)(local_34 << 0xd) < 0) {
LAB_00115280:
              uVar28 = 5;
            }
            else if ((int)(local_34 << 0xe) < 0) {
LAB_0011527a:
              uVar28 = 4;
            }
            else if ((int)(local_34 << 0xf) < 0) {
LAB_00115274:
              uVar28 = 3;
            }
            else if ((int)(local_34 << 0x10) < 0) {
LAB_001151ea:
              uVar28 = 2;
            }
            else {
              uVar28 = (local_34 & 0x7fff) >> 0xe;
            }
          }
        }
      }
      uVar21 = 0;
      if (local_30 != 0) {
        if ((local_30 & 0x80000000) == 0x80000000) {
          if ((local_30 & 0xffffc000) == 0xffffc000) {
            uVar21 = 0;
          }
          else {
            if (-1 < (int)(local_30 << 1)) goto LAB_00115376;
            if (-1 < (int)(local_30 << 2)) goto LAB_00115370;
            if (-1 < (int)(local_30 << 3)) goto LAB_0011538e;
            if (-1 < (int)(local_30 << 4)) goto LAB_00115388;
            if (-1 < (int)(local_30 << 5)) goto LAB_00115382;
            if (-1 < (int)(local_30 << 6)) goto LAB_0011537c;
            if (-1 < (int)(local_30 << 7)) goto LAB_001153be;
            if (-1 < (int)(local_30 << 8)) goto LAB_001153b8;
            if (-1 < (int)(local_30 << 9)) goto LAB_001153b2;
            if (-1 < (int)(local_30 << 10)) goto LAB_001153ac;
            if (-1 < (int)(local_30 << 0xb)) goto LAB_001153a6;
            if (-1 < (int)(local_30 << 0xc)) goto LAB_001153a0;
            if (-1 < (int)(local_30 << 0xd)) goto LAB_0011539a;
            if (-1 < (int)(local_30 << 0xe)) goto LAB_00115394;
            if (-1 < (int)(local_30 << 0xf)) goto LAB_0011536a;
            if (-1 < (int)(local_30 << 0x10)) goto LAB_00115364;
            uVar21 = (uint)((local_30 & 0x4000) == 0);
          }
        }
        else {
          uVar21 = 0;
          if ((local_30 & 0xffffc000) != 0) {
            if ((int)(local_30 << 1) < 0) {
LAB_00115376:
              uVar21 = 0x11;
            }
            else if ((int)(local_30 << 2) < 0) {
LAB_00115370:
              uVar21 = 0x10;
            }
            else if ((int)(local_30 << 3) < 0) {
LAB_0011538e:
              uVar21 = 0xf;
            }
            else if ((int)(local_30 << 4) < 0) {
LAB_00115388:
              uVar21 = 0xe;
            }
            else if ((int)(local_30 << 5) < 0) {
LAB_00115382:
              uVar21 = 0xd;
            }
            else if ((int)(local_30 << 6) < 0) {
LAB_0011537c:
              uVar21 = 0xc;
            }
            else if ((int)(local_30 << 7) < 0) {
LAB_001153be:
              uVar21 = 0xb;
            }
            else if ((int)(local_30 << 8) < 0) {
LAB_001153b8:
              uVar21 = 10;
            }
            else if ((int)(local_30 << 9) < 0) {
LAB_001153b2:
              uVar21 = 9;
            }
            else if ((int)(local_30 << 10) < 0) {
LAB_001153ac:
              uVar21 = 8;
            }
            else if ((int)(local_30 << 0xb) < 0) {
LAB_001153a6:
              uVar21 = 7;
            }
            else if ((int)(local_30 << 0xc) < 0) {
LAB_001153a0:
              uVar21 = 6;
            }
            else if ((int)(local_30 << 0xd) < 0) {
LAB_0011539a:
              uVar21 = 5;
            }
            else if ((int)(local_30 << 0xe) < 0) {
LAB_00115394:
              uVar21 = 4;
            }
            else if ((int)(local_30 << 0xf) < 0) {
LAB_0011536a:
              uVar21 = 3;
            }
            else if ((int)(local_30 << 0x10) < 0) {
LAB_00115364:
              uVar21 = 2;
            }
            else {
              uVar21 = (local_30 & 0x7fff) >> 0xe;
            }
          }
        }
      }
      uVar17 = 0;
      if (local_2c != 0) {
        if ((local_2c & 0x80000000) == 0x80000000) {
          if ((local_2c & 0xffffc000) == 0xffffc000) {
            uVar17 = 0;
          }
          else {
            if (-1 < (int)(local_2c << 1)) goto LAB_00115c92;
            if (-1 < (int)(local_2c << 2)) goto LAB_001151f6;
            if (-1 < (int)(local_2c << 3)) goto LAB_001151f0;
            if (-1 < (int)(local_2c << 4)) goto LAB_0011520e;
            if (-1 < (int)(local_2c << 5)) goto LAB_00115208;
            if (-1 < (int)(local_2c << 6)) goto LAB_00115202;
            if (-1 < (int)(local_2c << 7)) goto LAB_001151fc;
            if (-1 < (int)(local_2c << 8)) goto LAB_0011523e;
            if (-1 < (int)(local_2c << 9)) goto LAB_00115238;
            if (-1 < (int)(local_2c << 10)) goto LAB_00115232;
            if (-1 < (int)(local_2c << 0xb)) goto LAB_0011522c;
            if (-1 < (int)(local_2c << 0xc)) goto LAB_00115226;
            if (-1 < (int)(local_2c << 0xd)) goto LAB_00115220;
            if (-1 < (int)(local_2c << 0xe)) goto LAB_0011521a;
            if (-1 < (int)(local_2c << 0xf)) goto LAB_00115214;
            if (-1 < (int)(local_2c << 0x10)) goto LAB_001159aa;
            uVar17 = (uint)((local_2c & 0x4000) == 0);
          }
        }
        else {
          uVar17 = 0;
          if ((local_2c & 0xffffc000) != 0) {
            if ((int)(local_2c << 1) < 0) {
LAB_00115c92:
              uVar17 = 0x11;
            }
            else if ((int)(local_2c << 2) < 0) {
LAB_001151f6:
              uVar17 = 0x10;
            }
            else if ((int)(local_2c << 3) < 0) {
LAB_001151f0:
              uVar17 = 0xf;
            }
            else if ((int)(local_2c << 4) < 0) {
LAB_0011520e:
              uVar17 = 0xe;
            }
            else if ((int)(local_2c << 5) < 0) {
LAB_00115208:
              uVar17 = 0xd;
            }
            else if ((int)(local_2c << 6) < 0) {
LAB_00115202:
              uVar17 = 0xc;
            }
            else if ((int)(local_2c << 7) < 0) {
LAB_001151fc:
              uVar17 = 0xb;
            }
            else if ((int)(local_2c << 8) < 0) {
LAB_0011523e:
              uVar17 = 10;
            }
            else if ((int)(local_2c << 9) < 0) {
LAB_00115238:
              uVar17 = 9;
            }
            else if ((int)(local_2c << 10) < 0) {
LAB_00115232:
              uVar17 = 8;
            }
            else if ((int)(local_2c << 0xb) < 0) {
LAB_0011522c:
              uVar17 = 7;
            }
            else if ((int)(local_2c << 0xc) < 0) {
LAB_00115226:
              uVar17 = 6;
            }
            else if ((int)(local_2c << 0xd) < 0) {
LAB_00115220:
              uVar17 = 5;
            }
            else if ((int)(local_2c << 0xe) < 0) {
LAB_0011521a:
              uVar17 = 4;
            }
            else if ((int)(local_2c << 0xf) < 0) {
LAB_00115214:
              uVar17 = 3;
            }
            else if ((int)(local_2c << 0x10) < 0) {
LAB_001159aa:
              uVar17 = 2;
            }
            else {
              uVar17 = (local_2c & 0x7fff) >> 0xe;
            }
          }
        }
      }
      if (uVar28 <= uVar21) {
        uVar28 = uVar21;
      }
      if (uVar17 <= uVar28) {
        uVar17 = uVar28;
      }
      switch(uVar17) {
      case 0:
        uVar23 = 1;
        break;
      case 1:
        uVar23 = 2;
        break;
      case 2:
        uVar23 = 4;
        break;
      case 3:
        uVar23 = 8;
        break;
      case 4:
        uVar23 = 0x10;
        break;
      case 5:
        uVar23 = 0x20;
        break;
      case 6:
        uVar23 = 0x40;
        break;
      case 7:
        uVar23 = 0x80;
        break;
      case 8:
        uVar23 = 0x100;
        break;
      case 9:
        uVar23 = 0x200;
        break;
      case 10:
        uVar23 = 0x400;
        break;
      case 0xb:
        uVar23 = 0x800;
        break;
      case 0xc:
        uVar23 = 0x1000;
        break;
      case 0xd:
        uVar23 = 0x2000;
        break;
      case 0xe:
        uVar23 = 0x4000;
        break;
      case 0xf:
        uVar23 = 0x8000;
        break;
      case 0x10:
        uVar23 = 0x10000;
        break;
      case 0x11:
        uVar23 = 0x20000;
        break;
      case 0x12:
        uVar23 = 0x40000;
        break;
      case 0x13:
        uVar23 = 0x80000;
        break;
      case 0x14:
        uVar23 = 0x100000;
        break;
      case 0x15:
        uVar23 = 0x200000;
        break;
      case 0x16:
        uVar23 = 0x400000;
        break;
      case 0x17:
        uVar23 = 0x800000;
        break;
      case 0x18:
        uVar23 = 0x1000000;
        break;
      case 0x19:
        uVar23 = 0x2000000;
        break;
      case 0x1a:
        uVar23 = 0x4000000;
        break;
      case 0x1b:
        uVar23 = 0x8000000;
        break;
      case 0x1c:
        uVar23 = 0x10000000;
        break;
      case 0x1d:
        uVar23 = 0x20000000;
        break;
      default:
        uVar23 = 0x40000000;
      }
      uVar21 = __divsi3(local_34,uVar23);
      uVar17 = __divsi3(uVar25,uVar23);
      uVar8 = __divsi3(uVar14,uVar23);
      uVar28 = 0;
      if (uVar34 != 0) {
        if ((uVar34 & 0x80000000) == 0x80000000) {
          if ((uVar34 & 0xffffc000) == 0xffffc000) {
            uVar28 = 0;
          }
          else {
            if (-1 < (int)(uVar34 << 1)) goto LAB_00115102;
            if (-1 < (int)(uVar34 << 2)) goto LAB_001150a8;
            if (-1 < (int)(uVar34 << 3)) goto LAB_001150a2;
            if (-1 < (int)(uVar34 << 4)) goto LAB_001151ae;
            if (-1 < (int)(uVar34 << 5)) goto LAB_001151a8;
            if (-1 < (int)(uVar34 << 6)) goto LAB_001151a2;
            if (-1 < (int)(uVar34 << 7)) goto LAB_0011519c;
            if (-1 < (int)(uVar34 << 8)) goto LAB_001151de;
            if (-1 < (int)(uVar34 << 9)) goto LAB_001151d8;
            if (-1 < (int)(uVar34 << 10)) goto LAB_001151d2;
            if (-1 < (int)(uVar34 << 0xb)) goto LAB_001151cc;
            if (-1 < (int)(uVar34 << 0xc)) goto LAB_001151c6;
            if (-1 < (int)(uVar34 << 0xd)) goto LAB_001151c0;
            if (-1 < (int)(uVar34 << 0xe)) goto LAB_001151ba;
            if (-1 < (int)(uVar34 << 0xf)) goto LAB_001151b4;
            if (-1 < (int)(uVar34 << 0x10)) goto LAB_00116552;
            uVar28 = (uint)((uVar34 & 0x4000) == 0);
          }
        }
        else {
          uVar28 = 0;
          if ((uVar34 & 0xffffc000) != 0) {
            if ((int)(uVar34 << 1) < 0) {
LAB_00115102:
              uVar28 = 0x11;
            }
            else if ((int)(uVar34 << 2) < 0) {
LAB_001150a8:
              uVar28 = 0x10;
            }
            else if ((int)(uVar34 << 3) < 0) {
LAB_001150a2:
              uVar28 = 0xf;
            }
            else if ((int)(uVar34 << 4) < 0) {
LAB_001151ae:
              uVar28 = 0xe;
            }
            else if ((int)(uVar34 << 5) < 0) {
LAB_001151a8:
              uVar28 = 0xd;
            }
            else if ((int)(uVar34 << 6) < 0) {
LAB_001151a2:
              uVar28 = 0xc;
            }
            else if ((int)(uVar34 << 7) < 0) {
LAB_0011519c:
              uVar28 = 0xb;
            }
            else if ((int)(uVar34 << 8) < 0) {
LAB_001151de:
              uVar28 = 10;
            }
            else if ((int)(uVar34 << 9) < 0) {
LAB_001151d8:
              uVar28 = 9;
            }
            else if ((int)(uVar34 << 10) < 0) {
LAB_001151d2:
              uVar28 = 8;
            }
            else if ((int)(uVar34 << 0xb) < 0) {
LAB_001151cc:
              uVar28 = 7;
            }
            else if ((int)(uVar34 << 0xc) < 0) {
LAB_001151c6:
              uVar28 = 6;
            }
            else if ((int)(uVar34 << 0xd) < 0) {
LAB_001151c0:
              uVar28 = 5;
            }
            else if ((int)(uVar34 << 0xe) < 0) {
LAB_001151ba:
              uVar28 = 4;
            }
            else if ((int)(uVar34 << 0xf) < 0) {
LAB_001151b4:
              uVar28 = 3;
            }
            else if ((int)(uVar34 << 0x10) < 0) {
LAB_00116552:
              uVar28 = 2;
            }
            else {
              uVar28 = (uVar34 & 0x7fff) >> 0xe;
            }
          }
        }
      }
      uVar35 = 0;
      if (uVar22 != 0) {
        if ((uVar22 & 0x80000000) == 0x80000000) {
          if ((uVar22 & 0xffffc000) == 0xffffc000) {
            uVar35 = 0;
          }
          else {
            if (-1 < (int)(uVar22 << 1)) goto LAB_00115108;
            if (-1 < (int)(uVar22 << 2)) goto LAB_00115118;
            if (-1 < (int)(uVar22 << 3)) goto LAB_00115110;
            if (-1 < (int)(uVar22 << 4)) goto LAB_00115138;
            if (-1 < (int)(uVar22 << 5)) goto LAB_00115130;
            if (-1 < (int)(uVar22 << 6)) goto LAB_00115128;
            if (-1 < (int)(uVar22 << 7)) goto LAB_00115120;
            if (-1 < (int)(uVar22 << 8)) goto LAB_00115178;
            if (-1 < (int)(uVar22 << 9)) goto LAB_00115170;
            if (-1 < (int)(uVar22 << 10)) goto LAB_00115168;
            if (-1 < (int)(uVar22 << 0xb)) goto LAB_00115160;
            if (-1 < (int)(uVar22 << 0xc)) goto LAB_00115158;
            if (-1 < (int)(uVar22 << 0xd)) goto LAB_00115150;
            if (-1 < (int)(uVar22 << 0xe)) goto LAB_00115148;
            if (-1 < (int)(uVar22 << 0xf)) goto LAB_00115140;
            if (-1 < (int)(uVar22 << 0x10)) goto LAB_00116558;
            uVar35 = (uint)((uVar22 & 0x4000) == 0);
          }
        }
        else {
          uVar35 = 0;
          if ((uVar22 & 0xffffc000) != 0) {
            if ((int)(uVar22 << 1) < 0) {
LAB_00115108:
              uVar35 = 0x11;
            }
            else if ((int)(uVar22 << 2) < 0) {
LAB_00115118:
              uVar35 = 0x10;
            }
            else if ((int)(uVar22 << 3) < 0) {
LAB_00115110:
              uVar35 = 0xf;
            }
            else if ((int)(uVar22 << 4) < 0) {
LAB_00115138:
              uVar35 = 0xe;
            }
            else if ((int)(uVar22 << 5) < 0) {
LAB_00115130:
              uVar35 = 0xd;
            }
            else if ((int)(uVar22 << 6) < 0) {
LAB_00115128:
              uVar35 = 0xc;
            }
            else if ((int)(uVar22 << 7) < 0) {
LAB_00115120:
              uVar35 = 0xb;
            }
            else if ((int)(uVar22 << 8) < 0) {
LAB_00115178:
              uVar35 = 10;
            }
            else if ((int)(uVar22 << 9) < 0) {
LAB_00115170:
              uVar35 = 9;
            }
            else if ((int)(uVar22 << 10) < 0) {
LAB_00115168:
              uVar35 = 8;
            }
            else if ((int)(uVar22 << 0xb) < 0) {
LAB_00115160:
              uVar35 = 7;
            }
            else if ((int)(uVar22 << 0xc) < 0) {
LAB_00115158:
              uVar35 = 6;
            }
            else if ((int)(uVar22 << 0xd) < 0) {
LAB_00115150:
              uVar35 = 5;
            }
            else if ((int)(uVar22 << 0xe) < 0) {
LAB_00115148:
              uVar35 = 4;
            }
            else if ((int)(uVar22 << 0xf) < 0) {
LAB_00115140:
              uVar35 = 3;
            }
            else if ((int)(uVar22 << 0x10) < 0) {
LAB_00116558:
              uVar35 = 2;
            }
            else {
              uVar35 = (uVar22 & 0x7fff) >> 0xe;
            }
          }
        }
      }
      uVar18 = 0;
      if (uVar11 != 0) {
        if ((uVar11 & 0x80000000) == 0x80000000) {
          if ((uVar11 & 0xffffc000) == 0xffffc000) {
            uVar18 = 0;
          }
          else {
            if (-1 < (int)(uVar11 << 1)) goto LAB_00115c66;
            if (-1 < (int)(uVar11 << 2)) goto LAB_001150b4;
            if (-1 < (int)(uVar11 << 3)) goto LAB_001150ae;
            if (-1 < (int)(uVar11 << 4)) goto LAB_001150cc;
            if (-1 < (int)(uVar11 << 5)) goto LAB_001150c6;
            if (-1 < (int)(uVar11 << 6)) goto LAB_001150c0;
            if (-1 < (int)(uVar11 << 7)) goto LAB_001150ba;
            if (-1 < (int)(uVar11 << 8)) goto LAB_001150fc;
            if (-1 < (int)(uVar11 << 9)) goto LAB_001150f6;
            if (-1 < (int)(uVar11 << 10)) goto LAB_001150f0;
            if (-1 < (int)(uVar11 << 0xb)) goto LAB_001150ea;
            if (-1 < (int)(uVar11 << 0xc)) goto LAB_001150e4;
            if (-1 < (int)(uVar11 << 0xd)) goto LAB_001150de;
            if (-1 < (int)(uVar11 << 0xe)) goto LAB_001150d8;
            if (-1 < (int)(uVar11 << 0xf)) goto LAB_001150d2;
            if (-1 < (int)(uVar11 << 0x10)) goto LAB_001159bc;
            uVar18 = (uint)((uVar11 & 0x4000) == 0);
          }
        }
        else {
          uVar18 = 0;
          if ((uVar11 & 0xffffc000) != 0) {
            if ((int)(uVar11 << 1) < 0) {
LAB_00115c66:
              uVar18 = 0x11;
            }
            else if ((int)(uVar11 << 2) < 0) {
LAB_001150b4:
              uVar18 = 0x10;
            }
            else if ((int)(uVar11 << 3) < 0) {
LAB_001150ae:
              uVar18 = 0xf;
            }
            else if ((int)(uVar11 << 4) < 0) {
LAB_001150cc:
              uVar18 = 0xe;
            }
            else if ((int)(uVar11 << 5) < 0) {
LAB_001150c6:
              uVar18 = 0xd;
            }
            else if ((int)(uVar11 << 6) < 0) {
LAB_001150c0:
              uVar18 = 0xc;
            }
            else if ((int)(uVar11 << 7) < 0) {
LAB_001150ba:
              uVar18 = 0xb;
            }
            else if ((int)(uVar11 << 8) < 0) {
LAB_001150fc:
              uVar18 = 10;
            }
            else if ((int)(uVar11 << 9) < 0) {
LAB_001150f6:
              uVar18 = 9;
            }
            else if ((int)(uVar11 << 10) < 0) {
LAB_001150f0:
              uVar18 = 8;
            }
            else if ((int)(uVar11 << 0xb) < 0) {
LAB_001150ea:
              uVar18 = 7;
            }
            else if ((int)(uVar11 << 0xc) < 0) {
LAB_001150e4:
              uVar18 = 6;
            }
            else if ((int)(uVar11 << 0xd) < 0) {
LAB_001150de:
              uVar18 = 5;
            }
            else if ((int)(uVar11 << 0xe) < 0) {
LAB_001150d8:
              uVar18 = 4;
            }
            else if ((int)(uVar11 << 0xf) < 0) {
LAB_001150d2:
              uVar18 = 3;
            }
            else if ((int)(uVar11 << 0x10) < 0) {
LAB_001159bc:
              uVar18 = 2;
            }
            else {
              uVar18 = (uVar11 & 0x7fff) >> 0xe;
            }
          }
        }
      }
      if (uVar28 <= uVar35) {
        uVar28 = uVar35;
      }
      if (uVar18 <= uVar28) {
        uVar18 = uVar28;
      }
      switch(uVar18) {
      case 0:
        uVar23 = 1;
        break;
      case 1:
        uVar23 = 2;
        break;
      case 2:
        uVar23 = 4;
        break;
      case 3:
        uVar23 = 8;
        break;
      case 4:
        uVar23 = 0x10;
        break;
      case 5:
        uVar23 = 0x20;
        break;
      case 6:
        uVar23 = 0x40;
        break;
      case 7:
        uVar23 = 0x80;
        break;
      case 8:
        uVar23 = 0x100;
        break;
      case 9:
        uVar23 = 0x200;
        break;
      case 10:
        uVar23 = 0x400;
        break;
      case 0xb:
        uVar23 = 0x800;
        break;
      case 0xc:
        uVar23 = 0x1000;
        break;
      case 0xd:
        uVar23 = 0x2000;
        break;
      case 0xe:
        uVar23 = 0x4000;
        break;
      case 0xf:
        uVar23 = 0x8000;
        break;
      case 0x10:
        uVar23 = 0x10000;
        break;
      case 0x11:
        uVar23 = 0x20000;
        break;
      case 0x12:
        uVar23 = 0x40000;
        break;
      case 0x13:
        uVar23 = 0x80000;
        break;
      case 0x14:
        uVar23 = 0x100000;
        break;
      case 0x15:
        uVar23 = 0x200000;
        break;
      case 0x16:
        uVar23 = 0x400000;
        break;
      case 0x17:
        uVar23 = 0x800000;
        break;
      case 0x18:
        uVar23 = 0x1000000;
        break;
      case 0x19:
        uVar23 = 0x2000000;
        break;
      case 0x1a:
        uVar23 = 0x4000000;
        break;
      case 0x1b:
        uVar23 = 0x8000000;
        break;
      case 0x1c:
        uVar23 = 0x10000000;
        break;
      case 0x1d:
        uVar23 = 0x20000000;
        break;
      default:
        uVar23 = 0x40000000;
      }
      uVar35 = __divsi3(uVar34,uVar23);
      uVar18 = __divsi3(uVar22,uVar23);
      uVar9 = __divsi3(uVar11,uVar23);
      uVar28 = uVar17;
      if (uVar21 == 0) {
        if (uVar17 != 0) {
          uVar13 = 0;
LAB_00111666:
          if ((uVar17 & 0x80000000) == 0x80000000) {
            if ((uVar17 & 0xffffc000) == 0xffffc000) {
              uVar28 = 0;
            }
            else {
              if ((uVar17 & 0x40000000) == 0) goto LAB_00116490;
              if ((uVar17 & 0x20000000) == 0) goto LAB_00116488;
              if ((uVar17 & 0x10000000) == 0) goto LAB_00116480;
              if ((uVar17 & 0x8000000) == 0) goto LAB_00116578;
              if ((uVar17 & 0x4000000) == 0) goto LAB_00116570;
              if ((uVar17 & 0x2000000) == 0) goto LAB_00116568;
              if ((uVar17 & 0x1000000) == 0) goto LAB_00116560;
              if ((uVar17 & 0x800000) == 0) goto LAB_00115dd8;
              if ((uVar17 & 0x400000) == 0) goto LAB_00115dd0;
              if ((uVar17 & 0x200000) == 0) goto LAB_00115dc8;
              if ((uVar17 & 0x100000) == 0) goto LAB_00115dc0;
              if ((uVar17 & 0x80000) == 0) goto LAB_00115db8;
              if ((uVar17 & 0x40000) == 0) goto LAB_00115db0;
              if ((uVar17 & 0x20000) == 0) goto LAB_00115da8;
              if ((uVar17 & 0x10000) == 0) goto LAB_00115d8a;
              if ((uVar17 & 0x8000) == 0) goto LAB_00115c8a;
              uVar28 = (uint)((uVar17 & 0x4000) == 0);
            }
          }
          else {
            uVar28 = 0;
            if ((uVar17 & 0xffffc000) != 0) {
              if ((uVar17 & 0x40000000) == 0) {
                if ((uVar17 & 0x20000000) == 0) {
                  if ((uVar17 & 0x10000000) == 0) {
                    if ((uVar17 & 0x8000000) == 0) {
                      if ((uVar17 & 0x4000000) == 0) {
                        if ((uVar17 & 0x2000000) == 0) {
                          if ((uVar17 & 0x1000000) == 0) {
                            if ((uVar17 & 0x800000) == 0) {
                              if ((uVar17 & 0x400000) == 0) {
                                if ((uVar17 & 0x200000) == 0) {
                                  if ((uVar17 & 0x100000) == 0) {
                                    if ((uVar17 & 0x80000) == 0) {
                                      if ((uVar17 & 0x40000) == 0) {
                                        if ((uVar17 & 0x20000) == 0) {
                                          if ((uVar17 & 0x10000) == 0) {
                                            if ((uVar17 & 0x8000) == 0) {
                                              uVar28 = (uVar17 & 0x7fff) >> 0xe;
                                            }
                                            else {
LAB_00115c8a:
                                              uVar28 = 2;
                                            }
                                          }
                                          else {
LAB_00115d8a:
                                            uVar28 = 3;
                                          }
                                        }
                                        else {
LAB_00115da8:
                                          uVar28 = 4;
                                        }
                                      }
                                      else {
LAB_00115db0:
                                        uVar28 = 5;
                                      }
                                    }
                                    else {
LAB_00115db8:
                                      uVar28 = 6;
                                    }
                                  }
                                  else {
LAB_00115dc0:
                                    uVar28 = 7;
                                  }
                                }
                                else {
LAB_00115dc8:
                                  uVar28 = 8;
                                }
                              }
                              else {
LAB_00115dd0:
                                uVar28 = 9;
                              }
                            }
                            else {
LAB_00115dd8:
                              uVar28 = 10;
                            }
                          }
                          else {
LAB_00116560:
                            uVar28 = 0xb;
                          }
                        }
                        else {
LAB_00116568:
                          uVar28 = 0xc;
                        }
                      }
                      else {
LAB_00116570:
                        uVar28 = 0xd;
                      }
                    }
                    else {
LAB_00116578:
                      uVar28 = 0xe;
                    }
                  }
                  else {
LAB_00116480:
                    uVar28 = 0xf;
                  }
                }
                else {
LAB_00116488:
                  uVar28 = 0x10;
                }
              }
              else {
LAB_00116490:
                uVar28 = 0x11;
              }
            }
          }
          goto LAB_001112b0;
        }
        uVar13 = uVar17;
        local_3c = uVar8;
        if (uVar8 != 0) goto LAB_0010fad2;
      }
      else {
        if ((uVar21 & 0x80000000) == 0x80000000) {
          if ((uVar21 & 0xffffc000) == 0xffffc000) {
            uVar13 = 0;
          }
          else {
            if (-1 < (int)(uVar21 << 1)) goto LAB_001152fe;
            if (-1 < (int)(uVar21 << 2)) goto LAB_001152f8;
            if (-1 < (int)(uVar21 << 3)) goto LAB_001152f2;
            if (-1 < (int)(uVar21 << 4)) goto LAB_001152ec;
            if (-1 < (int)(uVar21 << 5)) goto LAB_001152e6;
            if (-1 < (int)(uVar21 << 6)) goto LAB_001152e0;
            if (-1 < (int)(uVar21 << 7)) goto LAB_001152da;
            if (-1 < (int)(uVar21 << 8)) goto LAB_001152d4;
            if (-1 < (int)(uVar21 << 9)) goto LAB_001152ce;
            if (-1 < (int)(uVar21 << 10)) goto LAB_001152c8;
            if (-1 < (int)(uVar21 << 0xb)) goto LAB_001152c2;
            if (-1 < (int)(uVar21 << 0xc)) goto LAB_001152bc;
            if (-1 < (int)(uVar21 << 0xd)) goto LAB_001152b6;
            if (-1 < (int)(uVar21 << 0xe)) goto LAB_001152b0;
            if (-1 < (int)(uVar21 << 0xf)) goto LAB_001152aa;
            if (-1 < (int)(uVar21 << 0x10)) goto LAB_001152a4;
            uVar13 = (uint)((uVar21 & 0x4000) == 0);
          }
        }
        else {
          uVar13 = 0;
          if ((uVar21 & 0xffffc000) != 0) {
            if ((int)(uVar21 << 1) < 0) {
LAB_001152fe:
              uVar13 = 0x11;
            }
            else if ((int)(uVar21 << 2) < 0) {
LAB_001152f8:
              uVar13 = 0x10;
            }
            else if ((int)(uVar21 << 3) < 0) {
LAB_001152f2:
              uVar13 = 0xf;
            }
            else if ((int)(uVar21 << 4) < 0) {
LAB_001152ec:
              uVar13 = 0xe;
            }
            else if ((int)(uVar21 << 5) < 0) {
LAB_001152e6:
              uVar13 = 0xd;
            }
            else if ((int)(uVar21 << 6) < 0) {
LAB_001152e0:
              uVar13 = 0xc;
            }
            else if ((int)(uVar21 << 7) < 0) {
LAB_001152da:
              uVar13 = 0xb;
            }
            else if ((int)(uVar21 << 8) < 0) {
LAB_001152d4:
              uVar13 = 10;
            }
            else if ((int)(uVar21 << 9) < 0) {
LAB_001152ce:
              uVar13 = 9;
            }
            else if ((int)(uVar21 << 10) < 0) {
LAB_001152c8:
              uVar13 = 8;
            }
            else if ((int)(uVar21 << 0xb) < 0) {
LAB_001152c2:
              uVar13 = 7;
            }
            else if ((int)(uVar21 << 0xc) < 0) {
LAB_001152bc:
              uVar13 = 6;
            }
            else if ((int)(uVar21 << 0xd) < 0) {
LAB_001152b6:
              uVar13 = 5;
            }
            else if ((int)(uVar21 << 0xe) < 0) {
LAB_001152b0:
              uVar13 = 4;
            }
            else if ((int)(uVar21 << 0xf) < 0) {
LAB_001152aa:
              uVar13 = 3;
            }
            else if ((int)(uVar21 << 0x10) < 0) {
LAB_001152a4:
              uVar13 = 2;
            }
            else {
              uVar13 = (uVar21 & 0x7fff) >> 0xe;
            }
          }
        }
        if (uVar17 != 0) goto LAB_00111666;
LAB_001112b0:
        uVar19 = 0;
        if (uVar8 != 0) {
LAB_0010fad2:
          if ((uVar8 & 0x80000000) == 0x80000000) {
            if ((uVar8 & 0xffffc000) == 0xffffc000) {
              uVar19 = 0;
            }
            else {
              if (-1 < (int)(uVar8 << 1)) goto LAB_00115eca;
              if (-1 < (int)(uVar8 << 2)) goto LAB_00115ec4;
              if (-1 < (int)(uVar8 << 3)) goto LAB_00115ebe;
              if (-1 < (int)(uVar8 << 4)) goto LAB_00115eb8;
              if (-1 < (int)(uVar8 << 5)) goto LAB_00115eb2;
              if (-1 < (int)(uVar8 << 6)) goto LAB_00115eac;
              if (-1 < (int)(uVar8 << 7)) goto LAB_00115ea6;
              if (-1 < (int)(uVar8 << 8)) goto LAB_00115ea0;
              if (-1 < (int)(uVar8 << 9)) goto LAB_00115e9a;
              if (-1 < (int)(uVar8 << 10)) goto LAB_00115e94;
              if (-1 < (int)(uVar8 << 0xb)) goto LAB_00115e8e;
              if (-1 < (int)(uVar8 << 0xc)) goto LAB_00115e88;
              if (-1 < (int)(uVar8 << 0xd)) goto LAB_00115e82;
              if (-1 < (int)(uVar8 << 0xe)) goto LAB_00115e7c;
              if (-1 < (int)(uVar8 << 0xf)) goto LAB_00115e76;
              if (-1 < (int)(uVar8 << 0x10)) goto LAB_00115e70;
              uVar19 = (uint)((uVar8 & 0x4000) == 0);
            }
          }
          else {
            uVar19 = 0;
            if ((uVar8 & 0xffffc000) != 0) {
              if ((int)(uVar8 << 1) < 0) {
LAB_00115eca:
                uVar19 = 0x11;
              }
              else if ((int)(uVar8 << 2) < 0) {
LAB_00115ec4:
                uVar19 = 0x10;
              }
              else if ((int)(uVar8 << 3) < 0) {
LAB_00115ebe:
                uVar19 = 0xf;
              }
              else if ((int)(uVar8 << 4) < 0) {
LAB_00115eb8:
                uVar19 = 0xe;
              }
              else if ((int)(uVar8 << 5) < 0) {
LAB_00115eb2:
                uVar19 = 0xd;
              }
              else if ((int)(uVar8 << 6) < 0) {
LAB_00115eac:
                uVar19 = 0xc;
              }
              else if ((int)(uVar8 << 7) < 0) {
LAB_00115ea6:
                uVar19 = 0xb;
              }
              else if ((int)(uVar8 << 8) < 0) {
LAB_00115ea0:
                uVar19 = 10;
              }
              else if ((int)(uVar8 << 9) < 0) {
LAB_00115e9a:
                uVar19 = 9;
              }
              else if ((int)(uVar8 << 10) < 0) {
LAB_00115e94:
                uVar19 = 8;
              }
              else if ((int)(uVar8 << 0xb) < 0) {
LAB_00115e8e:
                uVar19 = 7;
              }
              else if ((int)(uVar8 << 0xc) < 0) {
LAB_00115e88:
                uVar19 = 6;
              }
              else if ((int)(uVar8 << 0xd) < 0) {
LAB_00115e82:
                uVar19 = 5;
              }
              else if ((int)(uVar8 << 0xe) < 0) {
LAB_00115e7c:
                uVar19 = 4;
              }
              else if ((int)(uVar8 << 0xf) < 0) {
LAB_00115e76:
                uVar19 = 3;
              }
              else if ((int)(uVar8 << 0x10) < 0) {
LAB_00115e70:
                uVar19 = 2;
              }
              else {
                uVar19 = (uVar8 & 0x7fff) >> 0xe;
              }
            }
          }
        }
        if ((int)uVar13 < (int)uVar28) {
          uVar13 = uVar28;
        }
        if ((int)uVar19 <= (int)uVar13) {
          uVar19 = uVar13;
        }
        switch(uVar19) {
        case 0:
          iVar6 = 1;
          break;
        case 1:
          iVar6 = 2;
          break;
        case 2:
          iVar6 = 4;
          break;
        case 3:
          iVar6 = 8;
          break;
        case 4:
          iVar6 = 0x10;
          break;
        case 5:
          iVar6 = 0x20;
          break;
        case 6:
          iVar6 = 0x40;
          break;
        case 7:
          iVar6 = 0x80;
          break;
        case 8:
          iVar6 = 0x100;
          break;
        case 9:
          iVar6 = 0x200;
          break;
        case 10:
          iVar6 = 0x400;
          break;
        case 0xb:
          iVar6 = 0x800;
          break;
        case 0xc:
          iVar6 = 0x1000;
          break;
        case 0xd:
          iVar6 = 0x2000;
          break;
        case 0xe:
          iVar6 = 0x4000;
          break;
        case 0xf:
          iVar6 = 0x8000;
          break;
        case 0x10:
          iVar6 = 0x10000;
          break;
        case 0x11:
          iVar6 = 0x20000;
          break;
        case 0x12:
          iVar6 = 0x40000;
          break;
        case 0x13:
          iVar6 = 0x80000;
          break;
        case 0x14:
          iVar6 = 0x100000;
          break;
        case 0x15:
          iVar6 = 0x200000;
          break;
        case 0x16:
          iVar6 = 0x400000;
          break;
        case 0x17:
          iVar6 = 0x800000;
          break;
        case 0x18:
          iVar6 = 0x1000000;
          break;
        case 0x19:
          iVar6 = 0x2000000;
          break;
        case 0x1a:
          iVar6 = 0x4000000;
          break;
        case 0x1b:
          iVar6 = 0x8000000;
          break;
        case 0x1c:
          iVar6 = 0x10000000;
          break;
        case 0x1d:
          iVar6 = 0x20000000;
          break;
        default:
          iVar6 = 0x40000000;
        }
        iVar7 = __divsi3(uVar21,iVar6);
        iVar15 = __divsi3(uVar17,iVar6);
        iVar10 = __divsi3(uVar8,iVar6);
        iVar7 = iVar10 * iVar10 + iVar7 * iVar7 + iVar15 * iVar15;
        if (iVar7 < 1) {
          iVar15 = 0;
        }
        else {
          iVar10 = iVar7;
          if (iVar7 == 0x7fffffff) {
            iVar7 = 0x7ffffffe;
            iVar10 = 0x7ffffffe;
          }
          do {
            iVar15 = __divsi3(iVar10,iVar7);
            iVar3 = (iVar7 + iVar15) / 2;
            iVar15 = iVar7;
            if (iVar7 <= iVar3) break;
            iVar7 = __divsi3(iVar10);
            iVar7 = (iVar3 + iVar7) / 2;
            iVar15 = iVar3;
            if (iVar3 <= iVar7) break;
            iVar15 = __divsi3(iVar10,iVar7);
            iVar3 = (iVar7 + iVar15) / 2;
            iVar15 = iVar7;
            if (iVar7 <= iVar3) break;
            iVar7 = __divsi3(iVar10,iVar3);
            iVar7 = (iVar3 + iVar7) / 2;
            iVar15 = iVar3;
            if (iVar3 <= iVar7) break;
            iVar15 = __divsi3(iVar10,iVar7);
            iVar3 = (iVar7 + iVar15) / 2;
            iVar15 = iVar7;
            if (iVar7 <= iVar3) break;
            iVar7 = __divsi3(iVar10,iVar3);
            iVar7 = (iVar3 + iVar7) / 2;
            iVar15 = iVar3;
            if (iVar3 <= iVar7) break;
            iVar15 = __divsi3(iVar10);
            iVar3 = (iVar7 + iVar15) / 2;
            iVar15 = iVar7;
            if (iVar7 <= iVar3) break;
            iVar7 = __divsi3(iVar10,iVar3);
            iVar7 = (iVar7 + iVar3) / 2;
            iVar15 = iVar3;
          } while (iVar7 < iVar3);
        }
        local_3c = uVar21;
        if ((int)uVar21 <= (int)uVar17) {
          local_3c = uVar17;
        }
        if ((int)local_3c < (int)uVar8) {
          local_3c = uVar8;
        }
        if ((int)local_3c < iVar6 * iVar15) {
          local_3c = iVar6 * iVar15;
        }
      }
      uVar28 = uVar18;
      if (uVar35 == 0) {
        if (uVar18 != 0) {
          uVar13 = 0;
LAB_00111882:
          if ((uVar18 & 0x80000000) == 0x80000000) {
            if ((uVar18 & 0xffffc000) == 0xffffc000) {
              uVar28 = 0;
            }
            else {
              if (-1 < (int)(uVar18 << 1)) goto LAB_00116396;
              if (-1 < (int)(uVar18 << 2)) goto LAB_001159ca;
              if (-1 < (int)(uVar18 << 3)) goto LAB_001159c2;
              if (-1 < (int)(uVar18 << 4)) goto LAB_0011590a;
              if (-1 < (int)(uVar18 << 5)) goto LAB_00115902;
              if (-1 < (int)(uVar18 << 6)) goto LAB_001158fa;
              if (-1 < (int)(uVar18 << 7)) goto LAB_001158f2;
              if (-1 < (int)(uVar18 << 8)) goto LAB_00115bce;
              if (-1 < (int)(uVar18 << 9)) goto LAB_00115bc6;
              if (-1 < (int)(uVar18 << 10)) goto LAB_00115bbe;
              if (-1 < (int)(uVar18 << 0xb)) goto LAB_00115bb6;
              if (-1 < (int)(uVar18 << 0xc)) goto LAB_00115bae;
              if (-1 < (int)(uVar18 << 0xd)) goto LAB_00115ba6;
              if (-1 < (int)(uVar18 << 0xe)) goto LAB_00115b9e;
              if (-1 < (int)(uVar18 << 0xf)) goto LAB_00115b96;
              if (-1 < (int)(uVar18 << 0x10)) goto LAB_00116008;
              uVar28 = (uint)((uVar18 & 0x4000) == 0);
            }
          }
          else {
            uVar28 = 0;
            if ((uVar18 & 0xffffc000) != 0) {
              if ((int)(uVar18 << 1) < 0) {
LAB_00116396:
                uVar28 = 0x11;
              }
              else if ((int)(uVar18 << 2) < 0) {
LAB_001159ca:
                uVar28 = 0x10;
              }
              else if ((int)(uVar18 << 3) < 0) {
LAB_001159c2:
                uVar28 = 0xf;
              }
              else if ((int)(uVar18 << 4) < 0) {
LAB_0011590a:
                uVar28 = 0xe;
              }
              else if ((int)(uVar18 << 5) < 0) {
LAB_00115902:
                uVar28 = 0xd;
              }
              else if ((int)(uVar18 << 6) < 0) {
LAB_001158fa:
                uVar28 = 0xc;
              }
              else if ((int)(uVar18 << 7) < 0) {
LAB_001158f2:
                uVar28 = 0xb;
              }
              else if ((int)(uVar18 << 8) < 0) {
LAB_00115bce:
                uVar28 = 10;
              }
              else if ((int)(uVar18 << 9) < 0) {
LAB_00115bc6:
                uVar28 = 9;
              }
              else if ((int)(uVar18 << 10) < 0) {
LAB_00115bbe:
                uVar28 = 8;
              }
              else if ((int)(uVar18 << 0xb) < 0) {
LAB_00115bb6:
                uVar28 = 7;
              }
              else if ((int)(uVar18 << 0xc) < 0) {
LAB_00115bae:
                uVar28 = 6;
              }
              else if ((int)(uVar18 << 0xd) < 0) {
LAB_00115ba6:
                uVar28 = 5;
              }
              else if ((int)(uVar18 << 0xe) < 0) {
LAB_00115b9e:
                uVar28 = 4;
              }
              else if ((int)(uVar18 << 0xf) < 0) {
LAB_00115b96:
                uVar28 = 3;
              }
              else if ((int)(uVar18 << 0x10) < 0) {
LAB_00116008:
                uVar28 = 2;
              }
              else {
                uVar28 = (uVar18 & 0x7fff) >> 0xe;
              }
            }
          }
          goto LAB_00111342;
        }
        uVar13 = uVar18;
        if (uVar9 != 0) goto LAB_0010fee6;
LAB_0011096e:
        *(undefined4 *)(param_2 + 0x1a4) = 0;
LAB_00110974:
        *(undefined4 *)(param_2 + 0x1b8) = 0;
        *(undefined4 *)(param_2 + 0x1bc) = 0;
        *(undefined4 *)(param_2 + 0x1c0) = 0;
      }
      else {
        if ((uVar35 & 0x80000000) == 0x80000000) {
          if ((uVar35 & 0xffffc000) == 0xffffc000) {
            uVar13 = 0;
          }
          else {
            if (-1 < (int)(uVar35 << 1)) goto LAB_00115b26;
            if (-1 < (int)(uVar35 << 2)) goto LAB_00115b20;
            if (-1 < (int)(uVar35 << 3)) goto LAB_00115b1a;
            if (-1 < (int)(uVar35 << 4)) goto LAB_00115b14;
            if (-1 < (int)(uVar35 << 5)) goto LAB_00115b0e;
            if (-1 < (int)(uVar35 << 6)) goto LAB_00115b08;
            if (-1 < (int)(uVar35 << 7)) goto LAB_00115b02;
            if (-1 < (int)(uVar35 << 8)) goto LAB_00115afc;
            if (-1 < (int)(uVar35 << 9)) goto LAB_00115af6;
            if (-1 < (int)(uVar35 << 10)) goto LAB_00115af0;
            if (-1 < (int)(uVar35 << 0xb)) goto LAB_00115aea;
            if (-1 < (int)(uVar35 << 0xc)) goto LAB_00115ae4;
            if (-1 < (int)(uVar35 << 0xd)) goto LAB_00115ade;
            if (-1 < (int)(uVar35 << 0xe)) goto LAB_00115ad8;
            if (-1 < (int)(uVar35 << 0xf)) goto LAB_00115ad2;
            if (-1 < (int)(uVar35 << 0x10)) goto LAB_00115acc;
            uVar13 = (uint)((uVar35 & 0x4000) == 0);
          }
        }
        else {
          uVar13 = 0;
          if ((uVar35 & 0xffffc000) != 0) {
            if ((int)(uVar35 << 1) < 0) {
LAB_00115b26:
              uVar13 = 0x11;
            }
            else if ((int)(uVar35 << 2) < 0) {
LAB_00115b20:
              uVar13 = 0x10;
            }
            else if ((int)(uVar35 << 3) < 0) {
LAB_00115b1a:
              uVar13 = 0xf;
            }
            else if ((int)(uVar35 << 4) < 0) {
LAB_00115b14:
              uVar13 = 0xe;
            }
            else if ((int)(uVar35 << 5) < 0) {
LAB_00115b0e:
              uVar13 = 0xd;
            }
            else if ((int)(uVar35 << 6) < 0) {
LAB_00115b08:
              uVar13 = 0xc;
            }
            else if ((int)(uVar35 << 7) < 0) {
LAB_00115b02:
              uVar13 = 0xb;
            }
            else if ((int)(uVar35 << 8) < 0) {
LAB_00115afc:
              uVar13 = 10;
            }
            else if ((int)(uVar35 << 9) < 0) {
LAB_00115af6:
              uVar13 = 9;
            }
            else if ((int)(uVar35 << 10) < 0) {
LAB_00115af0:
              uVar13 = 8;
            }
            else if ((int)(uVar35 << 0xb) < 0) {
LAB_00115aea:
              uVar13 = 7;
            }
            else if ((int)(uVar35 << 0xc) < 0) {
LAB_00115ae4:
              uVar13 = 6;
            }
            else if ((int)(uVar35 << 0xd) < 0) {
LAB_00115ade:
              uVar13 = 5;
            }
            else if ((int)(uVar35 << 0xe) < 0) {
LAB_00115ad8:
              uVar13 = 4;
            }
            else if ((int)(uVar35 << 0xf) < 0) {
LAB_00115ad2:
              uVar13 = 3;
            }
            else if ((int)(uVar35 << 0x10) < 0) {
LAB_00115acc:
              uVar13 = 2;
            }
            else {
              uVar13 = (uVar35 & 0x7fff) >> 0xe;
            }
          }
        }
        if (uVar18 != 0) goto LAB_00111882;
LAB_00111342:
        uVar19 = 0;
        if (uVar9 != 0) {
LAB_0010fee6:
          if ((uVar9 & 0x80000000) == 0x80000000) {
            if ((uVar9 & 0xffffc000) == 0xffffc000) {
              uVar19 = 0;
            }
            else {
              if (-1 < (int)(uVar9 << 1)) goto LAB_00115f2a;
              if (-1 < (int)(uVar9 << 2)) goto LAB_00115f24;
              if (-1 < (int)(uVar9 << 3)) goto LAB_00115f1e;
              if (-1 < (int)(uVar9 << 4)) goto LAB_00115f18;
              if (-1 < (int)(uVar9 << 5)) goto LAB_00115f12;
              if (-1 < (int)(uVar9 << 6)) goto LAB_00115f0c;
              if (-1 < (int)(uVar9 << 7)) goto LAB_00115f06;
              if (-1 < (int)(uVar9 << 8)) goto LAB_00115f00;
              if (-1 < (int)(uVar9 << 9)) goto LAB_00115efa;
              if (-1 < (int)(uVar9 << 10)) goto LAB_00115ef4;
              if (-1 < (int)(uVar9 << 0xb)) goto LAB_00115eee;
              if (-1 < (int)(uVar9 << 0xc)) goto LAB_00115ee8;
              if (-1 < (int)(uVar9 << 0xd)) goto LAB_00115ee2;
              if (-1 < (int)(uVar9 << 0xe)) goto LAB_00115edc;
              if (-1 < (int)(uVar9 << 0xf)) goto LAB_00115ed6;
              if (-1 < (int)(uVar9 << 0x10)) goto LAB_00115ed0;
              uVar19 = (uint)((uVar9 & 0x4000) == 0);
            }
          }
          else {
            uVar19 = 0;
            if ((uVar9 & 0xffffc000) != 0) {
              if ((int)(uVar9 << 1) < 0) {
LAB_00115f2a:
                uVar19 = 0x11;
              }
              else if ((int)(uVar9 << 2) < 0) {
LAB_00115f24:
                uVar19 = 0x10;
              }
              else if ((int)(uVar9 << 3) < 0) {
LAB_00115f1e:
                uVar19 = 0xf;
              }
              else if ((int)(uVar9 << 4) < 0) {
LAB_00115f18:
                uVar19 = 0xe;
              }
              else if ((int)(uVar9 << 5) < 0) {
LAB_00115f12:
                uVar19 = 0xd;
              }
              else if ((int)(uVar9 << 6) < 0) {
LAB_00115f0c:
                uVar19 = 0xc;
              }
              else if ((int)(uVar9 << 7) < 0) {
LAB_00115f06:
                uVar19 = 0xb;
              }
              else if ((int)(uVar9 << 8) < 0) {
LAB_00115f00:
                uVar19 = 10;
              }
              else if ((int)(uVar9 << 9) < 0) {
LAB_00115efa:
                uVar19 = 9;
              }
              else if ((int)(uVar9 << 10) < 0) {
LAB_00115ef4:
                uVar19 = 8;
              }
              else if ((int)(uVar9 << 0xb) < 0) {
LAB_00115eee:
                uVar19 = 7;
              }
              else if ((int)(uVar9 << 0xc) < 0) {
LAB_00115ee8:
                uVar19 = 6;
              }
              else if ((int)(uVar9 << 0xd) < 0) {
LAB_00115ee2:
                uVar19 = 5;
              }
              else if ((int)(uVar9 << 0xe) < 0) {
LAB_00115edc:
                uVar19 = 4;
              }
              else if ((int)(uVar9 << 0xf) < 0) {
LAB_00115ed6:
                uVar19 = 3;
              }
              else if ((int)(uVar9 << 0x10) < 0) {
LAB_00115ed0:
                uVar19 = 2;
              }
              else {
                uVar19 = (uVar9 & 0x7fff) >> 0xe;
              }
            }
          }
        }
        if ((int)uVar13 < (int)uVar28) {
          uVar13 = uVar28;
        }
        if ((int)uVar19 <= (int)uVar13) {
          uVar19 = uVar13;
        }
        switch(uVar19) {
        case 0:
          iVar6 = 1;
          break;
        case 1:
          iVar6 = 2;
          break;
        case 2:
          iVar6 = 4;
          break;
        case 3:
          iVar6 = 8;
          break;
        case 4:
          iVar6 = 0x10;
          break;
        case 5:
          iVar6 = 0x20;
          break;
        case 6:
          iVar6 = 0x40;
          break;
        case 7:
          iVar6 = 0x80;
          break;
        case 8:
          iVar6 = 0x100;
          break;
        case 9:
          iVar6 = 0x200;
          break;
        case 10:
          iVar6 = 0x400;
          break;
        case 0xb:
          iVar6 = 0x800;
          break;
        case 0xc:
          iVar6 = 0x1000;
          break;
        case 0xd:
          iVar6 = 0x2000;
          break;
        case 0xe:
          iVar6 = 0x4000;
          break;
        case 0xf:
          iVar6 = 0x8000;
          break;
        case 0x10:
          iVar6 = 0x10000;
          break;
        case 0x11:
          iVar6 = 0x20000;
          break;
        case 0x12:
          iVar6 = 0x40000;
          break;
        case 0x13:
          iVar6 = 0x80000;
          break;
        case 0x14:
          iVar6 = 0x100000;
          break;
        case 0x15:
          iVar6 = 0x200000;
          break;
        case 0x16:
          iVar6 = 0x400000;
          break;
        case 0x17:
          iVar6 = 0x800000;
          break;
        case 0x18:
          iVar6 = 0x1000000;
          break;
        case 0x19:
          iVar6 = 0x2000000;
          break;
        case 0x1a:
          iVar6 = 0x4000000;
          break;
        case 0x1b:
          iVar6 = 0x8000000;
          break;
        case 0x1c:
          iVar6 = 0x10000000;
          break;
        case 0x1d:
          iVar6 = 0x20000000;
          break;
        case 0x1e:
          iVar6 = 0x40000000;
          break;
        default:
          if ((int)uVar19 < 0) {
            iVar6 = 1;
          }
          else {
            iVar6 = 0x40000000;
          }
        }
        iVar7 = __divsi3(uVar35,iVar6);
        iVar15 = __divsi3(uVar18,iVar6);
        iVar10 = __divsi3(uVar9,iVar6);
        iVar7 = iVar10 * iVar10 + iVar7 * iVar7 + iVar15 * iVar15;
        if (iVar7 < 1) {
          iVar15 = 0;
        }
        else {
          iVar10 = iVar7;
          if (iVar7 == 0x7fffffff) {
            iVar7 = 0x7ffffffe;
            iVar10 = 0x7ffffffe;
          }
          do {
            iVar15 = __divsi3(iVar10,iVar7);
            iVar3 = (iVar7 + iVar15) / 2;
            iVar15 = iVar7;
            if (iVar7 <= iVar3) break;
            iVar7 = __divsi3(iVar10);
            iVar7 = (iVar3 + iVar7) / 2;
            iVar15 = iVar3;
            if (iVar3 <= iVar7) break;
            iVar15 = __divsi3(iVar10,iVar7);
            iVar3 = (iVar7 + iVar15) / 2;
            iVar15 = iVar7;
            if (iVar7 <= iVar3) break;
            iVar7 = __divsi3(iVar10,iVar3);
            iVar7 = (iVar3 + iVar7) / 2;
            iVar15 = iVar3;
            if (iVar3 <= iVar7) break;
            iVar15 = __divsi3(iVar10,iVar7);
            iVar3 = (iVar7 + iVar15) / 2;
            iVar15 = iVar7;
            if (iVar7 <= iVar3) break;
            iVar7 = __divsi3(iVar10,iVar3);
            iVar7 = (iVar3 + iVar7) / 2;
            iVar15 = iVar3;
            if (iVar3 <= iVar7) break;
            iVar15 = __divsi3(iVar10);
            iVar3 = (iVar7 + iVar15) / 2;
            iVar15 = iVar7;
            if (iVar7 <= iVar3) break;
            iVar7 = __divsi3(iVar10,iVar3);
            iVar7 = (iVar7 + iVar3) / 2;
            iVar15 = iVar3;
          } while (iVar7 < iVar3);
        }
        uVar28 = uVar35;
        if ((int)uVar35 <= (int)uVar18) {
          uVar28 = uVar18;
        }
        if ((int)uVar28 < (int)uVar9) {
          uVar28 = uVar9;
        }
        if ((int)uVar28 < iVar6 * iVar15) {
          uVar28 = iVar6 * iVar15;
        }
        uVar28 = uVar28 * local_3c;
        uVar21 = uVar9 * uVar8 + uVar35 * uVar21 + uVar18 * uVar17;
        if ((int)uVar28 < 1) goto LAB_0011096e;
        bVar37 = uVar21 == 0;
        if (-1 < (int)uVar21) {
          bVar37 = uVar21 == uVar28;
        }
        if (!bVar37 && (-1 < (int)uVar21 && (int)uVar28 <= (int)uVar21)) goto LAB_0011096e;
        if ((-1 < (int)uVar21) || ((int)-uVar21 <= (int)uVar28)) {
          if (uVar28 == 0 && uVar21 == 0) goto LAB_0011096e;
          if (uVar21 == 0) {
LAB_00112c7a:
            uVar28 = __divsi3(uVar21 * 0x7fff,uVar28);
            if (0x7ffe < (int)uVar28) goto LAB_0011096e;
            if ((int)uVar28 < 0x7d01) {
              if ((int)uVar28 < 0) {
                uVar28 = uVar28 + 0xff;
              }
              iVar6 = *(int *)(*(int *)(iVar20 + DAT_00113874) + ((uVar28 & 0x7fff) >> 8) * 4);
            }
            else {
              iVar6 = __divsi3(*(int *)(*(int *)(iVar20 + DAT_00113874) + 500) * (0x7fff - uVar28),
                               0xff);
            }
          }
          else {
            if ((uVar21 & 0x80000000) != 0x80000000) {
              if ((uVar21 & 0xffff8000) != 0) {
                if ((int)(uVar21 * 2) < 0) {
                  uVar8 = 0x10;
                }
                else if ((int)(uVar21 * 4) < 0) {
                  uVar8 = 0xf;
                }
                else if ((int)(uVar21 * 8) < 0) {
                  uVar8 = 0xe;
                }
                else if ((int)(uVar21 * 0x10) < 0) {
                  uVar8 = 0xd;
                }
                else if ((int)(uVar21 * 0x20) < 0) {
                  uVar8 = 0xc;
                }
                else if ((int)(uVar21 * 0x40) < 0) {
                  uVar8 = 0xb;
                }
                else if ((int)(uVar21 * 0x80) < 0) {
                  uVar8 = 10;
                }
                else if ((int)(uVar21 * 0x100) < 0) {
                  uVar8 = 9;
                }
                else if ((int)(uVar21 * 0x200) < 0) {
                  uVar8 = 8;
                }
                else if ((int)(uVar21 * 0x400) < 0) {
                  uVar8 = 7;
                }
                else if ((int)(uVar21 * 0x800) < 0) {
                  uVar8 = 6;
                }
                else if ((int)(uVar21 * 0x1000) < 0) {
                  uVar8 = 5;
                }
                else if ((int)(uVar21 * 0x2000) < 0) {
                  uVar8 = 4;
                }
                else if ((int)(uVar21 * 0x4000) < 0) {
                  uVar8 = 3;
                }
                else if ((int)(uVar21 * 0x8000) < 0) {
                  uVar8 = 2;
                }
                else {
                  uVar8 = (uVar21 & 0xffff) >> 0xf;
                }
LAB_00110244:
                switch(uVar8) {
                case 0:
                  uVar23 = 1;
                  break;
                case 1:
                  uVar23 = 2;
                  break;
                case 2:
                  uVar23 = 4;
                  break;
                case 3:
                  uVar23 = 8;
                  break;
                case 4:
                  uVar23 = 0x10;
                  break;
                case 5:
                  uVar23 = 0x20;
                  break;
                case 6:
                  uVar23 = 0x40;
                  break;
                case 7:
                  uVar23 = 0x80;
                  break;
                case 8:
                  uVar23 = 0x100;
                  break;
                case 9:
                  uVar23 = 0x200;
                  break;
                case 10:
                  uVar23 = 0x400;
                  break;
                case 0xb:
                  uVar23 = 0x800;
                  break;
                case 0xc:
                  uVar23 = 0x1000;
                  break;
                case 0xd:
                  uVar23 = 0x2000;
                  break;
                case 0xe:
                  uVar23 = 0x4000;
                  break;
                case 0xf:
                  uVar23 = 0x8000;
                  break;
                case 0x10:
                  uVar23 = 0x10000;
                  break;
                case 0x11:
                  uVar23 = 0x20000;
                  break;
                case 0x12:
                  uVar23 = 0x40000;
                  break;
                case 0x13:
                  uVar23 = 0x80000;
                  break;
                case 0x14:
                  uVar23 = 0x100000;
                  break;
                case 0x15:
                  uVar23 = 0x200000;
                  break;
                case 0x16:
                  uVar23 = 0x400000;
                  break;
                case 0x17:
                  uVar23 = 0x800000;
                  break;
                case 0x18:
                  uVar23 = 0x1000000;
                  break;
                case 0x19:
                  uVar23 = 0x2000000;
                  break;
                case 0x1a:
                  uVar23 = 0x4000000;
                  break;
                case 0x1b:
                  uVar23 = 0x8000000;
                  break;
                case 0x1c:
                  uVar23 = 0x10000000;
                  break;
                case 0x1d:
                  uVar23 = 0x20000000;
                  break;
                default:
                  uVar23 = 0x40000000;
                }
                uVar21 = __divsi3(uVar21,uVar23);
                uVar28 = __divsi3(uVar28,uVar23);
                if ((int)uVar21 < 0) goto LAB_00114e1c;
              }
              goto LAB_00112c7a;
            }
            if ((uVar21 & 0xffff8000) != 0xffff8000) {
              uVar8 = 0x10;
              uVar17 = 0x80000000;
              do {
                uVar17 = uVar17 >> 1;
                if (uVar17 != (uVar21 & uVar17)) break;
                uVar8 = uVar8 - 1;
              } while (uVar8 != 0);
              goto LAB_00110244;
            }
LAB_00114e1c:
            iVar6 = __divsi3(uVar21 * -0x7fff,uVar28);
            if (0x7ffe < iVar6) goto LAB_001135ee;
            if (iVar6 < 0x7d01) {
              iVar6 = 0xb4 - *(int *)(*(int *)(iVar20 + DAT_00115d94) + (iVar6 >> 8) * 4);
            }
            else {
              iVar6 = __divsi3(*(int *)(*(int *)(iVar20 + DAT_00115d94) + 500) * (0x7fff - iVar6),
                               0xffffff01);
              iVar6 = iVar6 + 0xb4;
            }
          }
          *(int *)(param_2 + 0x1a4) = iVar6;
          if (iVar6 != 0) goto LAB_00112cc8;
          goto LAB_00110974;
        }
LAB_001135ee:
        *(undefined4 *)(param_2 + 0x1a4) = 0xb4;
LAB_00112cc8:
        *(uint *)(param_2 + 0x1b8) = uVar14 * uVar22 - uVar25 * uVar11;
        *(uint *)(param_2 + 0x1bc) = uVar24 * uVar11 - uVar14 * uVar34;
        *(uint *)(param_2 + 0x1c0) = uVar25 * uVar34 - uVar24 * uVar22;
        FUN_00101730(param_2 + 0x1b8);
      }
      iVar6 = *(int *)(param_2 + 0x1a4);
      *(undefined4 *)(param_2 + 0x1a8) = 0x7fffffff;
    }
    local_70 = local_80;
    local_6c = local_74;
    if (iVar6 == 0) {
      if (1 < iVar5) {
        local_70 = __divsi3(local_80,iVar5);
        local_6c = __divsi3(local_74,iVar5);
      }
      iVar10 = *(int *)(param_2 + 0x90);
      iVar5 = *(int *)(param_2 + 0x94);
      iVar6 = *(int *)(param_2 + 0x84) - iVar10;
      iVar15 = *(int *)(param_2 + 0x8c);
      iVar3 = *(int *)(param_2 + 0x80) - iVar15;
      iVar7 = *(int *)(param_2 + 0x88) - iVar5;
      if (iVar3 != 0) {
        FUN_00100a74(iVar3);
      }
      iVar32 = FUN_001008e4();
      iVar3 = __divsi3(iVar3,iVar32);
      iVar3 = __divsi3(local_70 * iVar3,local_6c);
      if (iVar6 != 0) {
        FUN_00100a74(iVar6);
      }
      iVar1 = FUN_001008e4();
      iVar6 = __divsi3(iVar6,iVar1);
      iVar6 = __divsi3(iVar6 * local_70,local_6c);
      if (iVar7 != 0) {
        FUN_00100a74(iVar7);
      }
      iVar2 = FUN_001008e4();
      *(int *)(param_2 + 0x98) = iVar15 + iVar3 * iVar32;
      *(int *)(param_2 + 0x9c) = iVar6 * iVar1 + iVar10;
      iVar6 = __divsi3(iVar7,iVar2);
      iVar6 = __divsi3(iVar6 * local_70,local_6c);
      local_74 = *(uint *)(param_2 + 0xec);
      local_80 = *(int *)(param_2 + 0xf0);
      *(int *)(param_2 + 0xa0) = iVar6 * iVar2 + iVar5;
      goto LAB_001054de;
    }
    iVar7 = *(int *)(param_2 + 0x1b8);
    if (((iVar7 == 0) && (*(int *)(param_2 + 0x1bc) == 0)) && (*(int *)(param_2 + 0x1c0) == 0)) {
      if ((int)local_74 >> 1 < local_80) goto LAB_00105d8a;
      goto LAB_00105af0;
    }
    iVar6 = __divsi3(iVar6 * local_80,local_74);
    if (iVar6 == *(int *)(param_2 + 0x1a8)) {
      p_Var30 = param_2 + 0x1c4;
      goto LAB_00105af4;
    }
    *(int *)(param_2 + 0x1a8) = iVar6;
    iVar6 = iVar6 / 2;
    iVar15 = iVar6;
    if (iVar6 < 0xb5) {
      if (iVar6 < -0xb4) {
        iVar6 = -0xb4;
LAB_0010ab68:
        uVar28 = -*(int *)(DAT_0010b444 + iVar6 * 4 + 0x10b6c0);
        goto LAB_0010ab78;
      }
      if (iVar6 < -0x59) goto LAB_0010ab68;
      if (iVar6 < 0) {
        uVar28 = -*(int *)(DAT_0011163c + iVar6 * -4 + 0x11121a);
      }
      else {
        iVar10 = iVar6;
        if (0x5a < iVar6) goto LAB_0010d118;
        uVar28 = *(uint *)(DAT_00111650 + iVar6 * 4 + 0x111526);
      }
LAB_001109a2:
      iVar6 = iVar15 + 0x5a;
      if (0xb4 < iVar6) {
LAB_0010d134:
        iVar6 = iVar15 + -0x10e;
        if (iVar6 < -0xb4) {
          iVar6 = -0xb4;
          goto LAB_0010ab86;
        }
      }
      if (iVar6 < -0x59) goto LAB_0010ab86;
      if (iVar6 < 0) {
        uVar24 = -*(int *)(DAT_001124c8 + iVar6 * -4 + 0x1129f8);
      }
      else if (iVar6 < 0x5b) {
        uVar24 = *(uint *)(DAT_0011164c + iVar6 * 4 + 0x111514);
      }
      else {
        uVar24 = *(uint *)(&UNK_0010d9e6 + DAT_0010ddd0 + (0xb4 - iVar6) * 4);
      }
    }
    else {
      iVar10 = 0xb4;
LAB_0010d118:
      if (0xb4 < iVar6) {
        iVar15 = 0xb4;
      }
      uVar28 = *(uint *)(&UNK_0010d9a6 + DAT_0010ddcc + (0xb4 - iVar10) * 4);
      if (0xb4 < iVar6) goto LAB_0010d134;
LAB_0010ab78:
      if (-0xb5 < iVar15) goto LAB_001109a2;
      iVar6 = -0x5a;
LAB_0010ab86:
      uVar24 = -*(int *)(DAT_0010b448 + iVar6 * 4 + 0x10b6de);
    }
    uVar25 = uVar28 + 3 & (int)uVar28 >> 0x20;
    if (uVar28 < 0xfffffffd) {
      uVar25 = uVar28;
    }
    iVar6 = (int)uVar25 >> 2;
    uVar25 = uVar24 + 3 & (int)uVar24 >> 0x20;
    if (uVar28 < 0xfffffffd) {
      uVar25 = uVar24;
    }
    iVar12 = *(int *)(param_2 + 0x1b4);
    iVar15 = (int)uVar25 >> 2;
    iVar27 = *(int *)(param_2 + 0x1b0);
    iVar2 = *(int *)(param_2 + 0x1ac);
    iVar3 = (iVar6 * iVar7) / 0x7fff;
    iVar32 = (*(int *)(param_2 + 0x1bc) * iVar6) / 0x7fff;
    iVar1 = (*(int *)(param_2 + 0x1c0) * iVar6) / 0x7fff;
    iVar6 = -iVar32;
    iVar7 = -iVar3;
    iVar16 = iVar12 * iVar1 + iVar2 * iVar3 + iVar27 * iVar32;
    iVar10 = -iVar1;
    uVar14 = iVar2 * iVar15 + (iVar12 * iVar32 - iVar27 * iVar1);
    uVar28 = -iVar16;
    uVar22 = iVar12 * iVar15 + (iVar27 * iVar3 - iVar2 * iVar32);
    uVar25 = iVar27 * iVar15 + (iVar2 * iVar1 - iVar12 * iVar3);
    uVar24 = 0;
    if (uVar28 != 0) {
      if ((uVar28 & 0x80000000) == 0x80000000) {
        if ((uVar28 & 0xffff8000) == 0xffff8000) {
          uVar24 = 0;
        }
        else {
          if (-1 < iVar16 * -2) goto LAB_0011479c;
          if (-1 < iVar16 * -4) goto LAB_00114796;
          if (-1 < iVar16 * -8) goto LAB_00114790;
          if (-1 < iVar16 * -0x10) goto LAB_0011478a;
          if (-1 < iVar16 * -0x20) goto LAB_00114784;
          if (-1 < iVar16 * -0x40) goto LAB_0011477e;
          if (-1 < iVar16 * -0x80) goto LAB_00114778;
          if (-1 < iVar16 * -0x100) goto LAB_00115e0a;
          if (-1 < iVar16 * -0x200) goto LAB_00115e04;
          if (-1 < iVar16 * -0x400) goto LAB_00115dfe;
          if (-1 < iVar16 * -0x800) goto LAB_00115df8;
          if (-1 < iVar16 * -0x1000) goto LAB_00115df2;
          if (-1 < iVar16 * -0x2000) goto LAB_00115dec;
          if (-1 < iVar16 * -0x4000) goto LAB_00115de6;
          if (-1 < iVar16 * -0x8000) goto LAB_00115de0;
          uVar24 = (uint)((uVar28 & 0x8000) == 0);
        }
      }
      else if ((uVar28 & 0xffff8000) == 0) {
        uVar24 = 0;
      }
      else if (iVar16 * -2 < 0) {
LAB_0011479c:
        uVar24 = 0x10;
      }
      else if (iVar16 * -4 < 0) {
LAB_00114796:
        uVar24 = 0xf;
      }
      else if (iVar16 * -8 < 0) {
LAB_00114790:
        uVar24 = 0xe;
      }
      else if (iVar16 * -0x10 < 0) {
LAB_0011478a:
        uVar24 = 0xd;
      }
      else if (iVar16 * -0x20 < 0) {
LAB_00114784:
        uVar24 = 0xc;
      }
      else if (iVar16 * -0x40 < 0) {
LAB_0011477e:
        uVar24 = 0xb;
      }
      else if (iVar16 * -0x80 < 0) {
LAB_00114778:
        uVar24 = 10;
      }
      else if (iVar16 * -0x100 < 0) {
LAB_00115e0a:
        uVar24 = 9;
      }
      else if (iVar16 * -0x200 < 0) {
LAB_00115e04:
        uVar24 = 8;
      }
      else if (iVar16 * -0x400 < 0) {
LAB_00115dfe:
        uVar24 = 7;
      }
      else if (iVar16 * -0x800 < 0) {
LAB_00115df8:
        uVar24 = 6;
      }
      else if (iVar16 * -0x1000 < 0) {
LAB_00115df2:
        uVar24 = 5;
      }
      else if (iVar16 * -0x2000 < 0) {
LAB_00115dec:
        uVar24 = 4;
      }
      else if (iVar16 * -0x4000 < 0) {
LAB_00115de6:
        uVar24 = 3;
      }
      else if (iVar16 * -0x8000 < 0) {
LAB_00115de0:
        uVar24 = 2;
      }
      else {
        uVar24 = (uint)(iVar16 * -0x10000) >> 0x1f;
      }
    }
    if (uVar14 != 0) {
      if ((uVar14 & 0x80000000) == 0x80000000) {
        if ((uVar14 & 0xffff8000) != 0xffff8000) {
          if (-1 < (int)(uVar14 * 2)) goto LAB_00114846;
          if (-1 < (int)(uVar14 * 4)) goto LAB_00114840;
          if (-1 < (int)(uVar14 * 8)) goto LAB_0011483a;
          if (-1 < (int)(uVar14 * 0x10)) goto LAB_00114834;
          if (-1 < (int)(uVar14 * 0x20)) goto LAB_0011482e;
          if (-1 < (int)(uVar14 * 0x40)) goto LAB_00114828;
          if (-1 < (int)(uVar14 * 0x80)) goto LAB_00114822;
          if (-1 < (int)(uVar14 * 0x100)) goto LAB_00116354;
          if (-1 < (int)(uVar14 * 0x200)) goto LAB_0011634e;
          if (-1 < (int)(uVar14 * 0x400)) goto LAB_00116348;
          if (-1 < (int)(uVar14 * 0x800)) goto LAB_00116342;
          if (-1 < (int)(uVar14 * 0x1000)) goto LAB_0011633c;
          if (-1 < (int)(uVar14 * 0x2000)) goto LAB_00116336;
          if (-1 < (int)(uVar14 * 0x4000)) goto LAB_00116330;
          if (-1 < (int)(uVar14 * 0x8000)) goto LAB_0011632a;
          uVar11 = (uint)((uVar14 & 0x8000) == 0);
          goto LAB_0010ad4a;
        }
      }
      else if ((uVar14 & 0xffff8000) != 0) {
        if ((int)(uVar14 * 2) < 0) {
LAB_00114846:
          uVar11 = 0x10;
        }
        else if ((int)(uVar14 * 4) < 0) {
LAB_00114840:
          uVar11 = 0xf;
        }
        else if ((int)(uVar14 * 8) < 0) {
LAB_0011483a:
          uVar11 = 0xe;
        }
        else if ((int)(uVar14 * 0x10) < 0) {
LAB_00114834:
          uVar11 = 0xd;
        }
        else if ((int)(uVar14 * 0x20) < 0) {
LAB_0011482e:
          uVar11 = 0xc;
        }
        else if ((int)(uVar14 * 0x40) < 0) {
LAB_00114828:
          uVar11 = 0xb;
        }
        else if ((int)(uVar14 * 0x80) < 0) {
LAB_00114822:
          uVar11 = 10;
        }
        else if ((int)(uVar14 * 0x100) < 0) {
LAB_00116354:
          uVar11 = 9;
        }
        else if ((int)(uVar14 * 0x200) < 0) {
LAB_0011634e:
          uVar11 = 8;
        }
        else if ((int)(uVar14 * 0x400) < 0) {
LAB_00116348:
          uVar11 = 7;
        }
        else if ((int)(uVar14 * 0x800) < 0) {
LAB_00116342:
          uVar11 = 6;
        }
        else if ((int)(uVar14 * 0x1000) < 0) {
LAB_0011633c:
          uVar11 = 5;
        }
        else if ((int)(uVar14 * 0x2000) < 0) {
LAB_00116336:
          uVar11 = 4;
        }
        else if ((int)(uVar14 * 0x4000) < 0) {
LAB_00116330:
          uVar11 = 3;
        }
        else if ((int)(uVar14 * 0x8000) < 0) {
LAB_0011632a:
          uVar11 = 2;
        }
        else {
          uVar11 = (uVar14 & 0xffff) >> 0xf;
        }
LAB_0010ad4a:
        if (uVar24 < uVar11) {
          uVar24 = uVar11;
        }
      }
    }
    if (uVar25 != 0) {
      if ((uVar25 & 0x80000000) == 0x80000000) {
        if ((uVar25 & 0xffff8000) == 0xffff8000) {
          uVar11 = 0;
        }
        else {
          if (-1 < (int)(uVar25 * 2)) goto LAB_00114f1a;
          if (-1 < (int)(uVar25 * 4)) goto LAB_00114f12;
          if (-1 < (int)(uVar25 * 8)) goto LAB_00114f0a;
          if (-1 < (int)(uVar25 * 0x10)) goto LAB_00114f02;
          if (-1 < (int)(uVar25 * 0x20)) goto LAB_00114efa;
          if (-1 < (int)(uVar25 * 0x40)) goto LAB_00114ef2;
          if (-1 < (int)(uVar25 * 0x80)) goto LAB_00114eea;
          if (-1 < (int)(uVar25 * 0x100)) goto LAB_001159ee;
          if (-1 < (int)(uVar25 * 0x200)) goto LAB_00115b8e;
          if (-1 < (int)(uVar25 * 0x400)) goto LAB_00115b86;
          if (-1 < (int)(uVar25 * 0x800)) goto LAB_00115b7e;
          if (-1 < (int)(uVar25 * 0x1000)) goto LAB_00115b76;
          if (-1 < (int)(uVar25 * 0x2000)) goto LAB_0011653e;
          if (-1 < (int)(uVar25 * 0x4000)) goto LAB_00116536;
          if (-1 < (int)(uVar25 * 0x8000)) goto LAB_0011638e;
          uVar11 = (uint)((uVar25 & 0x8000) == 0);
        }
      }
      else {
        uVar11 = 0;
        if ((uVar25 & 0xffff8000) != 0) {
          if ((int)(uVar25 * 2) < 0) {
LAB_00114f1a:
            uVar11 = 0x10;
          }
          else if ((int)(uVar25 * 4) < 0) {
LAB_00114f12:
            uVar11 = 0xf;
          }
          else if ((int)(uVar25 * 8) < 0) {
LAB_00114f0a:
            uVar11 = 0xe;
          }
          else if ((int)(uVar25 * 0x10) < 0) {
LAB_00114f02:
            uVar11 = 0xd;
          }
          else if ((int)(uVar25 * 0x20) < 0) {
LAB_00114efa:
            uVar11 = 0xc;
          }
          else if ((int)(uVar25 * 0x40) < 0) {
LAB_00114ef2:
            uVar11 = 0xb;
          }
          else if ((int)(uVar25 * 0x80) < 0) {
LAB_00114eea:
            uVar11 = 10;
          }
          else if ((int)(uVar25 * 0x100) < 0) {
LAB_001159ee:
            uVar11 = 9;
          }
          else if ((int)(uVar25 * 0x200) < 0) {
LAB_00115b8e:
            uVar11 = 8;
          }
          else if ((int)(uVar25 * 0x400) < 0) {
LAB_00115b86:
            uVar11 = 7;
          }
          else if ((int)(uVar25 * 0x800) < 0) {
LAB_00115b7e:
            uVar11 = 6;
          }
          else if ((int)(uVar25 * 0x1000) < 0) {
LAB_00115b76:
            uVar11 = 5;
          }
          else if ((int)(uVar25 * 0x2000) < 0) {
LAB_0011653e:
            uVar11 = 4;
          }
          else if ((int)(uVar25 * 0x4000) < 0) {
LAB_00116536:
            uVar11 = 3;
          }
          else if ((int)(uVar25 * 0x8000) < 0) {
LAB_0011638e:
            uVar11 = 2;
          }
          else {
            uVar11 = (uVar25 & 0xffff) >> 0xf;
          }
        }
      }
      if (uVar24 < uVar11) {
        uVar24 = uVar11;
      }
    }
    if (uVar22 != 0) {
      if ((uVar22 & 0x80000000) == 0x80000000) {
        if ((uVar22 & 0xffff8000) == 0xffff8000) {
          uVar11 = 0;
        }
        else {
          if ((uVar22 & 0x40000000) == 0) goto LAB_0011471e;
          if ((uVar22 & 0x20000000) == 0) goto LAB_00114718;
          if ((uVar22 & 0x10000000) == 0) goto LAB_00114712;
          if ((uVar22 & 0x8000000) == 0) goto LAB_0011470c;
          if ((uVar22 & 0x4000000) == 0) goto LAB_00114706;
          if ((uVar22 & 0x2000000) == 0) goto LAB_00114700;
          if ((uVar22 & 0x1000000) == 0) goto LAB_001146fa;
          if ((uVar22 & 0x800000) == 0) goto LAB_00115e10;
          if ((uVar22 & 0x400000) == 0) goto LAB_00115cf4;
          if ((uVar22 & 0x200000) == 0) goto LAB_00115cee;
          if ((uVar22 & 0x100000) == 0) goto LAB_00115ce8;
          if ((uVar22 & 0x80000) == 0) goto LAB_00115ce2;
          if ((uVar22 & 0x40000) == 0) goto LAB_00115cdc;
          if ((uVar22 & 0x20000) == 0) goto LAB_00115cd6;
          if ((uVar22 & 0x10000) == 0) goto LAB_00115cd0;
          uVar11 = (uint)((uVar22 & 0x8000) == 0);
        }
      }
      else {
        uVar11 = 0;
        if ((uVar22 & 0xffff8000) != 0) {
          if ((uVar22 & 0x40000000) == 0) {
            if ((uVar22 & 0x20000000) == 0) {
              if ((uVar22 & 0x10000000) == 0) {
                if ((uVar22 & 0x8000000) == 0) {
                  if ((uVar22 & 0x4000000) == 0) {
                    if ((uVar22 & 0x2000000) == 0) {
                      if ((uVar22 & 0x1000000) == 0) {
                        if ((uVar22 & 0x800000) == 0) {
                          if ((uVar22 & 0x400000) == 0) {
                            if ((uVar22 & 0x200000) == 0) {
                              if ((uVar22 & 0x100000) == 0) {
                                if ((uVar22 & 0x80000) == 0) {
                                  if ((uVar22 & 0x40000) == 0) {
                                    if ((uVar22 & 0x20000) == 0) {
                                      if ((uVar22 & 0x10000) == 0) {
                                        uVar11 = (uVar22 & 0xffff) >> 0xf;
                                      }
                                      else {
LAB_00115cd0:
                                        uVar11 = 2;
                                      }
                                    }
                                    else {
LAB_00115cd6:
                                      uVar11 = 3;
                                    }
                                  }
                                  else {
LAB_00115cdc:
                                    uVar11 = 4;
                                  }
                                }
                                else {
LAB_00115ce2:
                                  uVar11 = 5;
                                }
                              }
                              else {
LAB_00115ce8:
                                uVar11 = 6;
                              }
                            }
                            else {
LAB_00115cee:
                              uVar11 = 7;
                            }
                          }
                          else {
LAB_00115cf4:
                            uVar11 = 8;
                          }
                        }
                        else {
LAB_00115e10:
                          uVar11 = 9;
                        }
                      }
                      else {
LAB_001146fa:
                        uVar11 = 10;
                      }
                    }
                    else {
LAB_00114700:
                      uVar11 = 0xb;
                    }
                  }
                  else {
LAB_00114706:
                    uVar11 = 0xc;
                  }
                }
                else {
LAB_0011470c:
                  uVar11 = 0xd;
                }
              }
              else {
LAB_00114712:
                uVar11 = 0xe;
              }
            }
            else {
LAB_00114718:
              uVar11 = 0xf;
            }
          }
          else {
LAB_0011471e:
            uVar11 = 0x10;
          }
        }
      }
      if (uVar24 < uVar11) {
        uVar24 = uVar11;
      }
    }
    switch(uVar24) {
    case 0:
      uVar23 = 1;
      break;
    case 1:
      uVar23 = 2;
      break;
    case 2:
      uVar23 = 4;
      break;
    case 3:
      uVar23 = 8;
      break;
    case 4:
      uVar23 = 0x10;
      break;
    case 5:
      uVar23 = 0x20;
      break;
    case 6:
      uVar23 = 0x40;
      break;
    case 7:
      uVar23 = 0x80;
      break;
    case 8:
      uVar23 = 0x100;
      break;
    case 9:
      uVar23 = 0x200;
      break;
    case 10:
      uVar23 = 0x400;
      break;
    case 0xb:
      uVar23 = 0x800;
      break;
    case 0xc:
      uVar23 = 0x1000;
      break;
    case 0xd:
      uVar23 = 0x2000;
      break;
    case 0xe:
      uVar23 = 0x4000;
      break;
    case 0xf:
      uVar23 = 0x8000;
      break;
    case 0x10:
      uVar23 = 0x10000;
      break;
    case 0x11:
      uVar23 = 0x20000;
      break;
    case 0x12:
      uVar23 = 0x40000;
      break;
    case 0x13:
      uVar23 = 0x80000;
      break;
    case 0x14:
      uVar23 = 0x100000;
      break;
    case 0x15:
      uVar23 = 0x200000;
      break;
    case 0x16:
      uVar23 = 0x400000;
      break;
    case 0x17:
      uVar23 = 0x800000;
      break;
    case 0x18:
      uVar23 = 0x1000000;
      break;
    case 0x19:
      uVar23 = 0x2000000;
      break;
    case 0x1a:
      uVar23 = 0x4000000;
      break;
    case 0x1b:
      uVar23 = 0x8000000;
      break;
    case 0x1c:
      uVar23 = 0x10000000;
      break;
    case 0x1d:
      uVar23 = 0x20000000;
      break;
    case 0x1e:
      uVar23 = 0x40000000;
      break;
    default:
      if ((int)uVar24 < 0) {
        uVar23 = 1;
      }
      else {
        uVar23 = 0x40000000;
      }
    }
    iVar3 = __divsi3(uVar28,uVar23);
    iVar32 = __divsi3(uVar14,uVar23);
    iVar1 = __divsi3(uVar25,uVar23);
    iVar2 = __divsi3(uVar22,uVar23);
    uVar14 = (iVar1 * iVar10 - iVar2 * iVar6) + iVar3 * iVar7 + iVar32 * iVar15;
    *(uint *)(param_2 + 0x98) = uVar14;
    uVar25 = iVar3 * iVar6 + iVar1 * iVar15 + (iVar2 * iVar7 - iVar32 * iVar10);
    *(uint *)(param_2 + 0x9c) = uVar25;
    uVar24 = iVar3 * iVar10 + iVar2 * iVar15 + (iVar32 * iVar6 - iVar1 * iVar7);
    *(uint *)(param_2 + 0xa0) = uVar24;
    uVar28 = uVar25;
    if (uVar14 == 0) {
      if (uVar25 != 0) {
        uVar22 = 0;
LAB_0010e4be:
        if ((uVar25 & 0x80000000) == 0x80000000) {
          if ((uVar25 & 0xffffc000) == 0xffffc000) {
            uVar28 = 0;
          }
          else {
            if ((uVar25 & 0x40000000) == 0) goto LAB_00114732;
            if ((uVar25 & 0x20000000) == 0) goto LAB_0011473e;
            if ((uVar25 & 0x10000000) == 0) goto LAB_00114738;
            if ((uVar25 & 0x8000000) == 0) goto LAB_00114744;
            if ((uVar25 & 0x4000000) == 0) goto LAB_001151e4;
            if ((uVar25 & 0x2000000) == 0) goto LAB_00115196;
            if ((uVar25 & 0x1000000) == 0) goto LAB_00115190;
            if ((uVar25 & 0x800000) == 0) goto LAB_00115d24;
            if ((uVar25 & 0x400000) == 0) goto LAB_00115d1e;
            if ((uVar25 & 0x200000) == 0) goto LAB_00115d18;
            if ((uVar25 & 0x100000) == 0) goto LAB_00115d12;
            if ((uVar25 & 0x80000) == 0) goto LAB_00115d0c;
            if ((uVar25 & 0x40000) == 0) goto LAB_00115d06;
            if ((uVar25 & 0x20000) == 0) goto LAB_00115d00;
            if ((uVar25 & 0x10000) == 0) goto LAB_00115cfa;
            if ((uVar25 & 0x8000) == 0) goto LAB_001163a4;
            uVar28 = (uint)((uVar25 & 0x4000) == 0);
          }
        }
        else if ((uVar25 & 0xffffc000) == 0) {
          uVar28 = 0;
        }
        else if ((uVar25 & 0x40000000) == 0) {
          if ((uVar25 & 0x20000000) == 0) {
            if ((uVar25 & 0x10000000) == 0) {
              if ((uVar25 & 0x8000000) == 0) {
                if ((uVar25 & 0x4000000) == 0) {
                  if ((uVar25 & 0x2000000) == 0) {
                    if ((uVar25 & 0x1000000) == 0) {
                      if ((uVar25 & 0x800000) == 0) {
                        if ((uVar25 & 0x400000) == 0) {
                          if ((uVar25 & 0x200000) == 0) {
                            if ((uVar25 & 0x100000) == 0) {
                              if ((uVar25 & 0x80000) == 0) {
                                if ((uVar25 & 0x40000) == 0) {
                                  if ((uVar25 & 0x20000) == 0) {
                                    if ((uVar25 & 0x10000) == 0) {
                                      if ((uVar25 & 0x8000) == 0) {
                                        uVar28 = (uVar25 & 0x7fff) >> 0xe;
                                      }
                                      else {
LAB_001163a4:
                                        uVar28 = 2;
                                      }
                                    }
                                    else {
LAB_00115cfa:
                                      uVar28 = 3;
                                    }
                                  }
                                  else {
LAB_00115d00:
                                    uVar28 = 4;
                                  }
                                }
                                else {
LAB_00115d06:
                                  uVar28 = 5;
                                }
                              }
                              else {
LAB_00115d0c:
                                uVar28 = 6;
                              }
                            }
                            else {
LAB_00115d12:
                              uVar28 = 7;
                            }
                          }
                          else {
LAB_00115d18:
                            uVar28 = 8;
                          }
                        }
                        else {
LAB_00115d1e:
                          uVar28 = 9;
                        }
                      }
                      else {
LAB_00115d24:
                        uVar28 = 10;
                      }
                    }
                    else {
LAB_00115190:
                      uVar28 = 0xb;
                    }
                  }
                  else {
LAB_00115196:
                    uVar28 = 0xc;
                  }
                }
                else {
LAB_001151e4:
                  uVar28 = 0xd;
                }
              }
              else {
LAB_00114744:
                uVar28 = 0xe;
              }
            }
            else {
LAB_00114738:
              uVar28 = 0xf;
            }
          }
          else {
LAB_0011473e:
            uVar28 = 0x10;
          }
        }
        else {
LAB_00114732:
          uVar28 = 0x11;
        }
        goto LAB_0010dc76;
      }
      uVar22 = uVar25;
      if (uVar24 != 0) goto LAB_0010af58;
LAB_0010c552:
      *(undefined4 *)(param_2 + 0x98) = 0;
      *(undefined4 *)(param_2 + 0x9c) = 0;
      *(undefined4 *)(param_2 + 0xa0) = 0;
    }
    else {
      if ((uVar14 & 0x80000000) == 0x80000000) {
        if ((uVar14 & 0xffffc000) == 0xffffc000) {
          uVar22 = 0;
        }
        else {
          if ((uVar14 & 0x40000000) == 0) goto LAB_001148ce;
          if ((uVar14 & 0x20000000) == 0) goto LAB_001148c8;
          if ((uVar14 & 0x10000000) == 0) goto LAB_001148c2;
          if ((uVar14 & 0x8000000) == 0) goto LAB_001148bc;
          if ((uVar14 & 0x4000000) == 0) goto LAB_00116592;
          if ((uVar14 & 0x2000000) == 0) goto LAB_0011658c;
          if ((uVar14 & 0x1000000) == 0) goto LAB_00116586;
          if ((uVar14 & 0x800000) == 0) goto LAB_00116580;
          if ((uVar14 & 0x400000) == 0) goto LAB_001165c2;
          if ((uVar14 & 0x200000) == 0) goto LAB_001165bc;
          if ((uVar14 & 0x100000) == 0) goto LAB_001165b6;
          if ((uVar14 & 0x80000) == 0) goto LAB_001165b0;
          if ((uVar14 & 0x40000) == 0) goto LAB_001165aa;
          if ((uVar14 & 0x20000) == 0) goto LAB_001165a4;
          if ((uVar14 & 0x10000) == 0) goto LAB_0011659e;
          if ((uVar14 & 0x8000) == 0) goto LAB_00116598;
          uVar22 = (uint)((uVar14 & 0x4000) == 0);
        }
      }
      else if ((uVar14 & 0xffffc000) == 0) {
        uVar22 = 0;
      }
      else if ((uVar14 & 0x40000000) == 0) {
        if ((uVar14 & 0x20000000) == 0) {
          if ((uVar14 & 0x10000000) == 0) {
            if ((uVar14 & 0x8000000) == 0) {
              if ((uVar14 & 0x4000000) == 0) {
                if ((uVar14 & 0x2000000) == 0) {
                  if ((uVar14 & 0x1000000) == 0) {
                    if ((uVar14 & 0x800000) == 0) {
                      if ((uVar14 & 0x400000) == 0) {
                        if ((uVar14 & 0x200000) == 0) {
                          if ((uVar14 & 0x100000) == 0) {
                            if ((uVar14 & 0x80000) == 0) {
                              if ((uVar14 & 0x40000) == 0) {
                                if ((uVar14 & 0x20000) == 0) {
                                  if ((uVar14 & 0x10000) == 0) {
                                    if ((uVar14 & 0x8000) == 0) {
                                      uVar22 = (uVar14 & 0x7fff) >> 0xe;
                                    }
                                    else {
LAB_00116598:
                                      uVar22 = 2;
                                    }
                                  }
                                  else {
LAB_0011659e:
                                    uVar22 = 3;
                                  }
                                }
                                else {
LAB_001165a4:
                                  uVar22 = 4;
                                }
                              }
                              else {
LAB_001165aa:
                                uVar22 = 5;
                              }
                            }
                            else {
LAB_001165b0:
                              uVar22 = 6;
                            }
                          }
                          else {
LAB_001165b6:
                            uVar22 = 7;
                          }
                        }
                        else {
LAB_001165bc:
                          uVar22 = 8;
                        }
                      }
                      else {
LAB_001165c2:
                        uVar22 = 9;
                      }
                    }
                    else {
LAB_00116580:
                      uVar22 = 10;
                    }
                  }
                  else {
LAB_00116586:
                    uVar22 = 0xb;
                  }
                }
                else {
LAB_0011658c:
                  uVar22 = 0xc;
                }
              }
              else {
LAB_00116592:
                uVar22 = 0xd;
              }
            }
            else {
LAB_001148bc:
              uVar22 = 0xe;
            }
          }
          else {
LAB_001148c2:
            uVar22 = 0xf;
          }
        }
        else {
LAB_001148c8:
          uVar22 = 0x10;
        }
      }
      else {
LAB_001148ce:
        uVar22 = 0x11;
      }
      if (uVar25 != 0) goto LAB_0010e4be;
LAB_0010dc76:
      uVar11 = 0;
      if (uVar24 != 0) {
LAB_0010af58:
        if ((uVar24 & 0x80000000) == 0x80000000) {
          if ((uVar24 & 0xffffc000) == 0xffffc000) {
            uVar11 = 0;
          }
          else {
            if (-1 < (int)(uVar24 * 2)) goto LAB_0011481c;
            if (-1 < (int)(uVar24 * 4)) goto LAB_00114816;
            if (-1 < (int)(uVar24 * 8)) goto LAB_00114810;
            if (-1 < (int)(uVar24 * 0x10)) goto LAB_0011480a;
            if (-1 < (int)(uVar24 * 0x20)) goto LAB_00116388;
            if (-1 < (int)(uVar24 * 0x40)) goto LAB_00116382;
            if (-1 < (int)(uVar24 * 0x80)) goto LAB_0011637c;
            if (-1 < (int)(uVar24 * 0x100)) goto LAB_00116376;
            if (-1 < (int)(uVar24 * 0x200)) goto LAB_00115cc2;
            if (-1 < (int)(uVar24 * 0x400)) goto LAB_00115cbc;
            if (-1 < (int)(uVar24 * 0x800)) goto LAB_00115cb6;
            if (-1 < (int)(uVar24 * 0x1000)) goto LAB_00115cb0;
            if (-1 < (int)(uVar24 * 0x2000)) goto LAB_00115caa;
            if (-1 < (int)(uVar24 * 0x4000)) goto LAB_00115ca4;
            if (-1 < (int)(uVar24 * 0x8000)) goto LAB_00115c9e;
            if (-1 < (int)(uVar24 * 0x10000)) goto LAB_00115c98;
            uVar11 = (uint)((uVar24 & 0x4000) == 0);
          }
        }
        else {
          uVar11 = 0;
          if ((uVar24 & 0xffffc000) != 0) {
            if ((int)(uVar24 * 2) < 0) {
LAB_0011481c:
              uVar11 = 0x11;
            }
            else if ((int)(uVar24 * 4) < 0) {
LAB_00114816:
              uVar11 = 0x10;
            }
            else if ((int)(uVar24 * 8) < 0) {
LAB_00114810:
              uVar11 = 0xf;
            }
            else if ((int)(uVar24 * 0x10) < 0) {
LAB_0011480a:
              uVar11 = 0xe;
            }
            else if ((int)(uVar24 * 0x20) < 0) {
LAB_00116388:
              uVar11 = 0xd;
            }
            else if ((int)(uVar24 * 0x40) < 0) {
LAB_00116382:
              uVar11 = 0xc;
            }
            else if ((int)(uVar24 * 0x80) < 0) {
LAB_0011637c:
              uVar11 = 0xb;
            }
            else if ((int)(uVar24 * 0x100) < 0) {
LAB_00116376:
              uVar11 = 10;
            }
            else if ((int)(uVar24 * 0x200) < 0) {
LAB_00115cc2:
              uVar11 = 9;
            }
            else if ((int)(uVar24 * 0x400) < 0) {
LAB_00115cbc:
              uVar11 = 8;
            }
            else if ((int)(uVar24 * 0x800) < 0) {
LAB_00115cb6:
              uVar11 = 7;
            }
            else if ((int)(uVar24 * 0x1000) < 0) {
LAB_00115cb0:
              uVar11 = 6;
            }
            else if ((int)(uVar24 * 0x2000) < 0) {
LAB_00115caa:
              uVar11 = 5;
            }
            else if ((int)(uVar24 * 0x4000) < 0) {
LAB_00115ca4:
              uVar11 = 4;
            }
            else if ((int)(uVar24 * 0x8000) < 0) {
LAB_00115c9e:
              uVar11 = 3;
            }
            else if ((int)(uVar24 * 0x10000) < 0) {
LAB_00115c98:
              uVar11 = 2;
            }
            else {
              uVar11 = (uVar24 & 0x7fff) >> 0xe;
            }
          }
        }
      }
      if ((int)uVar28 <= (int)uVar22) {
        uVar28 = uVar22;
      }
      if ((int)uVar11 <= (int)uVar28) {
        uVar11 = uVar28;
      }
      switch(uVar11) {
      case 0:
        iVar6 = 1;
        break;
      case 1:
        iVar6 = 2;
        break;
      case 2:
        iVar6 = 4;
        break;
      case 3:
        iVar6 = 8;
        break;
      case 4:
        iVar6 = 0x10;
        break;
      case 5:
        iVar6 = 0x20;
        break;
      case 6:
        iVar6 = 0x40;
        break;
      case 7:
        iVar6 = 0x80;
        break;
      case 8:
        iVar6 = 0x100;
        break;
      case 9:
        iVar6 = 0x200;
        break;
      case 10:
        iVar6 = 0x400;
        break;
      case 0xb:
        iVar6 = 0x800;
        break;
      case 0xc:
        iVar6 = 0x1000;
        break;
      case 0xd:
        iVar6 = 0x2000;
        break;
      case 0xe:
        iVar6 = 0x4000;
        break;
      case 0xf:
        iVar6 = 0x8000;
        break;
      case 0x10:
        iVar6 = 0x10000;
        break;
      case 0x11:
        iVar6 = 0x20000;
        break;
      case 0x12:
        iVar6 = 0x40000;
        break;
      case 0x13:
        iVar6 = 0x80000;
        break;
      case 0x14:
        iVar6 = 0x100000;
        break;
      case 0x15:
        iVar6 = 0x200000;
        break;
      case 0x16:
        iVar6 = 0x400000;
        break;
      case 0x17:
        iVar6 = 0x800000;
        break;
      case 0x18:
        iVar6 = 0x1000000;
        break;
      case 0x19:
        iVar6 = 0x2000000;
        break;
      case 0x1a:
        iVar6 = 0x4000000;
        break;
      case 0x1b:
        iVar6 = 0x8000000;
        break;
      case 0x1c:
        iVar6 = 0x10000000;
        break;
      case 0x1d:
        iVar6 = 0x20000000;
        break;
      default:
        iVar6 = 0x40000000;
      }
      iVar7 = __divsi3(uVar14,iVar6);
      iVar15 = __divsi3(uVar25,iVar6);
      iVar10 = __divsi3(uVar24,iVar6);
      iVar7 = iVar10 * iVar10 + iVar7 * iVar7 + iVar15 * iVar15;
      if (iVar7 < 1) {
        iVar15 = 0;
      }
      else {
        iVar10 = iVar7;
        if (iVar7 == 0x7fffffff) {
          iVar7 = 0x7ffffffe;
          iVar10 = 0x7ffffffe;
        }
        do {
          iVar15 = __divsi3(iVar10,iVar7);
          iVar3 = (iVar7 + iVar15) / 2;
          iVar15 = iVar7;
          if (iVar7 <= iVar3) break;
          iVar7 = __divsi3(iVar10);
          iVar7 = (iVar3 + iVar7) / 2;
          iVar15 = iVar3;
          if (iVar3 <= iVar7) break;
          iVar15 = __divsi3(iVar10,iVar7);
          iVar3 = (iVar7 + iVar15) / 2;
          iVar15 = iVar7;
          if (iVar7 <= iVar3) break;
          iVar7 = __divsi3(iVar10,iVar3);
          iVar7 = (iVar3 + iVar7) / 2;
          iVar15 = iVar3;
          if (iVar3 <= iVar7) break;
          iVar15 = __divsi3(iVar10,iVar7);
          iVar3 = (iVar7 + iVar15) / 2;
          iVar15 = iVar7;
          if (iVar7 <= iVar3) break;
          iVar7 = __divsi3(iVar10,iVar3);
          iVar7 = (iVar3 + iVar7) / 2;
          iVar15 = iVar3;
          if (iVar3 <= iVar7) break;
          iVar15 = __divsi3(iVar10);
          iVar3 = (iVar7 + iVar15) / 2;
          iVar15 = iVar7;
          if (iVar7 <= iVar3) break;
          iVar7 = __divsi3(iVar10,iVar3);
          iVar7 = (iVar7 + iVar3) / 2;
          iVar15 = iVar3;
        } while (iVar7 < iVar3);
      }
      uVar28 = uVar25;
      if ((int)uVar25 < (int)uVar14) {
        uVar28 = uVar14;
      }
      if ((int)uVar28 < (int)uVar24) {
        uVar28 = uVar24;
      }
      uVar22 = iVar6 * iVar15;
      if (iVar6 * iVar15 <= (int)uVar28) {
        uVar22 = uVar28;
      }
      if (uVar22 == 0) goto LAB_0010c552;
      uVar28 = 0;
      if (uVar14 != 0) {
        if ((uVar14 & 0x80000000) == 0x80000000) {
          if ((uVar14 & 0xffff8000) == 0xffff8000) {
            uVar28 = 0;
          }
          else {
            if ((uVar14 & 0x40000000) == 0) goto LAB_00115f9e;
            if ((uVar14 & 0x20000000) == 0) goto LAB_00115faa;
            if ((uVar14 & 0x10000000) == 0) goto LAB_00115fa4;
            if ((uVar14 & 0x8000000) == 0) goto LAB_00115fc2;
            if ((uVar14 & 0x4000000) == 0) goto LAB_00115fbc;
            if ((uVar14 & 0x2000000) == 0) goto LAB_00115fb6;
            if ((uVar14 & 0x1000000) == 0) goto LAB_00115fb0;
            if ((uVar14 & 0x800000) == 0) goto LAB_00115ff2;
            if ((uVar14 & 0x400000) == 0) goto LAB_00115fec;
            if ((uVar14 & 0x200000) == 0) goto LAB_00115fe6;
            if ((uVar14 & 0x100000) == 0) goto LAB_00115fe0;
            if ((uVar14 & 0x80000) == 0) goto LAB_00115fda;
            if ((uVar14 & 0x40000) == 0) goto LAB_00115fd4;
            if ((uVar14 & 0x20000) == 0) goto LAB_00115fce;
            if ((uVar14 & 0x10000) == 0) goto LAB_00115fc8;
            uVar28 = (uint)((uVar14 & 0x8000) == 0);
          }
        }
        else if ((uVar14 & 0xffff8000) == 0) {
          uVar28 = 0;
        }
        else if ((uVar14 & 0x40000000) == 0) {
          if ((uVar14 & 0x20000000) == 0) {
            if ((uVar14 & 0x10000000) == 0) {
              if ((uVar14 & 0x8000000) == 0) {
                if ((uVar14 & 0x4000000) == 0) {
                  if ((uVar14 & 0x2000000) == 0) {
                    if ((uVar14 & 0x1000000) == 0) {
                      if ((uVar14 & 0x800000) == 0) {
                        if ((uVar14 & 0x400000) == 0) {
                          if ((uVar14 & 0x200000) == 0) {
                            if ((uVar14 & 0x100000) == 0) {
                              if ((uVar14 & 0x80000) == 0) {
                                if ((uVar14 & 0x40000) == 0) {
                                  if ((uVar14 & 0x20000) == 0) {
                                    if ((uVar14 & 0x10000) == 0) {
                                      uVar28 = (uVar14 & 0xffff) >> 0xf;
                                    }
                                    else {
LAB_00115fc8:
                                      uVar28 = 2;
                                    }
                                  }
                                  else {
LAB_00115fce:
                                    uVar28 = 3;
                                  }
                                }
                                else {
LAB_00115fd4:
                                  uVar28 = 4;
                                }
                              }
                              else {
LAB_00115fda:
                                uVar28 = 5;
                              }
                            }
                            else {
LAB_00115fe0:
                              uVar28 = 6;
                            }
                          }
                          else {
LAB_00115fe6:
                            uVar28 = 7;
                          }
                        }
                        else {
LAB_00115fec:
                          uVar28 = 8;
                        }
                      }
                      else {
LAB_00115ff2:
                        uVar28 = 9;
                      }
                    }
                    else {
LAB_00115fb0:
                      uVar28 = 10;
                    }
                  }
                  else {
LAB_00115fb6:
                    uVar28 = 0xb;
                  }
                }
                else {
LAB_00115fbc:
                  uVar28 = 0xc;
                }
              }
              else {
LAB_00115fc2:
                uVar28 = 0xd;
              }
            }
            else {
LAB_00115fa4:
              uVar28 = 0xe;
            }
          }
          else {
LAB_00115faa:
            uVar28 = 0xf;
          }
        }
        else {
LAB_00115f9e:
          uVar28 = 0x10;
        }
      }
      uVar11 = 0;
      if (uVar25 != 0) {
        if ((uVar25 & 0x80000000) == 0x80000000) {
          if ((uVar25 & 0xffff8000) == 0xffff8000) {
            uVar11 = 0;
          }
          else {
            if ((uVar25 & 0x40000000) == 0) goto LAB_00116402;
            if ((uVar25 & 0x20000000) == 0) goto LAB_001155ba;
            if ((uVar25 & 0x10000000) == 0) goto LAB_001155b4;
            if ((uVar25 & 0x8000000) == 0) goto LAB_001163bc;
            if ((uVar25 & 0x4000000) == 0) goto LAB_001163b6;
            if ((uVar25 & 0x2000000) == 0) goto LAB_001163b0;
            if ((uVar25 & 0x1000000) == 0) goto LAB_001163aa;
            if ((uVar25 & 0x800000) == 0) goto LAB_0011593c;
            if ((uVar25 & 0x400000) == 0) goto LAB_00115936;
            if ((uVar25 & 0x200000) == 0) goto LAB_00115930;
            if ((uVar25 & 0x100000) == 0) goto LAB_0011592a;
            if ((uVar25 & 0x80000) == 0) goto LAB_00115924;
            if ((uVar25 & 0x40000) == 0) goto LAB_0011591e;
            if ((uVar25 & 0x20000) == 0) goto LAB_00115918;
            if ((uVar25 & 0x10000) == 0) goto LAB_00115912;
            uVar11 = (uint)((uVar25 & 0x8000) == 0);
          }
        }
        else if ((uVar25 & 0xffff8000) == 0) {
          uVar11 = 0;
        }
        else if ((uVar25 & 0x40000000) == 0) {
          if ((uVar25 & 0x20000000) == 0) {
            if ((uVar25 & 0x10000000) == 0) {
              if ((uVar25 & 0x8000000) == 0) {
                if ((uVar25 & 0x4000000) == 0) {
                  if ((uVar25 & 0x2000000) == 0) {
                    if ((uVar25 & 0x1000000) == 0) {
                      if ((uVar25 & 0x800000) == 0) {
                        if ((uVar25 & 0x400000) == 0) {
                          if ((uVar25 & 0x200000) == 0) {
                            if ((uVar25 & 0x100000) == 0) {
                              if ((uVar25 & 0x80000) == 0) {
                                if ((uVar25 & 0x40000) == 0) {
                                  if ((uVar25 & 0x20000) == 0) {
                                    if ((uVar25 & 0x10000) == 0) {
                                      uVar11 = (uVar25 & 0xffff) >> 0xf;
                                    }
                                    else {
LAB_00115912:
                                      uVar11 = 2;
                                    }
                                  }
                                  else {
LAB_00115918:
                                    uVar11 = 3;
                                  }
                                }
                                else {
LAB_0011591e:
                                  uVar11 = 4;
                                }
                              }
                              else {
LAB_00115924:
                                uVar11 = 5;
                              }
                            }
                            else {
LAB_0011592a:
                              uVar11 = 6;
                            }
                          }
                          else {
LAB_00115930:
                            uVar11 = 7;
                          }
                        }
                        else {
LAB_00115936:
                          uVar11 = 8;
                        }
                      }
                      else {
LAB_0011593c:
                        uVar11 = 9;
                      }
                    }
                    else {
LAB_001163aa:
                      uVar11 = 10;
                    }
                  }
                  else {
LAB_001163b0:
                    uVar11 = 0xb;
                  }
                }
                else {
LAB_001163b6:
                  uVar11 = 0xc;
                }
              }
              else {
LAB_001163bc:
                uVar11 = 0xd;
              }
            }
            else {
LAB_001155b4:
              uVar11 = 0xe;
            }
          }
          else {
LAB_001155ba:
            uVar11 = 0xf;
          }
        }
        else {
LAB_00116402:
          uVar11 = 0x10;
        }
      }
      uVar34 = 0;
      if (uVar24 != 0) {
        if ((uVar24 & 0x80000000) == 0x80000000) {
          if ((uVar24 & 0xffff8000) == 0xffff8000) {
            uVar34 = 0;
          }
          else {
            if (-1 < (int)(uVar24 * 2)) goto LAB_0011554e;
            if (-1 < (int)(uVar24 * 4)) goto LAB_0011555a;
            if (-1 < (int)(uVar24 * 8)) goto LAB_00115554;
            if (-1 < (int)(uVar24 * 0x10)) goto LAB_00115572;
            if (-1 < (int)(uVar24 * 0x20)) goto LAB_0011556c;
            if (-1 < (int)(uVar24 * 0x40)) goto LAB_00115566;
            if (-1 < (int)(uVar24 * 0x80)) goto LAB_00115560;
            if (-1 < (int)(uVar24 * 0x100)) goto LAB_001155a2;
            if (-1 < (int)(uVar24 * 0x200)) goto LAB_0011559c;
            if (-1 < (int)(uVar24 * 0x400)) goto LAB_00115596;
            if (-1 < (int)(uVar24 * 0x800)) goto LAB_00115590;
            if (-1 < (int)(uVar24 * 0x1000)) goto LAB_0011558a;
            if (-1 < (int)(uVar24 * 0x2000)) goto LAB_00115584;
            if (-1 < (int)(uVar24 * 0x4000)) goto LAB_0011557e;
            if (-1 < (int)(uVar24 * 0x8000)) goto LAB_00115578;
            uVar34 = (uint)((uVar24 & 0x8000) == 0);
          }
        }
        else {
          uVar34 = 0;
          if ((uVar24 & 0xffff8000) != 0) {
            if ((int)(uVar24 * 2) < 0) {
LAB_0011554e:
              uVar34 = 0x10;
            }
            else if ((int)(uVar24 * 4) < 0) {
LAB_0011555a:
              uVar34 = 0xf;
            }
            else if ((int)(uVar24 * 8) < 0) {
LAB_00115554:
              uVar34 = 0xe;
            }
            else if ((int)(uVar24 * 0x10) < 0) {
LAB_00115572:
              uVar34 = 0xd;
            }
            else if ((int)(uVar24 * 0x20) < 0) {
LAB_0011556c:
              uVar34 = 0xc;
            }
            else if ((int)(uVar24 * 0x40) < 0) {
LAB_00115566:
              uVar34 = 0xb;
            }
            else if ((int)(uVar24 * 0x80) < 0) {
LAB_00115560:
              uVar34 = 10;
            }
            else if ((int)(uVar24 * 0x100) < 0) {
LAB_001155a2:
              uVar34 = 9;
            }
            else if ((int)(uVar24 * 0x200) < 0) {
LAB_0011559c:
              uVar34 = 8;
            }
            else if ((int)(uVar24 * 0x400) < 0) {
LAB_00115596:
              uVar34 = 7;
            }
            else if ((int)(uVar24 * 0x800) < 0) {
LAB_00115590:
              uVar34 = 6;
            }
            else if ((int)(uVar24 * 0x1000) < 0) {
LAB_0011558a:
              uVar34 = 5;
            }
            else if ((int)(uVar24 * 0x2000) < 0) {
LAB_00115584:
              uVar34 = 4;
            }
            else if ((int)(uVar24 * 0x4000) < 0) {
LAB_0011557e:
              uVar34 = 3;
            }
            else if ((int)(uVar24 * 0x8000) < 0) {
LAB_00115578:
              uVar34 = 2;
            }
            else {
              uVar34 = (uVar24 & 0xffff) >> 0xf;
            }
          }
        }
      }
      if (uVar28 <= uVar11) {
        uVar28 = uVar11;
      }
      if (uVar34 <= uVar28) {
        uVar34 = uVar28;
      }
      switch(uVar34) {
      case 0:
        uVar23 = 1;
        goto code_r0x0010ead8;
      case 1:
        uVar23 = 2;
        break;
      case 2:
        uVar23 = 4;
        break;
      case 3:
        uVar23 = 8;
        break;
      case 4:
        uVar23 = 0x10;
        break;
      case 5:
        uVar23 = 0x20;
        break;
      case 6:
        uVar23 = 0x40;
        break;
      case 7:
        uVar23 = 0x80;
        break;
      case 8:
        uVar23 = 0x100;
        break;
      case 9:
        uVar23 = 0x200;
        break;
      case 10:
        uVar23 = 0x400;
        break;
      case 0xb:
        uVar23 = 0x800;
        break;
      case 0xc:
        uVar23 = 0x1000;
        break;
      case 0xd:
        uVar23 = 0x2000;
        break;
      case 0xe:
        uVar23 = 0x4000;
        break;
      case 0xf:
        uVar23 = 0x8000;
        break;
      case 0x10:
        uVar23 = 0x10000;
        break;
      case 0x11:
        uVar23 = 0x20000;
        break;
      case 0x12:
        uVar23 = 0x40000;
        break;
      case 0x13:
        uVar23 = 0x80000;
        break;
      case 0x14:
        uVar23 = 0x100000;
        break;
      case 0x15:
        uVar23 = 0x200000;
        break;
      case 0x16:
        uVar23 = 0x400000;
        break;
      case 0x17:
        uVar23 = 0x800000;
        break;
      case 0x18:
        uVar23 = 0x1000000;
        break;
      case 0x19:
        uVar23 = 0x2000000;
        break;
      case 0x1a:
        uVar23 = 0x4000000;
        break;
      case 0x1b:
        uVar23 = 0x8000000;
        break;
      case 0x1c:
        uVar23 = 0x10000000;
        break;
      case 0x1d:
        uVar23 = 0x20000000;
        break;
      default:
        uVar23 = 0x40000000;
      }
      uVar22 = __divsi3(uVar22,uVar23);
      if (uVar22 == 0) {
        *(undefined4 *)(param_2 + 0x98) = 0;
        *(undefined4 *)(param_2 + 0x9c) = 0;
        *(undefined4 *)(param_2 + 0xa0) = 0;
      }
      else {
code_r0x0010ead8:
        if (uVar14 != 0) {
          iVar6 = __divsi3(uVar14,uVar23);
          uVar4 = __divsi3(iVar6 * 0x7fff,uVar22);
          *(undefined4 *)(param_2 + 0x98) = uVar4;
        }
        if (uVar25 != 0) {
          iVar6 = __divsi3(uVar25,uVar23);
          uVar4 = __divsi3(iVar6 * 0x7fff,uVar22);
          *(undefined4 *)(param_2 + 0x9c) = uVar4;
        }
        if (uVar24 != 0) {
          iVar6 = __divsi3(uVar24,uVar23);
          uVar23 = __divsi3(iVar6 * 0x7fff,uVar22);
          *(undefined4 *)(param_2 + 0xa0) = uVar23;
        }
      }
    }
    if (1 < iVar5) {
      local_70 = __divsi3(local_80,iVar5);
      local_6c = __divsi3(local_74,iVar5);
    }
    uVar28 = *(uint *)(param_2 + 0x80);
    if (uVar28 == 0) {
      if ((*(int *)(param_2 + 0x84) != 0) ||
         (local_84 = *(uint *)(param_2 + 0x88), *(uint *)(param_2 + 0x88) != 0)) {
        uVar24 = *(uint *)(param_2 + 0x84);
        uVar14 = 0;
        uVar25 = *(uint *)(param_2 + 0x88);
        goto LAB_0010c5a2;
      }
    }
    else {
      uVar24 = *(uint *)(param_2 + 0x84);
      uVar25 = *(uint *)(param_2 + 0x88);
      if ((uVar28 & 0x80000000) == 0x80000000) {
        if ((uVar28 & 0xffffc000) == 0xffffc000) {
          uVar14 = 0;
        }
        else {
          if ((uVar28 & 0x40000000) == 0) goto LAB_001145da;
          if ((uVar28 & 0x20000000) == 0) goto LAB_001145e6;
          if ((uVar28 & 0x10000000) == 0) goto LAB_001145e0;
          if ((uVar28 & 0x8000000) == 0) goto LAB_0011543e;
          if ((uVar28 & 0x4000000) == 0) goto LAB_00115438;
          if ((uVar28 & 0x2000000) == 0) goto LAB_00115432;
          if ((uVar28 & 0x1000000) == 0) goto LAB_0011542c;
          if ((uVar28 & 0x800000) == 0) goto LAB_00115602;
          if ((uVar28 & 0x400000) == 0) goto LAB_001155fc;
          if ((uVar28 & 0x200000) == 0) goto LAB_001155f6;
          if ((uVar28 & 0x100000) == 0) goto LAB_001155f0;
          if ((uVar28 & 0x80000) == 0) goto LAB_001155ea;
          if ((uVar28 & 0x40000) == 0) goto LAB_001155e4;
          if ((uVar28 & 0x20000) == 0) goto LAB_001155de;
          if ((uVar28 & 0x10000) == 0) goto LAB_001155d8;
          if ((uVar28 & 0x8000) == 0) goto LAB_001159fe;
          uVar14 = (uint)((uVar28 & 0x4000) == 0);
        }
      }
      else if ((uVar28 & 0xffffc000) == 0) {
        uVar14 = 0;
      }
      else if ((uVar28 & 0x40000000) == 0) {
        if ((uVar28 & 0x20000000) == 0) {
          if ((uVar28 & 0x10000000) == 0) {
            if ((uVar28 & 0x8000000) == 0) {
              if ((uVar28 & 0x4000000) == 0) {
                if ((uVar28 & 0x2000000) == 0) {
                  if ((uVar28 & 0x1000000) == 0) {
                    if ((uVar28 & 0x800000) == 0) {
                      if ((uVar28 & 0x400000) == 0) {
                        if ((uVar28 & 0x200000) == 0) {
                          if ((uVar28 & 0x100000) == 0) {
                            if ((uVar28 & 0x80000) == 0) {
                              if ((uVar28 & 0x40000) == 0) {
                                if ((uVar28 & 0x20000) == 0) {
                                  if ((uVar28 & 0x10000) == 0) {
                                    if ((uVar28 & 0x8000) == 0) {
                                      uVar14 = (uVar28 & 0x7fff) >> 0xe;
                                    }
                                    else {
LAB_001159fe:
                                      uVar14 = 2;
                                    }
                                  }
                                  else {
LAB_001155d8:
                                    uVar14 = 3;
                                  }
                                }
                                else {
LAB_001155de:
                                  uVar14 = 4;
                                }
                              }
                              else {
LAB_001155e4:
                                uVar14 = 5;
                              }
                            }
                            else {
LAB_001155ea:
                              uVar14 = 6;
                            }
                          }
                          else {
LAB_001155f0:
                            uVar14 = 7;
                          }
                        }
                        else {
LAB_001155f6:
                          uVar14 = 8;
                        }
                      }
                      else {
LAB_001155fc:
                        uVar14 = 9;
                      }
                    }
                    else {
LAB_00115602:
                      uVar14 = 10;
                    }
                  }
                  else {
LAB_0011542c:
                    uVar14 = 0xb;
                  }
                }
                else {
LAB_00115432:
                  uVar14 = 0xc;
                }
              }
              else {
LAB_00115438:
                uVar14 = 0xd;
              }
            }
            else {
LAB_0011543e:
              uVar14 = 0xe;
            }
          }
          else {
LAB_001145e0:
            uVar14 = 0xf;
          }
        }
        else {
LAB_001145e6:
          uVar14 = 0x10;
        }
      }
      else {
LAB_001145da:
        uVar14 = 0x11;
      }
LAB_0010c5a2:
      uVar22 = 0;
      if (uVar24 != 0) {
        if ((uVar24 & 0x80000000) == 0x80000000) {
          if ((uVar24 & 0xffffc000) == 0xffffc000) {
            uVar22 = 0;
          }
          else {
            if (-1 < (int)(uVar24 << 1)) goto LAB_00114c9a;
            if (-1 < (int)(uVar24 << 2)) goto LAB_00114c94;
            if (-1 < (int)(uVar24 << 3)) goto LAB_00114c8e;
            if (-1 < (int)(uVar24 << 4)) goto LAB_00115f98;
            if (-1 < (int)(uVar24 << 5)) goto LAB_00115f62;
            if (-1 < (int)(uVar24 << 6)) goto LAB_00115f5c;
            if (-1 < (int)(uVar24 << 7)) goto LAB_00115f56;
            if (-1 < (int)(uVar24 << 8)) goto LAB_00115f50;
            if (-1 < (int)(uVar24 << 9)) goto LAB_00115f92;
            if (-1 < (int)(uVar24 << 10)) goto LAB_00115f8c;
            if (-1 < (int)(uVar24 << 0xb)) goto LAB_00115f86;
            if (-1 < (int)(uVar24 << 0xc)) goto LAB_00115f80;
            if (-1 < (int)(uVar24 << 0xd)) goto LAB_00115f7a;
            if (-1 < (int)(uVar24 << 0xe)) goto LAB_00115f74;
            if (-1 < (int)(uVar24 << 0xf)) goto LAB_00115f6e;
            if (-1 < (int)(uVar24 << 0x10)) goto LAB_00115f68;
            uVar22 = (uint)((uVar24 & 0x4000) == 0);
          }
        }
        else {
          uVar22 = 0;
          if ((uVar24 & 0xffffc000) != 0) {
            if ((int)(uVar24 << 1) < 0) {
LAB_00114c9a:
              uVar22 = 0x11;
            }
            else if ((int)(uVar24 << 2) < 0) {
LAB_00114c94:
              uVar22 = 0x10;
            }
            else if ((int)(uVar24 << 3) < 0) {
LAB_00114c8e:
              uVar22 = 0xf;
            }
            else if ((int)(uVar24 << 4) < 0) {
LAB_00115f98:
              uVar22 = 0xe;
            }
            else if ((int)(uVar24 << 5) < 0) {
LAB_00115f62:
              uVar22 = 0xd;
            }
            else if ((int)(uVar24 << 6) < 0) {
LAB_00115f5c:
              uVar22 = 0xc;
            }
            else if ((int)(uVar24 << 7) < 0) {
LAB_00115f56:
              uVar22 = 0xb;
            }
            else if ((int)(uVar24 << 8) < 0) {
LAB_00115f50:
              uVar22 = 10;
            }
            else if ((int)(uVar24 << 9) < 0) {
LAB_00115f92:
              uVar22 = 9;
            }
            else if ((int)(uVar24 << 10) < 0) {
LAB_00115f8c:
              uVar22 = 8;
            }
            else if ((int)(uVar24 << 0xb) < 0) {
LAB_00115f86:
              uVar22 = 7;
            }
            else if ((int)(uVar24 << 0xc) < 0) {
LAB_00115f80:
              uVar22 = 6;
            }
            else if ((int)(uVar24 << 0xd) < 0) {
LAB_00115f7a:
              uVar22 = 5;
            }
            else if ((int)(uVar24 << 0xe) < 0) {
LAB_00115f74:
              uVar22 = 4;
            }
            else if ((int)(uVar24 << 0xf) < 0) {
LAB_00115f6e:
              uVar22 = 3;
            }
            else if ((int)(uVar24 << 0x10) < 0) {
LAB_00115f68:
              uVar22 = 2;
            }
            else {
              uVar22 = (uVar24 & 0x7fff) >> 0xe;
            }
          }
        }
      }
      uVar11 = 0;
      if (uVar25 != 0) {
        if ((uVar25 & 0x80000000) == 0x80000000) {
          if ((uVar25 & 0xffffc000) == 0xffffc000) {
            uVar11 = 0;
          }
          else {
            if ((uVar25 & 0x40000000) == 0) goto LAB_0011472c;
            if ((uVar25 & 0x20000000) == 0) goto LAB_00114c10;
            if ((uVar25 & 0x10000000) == 0) goto LAB_00114c0a;
            if ((uVar25 & 0x8000000) == 0) goto LAB_001160aa;
            if ((uVar25 & 0x4000000) == 0) goto LAB_001160a4;
            if ((uVar25 & 0x2000000) == 0) goto LAB_0011609e;
            if ((uVar25 & 0x1000000) == 0) goto LAB_00116098;
            if ((uVar25 & 0x800000) == 0) goto LAB_001160da;
            if ((uVar25 & 0x400000) == 0) goto LAB_001160d4;
            if ((uVar25 & 0x200000) == 0) goto LAB_001160ce;
            if ((uVar25 & 0x100000) == 0) goto LAB_001160c8;
            if ((uVar25 & 0x80000) == 0) goto LAB_001160c2;
            if ((uVar25 & 0x40000) == 0) goto LAB_001160bc;
            if ((uVar25 & 0x20000) == 0) goto LAB_001160b6;
            if ((uVar25 & 0x10000) == 0) goto LAB_001160b0;
            if ((uVar25 & 0x8000) == 0) goto LAB_00115c6c;
            uVar11 = (uint)((uVar25 & 0x4000) == 0);
          }
        }
        else {
          uVar11 = 0;
          if ((uVar25 & 0xffffc000) != 0) {
            if ((uVar25 & 0x40000000) == 0) {
              if ((uVar25 & 0x20000000) == 0) {
                if ((uVar25 & 0x10000000) == 0) {
                  if ((uVar25 & 0x8000000) == 0) {
                    if ((uVar25 & 0x4000000) == 0) {
                      if ((uVar25 & 0x2000000) == 0) {
                        if ((uVar25 & 0x1000000) == 0) {
                          if ((uVar25 & 0x800000) == 0) {
                            if ((uVar25 & 0x400000) == 0) {
                              if ((uVar25 & 0x200000) == 0) {
                                if ((uVar25 & 0x100000) == 0) {
                                  if ((uVar25 & 0x80000) == 0) {
                                    if ((uVar25 & 0x40000) == 0) {
                                      if ((uVar25 & 0x20000) == 0) {
                                        if ((uVar25 & 0x10000) == 0) {
                                          if ((uVar25 & 0x8000) == 0) {
                                            uVar11 = (uVar25 & 0x7fff) >> 0xe;
                                          }
                                          else {
LAB_00115c6c:
                                            uVar11 = 2;
                                          }
                                        }
                                        else {
LAB_001160b0:
                                          uVar11 = 3;
                                        }
                                      }
                                      else {
LAB_001160b6:
                                        uVar11 = 4;
                                      }
                                    }
                                    else {
LAB_001160bc:
                                      uVar11 = 5;
                                    }
                                  }
                                  else {
LAB_001160c2:
                                    uVar11 = 6;
                                  }
                                }
                                else {
LAB_001160c8:
                                  uVar11 = 7;
                                }
                              }
                              else {
LAB_001160ce:
                                uVar11 = 8;
                              }
                            }
                            else {
LAB_001160d4:
                              uVar11 = 9;
                            }
                          }
                          else {
LAB_001160da:
                            uVar11 = 10;
                          }
                        }
                        else {
LAB_00116098:
                          uVar11 = 0xb;
                        }
                      }
                      else {
LAB_0011609e:
                        uVar11 = 0xc;
                      }
                    }
                    else {
LAB_001160a4:
                      uVar11 = 0xd;
                    }
                  }
                  else {
LAB_001160aa:
                    uVar11 = 0xe;
                  }
                }
                else {
LAB_00114c0a:
                  uVar11 = 0xf;
                }
              }
              else {
LAB_00114c10:
                uVar11 = 0x10;
              }
            }
            else {
LAB_0011472c:
              uVar11 = 0x11;
            }
          }
        }
      }
      if (uVar14 <= uVar22) {
        uVar14 = uVar22;
      }
      if (uVar11 <= uVar14) {
        uVar11 = uVar14;
      }
      switch(uVar11) {
      case 0:
        iVar5 = 1;
        break;
      case 1:
        iVar5 = 2;
        break;
      case 2:
        iVar5 = 4;
        break;
      case 3:
        iVar5 = 8;
        break;
      case 4:
        iVar5 = 0x10;
        break;
      case 5:
        iVar5 = 0x20;
        break;
      case 6:
        iVar5 = 0x40;
        break;
      case 7:
        iVar5 = 0x80;
        break;
      case 8:
        iVar5 = 0x100;
        break;
      case 9:
        iVar5 = 0x200;
        break;
      case 10:
        iVar5 = 0x400;
        break;
      case 0xb:
        iVar5 = 0x800;
        break;
      case 0xc:
        iVar5 = 0x1000;
        break;
      case 0xd:
        iVar5 = 0x2000;
        break;
      case 0xe:
        iVar5 = 0x4000;
        break;
      case 0xf:
        iVar5 = 0x8000;
        break;
      case 0x10:
        iVar5 = 0x10000;
        break;
      case 0x11:
        iVar5 = 0x20000;
        break;
      case 0x12:
        iVar5 = 0x40000;
        break;
      case 0x13:
        iVar5 = 0x80000;
        break;
      case 0x14:
        iVar5 = 0x100000;
        break;
      case 0x15:
        iVar5 = 0x200000;
        break;
      case 0x16:
        iVar5 = 0x400000;
        break;
      case 0x17:
        iVar5 = 0x800000;
        break;
      case 0x18:
        iVar5 = 0x1000000;
        break;
      case 0x19:
        iVar5 = 0x2000000;
        break;
      case 0x1a:
        iVar5 = 0x4000000;
        break;
      case 0x1b:
        iVar5 = 0x8000000;
        break;
      case 0x1c:
        iVar5 = 0x10000000;
        break;
      case 0x1d:
        iVar5 = 0x20000000;
        break;
      default:
        iVar5 = 0x40000000;
      }
      iVar6 = __divsi3(uVar28,iVar5);
      iVar7 = __divsi3(uVar24,iVar5);
      iVar15 = __divsi3(uVar25,iVar5);
      iVar6 = iVar15 * iVar15 + iVar6 * iVar6 + iVar7 * iVar7;
      if (iVar6 < 1) {
        iVar7 = 0;
      }
      else {
        iVar15 = iVar6;
        if (iVar6 == 0x7fffffff) {
          iVar6 = 0x7ffffffe;
          iVar15 = 0x7ffffffe;
        }
        do {
          iVar7 = __divsi3(iVar15,iVar6);
          iVar10 = (iVar6 + iVar7) / 2;
          iVar7 = iVar6;
          if (iVar6 <= iVar10) break;
          iVar6 = __divsi3(iVar15,iVar10);
          iVar6 = (iVar10 + iVar6) / 2;
          iVar7 = iVar10;
          if (iVar10 <= iVar6) break;
          iVar7 = __divsi3(iVar15,iVar6);
          iVar10 = (iVar6 + iVar7) / 2;
          iVar7 = iVar6;
          if (iVar6 <= iVar10) break;
          iVar6 = __divsi3(iVar15);
          iVar6 = (iVar10 + iVar6) / 2;
          iVar7 = iVar10;
          if (iVar10 <= iVar6) break;
          iVar7 = __divsi3(iVar15,iVar6);
          iVar10 = (iVar6 + iVar7) / 2;
          iVar7 = iVar6;
          if (iVar6 <= iVar10) break;
          iVar6 = __divsi3(iVar15,iVar10);
          iVar6 = (iVar10 + iVar6) / 2;
          iVar7 = iVar10;
          if (iVar10 <= iVar6) break;
          iVar7 = __divsi3(iVar15,iVar6);
          iVar10 = (iVar6 + iVar7) / 2;
          iVar7 = iVar6;
          if (iVar6 <= iVar10) break;
          iVar6 = __divsi3(iVar15);
          iVar6 = (iVar6 + iVar10) / 2;
          iVar7 = iVar10;
        } while (iVar6 < iVar10);
      }
      if ((int)uVar24 <= (int)uVar25) {
        uVar24 = uVar25;
      }
      if ((int)uVar28 <= (int)uVar24) {
        uVar28 = uVar24;
      }
      local_84 = iVar5 * iVar7;
      if (iVar5 * iVar7 <= (int)uVar28) {
        local_84 = uVar28;
      }
    }
    uVar28 = *(uint *)(param_2 + 0x8c);
    if (uVar28 == 0) {
      if ((*(int *)(param_2 + 0x90) != 0) || (uVar24 = 0, *(int *)(param_2 + 0x94) != 0)) {
        uVar24 = *(uint *)(param_2 + 0x90);
        uVar14 = 0;
        uVar25 = *(uint *)(param_2 + 0x94);
        goto LAB_0010c908;
      }
    }
    else {
      uVar24 = *(uint *)(param_2 + 0x90);
      uVar25 = *(uint *)(param_2 + 0x94);
      if ((uVar28 & 0x80000000) == 0x80000000) {
        if ((uVar28 & 0xffffc000) == 0xffffc000) {
          uVar14 = 0;
        }
        else {
          if ((uVar28 & 0x40000000) == 0) goto LAB_00114da6;
          if ((uVar28 & 0x20000000) == 0) goto LAB_001145c8;
          if ((uVar28 & 0x10000000) == 0) goto LAB_001145c2;
          if ((uVar28 & 0x8000000) == 0) goto LAB_001155ae;
          if ((uVar28 & 0x4000000) == 0) goto LAB_001155a8;
          if ((uVar28 & 0x2000000) == 0) goto LAB_001164e0;
          if ((uVar28 & 0x1000000) == 0) goto LAB_001164da;
          if ((uVar28 & 0x800000) == 0) goto LAB_001164d4;
          if ((uVar28 & 0x400000) == 0) goto LAB_001164ce;
          if ((uVar28 & 0x200000) == 0) goto LAB_001164c8;
          if ((uVar28 & 0x100000) == 0) goto LAB_001164c2;
          if ((uVar28 & 0x80000) == 0) goto LAB_001164bc;
          if ((uVar28 & 0x40000) == 0) goto LAB_001164b6;
          if ((uVar28 & 0x20000) == 0) goto LAB_00115626;
          if ((uVar28 & 0x10000) == 0) goto LAB_00115620;
          if ((uVar28 & 0x8000) == 0) goto LAB_0011562c;
          uVar14 = (uint)((uVar28 & 0x4000) == 0);
        }
      }
      else if ((uVar28 & 0xffffc000) == 0) {
        uVar14 = 0;
      }
      else if ((uVar28 & 0x40000000) == 0) {
        if ((uVar28 & 0x20000000) == 0) {
          if ((uVar28 & 0x10000000) == 0) {
            if ((uVar28 & 0x8000000) == 0) {
              if ((uVar28 & 0x4000000) == 0) {
                if ((uVar28 & 0x2000000) == 0) {
                  if ((uVar28 & 0x1000000) == 0) {
                    if ((uVar28 & 0x800000) == 0) {
                      if ((uVar28 & 0x400000) == 0) {
                        if ((uVar28 & 0x200000) == 0) {
                          if ((uVar28 & 0x100000) == 0) {
                            if ((uVar28 & 0x80000) == 0) {
                              if ((uVar28 & 0x40000) == 0) {
                                if ((uVar28 & 0x20000) == 0) {
                                  if ((uVar28 & 0x10000) == 0) {
                                    if ((uVar28 & 0x8000) == 0) {
                                      uVar14 = (uVar28 & 0x7fff) >> 0xe;
                                    }
                                    else {
LAB_0011562c:
                                      uVar14 = 2;
                                    }
                                  }
                                  else {
LAB_00115620:
                                    uVar14 = 3;
                                  }
                                }
                                else {
LAB_00115626:
                                  uVar14 = 4;
                                }
                              }
                              else {
LAB_001164b6:
                                uVar14 = 5;
                              }
                            }
                            else {
LAB_001164bc:
                              uVar14 = 6;
                            }
                          }
                          else {
LAB_001164c2:
                            uVar14 = 7;
                          }
                        }
                        else {
LAB_001164c8:
                          uVar14 = 8;
                        }
                      }
                      else {
LAB_001164ce:
                        uVar14 = 9;
                      }
                    }
                    else {
LAB_001164d4:
                      uVar14 = 10;
                    }
                  }
                  else {
LAB_001164da:
                    uVar14 = 0xb;
                  }
                }
                else {
LAB_001164e0:
                  uVar14 = 0xc;
                }
              }
              else {
LAB_001155a8:
                uVar14 = 0xd;
              }
            }
            else {
LAB_001155ae:
              uVar14 = 0xe;
            }
          }
          else {
LAB_001145c2:
            uVar14 = 0xf;
          }
        }
        else {
LAB_001145c8:
          uVar14 = 0x10;
        }
      }
      else {
LAB_00114da6:
        uVar14 = 0x11;
      }
LAB_0010c908:
      uVar22 = 0;
      if (uVar24 != 0) {
        if ((uVar24 & 0x80000000) == 0x80000000) {
          if ((uVar24 & 0xffffc000) == 0xffffc000) {
            uVar22 = 0;
          }
          else {
            if (-1 < (int)(uVar24 << 1)) goto LAB_00114c26;
            if (-1 < (int)(uVar24 << 2)) goto LAB_00114c1e;
            if (-1 < (int)(uVar24 << 3)) goto LAB_00114c16;
            if (-1 < (int)(uVar24 << 4)) goto LAB_00116010;
            if (-1 < (int)(uVar24 << 5)) goto LAB_00116030;
            if (-1 < (int)(uVar24 << 6)) goto LAB_00116028;
            if (-1 < (int)(uVar24 << 7)) goto LAB_00116020;
            if (-1 < (int)(uVar24 << 8)) goto LAB_00116018;
            if (-1 < (int)(uVar24 << 9)) goto LAB_00116070;
            if (-1 < (int)(uVar24 << 10)) goto LAB_00116068;
            if (-1 < (int)(uVar24 << 0xb)) goto LAB_00116060;
            if (-1 < (int)(uVar24 << 0xc)) goto LAB_00116058;
            if (-1 < (int)(uVar24 << 0xd)) goto LAB_00116050;
            if (-1 < (int)(uVar24 << 0xe)) goto LAB_00116048;
            if (-1 < (int)(uVar24 << 0xf)) goto LAB_00116040;
            if (-1 < (int)(uVar24 << 0x10)) goto LAB_00116038;
            uVar22 = (uint)((uVar24 & 0x4000) == 0);
          }
        }
        else {
          uVar22 = 0;
          if ((uVar24 & 0xffffc000) != 0) {
            if ((int)(uVar24 << 1) < 0) {
LAB_00114c26:
              uVar22 = 0x11;
            }
            else if ((int)(uVar24 << 2) < 0) {
LAB_00114c1e:
              uVar22 = 0x10;
            }
            else if ((int)(uVar24 << 3) < 0) {
LAB_00114c16:
              uVar22 = 0xf;
            }
            else if ((int)(uVar24 << 4) < 0) {
LAB_00116010:
              uVar22 = 0xe;
            }
            else if ((int)(uVar24 << 5) < 0) {
LAB_00116030:
              uVar22 = 0xd;
            }
            else if ((int)(uVar24 << 6) < 0) {
LAB_00116028:
              uVar22 = 0xc;
            }
            else if ((int)(uVar24 << 7) < 0) {
LAB_00116020:
              uVar22 = 0xb;
            }
            else if ((int)(uVar24 << 8) < 0) {
LAB_00116018:
              uVar22 = 10;
            }
            else if ((int)(uVar24 << 9) < 0) {
LAB_00116070:
              uVar22 = 9;
            }
            else if ((int)(uVar24 << 10) < 0) {
LAB_00116068:
              uVar22 = 8;
            }
            else if ((int)(uVar24 << 0xb) < 0) {
LAB_00116060:
              uVar22 = 7;
            }
            else if ((int)(uVar24 << 0xc) < 0) {
LAB_00116058:
              uVar22 = 6;
            }
            else if ((int)(uVar24 << 0xd) < 0) {
LAB_00116050:
              uVar22 = 5;
            }
            else if ((int)(uVar24 << 0xe) < 0) {
LAB_00116048:
              uVar22 = 4;
            }
            else if ((int)(uVar24 << 0xf) < 0) {
LAB_00116040:
              uVar22 = 3;
            }
            else if ((int)(uVar24 << 0x10) < 0) {
LAB_00116038:
              uVar22 = 2;
            }
            else {
              uVar22 = (uVar24 & 0x7fff) >> 0xe;
            }
          }
        }
      }
      uVar11 = 0;
      if (uVar25 != 0) {
        if ((uVar25 & 0x80000000) == 0x80000000) {
          if ((uVar25 & 0xffffc000) == 0xffffc000) {
            uVar11 = 0;
          }
          else {
            if ((uVar25 & 0x40000000) == 0) goto LAB_00114866;
            if ((uVar25 & 0x20000000) == 0) goto LAB_0011468e;
            if ((uVar25 & 0x10000000) == 0) goto LAB_00114688;
            if ((uVar25 & 0x8000000) == 0) goto LAB_00115406;
            if ((uVar25 & 0x4000000) == 0) goto LAB_00115400;
            if ((uVar25 & 0x2000000) == 0) goto LAB_001153fa;
            if ((uVar25 & 0x1000000) == 0) goto LAB_001153f4;
            if ((uVar25 & 0x800000) == 0) goto LAB_001153ee;
            if ((uVar25 & 0x400000) == 0) goto LAB_001153e8;
            if ((uVar25 & 0x200000) == 0) goto LAB_001153e2;
            if ((uVar25 & 0x100000) == 0) goto LAB_001153dc;
            if ((uVar25 & 0x80000) == 0) goto LAB_001153d6;
            if ((uVar25 & 0x40000) == 0) goto LAB_001153d0;
            if ((uVar25 & 0x20000) == 0) goto LAB_001153ca;
            if ((uVar25 & 0x10000) == 0) goto LAB_001153c4;
            if ((uVar25 & 0x8000) == 0) goto LAB_00115632;
            uVar11 = (uint)((uVar25 & 0x4000) == 0);
          }
        }
        else {
          uVar11 = 0;
          if ((uVar25 & 0xffffc000) != 0) {
            if ((uVar25 & 0x40000000) == 0) {
              if ((uVar25 & 0x20000000) == 0) {
                if ((uVar25 & 0x10000000) == 0) {
                  if ((uVar25 & 0x8000000) == 0) {
                    if ((uVar25 & 0x4000000) == 0) {
                      if ((uVar25 & 0x2000000) == 0) {
                        if ((uVar25 & 0x1000000) == 0) {
                          if ((uVar25 & 0x800000) == 0) {
                            if ((uVar25 & 0x400000) == 0) {
                              if ((uVar25 & 0x200000) == 0) {
                                if ((uVar25 & 0x100000) == 0) {
                                  if ((uVar25 & 0x80000) == 0) {
                                    if ((uVar25 & 0x40000) == 0) {
                                      if ((uVar25 & 0x20000) == 0) {
                                        if ((uVar25 & 0x10000) == 0) {
                                          if ((uVar25 & 0x8000) == 0) {
                                            uVar11 = (uVar25 & 0x7fff) >> 0xe;
                                          }
                                          else {
LAB_00115632:
                                            uVar11 = 2;
                                          }
                                        }
                                        else {
LAB_001153c4:
                                          uVar11 = 3;
                                        }
                                      }
                                      else {
LAB_001153ca:
                                        uVar11 = 4;
                                      }
                                    }
                                    else {
LAB_001153d0:
                                      uVar11 = 5;
                                    }
                                  }
                                  else {
LAB_001153d6:
                                    uVar11 = 6;
                                  }
                                }
                                else {
LAB_001153dc:
                                  uVar11 = 7;
                                }
                              }
                              else {
LAB_001153e2:
                                uVar11 = 8;
                              }
                            }
                            else {
LAB_001153e8:
                              uVar11 = 9;
                            }
                          }
                          else {
LAB_001153ee:
                            uVar11 = 10;
                          }
                        }
                        else {
LAB_001153f4:
                          uVar11 = 0xb;
                        }
                      }
                      else {
LAB_001153fa:
                        uVar11 = 0xc;
                      }
                    }
                    else {
LAB_00115400:
                      uVar11 = 0xd;
                    }
                  }
                  else {
LAB_00115406:
                    uVar11 = 0xe;
                  }
                }
                else {
LAB_00114688:
                  uVar11 = 0xf;
                }
              }
              else {
LAB_0011468e:
                uVar11 = 0x10;
              }
            }
            else {
LAB_00114866:
              uVar11 = 0x11;
            }
          }
        }
      }
      if (uVar14 <= uVar22) {
        uVar14 = uVar22;
      }
      if (uVar11 <= uVar14) {
        uVar11 = uVar14;
      }
      switch(uVar11) {
      case 0:
        iVar5 = 1;
        break;
      case 1:
        iVar5 = 2;
        break;
      case 2:
        iVar5 = 4;
        break;
      case 3:
        iVar5 = 8;
        break;
      case 4:
        iVar5 = 0x10;
        break;
      case 5:
        iVar5 = 0x20;
        break;
      case 6:
        iVar5 = 0x40;
        break;
      case 7:
        iVar5 = 0x80;
        break;
      case 8:
        iVar5 = 0x100;
        break;
      case 9:
        iVar5 = 0x200;
        break;
      case 10:
        iVar5 = 0x400;
        break;
      case 0xb:
        iVar5 = 0x800;
        break;
      case 0xc:
        iVar5 = 0x1000;
        break;
      case 0xd:
        iVar5 = 0x2000;
        break;
      case 0xe:
        iVar5 = 0x4000;
        break;
      case 0xf:
        iVar5 = 0x8000;
        break;
      case 0x10:
        iVar5 = 0x10000;
        break;
      case 0x11:
        iVar5 = 0x20000;
        break;
      case 0x12:
        iVar5 = 0x40000;
        break;
      case 0x13:
        iVar5 = 0x80000;
        break;
      case 0x14:
        iVar5 = 0x100000;
        break;
      case 0x15:
        iVar5 = 0x200000;
        break;
      case 0x16:
        iVar5 = 0x400000;
        break;
      case 0x17:
        iVar5 = 0x800000;
        break;
      case 0x18:
        iVar5 = 0x1000000;
        break;
      case 0x19:
        iVar5 = 0x2000000;
        break;
      case 0x1a:
        iVar5 = 0x4000000;
        break;
      case 0x1b:
        iVar5 = 0x8000000;
        break;
      case 0x1c:
        iVar5 = 0x10000000;
        break;
      case 0x1d:
        iVar5 = 0x20000000;
        break;
      default:
        iVar5 = 0x40000000;
      }
      iVar6 = __divsi3(uVar28,iVar5);
      iVar7 = __divsi3(uVar24,iVar5);
      iVar15 = __divsi3(uVar25,iVar5);
      iVar6 = iVar15 * iVar15 + iVar6 * iVar6 + iVar7 * iVar7;
      if (iVar6 < 1) {
        iVar7 = 0;
      }
      else {
        iVar15 = iVar6;
        if (iVar6 == 0x7fffffff) {
          iVar6 = 0x7ffffffe;
          iVar15 = 0x7ffffffe;
        }
        do {
          iVar7 = __divsi3(iVar15,iVar6);
          iVar10 = (iVar6 + iVar7) / 2;
          iVar7 = iVar6;
          if (iVar6 <= iVar10) break;
          iVar6 = __divsi3(iVar15,iVar10);
          iVar6 = (iVar10 + iVar6) / 2;
          iVar7 = iVar10;
          if (iVar10 <= iVar6) break;
          iVar7 = __divsi3(iVar15,iVar6);
          iVar10 = (iVar6 + iVar7) / 2;
          iVar7 = iVar6;
          if (iVar6 <= iVar10) break;
          iVar6 = __divsi3(iVar15);
          iVar6 = (iVar10 + iVar6) / 2;
          iVar7 = iVar10;
          if (iVar10 <= iVar6) break;
          iVar7 = __divsi3(iVar15,iVar6);
          iVar10 = (iVar6 + iVar7) / 2;
          iVar7 = iVar6;
          if (iVar6 <= iVar10) break;
          iVar6 = __divsi3(iVar15,iVar10);
          iVar6 = (iVar10 + iVar6) / 2;
          iVar7 = iVar10;
          if (iVar10 <= iVar6) break;
          iVar7 = __divsi3(iVar15,iVar6);
          iVar10 = (iVar6 + iVar7) / 2;
          iVar7 = iVar6;
          if (iVar6 <= iVar10) break;
          iVar6 = __divsi3(iVar15,iVar10);
          iVar6 = (iVar6 + iVar10) / 2;
          iVar7 = iVar10;
        } while (iVar6 < iVar10);
      }
      if ((int)uVar24 <= (int)uVar25) {
        uVar24 = uVar25;
      }
      if ((int)uVar28 <= (int)uVar24) {
        uVar28 = uVar24;
      }
      uVar24 = iVar5 * iVar7;
      if (iVar5 * iVar7 <= (int)uVar28) {
        uVar24 = uVar28;
      }
    }
    local_84 = local_84 - uVar24;
    if (local_84 == 0) {
LAB_0010cf60:
      iVar5 = 1;
    }
    else {
      if ((local_84 & 0x80000000) == 0x80000000) {
        if ((local_84 & 0xffff8000) != 0xffff8000) {
          if (-1 < (int)(local_84 * 2)) goto LAB_0011476a;
          if (-1 < (int)(local_84 * 4)) goto LAB_00114762;
          if (-1 < (int)(local_84 * 8)) goto LAB_00114628;
          if (-1 < (int)(local_84 * 0x10)) goto LAB_00114620;
          if (-1 < (int)(local_84 * 0x20)) goto LAB_00114618;
          if (-1 < (int)(local_84 * 0x40)) goto LAB_00114610;
          if (-1 < (int)(local_84 * 0x80)) goto LAB_00114608;
          if (-1 < (int)(local_84 * 0x100)) goto LAB_0011546a;
          if (-1 < (int)(local_84 * 0x200)) goto LAB_0011547a;
          if (-1 < (int)(local_84 * 0x400)) goto LAB_00115472;
          if (-1 < (int)(local_84 * 0x800)) goto LAB_0011545c;
          if (-1 < (int)(local_84 * 0x1000)) goto LAB_00115454;
          if (-1 < (int)(local_84 * 0x2000)) goto LAB_0011544c;
          if (-1 < (int)(local_84 * 0x4000)) goto LAB_00115444;
          if (-1 < (int)(local_84 * 0x8000)) goto LAB_00115668;
          uVar28 = (uint)((local_84 & 0x8000) == 0);
          goto LAB_0010ccc6;
        }
        goto LAB_0010cf60;
      }
      if ((local_84 & 0xffff8000) == 0) goto LAB_0010cf60;
      if ((int)(local_84 * 2) < 0) {
LAB_0011476a:
        uVar28 = 0x10;
      }
      else if ((int)(local_84 * 4) < 0) {
LAB_00114762:
        uVar28 = 0xf;
      }
      else if ((int)(local_84 * 8) < 0) {
LAB_00114628:
        uVar28 = 0xe;
      }
      else if ((int)(local_84 * 0x10) < 0) {
LAB_00114620:
        uVar28 = 0xd;
      }
      else if ((int)(local_84 * 0x20) < 0) {
LAB_00114618:
        uVar28 = 0xc;
      }
      else if ((int)(local_84 * 0x40) < 0) {
LAB_00114610:
        uVar28 = 0xb;
      }
      else if ((int)(local_84 * 0x80) < 0) {
LAB_00114608:
        uVar28 = 10;
      }
      else if ((int)(local_84 * 0x100) < 0) {
LAB_0011546a:
        uVar28 = 9;
      }
      else if ((int)(local_84 * 0x200) < 0) {
LAB_0011547a:
        uVar28 = 8;
      }
      else if ((int)(local_84 * 0x400) < 0) {
LAB_00115472:
        uVar28 = 7;
      }
      else if ((int)(local_84 * 0x800) < 0) {
LAB_0011545c:
        uVar28 = 6;
      }
      else if ((int)(local_84 * 0x1000) < 0) {
LAB_00115454:
        uVar28 = 5;
      }
      else if ((int)(local_84 * 0x2000) < 0) {
LAB_0011544c:
        uVar28 = 4;
      }
      else if ((int)(local_84 * 0x4000) < 0) {
LAB_00115444:
        uVar28 = 3;
      }
      else if ((int)(local_84 * 0x8000) < 0) {
LAB_00115668:
        uVar28 = 2;
      }
      else {
        uVar28 = (local_84 & 0xffff) >> 0xf;
      }
LAB_0010ccc6:
      switch(uVar28) {
      case 1:
        iVar5 = 2;
        break;
      case 2:
        iVar5 = 4;
        break;
      case 3:
        iVar5 = 8;
        break;
      case 4:
        iVar5 = 0x10;
        break;
      case 5:
        iVar5 = 0x20;
        break;
      case 6:
        iVar5 = 0x40;
        break;
      case 7:
        iVar5 = 0x80;
        break;
      case 8:
        iVar5 = 0x100;
        break;
      case 9:
        iVar5 = 0x200;
        break;
      case 10:
        iVar5 = 0x400;
        break;
      case 0xb:
        iVar5 = 0x800;
        break;
      case 0xc:
        iVar5 = 0x1000;
        break;
      case 0xd:
        iVar5 = 0x2000;
        break;
      case 0xe:
        iVar5 = 0x4000;
        break;
      case 0xf:
        iVar5 = 0x8000;
        break;
      case 0x10:
        iVar5 = 0x10000;
        break;
      default:
        goto LAB_0010cf60;
      }
    }
    iVar6 = __divsi3(local_84,iVar5);
    iVar6 = __divsi3(local_70 * iVar6,local_6c);
    uVar24 = iVar5 * iVar6 + uVar24;
    if (uVar24 == 0) {
LAB_0010cf64:
      iVar5 = 1;
    }
    else {
      if ((uVar24 & 0x80000000) == 0x80000000) {
        if ((uVar24 & 0xffff8000) != 0xffff8000) {
          if (-1 < (int)(uVar24 * 2)) goto LAB_00114c02;
          if (-1 < (int)(uVar24 * 4)) goto LAB_00114bfa;
          if (-1 < (int)(uVar24 * 8)) goto LAB_00114670;
          if (-1 < (int)(uVar24 * 0x10)) goto LAB_00114668;
          if (-1 < (int)(uVar24 * 0x20)) goto LAB_00114660;
          if (-1 < (int)(uVar24 * 0x40)) goto LAB_00114658;
          if (-1 < (int)(uVar24 * 0x80)) goto LAB_00114650;
          if (-1 < (int)(uVar24 * 0x100)) goto LAB_00115cc8;
          if (-1 < (int)(uVar24 * 0x200)) goto LAB_00115188;
          if (-1 < (int)(uVar24 * 0x400)) goto LAB_00115180;
          if (-1 < (int)(uVar24 * 0x800)) goto LAB_0011549a;
          if (-1 < (int)(uVar24 * 0x1000)) goto LAB_00115492;
          if (-1 < (int)(uVar24 * 0x2000)) goto LAB_0011548a;
          if (-1 < (int)(uVar24 * 0x4000)) goto LAB_00115482;
          if (-1 < (int)(uVar24 * 0x8000)) goto LAB_00115a04;
          uVar28 = (uint)((uVar24 & 0x8000) == 0);
          goto LAB_0010cd8c;
        }
        goto LAB_0010cf64;
      }
      if ((uVar24 & 0xffff8000) == 0) goto LAB_0010cf64;
      if ((int)(uVar24 * 2) < 0) {
LAB_00114c02:
        uVar28 = 0x10;
      }
      else if ((int)(uVar24 * 4) < 0) {
LAB_00114bfa:
        uVar28 = 0xf;
      }
      else if ((int)(uVar24 * 8) < 0) {
LAB_00114670:
        uVar28 = 0xe;
      }
      else if ((int)(uVar24 * 0x10) < 0) {
LAB_00114668:
        uVar28 = 0xd;
      }
      else if ((int)(uVar24 * 0x20) < 0) {
LAB_00114660:
        uVar28 = 0xc;
      }
      else if ((int)(uVar24 * 0x40) < 0) {
LAB_00114658:
        uVar28 = 0xb;
      }
      else if ((int)(uVar24 * 0x80) < 0) {
LAB_00114650:
        uVar28 = 10;
      }
      else if ((int)(uVar24 * 0x100) < 0) {
LAB_00115cc8:
        uVar28 = 9;
      }
      else if ((int)(uVar24 * 0x200) < 0) {
LAB_00115188:
        uVar28 = 8;
      }
      else if ((int)(uVar24 * 0x400) < 0) {
LAB_00115180:
        uVar28 = 7;
      }
      else if ((int)(uVar24 * 0x800) < 0) {
LAB_0011549a:
        uVar28 = 6;
      }
      else if ((int)(uVar24 * 0x1000) < 0) {
LAB_00115492:
        uVar28 = 5;
      }
      else if ((int)(uVar24 * 0x2000) < 0) {
LAB_0011548a:
        uVar28 = 4;
      }
      else if ((int)(uVar24 * 0x4000) < 0) {
LAB_00115482:
        uVar28 = 3;
      }
      else if ((int)(uVar24 * 0x8000) < 0) {
LAB_00115a04:
        uVar28 = 2;
      }
      else {
        uVar28 = (uVar24 & 0xffff) >> 0xf;
      }
LAB_0010cd8c:
      switch(uVar28) {
      case 1:
        iVar5 = 2;
        break;
      case 2:
        iVar5 = 4;
        break;
      case 3:
        iVar5 = 8;
        break;
      case 4:
        iVar5 = 0x10;
        break;
      case 5:
        iVar5 = 0x20;
        break;
      case 6:
        iVar5 = 0x40;
        break;
      case 7:
        iVar5 = 0x80;
        break;
      case 8:
        iVar5 = 0x100;
        break;
      case 9:
        iVar5 = 0x200;
        break;
      case 10:
        iVar5 = 0x400;
        break;
      case 0xb:
        iVar5 = 0x800;
        break;
      case 0xc:
        iVar5 = 0x1000;
        break;
      case 0xd:
        iVar5 = 0x2000;
        break;
      case 0xe:
        iVar5 = 0x4000;
        break;
      case 0xf:
        iVar5 = 0x8000;
        break;
      case 0x10:
        iVar5 = 0x10000;
        break;
      default:
        goto LAB_0010cf64;
      }
    }
    *(int *)(param_2 + 0x9c) = iVar5 * ((int)(*(int *)(param_2 + 0x9c) * uVar24) / 0x7fff);
    *(int *)(param_2 + 0x98) = iVar5 * ((int)(*(int *)(param_2 + 0x98) * uVar24) / 0x7fff);
    *(int *)(param_2 + 0xa0) = iVar5 * ((int)(*(int *)(param_2 + 0xa0) * uVar24) / 0x7fff);
    *(undefined4 *)(param_2 + 0x1c4) = *(undefined4 *)(param_2 + 0x98);
    *(undefined4 *)(param_2 + 0x1c8) = *(undefined4 *)(param_2 + 0x9c);
    *(undefined4 *)(param_2 + 0x1cc) = *(undefined4 *)(param_2 + 0xa0);
    local_74 = *(uint *)(param_2 + 0xec);
    local_80 = *(int *)(param_2 + 0xf0);
  }
LAB_001054de:
  if ((uVar31 & 0x4000) != 0) {
    iVar5 = *(int *)(param_2 + 0xf8);
    if ((int)local_74 < 1) {
LAB_00105d84:
      p_Var30 = param_2 + 0xa4;
    }
    else {
      if (0 < local_80) {
        if ((int)local_74 <= local_80) goto LAB_00105d84;
        iVar6 = *(int *)(param_2 + 0x1d0);
        if (iVar6 == 0x7fffffff) {
          p_Var30 = param_2 + 0x1d8;
          local_34 = *(uint *)(param_2 + 0xa4);
          local_30 = *(uint *)(param_2 + 0xa8);
          local_2c = *(uint *)(param_2 + 0xac);
          *(undefined4 *)p_Var30 = *(undefined4 *)(param_2 + 0xb0);
          *(undefined4 *)(param_2 + 0x1dc) = *(undefined4 *)(param_2 + 0xb4);
          *(undefined4 *)(param_2 + 0x1e0) = *(undefined4 *)(param_2 + 0xb8);
          iVar6 = FUN_00101094(&local_34);
          if (iVar6 == 0) {
            local_34 = 0;
            local_30 = 0;
            local_2c = 0;
          }
          else {
            FUN_00100b5c(&local_34,iVar6);
          }
          iVar6 = FUN_00101094(p_Var30);
          if (iVar6 == 0) {
            *(undefined4 *)(param_2 + 0x1d8) = 0;
            *(undefined4 *)(param_2 + 0x1dc) = 0;
            *(undefined4 *)(param_2 + 0x1e0) = 0;
          }
          else {
            FUN_00100b5c(p_Var30,iVar6);
          }
          iVar6 = FUN_00102354(&local_34,p_Var30);
          *(int *)(param_2 + 0x1d0) = iVar6;
          if (iVar6 == 0) {
            *(undefined4 *)(param_2 + 0x1e4) = 0;
            *(undefined4 *)(param_2 + 0x1e8) = 0;
            *(undefined4 *)(param_2 + 0x1ec) = 0;
          }
          else {
            *(uint *)(param_2 + 0x1e4) =
                 local_2c * *(int *)(param_2 + 0x1dc) - local_30 * *(int *)(param_2 + 0x1e0);
            *(uint *)(param_2 + 0x1e8) =
                 local_34 * *(int *)(param_2 + 0x1e0) - *(int *)(param_2 + 0x1d8) * local_2c;
            *(uint *)(param_2 + 0x1ec) =
                 *(int *)(param_2 + 0x1d8) * local_30 - local_34 * *(int *)(param_2 + 0x1dc);
            FUN_00101730(param_2 + 0x1e4);
          }
          iVar6 = *(int *)(param_2 + 0x1d0);
          *(undefined4 *)(param_2 + 0x1d4) = 0x7fffffff;
        }
        local_6c = local_80;
        local_68 = local_74;
        if (iVar6 == 0) {
          if (1 < iVar5) {
            local_6c = __divsi3(local_80,iVar5);
            local_68 = __divsi3(local_74,iVar5);
          }
          iVar6 = *(int *)(param_2 + 0xb8);
          iVar15 = *(int *)(param_2 + 0xb0);
          iVar3 = *(int *)(param_2 + 0xa4) - iVar15;
          iVar10 = *(int *)(param_2 + 0xb4);
          iVar5 = *(int *)(param_2 + 0xa8) - iVar10;
          iVar7 = *(int *)(param_2 + 0xac) - iVar6;
          if (iVar3 != 0) {
            FUN_00100a74(iVar3);
          }
          iVar32 = FUN_001008e4();
          iVar3 = __divsi3(iVar3,iVar32);
          iVar3 = __divsi3(local_6c * iVar3,local_68);
          if (iVar5 != 0) {
            FUN_00100a74(iVar5);
          }
          iVar1 = FUN_001008e4();
          iVar5 = __divsi3(iVar5,iVar1);
          iVar5 = __divsi3(iVar5 * local_6c,local_68);
          if (iVar7 != 0) {
            FUN_00100a74(iVar7);
          }
          iVar2 = FUN_001008e4();
          *(int *)(param_2 + 0xc0) = iVar5 * iVar1 + iVar10;
          *(int *)(param_2 + 0xbc) = iVar15 + iVar3 * iVar32;
          iVar5 = __divsi3(iVar7,iVar2);
          iVar5 = __divsi3(iVar5 * local_6c,local_68);
          local_74 = *(uint *)(param_2 + 0xec);
          local_80 = *(int *)(param_2 + 0xf0);
          *(int *)(param_2 + 0xc4) = iVar5 * iVar2 + iVar6;
          goto LAB_001054e8;
        }
        iVar7 = *(int *)(param_2 + 0x1e4);
        if (((iVar7 == 0) && (*(int *)(param_2 + 0x1e8) == 0)) && (*(int *)(param_2 + 0x1ec) == 0))
        {
          if (local_80 <= (int)local_74 >> 1) goto LAB_00105a7e;
          goto LAB_00105d84;
        }
        iVar6 = __divsi3(iVar6 * local_80,local_74);
        if (iVar6 == *(int *)(param_2 + 0x1d4)) {
          p_Var30 = param_2 + 0x1f0;
          goto LAB_00105a82;
        }
        *(int *)(param_2 + 0x1d4) = iVar6;
        iVar6 = iVar6 / 2;
        iVar15 = iVar6;
        if (iVar6 < 0xb5) {
          if (iVar6 < -0xb4) {
            iVar6 = -0xb4;
LAB_0010a870:
            uVar28 = -*(int *)(DAT_0010b43c + iVar6 * 4 + 0x10b3c8);
            goto LAB_0010a880;
          }
          if (iVar6 < -0x59) goto LAB_0010a870;
          if (iVar6 < 0) {
            uVar28 = -*(int *)(DAT_00111644 + iVar6 * -4 + 0x111428);
          }
          else {
            iVar10 = iVar6;
            if (0x5a < iVar6) goto LAB_0010d180;
            uVar28 = *(uint *)(DAT_00111660 + iVar6 * 4 + 0x11156a);
          }
LAB_00110bb0:
          iVar6 = iVar15 + 0x5a;
          if (0xb4 < iVar6) {
LAB_0010d19c:
            iVar6 = iVar15 + -0x10e;
            if (iVar6 < -0xb4) {
              iVar6 = -0xb4;
              goto LAB_0010a88e;
            }
          }
          if (iVar6 < -0x59) goto LAB_0010a88e;
          if (iVar6 < 0) {
            uVar24 = -*(int *)(DAT_001124c4 + iVar6 * -4 + 0x11299a);
          }
          else if (iVar6 < 0x5b) {
            uVar24 = *(uint *)(DAT_0011165c + iVar6 * 4 + 0x111558);
          }
          else {
            uVar24 = *(uint *)(DAT_0010ddd8 + (0xb4 - iVar6) * 4 + 0x10da4e);
          }
        }
        else {
          iVar10 = 0xb4;
LAB_0010d180:
          if (0xb4 < iVar6) {
            iVar15 = 0xb4;
          }
          uVar28 = *(uint *)(DAT_0010ddd4 + (0xb4 - iVar10) * 4 + 0x10da0e);
          if (0xb4 < iVar6) goto LAB_0010d19c;
LAB_0010a880:
          if (-0xb5 < iVar15) goto LAB_00110bb0;
          iVar6 = -0x5a;
LAB_0010a88e:
          uVar24 = -*(int *)(DAT_0010b440 + iVar6 * 4 + 0x10b3e6);
        }
        uVar25 = uVar28 + 3 & (int)uVar28 >> 0x20;
        if (uVar28 < 0xfffffffd) {
          uVar25 = uVar28;
        }
        iVar6 = (int)uVar25 >> 2;
        uVar28 = uVar24 & ~((int)uVar24 >> 0x20);
        if ((int)uVar24 < 0) {
          uVar28 = uVar24 + 3;
        }
        iVar27 = *(int *)(param_2 + 0x1d8);
        iVar15 = (int)uVar28 >> 2;
        iVar16 = *(int *)(param_2 + 0x1e0);
        iVar32 = (*(int *)(param_2 + 0x1e8) * iVar6) / 0x7fff;
        iVar1 = (iVar6 * iVar7) / 0x7fff;
        iVar2 = (*(int *)(param_2 + 0x1ec) * iVar6) / 0x7fff;
        iVar6 = -iVar32;
        iVar12 = *(int *)(param_2 + 0x1dc);
        iVar7 = -iVar1;
        iVar10 = -iVar2;
        iVar3 = -(iVar16 * iVar2 + iVar27 * iVar1 + *(int *)(param_2 + 0x1dc) * iVar32);
        iVar29 = iVar27 * iVar15 + (iVar16 * iVar32 - iVar12 * iVar2);
        iVar2 = iVar12 * iVar15 + (iVar27 * iVar2 - iVar16 * iVar1);
        iVar1 = iVar16 * iVar15 + (iVar12 * iVar1 - iVar27 * iVar32);
        iVar32 = 0;
        if (iVar3 != 0) {
          iVar32 = FUN_00100a74(iVar3);
        }
        iVar27 = 0;
        if (iVar29 != 0) {
          iVar27 = FUN_00100a74();
        }
        if (iVar32 <= iVar27) {
          iVar32 = iVar27;
        }
        iVar27 = 0;
        if (iVar2 != 0) {
          iVar27 = FUN_00100a74();
        }
        if (iVar32 < iVar27) {
          iVar32 = iVar27;
        }
        iVar27 = 0;
        if (iVar1 != 0) {
          iVar27 = FUN_00100a74();
        }
        if (iVar27 <= iVar32) {
          iVar27 = iVar32;
        }
        p_Var30 = param_2 + 0xbc;
        uVar23 = FUN_001008e4(iVar27);
        iVar3 = __divsi3(iVar3,uVar23);
        iVar32 = __divsi3(iVar29,uVar23);
        iVar2 = __divsi3(iVar2,uVar23);
        iVar1 = __divsi3(iVar1,uVar23);
        *(int *)(param_2 + 0xbc) =
             (iVar2 * iVar10 - iVar1 * iVar6) + iVar3 * iVar7 + iVar32 * iVar15;
        *(int *)(param_2 + 0xc4) =
             (iVar32 * iVar6 - iVar2 * iVar7) + iVar3 * iVar10 + iVar1 * iVar15;
        *(int *)(param_2 + 0xc0) =
             (iVar1 * iVar7 - iVar32 * iVar10) + iVar3 * iVar6 + iVar2 * iVar15;
        iVar6 = FUN_00101094(p_Var30);
        if (iVar6 == 0) {
          *(undefined4 *)(param_2 + 0xbc) = 0;
          *(undefined4 *)(param_2 + 0xc0) = 0;
          *(undefined4 *)(param_2 + 0xc4) = 0;
        }
        else {
          FUN_00100b5c(p_Var30,iVar6);
        }
        if (1 < iVar5) {
          local_6c = __divsi3(local_80);
          local_68 = __divsi3(local_74,iVar5);
        }
        iVar5 = FUN_00101094(param_2 + 0xa4);
        iVar6 = FUN_00101094(param_2 + 0xb0);
        iVar5 = iVar5 - iVar6;
        if (iVar5 != 0) {
          FUN_00100a74(iVar5);
        }
        iVar7 = FUN_001008e4();
        iVar5 = __divsi3(iVar5,iVar7);
        iVar5 = __divsi3(local_6c * iVar5,local_68);
        iVar6 = iVar5 * iVar7 + iVar6;
        if (iVar6 != 0) {
          FUN_00100a74(iVar6);
        }
        iVar5 = FUN_001008e4();
        *(int *)(param_2 + 0xc0) = ((*(int *)(param_2 + 0xc0) * iVar6) / 0x7fff) * iVar5;
        *(int *)(param_2 + 0xbc) = ((*(int *)(param_2 + 0xbc) * iVar6) / 0x7fff) * iVar5;
        *(int *)(param_2 + 0xc4) = ((*(int *)(param_2 + 0xc4) * iVar6) / 0x7fff) * iVar5;
        *(undefined4 *)(param_2 + 0x1f0) = *(undefined4 *)p_Var30;
        *(undefined4 *)(param_2 + 500) = *(undefined4 *)(param_2 + 0xc0);
        *(undefined4 *)(param_2 + 0x1f8) = *(undefined4 *)(param_2 + 0xc4);
        local_74 = *(uint *)(param_2 + 0xec);
        local_80 = *(int *)(param_2 + 0xf0);
        goto LAB_001054e8;
      }
LAB_00105a7e:
      p_Var30 = param_2 + 0xb0;
    }
LAB_00105a82:
    uVar23 = *(undefined4 *)(p_Var30 + 4);
    uVar4 = *(undefined4 *)(p_Var30 + 8);
    *(undefined4 *)(param_2 + 0xbc) = *(undefined4 *)p_Var30;
    *(undefined4 *)(param_2 + 0xc0) = uVar23;
    *(undefined4 *)(param_2 + 0xc4) = uVar4;
    local_74 = *(uint *)(param_2 + 0xec);
    local_80 = *(int *)(param_2 + 0xf0);
  }
LAB_001054e8:
  if ((uVar31 & 0x1008) != 0) {
    iVar5 = *(int *)(param_2 + 0xf8);
    if ((int)local_74 < 1) {
LAB_00105d96:
      p_Var30 = param_2 + 200;
    }
    else {
      if (0 < local_80) {
        if ((int)local_74 <= local_80) goto LAB_00105d96;
        iVar6 = local_80;
        iVar7 = local_74;
        if (1 < iVar5) {
          iVar6 = __divsi3(local_80,iVar5);
          iVar7 = __divsi3(local_74,iVar5);
        }
        iVar5 = *(int *)(param_2 + 0xd8);
        iVar15 = *(int *)(param_2 + 0xdc);
        iVar32 = *(int *)(param_2 + 0xd4);
        iVar3 = *(int *)(param_2 + 0xcc) - iVar5;
        iVar10 = *(int *)(param_2 + 200) - iVar32;
        uVar28 = *(int *)(param_2 + 0xd0) - iVar15;
        if (iVar10 == 0) {
LAB_0010bc78:
          iVar1 = 1;
        }
        else {
          iVar1 = FUN_00100a74(iVar10);
          switch(iVar1) {
          case 0:
            goto LAB_0010bc78;
          case 1:
            iVar1 = 2;
            break;
          case 2:
            iVar1 = 4;
            break;
          case 3:
            iVar1 = 8;
            break;
          case 4:
            iVar1 = 0x10;
            break;
          case 5:
            iVar1 = 0x20;
            break;
          case 6:
            iVar1 = 0x40;
            break;
          case 7:
            iVar1 = 0x80;
            break;
          case 8:
            iVar1 = 0x100;
            break;
          case 9:
            iVar1 = 0x200;
            break;
          case 10:
            iVar1 = 0x400;
            break;
          case 0xb:
            iVar1 = 0x800;
            break;
          case 0xc:
            iVar1 = 0x1000;
            break;
          case 0xd:
            iVar1 = 0x2000;
            break;
          case 0xe:
            iVar1 = 0x4000;
            break;
          case 0xf:
            iVar1 = 0x8000;
            break;
          case 0x10:
            iVar1 = 0x10000;
            break;
          case 0x11:
            iVar1 = 0x20000;
            break;
          case 0x12:
            iVar1 = 0x40000;
            break;
          case 0x13:
            iVar1 = 0x80000;
            break;
          case 0x14:
            iVar1 = 0x100000;
            break;
          case 0x15:
            iVar1 = 0x200000;
            break;
          case 0x16:
            iVar1 = 0x400000;
            break;
          case 0x17:
            iVar1 = 0x800000;
            break;
          case 0x18:
            iVar1 = 0x1000000;
            break;
          case 0x19:
            iVar1 = 0x2000000;
            break;
          case 0x1a:
            iVar1 = 0x4000000;
            break;
          case 0x1b:
            iVar1 = 0x8000000;
            break;
          case 0x1c:
            iVar1 = 0x10000000;
            break;
          case 0x1d:
            iVar1 = 0x20000000;
            break;
          case 0x1e:
            iVar1 = 0x40000000;
            break;
          default:
            if (iVar1 < 0) {
              iVar1 = 1;
            }
            else {
              iVar1 = 0x40000000;
            }
          }
        }
        iVar10 = __divsi3(iVar10,iVar1);
        iVar10 = __divsi3(iVar6 * iVar10,iVar7);
        if (iVar3 == 0) {
LAB_0010bc88:
          iVar2 = 1;
        }
        else {
          iVar2 = FUN_00100a74(iVar3);
          switch(iVar2) {
          case 0:
            goto LAB_0010bc88;
          case 1:
            iVar2 = 2;
            break;
          case 2:
            iVar2 = 4;
            break;
          case 3:
            iVar2 = 8;
            break;
          case 4:
            iVar2 = 0x10;
            break;
          case 5:
            iVar2 = 0x20;
            break;
          case 6:
            iVar2 = 0x40;
            break;
          case 7:
            iVar2 = 0x80;
            break;
          case 8:
            iVar2 = 0x100;
            break;
          case 9:
            iVar2 = 0x200;
            break;
          case 10:
            iVar2 = 0x400;
            break;
          case 0xb:
            iVar2 = 0x800;
            break;
          case 0xc:
            iVar2 = 0x1000;
            break;
          case 0xd:
            iVar2 = 0x2000;
            break;
          case 0xe:
            iVar2 = 0x4000;
            break;
          case 0xf:
            iVar2 = 0x8000;
            break;
          case 0x10:
            iVar2 = 0x10000;
            break;
          case 0x11:
            iVar2 = 0x20000;
            break;
          case 0x12:
            iVar2 = 0x40000;
            break;
          case 0x13:
            iVar2 = 0x80000;
            break;
          case 0x14:
            iVar2 = 0x100000;
            break;
          case 0x15:
            iVar2 = 0x200000;
            break;
          case 0x16:
            iVar2 = 0x400000;
            break;
          case 0x17:
            iVar2 = 0x800000;
            break;
          case 0x18:
            iVar2 = 0x1000000;
            break;
          case 0x19:
            iVar2 = 0x2000000;
            break;
          case 0x1a:
            iVar2 = 0x4000000;
            break;
          case 0x1b:
            iVar2 = 0x8000000;
            break;
          case 0x1c:
            iVar2 = 0x10000000;
            break;
          case 0x1d:
            iVar2 = 0x20000000;
            break;
          case 0x1e:
            iVar2 = 0x40000000;
            break;
          default:
            if (iVar2 < 0) {
              iVar2 = 1;
            }
            else {
              iVar2 = 0x40000000;
            }
          }
        }
        iVar3 = __divsi3(iVar3,iVar2);
        iVar3 = __divsi3(iVar3 * iVar6,iVar7);
        if (uVar28 == 0) {
LAB_0010b8d4:
          iVar27 = 1;
        }
        else {
          if ((uVar28 & 0x80000000) == 0x80000000) {
            if ((uVar28 & 0xffff8000) != 0xffff8000) {
              if ((uVar28 & 0x40000000) == 0) goto LAB_00113f54;
              if ((uVar28 & 0x20000000) == 0) goto LAB_00113bd8;
              if ((uVar28 & 0x10000000) == 0) goto LAB_00113bd0;
              if ((uVar28 & 0x8000000) == 0) goto LAB_00113bc8;
              if ((uVar28 & 0x4000000) == 0) goto LAB_00113bc0;
              if ((uVar28 & 0x2000000) == 0) goto LAB_00114524;
              if ((uVar28 & 0x1000000) == 0) goto LAB_0011451c;
              if ((uVar28 & 0x800000) == 0) goto LAB_00114514;
              if ((uVar28 & 0x400000) == 0) goto LAB_0011450c;
              if ((uVar28 & 0x200000) == 0) goto LAB_00114504;
              if ((uVar28 & 0x100000) == 0) goto LAB_001144fc;
              if ((uVar28 & 0x80000) == 0) goto LAB_001144f4;
              if ((uVar28 & 0x40000) == 0) goto LAB_001144ec;
              if ((uVar28 & 0x20000) == 0) goto LAB_00114450;
              if ((uVar28 & 0x10000) == 0) goto LAB_00114b9c;
              uVar24 = (uint)((uVar28 & 0x8000) == 0);
              goto LAB_00106672;
            }
            goto LAB_0010b8d4;
          }
          if ((uVar28 & 0xffff8000) == 0) goto LAB_0010b8d4;
          if ((uVar28 & 0x40000000) == 0) {
            if ((uVar28 & 0x20000000) == 0) {
              if ((uVar28 & 0x10000000) == 0) {
                if ((uVar28 & 0x8000000) == 0) {
                  if ((uVar28 & 0x4000000) == 0) {
                    if ((uVar28 & 0x2000000) == 0) {
                      if ((uVar28 & 0x1000000) == 0) {
                        if ((uVar28 & 0x800000) == 0) {
                          if ((uVar28 & 0x400000) == 0) {
                            if ((uVar28 & 0x200000) == 0) {
                              if ((uVar28 & 0x100000) == 0) {
                                if ((uVar28 & 0x80000) == 0) {
                                  if ((uVar28 & 0x40000) == 0) {
                                    if ((uVar28 & 0x20000) == 0) {
                                      if ((uVar28 & 0x10000) == 0) {
                                        uVar24 = (uVar28 & 0xffff) >> 0xf;
                                      }
                                      else {
LAB_00114b9c:
                                        uVar24 = 2;
                                      }
                                    }
                                    else {
LAB_00114450:
                                      uVar24 = 3;
                                    }
                                  }
                                  else {
LAB_001144ec:
                                    uVar24 = 4;
                                  }
                                }
                                else {
LAB_001144f4:
                                  uVar24 = 5;
                                }
                              }
                              else {
LAB_001144fc:
                                uVar24 = 6;
                              }
                            }
                            else {
LAB_00114504:
                              uVar24 = 7;
                            }
                          }
                          else {
LAB_0011450c:
                            uVar24 = 8;
                          }
                        }
                        else {
LAB_00114514:
                          uVar24 = 9;
                        }
                      }
                      else {
LAB_0011451c:
                        uVar24 = 10;
                      }
                    }
                    else {
LAB_00114524:
                      uVar24 = 0xb;
                    }
                  }
                  else {
LAB_00113bc0:
                    uVar24 = 0xc;
                  }
                }
                else {
LAB_00113bc8:
                  uVar24 = 0xd;
                }
              }
              else {
LAB_00113bd0:
                uVar24 = 0xe;
              }
            }
            else {
LAB_00113bd8:
              uVar24 = 0xf;
            }
          }
          else {
LAB_00113f54:
            uVar24 = 0x10;
          }
LAB_00106672:
          switch(uVar24) {
          case 1:
            iVar27 = 2;
            break;
          case 2:
            iVar27 = 4;
            break;
          case 3:
            iVar27 = 8;
            break;
          case 4:
            iVar27 = 0x10;
            break;
          case 5:
            iVar27 = 0x20;
            break;
          case 6:
            iVar27 = 0x40;
            break;
          case 7:
            iVar27 = 0x80;
            break;
          case 8:
            iVar27 = 0x100;
            break;
          case 9:
            iVar27 = 0x200;
            break;
          case 10:
            iVar27 = 0x400;
            break;
          case 0xb:
            iVar27 = 0x800;
            break;
          case 0xc:
            iVar27 = 0x1000;
            break;
          case 0xd:
            iVar27 = 0x2000;
            break;
          case 0xe:
            iVar27 = 0x4000;
            break;
          case 0xf:
            iVar27 = 0x8000;
            break;
          case 0x10:
            iVar27 = 0x10000;
            break;
          default:
            goto LAB_0010b8d4;
          }
        }
        *(int *)(param_2 + 0xe0) = iVar1 * iVar10 + iVar32;
        *(int *)(param_2 + 0xe4) = iVar5 + iVar2 * iVar3;
        iVar5 = __divsi3(uVar28,iVar27);
        iVar5 = __divsi3(iVar5 * iVar6,iVar7);
        *(int *)(param_2 + 0xe8) = iVar27 * iVar5 + iVar15;
        goto LAB_001054f6;
      }
      p_Var30 = param_2 + 0xd4;
    }
    uVar23 = *(undefined4 *)(p_Var30 + 4);
    uVar4 = *(undefined4 *)(p_Var30 + 8);
    *(undefined4 *)(param_2 + 0xe0) = *(undefined4 *)p_Var30;
    *(undefined4 *)(param_2 + 0xe4) = uVar23;
    *(undefined4 *)(param_2 + 0xe8) = uVar4;
    local_74 = *(uint *)(param_2 + 0xec);
    local_80 = *(int *)(param_2 + 0xf0);
  }
LAB_001054f6:
  if ((int)local_74 < local_80) {
    uVar23 = 0;
    local_78 = 0x781e;
  }
  else {
    if (local_80 == local_74) {
      if ((uVar31 & 2) != 0) {
        *(undefined4 *)(param_2 + 0x20) = *(undefined4 *)(param_2 + 0x2c);
        *(undefined4 *)(param_2 + 0x24) = *(undefined4 *)(param_2 + 0x30);
        *(undefined4 *)(param_2 + 0x28) = *(undefined4 *)(param_2 + 0x34);
      }
      if ((uVar31 & 0x10) != 0) {
        *(undefined4 *)(param_2 + 0x44) = *(undefined4 *)(param_2 + 0x50);
        *(undefined4 *)(param_2 + 0x48) = *(undefined4 *)(param_2 + 0x54);
        *(undefined4 *)(param_2 + 0x4c) = *(undefined4 *)(param_2 + 0x58);
      }
      if ((uVar31 & 0x800) != 0) {
        *(undefined4 *)(param_2 + 0x68) = *(undefined4 *)(param_2 + 0x74);
        *(undefined4 *)(param_2 + 0x6c) = *(undefined4 *)(param_2 + 0x78);
        *(undefined4 *)(param_2 + 0x70) = *(undefined4 *)(param_2 + 0x7c);
      }
      if ((uVar31 & 0x2000) != 0) {
        *(undefined4 *)(param_2 + 0x8c) = *(undefined4 *)(param_2 + 0x98);
        *(undefined4 *)(param_2 + 0x90) = *(undefined4 *)(param_2 + 0x9c);
        *(undefined4 *)(param_2 + 0x94) = *(undefined4 *)(param_2 + 0xa0);
      }
      if ((uVar31 & 0x4000) != 0) {
        *(undefined4 *)(param_2 + 0xb0) = *(undefined4 *)(param_2 + 0xbc);
        *(undefined4 *)(param_2 + 0xb4) = *(undefined4 *)(param_2 + 0xc0);
        *(undefined4 *)(param_2 + 0xb8) = *(undefined4 *)(param_2 + 0xc4);
      }
      if ((uVar31 & 0x1008) == 0) {
        uVar23 = 1;
        local_78 = 0x781e;
      }
      else {
        local_78 = 0x781e;
        uVar23 = 1;
        *(undefined4 *)(param_2 + 0xd4) = *(undefined4 *)(param_2 + 0xe0);
        *(undefined4 *)(param_2 + 0xd8) = *(undefined4 *)(param_2 + 0xe4);
        *(undefined4 *)(param_2 + 0xdc) = *(undefined4 *)(param_2 + 0xe8);
      }
    }
    else {
      uVar23 = 2;
      local_78 = 0;
    }
    *(int *)(param_2 + 0xf0) = local_80 + 1;
  }
  *(undefined4 *)(param_2 + 0xf4) = uVar23;
  uVar31 = *(uint *)(param_2 + 0x10);
  uVar28 = *(uint *)param_1;
  if ((uVar28 & 6) == 0) {
    if (uVar31 == 0) {
      if ((uVar28 & 0x6800) != 0) goto LAB_00107c52;
      local_7c = 0;
LAB_00105528:
      if ((uVar28 & 0x7f0) != 0) goto LAB_001057be;
      if (local_7c == 0) goto LAB_00105538;
LAB_00107c42:
      local_7c = 1;
      goto LAB_00106cf2;
    }
    if ((uVar28 & 0x7f0) != 0) {
      local_7c = 0;
      goto LAB_001057be;
    }
LAB_00105538:
    local_7c = 0;
LAB_0010553a:
    if (((uVar31 != 0) || ((uVar28 & 0x6800) == 0)) && ((uVar28 & 0x11008) == 0)) goto LAB_00105556;
  }
  else {
    if (uVar31 == 0) {
LAB_00107c52:
      if (((*(int *)(param_2 + 0xfc) == *(int *)(param_2 + 0x2c)) &&
          (*(int *)(param_2 + 0x100) == *(int *)(param_2 + 0x30))) &&
         ((*(int *)(param_2 + 0x104) == *(int *)(param_2 + 0x34) &&
          (((*(int *)(param_2 + 0x108) == *(int *)(param_2 + 0x74) &&
            (*(int *)(param_2 + 0x10c) == *(int *)(param_2 + 0x78))) &&
           (*(int *)(param_2 + 0x110) == *(int *)(param_2 + 0x7c))))))) {
        uVar31 = 0;
      }
      else {
        *(undefined4 *)(param_2 + 0xfc) = *(undefined4 *)(param_2 + 0x2c);
        *(undefined4 *)(param_2 + 0x100) = *(undefined4 *)(param_2 + 0x30);
        *(undefined4 *)(param_2 + 0x104) = *(undefined4 *)(param_2 + 0x34);
        *(undefined4 *)(param_2 + 0x108) = *(undefined4 *)(param_2 + 0x74);
        *(undefined4 *)(param_2 + 0x10c) = *(undefined4 *)(param_2 + 0x78);
        *(undefined4 *)(param_2 + 0x110) = *(undefined4 *)(param_2 + 0x7c);
        uVar25 = *(int *)(param_2 + 0x2c) - *(int *)(param_2 + 0x74);
        uVar24 = *(int *)(param_2 + 0x30) - *(int *)(param_2 + 0x78);
        *(uint *)(param_2 + 0x114) = uVar25;
        uVar28 = *(int *)(param_2 + 0x34) - *(int *)(param_2 + 0x7c);
        *(uint *)(param_2 + 0x118) = uVar24;
        *(uint *)(param_2 + 0x11c) = uVar28;
        uVar31 = uVar24;
        if (uVar25 == 0) {
          if (uVar24 != 0) {
            uVar14 = 0;
            goto LAB_00108e94;
          }
          uVar14 = uVar24;
          if (uVar28 != 0) goto LAB_00107cbc;
          *(undefined4 *)(param_2 + 0x120) = 0;
LAB_00107f7c:
          uVar31 = 1;
          *(undefined4 *)(param_2 + 0x114) = 0;
          *(undefined4 *)(param_2 + 0x118) = 0;
          *(undefined4 *)(param_2 + 0x11c) = 0;
          goto LAB_00107f8c;
        }
        if ((uVar25 & 0x80000000) == 0x80000000) {
          if ((uVar25 & 0xffffc000) == 0xffffc000) {
            uVar14 = 0;
          }
          else {
            if (-1 < (int)(uVar25 * 2)) goto LAB_00112b58;
            if (-1 < (int)(uVar25 * 4)) goto LAB_00112f02;
            if (-1 < (int)(uVar25 * 8)) goto LAB_00112f12;
            if (-1 < (int)(uVar25 * 0x10)) goto LAB_00112f0a;
            if (-1 < (int)(uVar25 * 0x20)) goto LAB_00113c50;
            if (-1 < (int)(uVar25 * 0x40)) goto LAB_00113c48;
            if (-1 < (int)(uVar25 * 0x80)) goto LAB_00113c40;
            if (-1 < (int)(uVar25 * 0x100)) goto LAB_00113c38;
            if (-1 < (int)(uVar25 * 0x200)) goto LAB_00113c30;
            if (-1 < (int)(uVar25 * 0x400)) goto LAB_00113c28;
            if (-1 < (int)(uVar25 * 0x800)) goto LAB_00113c20;
            if (-1 < (int)(uVar25 * 0x1000)) goto LAB_00113c18;
            if (-1 < (int)(uVar25 * 0x2000)) goto LAB_00113c10;
            if (-1 < (int)(uVar25 * 0x4000)) goto LAB_00113c08;
            if (-1 < (int)(uVar25 * 0x8000)) goto LAB_00113c00;
            if (-1 < (int)(uVar25 * 0x10000)) goto LAB_00114306;
            uVar14 = (uint)((uVar25 & 0x4000) == 0);
          }
        }
        else {
          uVar14 = 0;
          if ((uVar25 & 0xffffc000) != 0) {
            if ((int)(uVar25 * 2) < 0) {
LAB_00112b58:
              uVar14 = 0x11;
            }
            else if ((int)(uVar25 * 4) < 0) {
LAB_00112f02:
              uVar14 = 0x10;
            }
            else if ((int)(uVar25 * 8) < 0) {
LAB_00112f12:
              uVar14 = 0xf;
            }
            else if ((int)(uVar25 * 0x10) < 0) {
LAB_00112f0a:
              uVar14 = 0xe;
            }
            else if ((int)(uVar25 * 0x20) < 0) {
LAB_00113c50:
              uVar14 = 0xd;
            }
            else if ((int)(uVar25 * 0x40) < 0) {
LAB_00113c48:
              uVar14 = 0xc;
            }
            else if ((int)(uVar25 * 0x80) < 0) {
LAB_00113c40:
              uVar14 = 0xb;
            }
            else if ((int)(uVar25 * 0x100) < 0) {
LAB_00113c38:
              uVar14 = 10;
            }
            else if ((int)(uVar25 * 0x200) < 0) {
LAB_00113c30:
              uVar14 = 9;
            }
            else if ((int)(uVar25 * 0x400) < 0) {
LAB_00113c28:
              uVar14 = 8;
            }
            else if ((int)(uVar25 * 0x800) < 0) {
LAB_00113c20:
              uVar14 = 7;
            }
            else if ((int)(uVar25 * 0x1000) < 0) {
LAB_00113c18:
              uVar14 = 6;
            }
            else if ((int)(uVar25 * 0x2000) < 0) {
LAB_00113c10:
              uVar14 = 5;
            }
            else if ((int)(uVar25 * 0x4000) < 0) {
LAB_00113c08:
              uVar14 = 4;
            }
            else if ((int)(uVar25 * 0x8000) < 0) {
LAB_00113c00:
              uVar14 = 3;
            }
            else if ((int)(uVar25 * 0x10000) < 0) {
LAB_00114306:
              uVar14 = 2;
            }
            else {
              uVar14 = (uVar25 & 0x7fff) >> 0xe;
            }
          }
        }
        if (uVar24 != 0) {
LAB_00108e94:
          if ((uVar24 & 0x80000000) == 0x80000000) {
            if ((uVar24 & 0xffffc000) == 0xffffc000) {
              uVar31 = 0;
            }
            else {
              if (-1 < (int)(uVar24 * 2)) goto LAB_00112bc8;
              if (-1 < (int)(uVar24 * 4)) goto LAB_00112ebc;
              if (-1 < (int)(uVar24 * 8)) goto LAB_00112eb6;
              if (-1 < (int)(uVar24 * 0x10)) goto LAB_00112ec2;
              if (-1 < (int)(uVar24 * 0x20)) goto LAB_001138e6;
              if (-1 < (int)(uVar24 * 0x40)) goto LAB_001138e0;
              if (-1 < (int)(uVar24 * 0x80)) goto LAB_001138da;
              if (-1 < (int)(uVar24 * 0x100)) goto LAB_00113896;
              if (-1 < (int)(uVar24 * 0x200)) goto LAB_00113890;
              if (-1 < (int)(uVar24 * 0x400)) goto LAB_0011388a;
              if (-1 < (int)(uVar24 * 0x800)) goto LAB_00113884;
              if (-1 < (int)(uVar24 * 0x1000)) goto LAB_0011387e;
              if (-1 < (int)(uVar24 * 0x2000)) goto LAB_00113878;
              if (-1 < (int)(uVar24 * 0x4000)) goto LAB_0011386a;
              if (-1 < (int)(uVar24 * 0x8000)) goto LAB_00113864;
              if (-1 < (int)(uVar24 * 0x10000)) goto LAB_0011444a;
              uVar31 = (uint)((uVar24 & 0x4000) == 0);
            }
          }
          else {
            uVar31 = 0;
            if ((uVar24 & 0xffffc000) != 0) {
              if ((int)(uVar24 * 2) < 0) {
LAB_00112bc8:
                uVar31 = 0x11;
              }
              else if ((int)(uVar24 * 4) < 0) {
LAB_00112ebc:
                uVar31 = 0x10;
              }
              else if ((int)(uVar24 * 8) < 0) {
LAB_00112eb6:
                uVar31 = 0xf;
              }
              else if ((int)(uVar24 * 0x10) < 0) {
LAB_00112ec2:
                uVar31 = 0xe;
              }
              else if ((int)(uVar24 * 0x20) < 0) {
LAB_001138e6:
                uVar31 = 0xd;
              }
              else if ((int)(uVar24 * 0x40) < 0) {
LAB_001138e0:
                uVar31 = 0xc;
              }
              else if ((int)(uVar24 * 0x80) < 0) {
LAB_001138da:
                uVar31 = 0xb;
              }
              else if ((int)(uVar24 * 0x100) < 0) {
LAB_00113896:
                uVar31 = 10;
              }
              else if ((int)(uVar24 * 0x200) < 0) {
LAB_00113890:
                uVar31 = 9;
              }
              else if ((int)(uVar24 * 0x400) < 0) {
LAB_0011388a:
                uVar31 = 8;
              }
              else if ((int)(uVar24 * 0x800) < 0) {
LAB_00113884:
                uVar31 = 7;
              }
              else if ((int)(uVar24 * 0x1000) < 0) {
LAB_0011387e:
                uVar31 = 6;
              }
              else if ((int)(uVar24 * 0x2000) < 0) {
LAB_00113878:
                uVar31 = 5;
              }
              else if ((int)(uVar24 * 0x4000) < 0) {
LAB_0011386a:
                uVar31 = 4;
              }
              else if ((int)(uVar24 * 0x8000) < 0) {
LAB_00113864:
                uVar31 = 3;
              }
              else if ((int)(uVar24 * 0x10000) < 0) {
LAB_0011444a:
                uVar31 = 2;
              }
              else {
                uVar31 = (uVar24 & 0x7fff) >> 0xe;
              }
            }
          }
        }
        uVar22 = 0;
        if (uVar28 != 0) {
LAB_00107cbc:
          if ((uVar28 & 0x80000000) == 0x80000000) {
            if ((uVar28 & 0xffffc000) == 0xffffc000) {
              uVar22 = 0;
            }
            else {
              if (-1 < (int)(uVar28 * 2)) goto LAB_001128ba;
              if (-1 < (int)(uVar28 * 4)) goto LAB_00112e3e;
              if (-1 < (int)(uVar28 * 8)) goto LAB_00113032;
              if (-1 < (int)(uVar28 * 0x10)) goto LAB_0011302c;
              if (-1 < (int)(uVar28 * 0x20)) goto LAB_001135b6;
              if (-1 < (int)(uVar28 * 0x40)) goto LAB_001135b0;
              if (-1 < (int)(uVar28 * 0x80)) goto LAB_001135bc;
              if (-1 < (int)(uVar28 * 0x100)) goto LAB_0011338c;
              if (-1 < (int)(uVar28 * 0x200)) goto LAB_001135d4;
              if (-1 < (int)(uVar28 * 0x400)) goto LAB_001135ce;
              if (-1 < (int)(uVar28 * 0x800)) goto LAB_001135c8;
              if (-1 < (int)(uVar28 * 0x1000)) goto LAB_001135c2;
              if (-1 < (int)(uVar28 * 0x2000)) goto LAB_001135e0;
              if (-1 < (int)(uVar28 * 0x4000)) goto LAB_001135da;
              if (-1 < (int)(uVar28 * 0x8000)) goto LAB_0011355a;
              if (-1 < (int)(uVar28 * 0x10000)) goto LAB_00114444;
              uVar22 = (uint)((uVar28 & 0x4000) == 0);
            }
          }
          else {
            uVar22 = 0;
            if ((uVar28 & 0xffffc000) != 0) {
              if ((int)(uVar28 * 2) < 0) {
LAB_001128ba:
                uVar22 = 0x11;
              }
              else if ((int)(uVar28 * 4) < 0) {
LAB_00112e3e:
                uVar22 = 0x10;
              }
              else if ((int)(uVar28 * 8) < 0) {
LAB_00113032:
                uVar22 = 0xf;
              }
              else if ((int)(uVar28 * 0x10) < 0) {
LAB_0011302c:
                uVar22 = 0xe;
              }
              else if ((int)(uVar28 * 0x20) < 0) {
LAB_001135b6:
                uVar22 = 0xd;
              }
              else if ((int)(uVar28 * 0x40) < 0) {
LAB_001135b0:
                uVar22 = 0xc;
              }
              else if ((int)(uVar28 * 0x80) < 0) {
LAB_001135bc:
                uVar22 = 0xb;
              }
              else if ((int)(uVar28 * 0x100) < 0) {
LAB_0011338c:
                uVar22 = 10;
              }
              else if ((int)(uVar28 * 0x200) < 0) {
LAB_001135d4:
                uVar22 = 9;
              }
              else if ((int)(uVar28 * 0x400) < 0) {
LAB_001135ce:
                uVar22 = 8;
              }
              else if ((int)(uVar28 * 0x800) < 0) {
LAB_001135c8:
                uVar22 = 7;
              }
              else if ((int)(uVar28 * 0x1000) < 0) {
LAB_001135c2:
                uVar22 = 6;
              }
              else if ((int)(uVar28 * 0x2000) < 0) {
LAB_001135e0:
                uVar22 = 5;
              }
              else if ((int)(uVar28 * 0x4000) < 0) {
LAB_001135da:
                uVar22 = 4;
              }
              else if ((int)(uVar28 * 0x8000) < 0) {
LAB_0011355a:
                uVar22 = 3;
              }
              else if ((int)(uVar28 * 0x10000) < 0) {
LAB_00114444:
                uVar22 = 2;
              }
              else {
                uVar22 = (uVar28 & 0x7fff) >> 0xe;
              }
            }
          }
        }
        if ((int)uVar31 <= (int)uVar14) {
          uVar31 = uVar14;
        }
        if ((int)uVar31 < (int)uVar22) {
          uVar31 = uVar22;
        }
        switch(uVar31) {
        case 0:
          iVar5 = 1;
          break;
        case 1:
          iVar5 = 2;
          break;
        case 2:
          iVar5 = 4;
          break;
        case 3:
          iVar5 = 8;
          break;
        case 4:
          iVar5 = 0x10;
          break;
        case 5:
          iVar5 = 0x20;
          break;
        case 6:
          iVar5 = 0x40;
          break;
        case 7:
          iVar5 = 0x80;
          break;
        case 8:
          iVar5 = 0x100;
          break;
        case 9:
          iVar5 = 0x200;
          break;
        case 10:
          iVar5 = 0x400;
          break;
        case 0xb:
          iVar5 = 0x800;
          break;
        case 0xc:
          iVar5 = 0x1000;
          break;
        case 0xd:
          iVar5 = 0x2000;
          break;
        case 0xe:
          iVar5 = 0x4000;
          break;
        case 0xf:
          iVar5 = 0x8000;
          break;
        case 0x10:
          iVar5 = 0x10000;
          break;
        case 0x11:
          iVar5 = 0x20000;
          break;
        case 0x12:
          iVar5 = 0x40000;
          break;
        case 0x13:
          iVar5 = 0x80000;
          break;
        case 0x14:
          iVar5 = 0x100000;
          break;
        case 0x15:
          iVar5 = 0x200000;
          break;
        case 0x16:
          iVar5 = 0x400000;
          break;
        case 0x17:
          iVar5 = 0x800000;
          break;
        case 0x18:
          iVar5 = 0x1000000;
          break;
        case 0x19:
          iVar5 = 0x2000000;
          break;
        case 0x1a:
          iVar5 = 0x4000000;
          break;
        case 0x1b:
          iVar5 = 0x8000000;
          break;
        case 0x1c:
          iVar5 = 0x10000000;
          break;
        case 0x1d:
          iVar5 = 0x20000000;
          break;
        default:
          iVar5 = 0x40000000;
        }
        iVar6 = __divsi3(uVar25,iVar5);
        iVar7 = __divsi3(uVar24,iVar5);
        iVar15 = __divsi3(uVar28,iVar5);
        iVar6 = iVar15 * iVar15 + iVar6 * iVar6 + iVar7 * iVar7;
        if (iVar6 < 1) {
          iVar7 = 0;
        }
        else {
          iVar15 = iVar6;
          if (iVar6 == 0x7fffffff) {
            iVar6 = 0x7ffffffe;
            iVar15 = 0x7ffffffe;
          }
          do {
            iVar7 = __divsi3(iVar15,iVar6);
            iVar10 = (iVar6 + iVar7) / 2;
            iVar7 = iVar6;
            if (iVar6 <= iVar10) break;
            iVar6 = __divsi3(iVar15);
            iVar6 = (iVar10 + iVar6) / 2;
            iVar7 = iVar10;
            if (iVar10 <= iVar6) break;
            iVar7 = __divsi3(iVar15,iVar6);
            iVar10 = (iVar6 + iVar7) / 2;
            iVar7 = iVar6;
            if (iVar6 <= iVar10) break;
            iVar6 = __divsi3(iVar15,iVar10);
            iVar6 = (iVar10 + iVar6) / 2;
            iVar7 = iVar10;
            if (iVar10 <= iVar6) break;
            iVar7 = __divsi3(iVar15,iVar6);
            iVar10 = (iVar6 + iVar7) / 2;
            iVar7 = iVar6;
            if (iVar6 <= iVar10) break;
            iVar6 = __divsi3(iVar15,iVar10);
            iVar6 = (iVar10 + iVar6) / 2;
            iVar7 = iVar10;
            if (iVar10 <= iVar6) break;
            iVar7 = __divsi3(iVar15);
            iVar10 = (iVar6 + iVar7) / 2;
            iVar7 = iVar6;
            if (iVar6 <= iVar10) break;
            iVar6 = __divsi3(iVar15,iVar10);
            iVar6 = (iVar6 + iVar10) / 2;
            iVar7 = iVar10;
          } while (iVar6 < iVar10);
        }
        uVar31 = uVar24;
        if ((int)uVar24 < (int)uVar25) {
          uVar31 = uVar25;
        }
        if ((int)uVar31 < (int)uVar28) {
          uVar31 = uVar28;
        }
        uVar14 = iVar5 * iVar7;
        if (iVar5 * iVar7 <= (int)uVar31) {
          uVar14 = uVar31;
        }
        *(uint *)(param_2 + 0x120) = uVar14;
        if (uVar14 == 0) goto LAB_00107f7c;
        uVar31 = 0;
        if (uVar25 != 0) {
          if ((uVar25 & 0x80000000) == 0x80000000) {
            if ((uVar25 & 0xffff8000) == 0xffff8000) {
              uVar31 = 0;
            }
            else {
              if (-1 < (int)(uVar25 * 2)) goto LAB_00114724;
              if (-1 < (int)(uVar25 * 4)) goto LAB_001147b2;
              if (-1 < (int)(uVar25 * 8)) goto LAB_001147aa;
              if (-1 < (int)(uVar25 * 0x10)) goto LAB_001147d2;
              if (-1 < (int)(uVar25 * 0x20)) goto LAB_001147ca;
              if (-1 < (int)(uVar25 * 0x40)) goto LAB_001147c2;
              if (-1 < (int)(uVar25 * 0x80)) goto LAB_001147ba;
              if (-1 < (int)(uVar25 * 0x100)) goto LAB_00114802;
              if (-1 < (int)(uVar25 * 0x200)) goto LAB_001147fa;
              if (-1 < (int)(uVar25 * 0x400)) goto LAB_001147f2;
              if (-1 < (int)(uVar25 * 0x800)) goto LAB_001147ea;
              if (-1 < (int)(uVar25 * 0x1000)) goto LAB_001147e2;
              if (-1 < (int)(uVar25 * 0x2000)) goto LAB_001147da;
              if (-1 < (int)(uVar25 * 0x4000)) goto LAB_00116362;
              if (-1 < (int)(uVar25 * 0x8000)) goto LAB_0011635a;
              uVar31 = (uint)((uVar25 & 0x8000) == 0);
            }
          }
          else if ((uVar25 & 0xffff8000) == 0) {
            uVar31 = 0;
          }
          else if ((int)(uVar25 * 2) < 0) {
LAB_00114724:
            uVar31 = 0x10;
          }
          else if ((int)(uVar25 * 4) < 0) {
LAB_001147b2:
            uVar31 = 0xf;
          }
          else if ((int)(uVar25 * 8) < 0) {
LAB_001147aa:
            uVar31 = 0xe;
          }
          else if ((int)(uVar25 * 0x10) < 0) {
LAB_001147d2:
            uVar31 = 0xd;
          }
          else if ((int)(uVar25 * 0x20) < 0) {
LAB_001147ca:
            uVar31 = 0xc;
          }
          else if ((int)(uVar25 * 0x40) < 0) {
LAB_001147c2:
            uVar31 = 0xb;
          }
          else if ((int)(uVar25 * 0x80) < 0) {
LAB_001147ba:
            uVar31 = 10;
          }
          else if ((int)(uVar25 * 0x100) < 0) {
LAB_00114802:
            uVar31 = 9;
          }
          else if ((int)(uVar25 * 0x200) < 0) {
LAB_001147fa:
            uVar31 = 8;
          }
          else if ((int)(uVar25 * 0x400) < 0) {
LAB_001147f2:
            uVar31 = 7;
          }
          else if ((int)(uVar25 * 0x800) < 0) {
LAB_001147ea:
            uVar31 = 6;
          }
          else if ((int)(uVar25 * 0x1000) < 0) {
LAB_001147e2:
            uVar31 = 5;
          }
          else if ((int)(uVar25 * 0x2000) < 0) {
LAB_001147da:
            uVar31 = 4;
          }
          else if ((int)(uVar25 * 0x4000) < 0) {
LAB_00116362:
            uVar31 = 3;
          }
          else if ((int)(uVar25 * 0x8000) < 0) {
LAB_0011635a:
            uVar31 = 2;
          }
          else {
            uVar31 = (uVar25 & 0xffff) >> 0xf;
          }
        }
        uVar22 = 0;
        if (uVar24 != 0) {
          if ((uVar24 & 0x80000000) == 0x80000000) {
            if ((uVar24 & 0xffff8000) == 0xffff8000) {
              uVar22 = 0;
            }
            else {
              if (-1 < (int)(uVar24 * 2)) goto LAB_00114f58;
              if (-1 < (int)(uVar24 * 4)) goto LAB_00114ff4;
              if (-1 < (int)(uVar24 * 8)) goto LAB_00114fee;
              if (-1 < (int)(uVar24 * 0x10)) goto LAB_00115080;
              if (-1 < (int)(uVar24 * 0x20)) goto LAB_0011507a;
              if (-1 < (int)(uVar24 * 0x40)) goto LAB_00115086;
              if (-1 < (int)(uVar24 * 0x80)) goto LAB_00114e6c;
              if (-1 < (int)(uVar24 * 0x100)) goto LAB_00115074;
              if (-1 < (int)(uVar24 * 0x200)) goto LAB_0011506e;
              if (-1 < (int)(uVar24 * 0x400)) goto LAB_00115068;
              if (-1 < (int)(uVar24 * 0x800)) goto LAB_00115062;
              if (-1 < (int)(uVar24 * 0x1000)) goto LAB_0011505c;
              if (-1 < (int)(uVar24 * 0x2000)) goto LAB_00115056;
              if (-1 < (int)(uVar24 * 0x4000)) goto LAB_001158ec;
              if (-1 < (int)(uVar24 * 0x8000)) goto LAB_001158e6;
              uVar22 = (uint)((uVar24 & 0x8000) == 0);
            }
          }
          else if ((uVar24 & 0xffff8000) == 0) {
            uVar22 = 0;
          }
          else if ((int)(uVar24 * 2) < 0) {
LAB_00114f58:
            uVar22 = 0x10;
          }
          else if ((int)(uVar24 * 4) < 0) {
LAB_00114ff4:
            uVar22 = 0xf;
          }
          else if ((int)(uVar24 * 8) < 0) {
LAB_00114fee:
            uVar22 = 0xe;
          }
          else if ((int)(uVar24 * 0x10) < 0) {
LAB_00115080:
            uVar22 = 0xd;
          }
          else if ((int)(uVar24 * 0x20) < 0) {
LAB_0011507a:
            uVar22 = 0xc;
          }
          else if ((int)(uVar24 * 0x40) < 0) {
LAB_00115086:
            uVar22 = 0xb;
          }
          else if ((int)(uVar24 * 0x80) < 0) {
LAB_00114e6c:
            uVar22 = 10;
          }
          else if ((int)(uVar24 * 0x100) < 0) {
LAB_00115074:
            uVar22 = 9;
          }
          else if ((int)(uVar24 * 0x200) < 0) {
LAB_0011506e:
            uVar22 = 8;
          }
          else if ((int)(uVar24 * 0x400) < 0) {
LAB_00115068:
            uVar22 = 7;
          }
          else if ((int)(uVar24 * 0x800) < 0) {
LAB_00115062:
            uVar22 = 6;
          }
          else if ((int)(uVar24 * 0x1000) < 0) {
LAB_0011505c:
            uVar22 = 5;
          }
          else if ((int)(uVar24 * 0x2000) < 0) {
LAB_00115056:
            uVar22 = 4;
          }
          else if ((int)(uVar24 * 0x4000) < 0) {
LAB_001158ec:
            uVar22 = 3;
          }
          else if ((int)(uVar24 * 0x8000) < 0) {
LAB_001158e6:
            uVar22 = 2;
          }
          else {
            uVar22 = (uVar24 & 0xffff) >> 0xf;
          }
        }
        uVar11 = 0;
        if (uVar28 != 0) {
          if ((uVar28 & 0x80000000) == 0x80000000) {
            if ((uVar28 & 0xffff8000) == 0xffff8000) {
              uVar11 = 0;
            }
            else {
              if (-1 < (int)(uVar28 * 2)) goto LAB_001147a2;
              if (-1 < (int)(uVar28 * 4)) goto LAB_00114e8a;
              if (-1 < (int)(uVar28 * 8)) goto LAB_00114e82;
              if (-1 < (int)(uVar28 * 0x10)) goto LAB_00114648;
              if (-1 < (int)(uVar28 * 0x20)) goto LAB_00114640;
              if (-1 < (int)(uVar28 * 0x40)) goto LAB_00114638;
              if (-1 < (int)(uVar28 * 0x80)) goto LAB_00114630;
              if (-1 < (int)(uVar28 * 0x100)) goto LAB_0011504e;
              if (-1 < (int)(uVar28 * 0x200)) goto LAB_00115046;
              if (-1 < (int)(uVar28 * 0x400)) goto LAB_0011503e;
              if (-1 < (int)(uVar28 * 0x800)) goto LAB_00115036;
              if (-1 < (int)(uVar28 * 0x1000)) goto LAB_0011502e;
              if (-1 < (int)(uVar28 * 0x2000)) goto LAB_00115026;
              if (-1 < (int)(uVar28 * 0x4000)) goto LAB_001158de;
              if (-1 < (int)(uVar28 * 0x8000)) goto LAB_001158d6;
              uVar11 = (uint)((uVar28 & 0x8000) == 0);
            }
          }
          else {
            uVar11 = 0;
            if ((uVar28 & 0xffff8000) != 0) {
              if ((int)(uVar28 * 2) < 0) {
LAB_001147a2:
                uVar11 = 0x10;
              }
              else if ((int)(uVar28 * 4) < 0) {
LAB_00114e8a:
                uVar11 = 0xf;
              }
              else if ((int)(uVar28 * 8) < 0) {
LAB_00114e82:
                uVar11 = 0xe;
              }
              else if ((int)(uVar28 * 0x10) < 0) {
LAB_00114648:
                uVar11 = 0xd;
              }
              else if ((int)(uVar28 * 0x20) < 0) {
LAB_00114640:
                uVar11 = 0xc;
              }
              else if ((int)(uVar28 * 0x40) < 0) {
LAB_00114638:
                uVar11 = 0xb;
              }
              else if ((int)(uVar28 * 0x80) < 0) {
LAB_00114630:
                uVar11 = 10;
              }
              else if ((int)(uVar28 * 0x100) < 0) {
LAB_0011504e:
                uVar11 = 9;
              }
              else if ((int)(uVar28 * 0x200) < 0) {
LAB_00115046:
                uVar11 = 8;
              }
              else if ((int)(uVar28 * 0x400) < 0) {
LAB_0011503e:
                uVar11 = 7;
              }
              else if ((int)(uVar28 * 0x800) < 0) {
LAB_00115036:
                uVar11 = 6;
              }
              else if ((int)(uVar28 * 0x1000) < 0) {
LAB_0011502e:
                uVar11 = 5;
              }
              else if ((int)(uVar28 * 0x2000) < 0) {
LAB_00115026:
                uVar11 = 4;
              }
              else if ((int)(uVar28 * 0x4000) < 0) {
LAB_001158de:
                uVar11 = 3;
              }
              else if ((int)(uVar28 * 0x8000) < 0) {
LAB_001158d6:
                uVar11 = 2;
              }
              else {
                uVar11 = (uVar28 & 0xffff) >> 0xf;
              }
            }
          }
        }
        if (uVar22 < uVar31) {
          uVar22 = uVar31;
        }
        if (uVar11 <= uVar22) {
          uVar11 = uVar22;
        }
        switch(uVar11) {
        case 0:
          uVar23 = 1;
          goto code_r0x0010b45c;
        case 1:
          uVar23 = 2;
          break;
        case 2:
          uVar23 = 4;
          break;
        case 3:
          uVar23 = 8;
          break;
        case 4:
          uVar23 = 0x10;
          break;
        case 5:
          uVar23 = 0x20;
          break;
        case 6:
          uVar23 = 0x40;
          break;
        case 7:
          uVar23 = 0x80;
          break;
        case 8:
          uVar23 = 0x100;
          break;
        case 9:
          uVar23 = 0x200;
          break;
        case 10:
          uVar23 = 0x400;
          break;
        case 0xb:
          uVar23 = 0x800;
          break;
        case 0xc:
          uVar23 = 0x1000;
          break;
        case 0xd:
          uVar23 = 0x2000;
          break;
        case 0xe:
          uVar23 = 0x4000;
          break;
        case 0xf:
          uVar23 = 0x8000;
          break;
        case 0x10:
          uVar23 = 0x10000;
          break;
        case 0x11:
          uVar23 = 0x20000;
          break;
        case 0x12:
          uVar23 = 0x40000;
          break;
        case 0x13:
          uVar23 = 0x80000;
          break;
        case 0x14:
          uVar23 = 0x100000;
          break;
        case 0x15:
          uVar23 = 0x200000;
          break;
        case 0x16:
          uVar23 = 0x400000;
          break;
        case 0x17:
          uVar23 = 0x800000;
          break;
        case 0x18:
          uVar23 = 0x1000000;
          break;
        case 0x19:
          uVar23 = 0x2000000;
          break;
        case 0x1a:
          uVar23 = 0x4000000;
          break;
        case 0x1b:
          uVar23 = 0x8000000;
          break;
        case 0x1c:
          uVar23 = 0x10000000;
          break;
        case 0x1d:
          uVar23 = 0x20000000;
          break;
        default:
          uVar23 = 0x40000000;
        }
        uVar14 = __divsi3(uVar14,uVar23);
        if (uVar14 == 0) {
          *(undefined4 *)(param_2 + 0x114) = 0;
          uVar31 = 1;
          *(undefined4 *)(param_2 + 0x118) = 0;
          *(undefined4 *)(param_2 + 0x11c) = 0;
        }
        else {
code_r0x0010b45c:
          if (uVar25 != 0) {
            iVar5 = __divsi3(uVar25,uVar23);
            uVar4 = __divsi3(iVar5 * 0x7fff,uVar14);
            *(undefined4 *)(param_2 + 0x114) = uVar4;
          }
          if (uVar24 != 0) {
            iVar5 = __divsi3(uVar24,uVar23);
            uVar4 = __divsi3(iVar5 * 0x7fff,uVar14);
            *(undefined4 *)(param_2 + 0x118) = uVar4;
          }
          if (uVar28 == 0) {
            uVar31 = 1;
          }
          else {
            iVar5 = __divsi3(uVar28,uVar23);
            uVar31 = 1;
            uVar23 = __divsi3(iVar5 * 0x7fff,uVar14);
            *(undefined4 *)(param_2 + 0x11c) = uVar23;
          }
        }
      }
LAB_00107f8c:
      if (((*(int *)(param_2 + 0x124) != *(int *)(param_2 + 0x98)) ||
          (*(int *)(param_2 + 0x128) != *(int *)(param_2 + 0x9c))) ||
         (*(int *)(param_2 + 300) != *(int *)(param_2 + 0xa0))) {
        *(uint *)(param_2 + 0x124) = *(uint *)(param_2 + 0x98);
        *(undefined4 *)(param_2 + 0x128) = *(undefined4 *)(param_2 + 0x9c);
        *(undefined4 *)(param_2 + 300) = *(undefined4 *)(param_2 + 0xa0);
        uVar28 = *(uint *)(param_2 + 0x98);
        *(uint *)(param_2 + 0x13c) = uVar28;
        *(undefined4 *)(param_2 + 0x140) = *(undefined4 *)(param_2 + 0x9c);
        *(undefined4 *)(param_2 + 0x144) = *(undefined4 *)(param_2 + 0xa0);
        if (uVar28 == 0) {
          if ((*(int *)(param_2 + 0x140) != 0) || (*(int *)(param_2 + 0x144) != 0)) {
            uVar25 = *(uint *)(param_2 + 0x140);
            uVar14 = 0;
            uVar24 = *(uint *)(param_2 + 0x144);
            goto LAB_00107fe6;
          }
LAB_00108528:
          *(undefined4 *)(param_2 + 0x13c) = 0;
          *(undefined4 *)(param_2 + 0x140) = 0;
          *(undefined4 *)(param_2 + 0x144) = 0;
        }
        else {
          uVar25 = *(uint *)(param_2 + 0x140);
          uVar24 = *(uint *)(param_2 + 0x144);
          if ((uVar28 & 0x80000000) == 0x80000000) {
            if ((uVar28 & 0xffffc000) == 0xffffc000) {
              uVar14 = 0;
            }
            else {
              if (-1 < (int)(uVar28 << 1)) goto LAB_00112e8a;
              if (-1 < (int)(uVar28 << 2)) goto LAB_00112e4c;
              if (-1 < (int)(uVar28 << 3)) goto LAB_00112e44;
              if (-1 < (int)(uVar28 << 4)) goto LAB_00113f02;
              if (-1 < (int)(uVar28 << 5)) goto LAB_00113efa;
              if (-1 < (int)(uVar28 << 6)) goto LAB_00113f0a;
              if (-1 < (int)(uVar28 << 7)) goto LAB_00113d8e;
              if (-1 < (int)(uVar28 << 8)) goto LAB_00113eda;
              if (-1 < (int)(uVar28 << 9)) goto LAB_00113ed2;
              if (-1 < (int)(uVar28 << 10)) goto LAB_00113eca;
              if (-1 < (int)(uVar28 << 0xb)) goto LAB_00113ec2;
              if (-1 < (int)(uVar28 << 0xc)) goto LAB_00113eba;
              if (-1 < (int)(uVar28 << 0xd)) goto LAB_00113eb2;
              if (-1 < (int)(uVar28 << 0xe)) goto LAB_00113eaa;
              if (-1 < (int)(uVar28 << 0xf)) goto LAB_00113fd6;
              if (-1 < (int)(uVar28 << 0x10)) goto LAB_00114458;
              uVar14 = (uint)((uVar28 & 0x4000) == 0);
            }
          }
          else {
            uVar14 = 0;
            if ((uVar28 & 0xffffc000) != 0) {
              if ((int)(uVar28 << 1) < 0) {
LAB_00112e8a:
                uVar14 = 0x11;
              }
              else if ((int)(uVar28 << 2) < 0) {
LAB_00112e4c:
                uVar14 = 0x10;
              }
              else if ((int)(uVar28 << 3) < 0) {
LAB_00112e44:
                uVar14 = 0xf;
              }
              else if ((int)(uVar28 << 4) < 0) {
LAB_00113f02:
                uVar14 = 0xe;
              }
              else if ((int)(uVar28 << 5) < 0) {
LAB_00113efa:
                uVar14 = 0xd;
              }
              else if ((int)(uVar28 << 6) < 0) {
LAB_00113f0a:
                uVar14 = 0xc;
              }
              else if ((int)(uVar28 << 7) < 0) {
LAB_00113d8e:
                uVar14 = 0xb;
              }
              else if ((int)(uVar28 << 8) < 0) {
LAB_00113eda:
                uVar14 = 10;
              }
              else if ((int)(uVar28 << 9) < 0) {
LAB_00113ed2:
                uVar14 = 9;
              }
              else if ((int)(uVar28 << 10) < 0) {
LAB_00113eca:
                uVar14 = 8;
              }
              else if ((int)(uVar28 << 0xb) < 0) {
LAB_00113ec2:
                uVar14 = 7;
              }
              else if ((int)(uVar28 << 0xc) < 0) {
LAB_00113eba:
                uVar14 = 6;
              }
              else if ((int)(uVar28 << 0xd) < 0) {
LAB_00113eb2:
                uVar14 = 5;
              }
              else if ((int)(uVar28 << 0xe) < 0) {
LAB_00113eaa:
                uVar14 = 4;
              }
              else if ((int)(uVar28 << 0xf) < 0) {
LAB_00113fd6:
                uVar14 = 3;
              }
              else if ((int)(uVar28 << 0x10) < 0) {
LAB_00114458:
                uVar14 = 2;
              }
              else {
                uVar14 = (uVar28 & 0x7fff) >> 0xe;
              }
            }
          }
LAB_00107fe6:
          uVar22 = 0;
          if (uVar25 != 0) {
            if ((uVar25 & 0x80000000) == 0x80000000) {
              if ((uVar25 & 0xffffc000) == 0xffffc000) {
                uVar22 = 0;
              }
              else {
                if (-1 < (int)(uVar25 << 1)) goto LAB_00112f80;
                if (-1 < (int)(uVar25 << 2)) goto LAB_00112e5c;
                if (-1 < (int)(uVar25 << 3)) goto LAB_00112e54;
                if (-1 < (int)(uVar25 << 4)) goto LAB_001135a0;
                if (-1 < (int)(uVar25 << 5)) goto LAB_00113598;
                if (-1 < (int)(uVar25 << 6)) goto LAB_001135a8;
                if (-1 < (int)(uVar25 << 7)) goto LAB_001134b0;
                if (-1 < (int)(uVar25 << 8)) goto LAB_00113590;
                if (-1 < (int)(uVar25 << 9)) goto LAB_00113588;
                if (-1 < (int)(uVar25 << 10)) goto LAB_00113580;
                if (-1 < (int)(uVar25 << 0xb)) goto LAB_00113578;
                if (-1 < (int)(uVar25 << 0xc)) goto LAB_00113570;
                if (-1 < (int)(uVar25 << 0xd)) goto LAB_00113568;
                if (-1 < (int)(uVar25 << 0xe)) goto LAB_00113560;
                if (-1 < (int)(uVar25 << 0xf)) goto LAB_0011401c;
                if (-1 < (int)(uVar25 << 0x10)) goto LAB_00114034;
                uVar22 = (uint)((uVar25 & 0x4000) == 0);
              }
            }
            else {
              uVar22 = 0;
              if ((uVar25 & 0xffffc000) != 0) {
                if ((int)(uVar25 << 1) < 0) {
LAB_00112f80:
                  uVar22 = 0x11;
                }
                else if ((int)(uVar25 << 2) < 0) {
LAB_00112e5c:
                  uVar22 = 0x10;
                }
                else if ((int)(uVar25 << 3) < 0) {
LAB_00112e54:
                  uVar22 = 0xf;
                }
                else if ((int)(uVar25 << 4) < 0) {
LAB_001135a0:
                  uVar22 = 0xe;
                }
                else if ((int)(uVar25 << 5) < 0) {
LAB_00113598:
                  uVar22 = 0xd;
                }
                else if ((int)(uVar25 << 6) < 0) {
LAB_001135a8:
                  uVar22 = 0xc;
                }
                else if ((int)(uVar25 << 7) < 0) {
LAB_001134b0:
                  uVar22 = 0xb;
                }
                else if ((int)(uVar25 << 8) < 0) {
LAB_00113590:
                  uVar22 = 10;
                }
                else if ((int)(uVar25 << 9) < 0) {
LAB_00113588:
                  uVar22 = 9;
                }
                else if ((int)(uVar25 << 10) < 0) {
LAB_00113580:
                  uVar22 = 8;
                }
                else if ((int)(uVar25 << 0xb) < 0) {
LAB_00113578:
                  uVar22 = 7;
                }
                else if ((int)(uVar25 << 0xc) < 0) {
LAB_00113570:
                  uVar22 = 6;
                }
                else if ((int)(uVar25 << 0xd) < 0) {
LAB_00113568:
                  uVar22 = 5;
                }
                else if ((int)(uVar25 << 0xe) < 0) {
LAB_00113560:
                  uVar22 = 4;
                }
                else if ((int)(uVar25 << 0xf) < 0) {
LAB_0011401c:
                  uVar22 = 3;
                }
                else if ((int)(uVar25 << 0x10) < 0) {
LAB_00114034:
                  uVar22 = 2;
                }
                else {
                  uVar22 = (uVar25 & 0x7fff) >> 0xe;
                }
              }
            }
          }
          uVar11 = 0;
          if (uVar24 != 0) {
            if ((uVar24 & 0x80000000) == 0x80000000) {
              if ((uVar24 & 0xffffc000) == 0xffffc000) {
                uVar11 = 0;
              }
              else {
                if (-1 < (int)(uVar24 << 1)) goto LAB_00112f66;
                if (-1 < (int)(uVar24 << 2)) goto LAB_00112ee8;
                if (-1 < (int)(uVar24 << 3)) goto LAB_00112ee0;
                if (-1 < (int)(uVar24 << 4)) goto LAB_00113c60;
                if (-1 < (int)(uVar24 << 5)) goto LAB_00113c58;
                if (-1 < (int)(uVar24 << 6)) goto LAB_00113c68;
                if (-1 < (int)(uVar24 << 7)) goto LAB_0011385c;
                if (-1 < (int)(uVar24 << 8)) goto LAB_001138cc;
                if (-1 < (int)(uVar24 << 9)) goto LAB_001138c4;
                if (-1 < (int)(uVar24 << 10)) goto LAB_001138bc;
                if (-1 < (int)(uVar24 << 0xb)) goto LAB_001138b4;
                if (-1 < (int)(uVar24 << 0xc)) goto LAB_001138ac;
                if (-1 < (int)(uVar24 << 0xd)) goto LAB_001138a4;
                if (-1 < (int)(uVar24 << 0xe)) goto LAB_0011389c;
                if (-1 < (int)(uVar24 << 0xf)) goto LAB_00114090;
                if (-1 < (int)(uVar24 << 0x10)) goto LAB_0011403c;
                uVar11 = (uint)((uVar24 & 0x4000) == 0);
              }
            }
            else {
              uVar11 = 0;
              if ((uVar24 & 0xffffc000) != 0) {
                if ((int)(uVar24 << 1) < 0) {
LAB_00112f66:
                  uVar11 = 0x11;
                }
                else if ((int)(uVar24 << 2) < 0) {
LAB_00112ee8:
                  uVar11 = 0x10;
                }
                else if ((int)(uVar24 << 3) < 0) {
LAB_00112ee0:
                  uVar11 = 0xf;
                }
                else if ((int)(uVar24 << 4) < 0) {
LAB_00113c60:
                  uVar11 = 0xe;
                }
                else if ((int)(uVar24 << 5) < 0) {
LAB_00113c58:
                  uVar11 = 0xd;
                }
                else if ((int)(uVar24 << 6) < 0) {
LAB_00113c68:
                  uVar11 = 0xc;
                }
                else if ((int)(uVar24 << 7) < 0) {
LAB_0011385c:
                  uVar11 = 0xb;
                }
                else if ((int)(uVar24 << 8) < 0) {
LAB_001138cc:
                  uVar11 = 10;
                }
                else if ((int)(uVar24 << 9) < 0) {
LAB_001138c4:
                  uVar11 = 9;
                }
                else if ((int)(uVar24 << 10) < 0) {
LAB_001138bc:
                  uVar11 = 8;
                }
                else if ((int)(uVar24 << 0xb) < 0) {
LAB_001138b4:
                  uVar11 = 7;
                }
                else if ((int)(uVar24 << 0xc) < 0) {
LAB_001138ac:
                  uVar11 = 6;
                }
                else if ((int)(uVar24 << 0xd) < 0) {
LAB_001138a4:
                  uVar11 = 5;
                }
                else if ((int)(uVar24 << 0xe) < 0) {
LAB_0011389c:
                  uVar11 = 4;
                }
                else if ((int)(uVar24 << 0xf) < 0) {
LAB_00114090:
                  uVar11 = 3;
                }
                else if ((int)(uVar24 << 0x10) < 0) {
LAB_0011403c:
                  uVar11 = 2;
                }
                else {
                  uVar11 = (uVar24 & 0x7fff) >> 0xe;
                }
              }
            }
          }
          if (uVar14 <= uVar22) {
            uVar14 = uVar22;
          }
          if (uVar14 < uVar11) {
            uVar14 = uVar11;
          }
          switch(uVar14) {
          case 0:
            iVar5 = 1;
            break;
          case 1:
            iVar5 = 2;
            break;
          case 2:
            iVar5 = 4;
            break;
          case 3:
            iVar5 = 8;
            break;
          case 4:
            iVar5 = 0x10;
            break;
          case 5:
            iVar5 = 0x20;
            break;
          case 6:
            iVar5 = 0x40;
            break;
          case 7:
            iVar5 = 0x80;
            break;
          case 8:
            iVar5 = 0x100;
            break;
          case 9:
            iVar5 = 0x200;
            break;
          case 10:
            iVar5 = 0x400;
            break;
          case 0xb:
            iVar5 = 0x800;
            break;
          case 0xc:
            iVar5 = 0x1000;
            break;
          case 0xd:
            iVar5 = 0x2000;
            break;
          case 0xe:
            iVar5 = 0x4000;
            break;
          case 0xf:
            iVar5 = 0x8000;
            break;
          case 0x10:
            iVar5 = 0x10000;
            break;
          case 0x11:
            iVar5 = 0x20000;
            break;
          case 0x12:
            iVar5 = 0x40000;
            break;
          case 0x13:
            iVar5 = 0x80000;
            break;
          case 0x14:
            iVar5 = 0x100000;
            break;
          case 0x15:
            iVar5 = 0x200000;
            break;
          case 0x16:
            iVar5 = 0x400000;
            break;
          case 0x17:
            iVar5 = 0x800000;
            break;
          case 0x18:
            iVar5 = 0x1000000;
            break;
          case 0x19:
            iVar5 = 0x2000000;
            break;
          case 0x1a:
            iVar5 = 0x4000000;
            break;
          case 0x1b:
            iVar5 = 0x8000000;
            break;
          case 0x1c:
            iVar5 = 0x10000000;
            break;
          case 0x1d:
            iVar5 = 0x20000000;
            break;
          default:
            iVar5 = 0x40000000;
          }
          iVar6 = __divsi3(uVar28,iVar5);
          iVar7 = __divsi3(uVar25,iVar5);
          iVar15 = __divsi3(uVar24,iVar5);
          iVar6 = iVar15 * iVar15 + iVar6 * iVar6 + iVar7 * iVar7;
          if (iVar6 < 1) {
            iVar7 = 0;
          }
          else {
            iVar15 = iVar6;
            if (iVar6 == 0x7fffffff) {
              iVar6 = 0x7ffffffe;
              iVar15 = 0x7ffffffe;
            }
            do {
              iVar7 = __divsi3(iVar15,iVar6);
              iVar10 = (iVar6 + iVar7) / 2;
              iVar7 = iVar6;
              if (iVar6 <= iVar10) break;
              iVar6 = __divsi3(iVar15,iVar10);
              iVar6 = (iVar10 + iVar6) / 2;
              iVar7 = iVar10;
              if (iVar10 <= iVar6) break;
              iVar7 = __divsi3(iVar15,iVar6);
              iVar10 = (iVar6 + iVar7) / 2;
              iVar7 = iVar6;
              if (iVar6 <= iVar10) break;
              iVar6 = __divsi3(iVar15,iVar10);
              iVar6 = (iVar10 + iVar6) / 2;
              iVar7 = iVar10;
              if (iVar10 <= iVar6) break;
              iVar7 = __divsi3(iVar15);
              iVar10 = (iVar6 + iVar7) / 2;
              iVar7 = iVar6;
              if (iVar6 <= iVar10) break;
              iVar6 = __divsi3(iVar15,iVar10);
              iVar6 = (iVar10 + iVar6) / 2;
              iVar7 = iVar10;
              if (iVar10 <= iVar6) break;
              iVar7 = __divsi3(iVar15,iVar6);
              iVar10 = (iVar6 + iVar7) / 2;
              iVar7 = iVar6;
              if (iVar6 <= iVar10) break;
              iVar6 = __divsi3(iVar15,iVar10);
              iVar6 = (iVar6 + iVar10) / 2;
              iVar7 = iVar10;
            } while (iVar6 < iVar10);
          }
          uVar14 = uVar24;
          if ((int)uVar24 < (int)uVar25) {
            uVar14 = uVar25;
          }
          if ((int)uVar14 < (int)uVar28) {
            uVar14 = uVar28;
          }
          uVar22 = iVar5 * iVar7;
          if (iVar5 * iVar7 <= (int)uVar14) {
            uVar22 = uVar14;
          }
          if (uVar22 == 0) goto LAB_00108528;
          uVar14 = 0;
          if (uVar28 != 0) {
            if ((uVar28 & 0x80000000) == 0x80000000) {
              if ((uVar28 & 0xffff8000) == 0xffff8000) {
                uVar14 = 0;
              }
              else {
                if (-1 < (int)(uVar28 << 1)) goto LAB_00114130;
                if (-1 < (int)(uVar28 << 2)) goto LAB_0011413c;
                if (-1 < (int)(uVar28 << 3)) goto LAB_00114136;
                if (-1 < (int)(uVar28 << 4)) goto LAB_00114148;
                if (-1 < (int)(uVar28 << 5)) goto LAB_00114142;
                if (-1 < (int)(uVar28 << 6)) goto LAB_0011496a;
                if (-1 < (int)(uVar28 << 7)) goto LAB_00114964;
                if (-1 < (int)(uVar28 << 8)) goto LAB_00114a84;
                if (-1 < (int)(uVar28 << 9)) goto LAB_00114a7e;
                if (-1 < (int)(uVar28 << 10)) goto LAB_00114a78;
                if (-1 < (int)(uVar28 << 0xb)) goto LAB_00114a72;
                if (-1 < (int)(uVar28 << 0xc)) goto LAB_00114a6c;
                if (-1 < (int)(uVar28 << 0xd)) goto LAB_00114a66;
                if (-1 < (int)(uVar28 << 0xe)) goto LAB_00114a60;
                if (-1 < (int)(uVar28 << 0xf)) goto LAB_00114a5a;
                uVar14 = (uint)((uVar28 & 0x8000) == 0);
              }
            }
            else if ((uVar28 & 0xffff8000) == 0) {
              uVar14 = 0;
            }
            else if ((int)(uVar28 << 1) < 0) {
LAB_00114130:
              uVar14 = 0x10;
            }
            else if ((int)(uVar28 << 2) < 0) {
LAB_0011413c:
              uVar14 = 0xf;
            }
            else if ((int)(uVar28 << 3) < 0) {
LAB_00114136:
              uVar14 = 0xe;
            }
            else if ((int)(uVar28 << 4) < 0) {
LAB_00114148:
              uVar14 = 0xd;
            }
            else if ((int)(uVar28 << 5) < 0) {
LAB_00114142:
              uVar14 = 0xc;
            }
            else if ((int)(uVar28 << 6) < 0) {
LAB_0011496a:
              uVar14 = 0xb;
            }
            else if ((int)(uVar28 << 7) < 0) {
LAB_00114964:
              uVar14 = 10;
            }
            else if ((int)(uVar28 << 8) < 0) {
LAB_00114a84:
              uVar14 = 9;
            }
            else if ((int)(uVar28 << 9) < 0) {
LAB_00114a7e:
              uVar14 = 8;
            }
            else if ((int)(uVar28 << 10) < 0) {
LAB_00114a78:
              uVar14 = 7;
            }
            else if ((int)(uVar28 << 0xb) < 0) {
LAB_00114a72:
              uVar14 = 6;
            }
            else if ((int)(uVar28 << 0xc) < 0) {
LAB_00114a6c:
              uVar14 = 5;
            }
            else if ((int)(uVar28 << 0xd) < 0) {
LAB_00114a66:
              uVar14 = 4;
            }
            else if ((int)(uVar28 << 0xe) < 0) {
LAB_00114a60:
              uVar14 = 3;
            }
            else if ((int)(uVar28 << 0xf) < 0) {
LAB_00114a5a:
              uVar14 = 2;
            }
            else {
              uVar14 = (uVar28 & 0xffff) >> 0xf;
            }
          }
          uVar11 = 0;
          if (uVar25 != 0) {
            if ((uVar25 & 0x80000000) == 0x80000000) {
              if ((uVar25 & 0xffff8000) == 0xffff8000) {
                uVar11 = 0;
              }
              else {
                if (-1 < (int)(uVar25 << 1)) goto LAB_001141e8;
                if (-1 < (int)(uVar25 << 2)) goto LAB_0011402c;
                if (-1 < (int)(uVar25 << 3)) goto LAB_00114024;
                if (-1 < (int)(uVar25 << 4)) goto LAB_00114120;
                if (-1 < (int)(uVar25 << 5)) goto LAB_00114118;
                if (-1 < (int)(uVar25 << 6)) goto LAB_00114a9a;
                if (-1 < (int)(uVar25 << 7)) goto LAB_00114a92;
                if (-1 < (int)(uVar25 << 8)) goto LAB_00114ada;
                if (-1 < (int)(uVar25 << 9)) goto LAB_00114ad2;
                if (-1 < (int)(uVar25 << 10)) goto LAB_00114aca;
                if (-1 < (int)(uVar25 << 0xb)) goto LAB_00114ac2;
                if (-1 < (int)(uVar25 << 0xc)) goto LAB_00114aba;
                if (-1 < (int)(uVar25 << 0xd)) goto LAB_00114ab2;
                if (-1 < (int)(uVar25 << 0xe)) goto LAB_00114aaa;
                if (-1 < (int)(uVar25 << 0xf)) goto LAB_00114aa2;
                uVar11 = (uint)((uVar25 & 0x8000) == 0);
              }
            }
            else {
              uVar11 = 0;
              if ((uVar25 & 0xffff8000) != 0) {
                if ((int)(uVar25 << 1) < 0) {
LAB_001141e8:
                  uVar11 = 0x10;
                }
                else if ((int)(uVar25 << 2) < 0) {
LAB_0011402c:
                  uVar11 = 0xf;
                }
                else if ((int)(uVar25 << 3) < 0) {
LAB_00114024:
                  uVar11 = 0xe;
                }
                else if ((int)(uVar25 << 4) < 0) {
LAB_00114120:
                  uVar11 = 0xd;
                }
                else if ((int)(uVar25 << 5) < 0) {
LAB_00114118:
                  uVar11 = 0xc;
                }
                else if ((int)(uVar25 << 6) < 0) {
LAB_00114a9a:
                  uVar11 = 0xb;
                }
                else if ((int)(uVar25 << 7) < 0) {
LAB_00114a92:
                  uVar11 = 10;
                }
                else if ((int)(uVar25 << 8) < 0) {
LAB_00114ada:
                  uVar11 = 9;
                }
                else if ((int)(uVar25 << 9) < 0) {
LAB_00114ad2:
                  uVar11 = 8;
                }
                else if ((int)(uVar25 << 10) < 0) {
LAB_00114aca:
                  uVar11 = 7;
                }
                else if ((int)(uVar25 << 0xb) < 0) {
LAB_00114ac2:
                  uVar11 = 6;
                }
                else if ((int)(uVar25 << 0xc) < 0) {
LAB_00114aba:
                  uVar11 = 5;
                }
                else if ((int)(uVar25 << 0xd) < 0) {
LAB_00114ab2:
                  uVar11 = 4;
                }
                else if ((int)(uVar25 << 0xe) < 0) {
LAB_00114aaa:
                  uVar11 = 3;
                }
                else if ((int)(uVar25 << 0xf) < 0) {
LAB_00114aa2:
                  uVar11 = 2;
                }
                else {
                  uVar11 = (uVar25 & 0xffff) >> 0xf;
                }
              }
            }
          }
          uVar34 = 0;
          if (uVar24 != 0) {
            if ((uVar24 & 0x80000000) == 0x80000000) {
              if ((uVar24 & 0xffff8000) == 0xffff8000) {
                uVar34 = 0;
              }
              else {
                if (-1 < (int)(uVar24 << 1)) goto LAB_00114128;
                if (-1 < (int)(uVar24 << 2)) goto LAB_00114156;
                if (-1 < (int)(uVar24 << 3)) goto LAB_0011414e;
                if (-1 < (int)(uVar24 << 4)) goto LAB_00114166;
                if (-1 < (int)(uVar24 << 5)) goto LAB_0011415e;
                if (-1 < (int)(uVar24 << 6)) goto LAB_00114950;
                if (-1 < (int)(uVar24 << 7)) goto LAB_00114948;
                if (-1 < (int)(uVar24 << 8)) goto LAB_001149d8;
                if (-1 < (int)(uVar24 << 9)) goto LAB_001149d0;
                if (-1 < (int)(uVar24 << 10)) goto LAB_001149c8;
                if (-1 < (int)(uVar24 << 0xb)) goto LAB_001149c0;
                if (-1 < (int)(uVar24 << 0xc)) goto LAB_001149b8;
                if (-1 < (int)(uVar24 << 0xd)) goto LAB_001149b0;
                if (-1 < (int)(uVar24 << 0xe)) goto LAB_001149a8;
                if (-1 < (int)(uVar24 << 0xf)) goto LAB_001149a0;
                uVar34 = (uint)((uVar24 & 0x8000) == 0);
              }
            }
            else {
              uVar34 = 0;
              if ((uVar24 & 0xffff8000) != 0) {
                if ((int)(uVar24 << 1) < 0) {
LAB_00114128:
                  uVar34 = 0x10;
                }
                else if ((int)(uVar24 << 2) < 0) {
LAB_00114156:
                  uVar34 = 0xf;
                }
                else if ((int)(uVar24 << 3) < 0) {
LAB_0011414e:
                  uVar34 = 0xe;
                }
                else if ((int)(uVar24 << 4) < 0) {
LAB_00114166:
                  uVar34 = 0xd;
                }
                else if ((int)(uVar24 << 5) < 0) {
LAB_0011415e:
                  uVar34 = 0xc;
                }
                else if ((int)(uVar24 << 6) < 0) {
LAB_00114950:
                  uVar34 = 0xb;
                }
                else if ((int)(uVar24 << 7) < 0) {
LAB_00114948:
                  uVar34 = 10;
                }
                else if ((int)(uVar24 << 8) < 0) {
LAB_001149d8:
                  uVar34 = 9;
                }
                else if ((int)(uVar24 << 9) < 0) {
LAB_001149d0:
                  uVar34 = 8;
                }
                else if ((int)(uVar24 << 10) < 0) {
LAB_001149c8:
                  uVar34 = 7;
                }
                else if ((int)(uVar24 << 0xb) < 0) {
LAB_001149c0:
                  uVar34 = 6;
                }
                else if ((int)(uVar24 << 0xc) < 0) {
LAB_001149b8:
                  uVar34 = 5;
                }
                else if ((int)(uVar24 << 0xd) < 0) {
LAB_001149b0:
                  uVar34 = 4;
                }
                else if ((int)(uVar24 << 0xe) < 0) {
LAB_001149a8:
                  uVar34 = 3;
                }
                else if ((int)(uVar24 << 0xf) < 0) {
LAB_001149a0:
                  uVar34 = 2;
                }
                else {
                  uVar34 = (uVar24 & 0xffff) >> 0xf;
                }
              }
            }
          }
          if (uVar11 < uVar14) {
            uVar11 = uVar14;
          }
          if (uVar11 < uVar34) {
            uVar11 = uVar34;
          }
          switch(uVar11) {
          case 0:
            uVar23 = 1;
            goto code_r0x0010a148;
          case 1:
            uVar23 = 2;
            break;
          case 2:
            uVar23 = 4;
            break;
          case 3:
            uVar23 = 8;
            break;
          case 4:
            uVar23 = 0x10;
            break;
          case 5:
            uVar23 = 0x20;
            break;
          case 6:
            uVar23 = 0x40;
            break;
          case 7:
            uVar23 = 0x80;
            break;
          case 8:
            uVar23 = 0x100;
            break;
          case 9:
            uVar23 = 0x200;
            break;
          case 10:
            uVar23 = 0x400;
            break;
          case 0xb:
            uVar23 = 0x800;
            break;
          case 0xc:
            uVar23 = 0x1000;
            break;
          case 0xd:
            uVar23 = 0x2000;
            break;
          case 0xe:
            uVar23 = 0x4000;
            break;
          case 0xf:
            uVar23 = 0x8000;
            break;
          case 0x10:
            uVar23 = 0x10000;
            break;
          case 0x11:
            uVar23 = 0x20000;
            break;
          case 0x12:
            uVar23 = 0x40000;
            break;
          case 0x13:
            uVar23 = 0x80000;
            break;
          case 0x14:
            uVar23 = 0x100000;
            break;
          case 0x15:
            uVar23 = 0x200000;
            break;
          case 0x16:
            uVar23 = 0x400000;
            break;
          case 0x17:
            uVar23 = 0x800000;
            break;
          case 0x18:
            uVar23 = 0x1000000;
            break;
          case 0x19:
            uVar23 = 0x2000000;
            break;
          case 0x1a:
            uVar23 = 0x4000000;
            break;
          case 0x1b:
            uVar23 = 0x8000000;
            break;
          case 0x1c:
            uVar23 = 0x10000000;
            break;
          case 0x1d:
            uVar23 = 0x20000000;
            break;
          default:
            uVar23 = 0x40000000;
          }
          uVar22 = __divsi3(uVar22,uVar23);
          if (uVar22 == 0) goto LAB_00108528;
code_r0x0010a148:
          if (uVar28 != 0) {
            iVar5 = __divsi3(uVar28,uVar23);
            uVar4 = __divsi3(iVar5 * 0x7fff,uVar22);
            *(undefined4 *)(param_2 + 0x13c) = uVar4;
          }
          if (uVar25 != 0) {
            iVar5 = __divsi3(uVar25,uVar23);
            uVar4 = __divsi3(iVar5 * 0x7fff,uVar22);
            *(undefined4 *)(param_2 + 0x140) = uVar4;
          }
          if (uVar24 != 0) {
            iVar5 = __divsi3(uVar24,uVar23);
            uVar23 = __divsi3(iVar5 * 0x7fff,uVar22);
            *(undefined4 *)(param_2 + 0x144) = uVar23;
          }
        }
        uVar31 = uVar31 | 2;
      }
      if (((*(int *)(param_2 + 0x130) != *(int *)(param_2 + 0xbc)) ||
          (*(int *)(param_2 + 0x134) != *(int *)(param_2 + 0xc0))) ||
         (*(int *)(param_2 + 0x138) != *(int *)(param_2 + 0xc4))) {
        *(uint *)(param_2 + 0x130) = *(uint *)(param_2 + 0xbc);
        *(undefined4 *)(param_2 + 0x134) = *(undefined4 *)(param_2 + 0xc0);
        *(undefined4 *)(param_2 + 0x138) = *(undefined4 *)(param_2 + 0xc4);
        uVar28 = *(uint *)(param_2 + 0xbc);
        *(uint *)(param_2 + 0x148) = uVar28;
        *(undefined4 *)(param_2 + 0x14c) = *(undefined4 *)(param_2 + 0xc0);
        *(undefined4 *)(param_2 + 0x150) = *(undefined4 *)(param_2 + 0xc4);
        if (uVar28 == 0) {
          if ((*(int *)(param_2 + 0x14c) != 0) || (*(int *)(param_2 + 0x150) != 0)) {
            uVar25 = *(uint *)(param_2 + 0x14c);
            uVar14 = 0;
            uVar24 = *(uint *)(param_2 + 0x150);
            goto LAB_00108594;
          }
LAB_001088d6:
          *(undefined4 *)(param_2 + 0x148) = 0;
          *(undefined4 *)(param_2 + 0x14c) = 0;
          *(undefined4 *)(param_2 + 0x150) = 0;
        }
        else {
          uVar25 = *(uint *)(param_2 + 0x14c);
          uVar24 = *(uint *)(param_2 + 0x150);
          if ((uVar28 & 0x80000000) == 0x80000000) {
            if ((uVar28 & 0xffffc000) == 0xffffc000) {
              uVar14 = 0;
            }
            else {
              if (-1 < (int)(uVar28 << 1)) goto LAB_00112f88;
              if (-1 < (int)(uVar28 << 2)) goto LAB_00112f98;
              if (-1 < (int)(uVar28 << 3)) goto LAB_00112f90;
              if (-1 < (int)(uVar28 << 4)) goto LAB_00113bf8;
              if (-1 < (int)(uVar28 << 5)) goto LAB_00113bf0;
              if (-1 < (int)(uVar28 << 6)) goto LAB_00113be8;
              if (-1 < (int)(uVar28 << 7)) goto LAB_00113be0;
              if (-1 < (int)(uVar28 << 8)) goto LAB_0011375a;
              if (-1 < (int)(uVar28 << 9)) goto LAB_00113752;
              if (-1 < (int)(uVar28 << 10)) goto LAB_0011374a;
              if (-1 < (int)(uVar28 << 0xb)) goto LAB_00113742;
              if (-1 < (int)(uVar28 << 0xc)) goto LAB_0011373a;
              if (-1 < (int)(uVar28 << 0xd)) goto LAB_00113732;
              if (-1 < (int)(uVar28 << 0xe)) goto LAB_0011372a;
              if (-1 < (int)(uVar28 << 0xf)) goto LAB_00114372;
              if (-1 < (int)(uVar28 << 0x10)) goto LAB_00114098;
              uVar14 = (uint)((uVar28 & 0x4000) == 0);
            }
          }
          else {
            uVar14 = 0;
            if ((uVar28 & 0xffffc000) != 0) {
              if ((int)(uVar28 << 1) < 0) {
LAB_00112f88:
                uVar14 = 0x11;
              }
              else if ((int)(uVar28 << 2) < 0) {
LAB_00112f98:
                uVar14 = 0x10;
              }
              else if ((int)(uVar28 << 3) < 0) {
LAB_00112f90:
                uVar14 = 0xf;
              }
              else if ((int)(uVar28 << 4) < 0) {
LAB_00113bf8:
                uVar14 = 0xe;
              }
              else if ((int)(uVar28 << 5) < 0) {
LAB_00113bf0:
                uVar14 = 0xd;
              }
              else if ((int)(uVar28 << 6) < 0) {
LAB_00113be8:
                uVar14 = 0xc;
              }
              else if ((int)(uVar28 << 7) < 0) {
LAB_00113be0:
                uVar14 = 0xb;
              }
              else if ((int)(uVar28 << 8) < 0) {
LAB_0011375a:
                uVar14 = 10;
              }
              else if ((int)(uVar28 << 9) < 0) {
LAB_00113752:
                uVar14 = 9;
              }
              else if ((int)(uVar28 << 10) < 0) {
LAB_0011374a:
                uVar14 = 8;
              }
              else if ((int)(uVar28 << 0xb) < 0) {
LAB_00113742:
                uVar14 = 7;
              }
              else if ((int)(uVar28 << 0xc) < 0) {
LAB_0011373a:
                uVar14 = 6;
              }
              else if ((int)(uVar28 << 0xd) < 0) {
LAB_00113732:
                uVar14 = 5;
              }
              else if ((int)(uVar28 << 0xe) < 0) {
LAB_0011372a:
                uVar14 = 4;
              }
              else if ((int)(uVar28 << 0xf) < 0) {
LAB_00114372:
                uVar14 = 3;
              }
              else if ((int)(uVar28 << 0x10) < 0) {
LAB_00114098:
                uVar14 = 2;
              }
              else {
                uVar14 = (uVar28 & 0x7fff) >> 0xe;
              }
            }
          }
LAB_00108594:
          uVar22 = 0;
          if (uVar25 != 0) {
            if ((uVar25 & 0x80000000) == 0x80000000) {
              if ((uVar25 & 0xffffc000) == 0xffffc000) {
                uVar22 = 0;
              }
              else {
                if (-1 < (int)(uVar25 << 1)) goto LAB_00112e92;
                if (-1 < (int)(uVar25 << 2)) goto LAB_00112ea2;
                if (-1 < (int)(uVar25 << 3)) goto LAB_00112e9a;
                if (-1 < (int)(uVar25 << 4)) goto LAB_00113a34;
                if (-1 < (int)(uVar25 << 5)) goto LAB_00113a2c;
                if (-1 < (int)(uVar25 << 6)) goto LAB_00113a3c;
                if (-1 < (int)(uVar25 << 7)) goto LAB_001139ec;
                if (-1 < (int)(uVar25 << 8)) goto LAB_00113a24;
                if (-1 < (int)(uVar25 << 9)) goto LAB_00113a1c;
                if (-1 < (int)(uVar25 << 10)) goto LAB_00113a14;
                if (-1 < (int)(uVar25 << 0xb)) goto LAB_00113a0c;
                if (-1 < (int)(uVar25 << 0xc)) goto LAB_00113a04;
                if (-1 < (int)(uVar25 << 0xd)) goto LAB_001139fc;
                if (-1 < (int)(uVar25 << 0xe)) goto LAB_001139f4;
                if (-1 < (int)(uVar25 << 0xf)) goto LAB_0011430e;
                if (-1 < (int)(uVar25 << 0x10)) goto LAB_00114460;
                uVar22 = (uint)((uVar25 & 0x4000) == 0);
              }
            }
            else {
              uVar22 = 0;
              if ((uVar25 & 0xffffc000) != 0) {
                if ((int)(uVar25 << 1) < 0) {
LAB_00112e92:
                  uVar22 = 0x11;
                }
                else if ((int)(uVar25 << 2) < 0) {
LAB_00112ea2:
                  uVar22 = 0x10;
                }
                else if ((int)(uVar25 << 3) < 0) {
LAB_00112e9a:
                  uVar22 = 0xf;
                }
                else if ((int)(uVar25 << 4) < 0) {
LAB_00113a34:
                  uVar22 = 0xe;
                }
                else if ((int)(uVar25 << 5) < 0) {
LAB_00113a2c:
                  uVar22 = 0xd;
                }
                else if ((int)(uVar25 << 6) < 0) {
LAB_00113a3c:
                  uVar22 = 0xc;
                }
                else if ((int)(uVar25 << 7) < 0) {
LAB_001139ec:
                  uVar22 = 0xb;
                }
                else if ((int)(uVar25 << 8) < 0) {
LAB_00113a24:
                  uVar22 = 10;
                }
                else if ((int)(uVar25 << 9) < 0) {
LAB_00113a1c:
                  uVar22 = 9;
                }
                else if ((int)(uVar25 << 10) < 0) {
LAB_00113a14:
                  uVar22 = 8;
                }
                else if ((int)(uVar25 << 0xb) < 0) {
LAB_00113a0c:
                  uVar22 = 7;
                }
                else if ((int)(uVar25 << 0xc) < 0) {
LAB_00113a04:
                  uVar22 = 6;
                }
                else if ((int)(uVar25 << 0xd) < 0) {
LAB_001139fc:
                  uVar22 = 5;
                }
                else if ((int)(uVar25 << 0xe) < 0) {
LAB_001139f4:
                  uVar22 = 4;
                }
                else if ((int)(uVar25 << 0xf) < 0) {
LAB_0011430e:
                  uVar22 = 3;
                }
                else if ((int)(uVar25 << 0x10) < 0) {
LAB_00114460:
                  uVar22 = 2;
                }
                else {
                  uVar22 = (uVar25 & 0x7fff) >> 0xe;
                }
              }
            }
          }
          uVar11 = 0;
          if (uVar24 != 0) {
            if ((uVar24 & 0x80000000) == 0x80000000) {
              if ((uVar24 & 0xffffc000) == 0xffffc000) {
                uVar11 = 0;
              }
              else {
                if (-1 < (int)(uVar24 << 1)) goto LAB_00112f6e;
                if (-1 < (int)(uVar24 << 2)) goto LAB_00112f7a;
                if (-1 < (int)(uVar24 << 3)) goto LAB_00112f74;
                if (-1 < (int)(uVar24 << 4)) goto LAB_00113f4e;
                if (-1 < (int)(uVar24 << 5)) goto LAB_00113f48;
                if (-1 < (int)(uVar24 << 6)) goto LAB_00113f42;
                if (-1 < (int)(uVar24 << 7)) goto LAB_00113f3c;
                if (-1 < (int)(uVar24 << 8)) goto LAB_00113f36;
                if (-1 < (int)(uVar24 << 9)) goto LAB_00113f30;
                if (-1 < (int)(uVar24 << 10)) goto LAB_00113f2a;
                if (-1 < (int)(uVar24 << 0xb)) goto LAB_00113f24;
                if (-1 < (int)(uVar24 << 0xc)) goto LAB_00113f1e;
                if (-1 < (int)(uVar24 << 0xd)) goto LAB_00113f18;
                if (-1 < (int)(uVar24 << 0xe)) goto LAB_00113f12;
                if (-1 < (int)(uVar24 << 0xf)) goto LAB_00113fde;
                if (-1 < (int)(uVar24 << 0x10)) goto LAB_00114468;
                uVar11 = (uint)((uVar24 & 0x4000) == 0);
              }
            }
            else {
              uVar11 = 0;
              if ((uVar24 & 0xffffc000) != 0) {
                if ((int)(uVar24 << 1) < 0) {
LAB_00112f6e:
                  uVar11 = 0x11;
                }
                else if ((int)(uVar24 << 2) < 0) {
LAB_00112f7a:
                  uVar11 = 0x10;
                }
                else if ((int)(uVar24 << 3) < 0) {
LAB_00112f74:
                  uVar11 = 0xf;
                }
                else if ((int)(uVar24 << 4) < 0) {
LAB_00113f4e:
                  uVar11 = 0xe;
                }
                else if ((int)(uVar24 << 5) < 0) {
LAB_00113f48:
                  uVar11 = 0xd;
                }
                else if ((int)(uVar24 << 6) < 0) {
LAB_00113f42:
                  uVar11 = 0xc;
                }
                else if ((int)(uVar24 << 7) < 0) {
LAB_00113f3c:
                  uVar11 = 0xb;
                }
                else if ((int)(uVar24 << 8) < 0) {
LAB_00113f36:
                  uVar11 = 10;
                }
                else if ((int)(uVar24 << 9) < 0) {
LAB_00113f30:
                  uVar11 = 9;
                }
                else if ((int)(uVar24 << 10) < 0) {
LAB_00113f2a:
                  uVar11 = 8;
                }
                else if ((int)(uVar24 << 0xb) < 0) {
LAB_00113f24:
                  uVar11 = 7;
                }
                else if ((int)(uVar24 << 0xc) < 0) {
LAB_00113f1e:
                  uVar11 = 6;
                }
                else if ((int)(uVar24 << 0xd) < 0) {
LAB_00113f18:
                  uVar11 = 5;
                }
                else if ((int)(uVar24 << 0xe) < 0) {
LAB_00113f12:
                  uVar11 = 4;
                }
                else if ((int)(uVar24 << 0xf) < 0) {
LAB_00113fde:
                  uVar11 = 3;
                }
                else if ((int)(uVar24 << 0x10) < 0) {
LAB_00114468:
                  uVar11 = 2;
                }
                else {
                  uVar11 = (uVar24 & 0x7fff) >> 0xe;
                }
              }
            }
          }
          if (uVar22 < uVar14) {
            uVar22 = uVar14;
          }
          if (uVar22 < uVar11) {
            uVar22 = uVar11;
          }
          switch(uVar22) {
          case 0:
            iVar5 = 1;
            break;
          case 1:
            iVar5 = 2;
            break;
          case 2:
            iVar5 = 4;
            break;
          case 3:
            iVar5 = 8;
            break;
          case 4:
            iVar5 = 0x10;
            break;
          case 5:
            iVar5 = 0x20;
            break;
          case 6:
            iVar5 = 0x40;
            break;
          case 7:
            iVar5 = 0x80;
            break;
          case 8:
            iVar5 = 0x100;
            break;
          case 9:
            iVar5 = 0x200;
            break;
          case 10:
            iVar5 = 0x400;
            break;
          case 0xb:
            iVar5 = 0x800;
            break;
          case 0xc:
            iVar5 = 0x1000;
            break;
          case 0xd:
            iVar5 = 0x2000;
            break;
          case 0xe:
            iVar5 = 0x4000;
            break;
          case 0xf:
            iVar5 = 0x8000;
            break;
          case 0x10:
            iVar5 = 0x10000;
            break;
          case 0x11:
            iVar5 = 0x20000;
            break;
          case 0x12:
            iVar5 = 0x40000;
            break;
          case 0x13:
            iVar5 = 0x80000;
            break;
          case 0x14:
            iVar5 = 0x100000;
            break;
          case 0x15:
            iVar5 = 0x200000;
            break;
          case 0x16:
            iVar5 = 0x400000;
            break;
          case 0x17:
            iVar5 = 0x800000;
            break;
          case 0x18:
            iVar5 = 0x1000000;
            break;
          case 0x19:
            iVar5 = 0x2000000;
            break;
          case 0x1a:
            iVar5 = 0x4000000;
            break;
          case 0x1b:
            iVar5 = 0x8000000;
            break;
          case 0x1c:
            iVar5 = 0x10000000;
            break;
          case 0x1d:
            iVar5 = 0x20000000;
            break;
          default:
            iVar5 = 0x40000000;
          }
          iVar6 = __divsi3(uVar28,iVar5);
          iVar7 = __divsi3(uVar25,iVar5);
          iVar15 = __divsi3(uVar24,iVar5);
          iVar6 = iVar15 * iVar15 + iVar6 * iVar6 + iVar7 * iVar7;
          if (iVar6 < 1) {
            iVar7 = 0;
          }
          else {
            iVar15 = iVar6;
            if (iVar6 == 0x7fffffff) {
              iVar6 = 0x7ffffffe;
              iVar15 = 0x7ffffffe;
            }
            do {
              iVar7 = __divsi3(iVar15,iVar6);
              iVar10 = (iVar6 + iVar7) / 2;
              iVar7 = iVar6;
              if (iVar6 <= iVar10) break;
              iVar6 = __divsi3(iVar15,iVar10);
              iVar6 = (iVar10 + iVar6) / 2;
              iVar7 = iVar10;
              if (iVar10 <= iVar6) break;
              iVar7 = __divsi3(iVar15,iVar6);
              iVar10 = (iVar6 + iVar7) / 2;
              iVar7 = iVar6;
              if (iVar6 <= iVar10) break;
              iVar6 = __divsi3(iVar15);
              iVar6 = (iVar10 + iVar6) / 2;
              iVar7 = iVar10;
              if (iVar10 <= iVar6) break;
              iVar7 = __divsi3(iVar15,iVar6);
              iVar10 = (iVar6 + iVar7) / 2;
              iVar7 = iVar6;
              if (iVar6 <= iVar10) break;
              iVar6 = __divsi3(iVar15,iVar10);
              iVar6 = (iVar10 + iVar6) / 2;
              iVar7 = iVar10;
              if (iVar10 <= iVar6) break;
              iVar7 = __divsi3(iVar15,iVar6);
              iVar10 = (iVar6 + iVar7) / 2;
              iVar7 = iVar6;
              if (iVar6 <= iVar10) break;
              iVar6 = __divsi3(iVar15);
              iVar6 = (iVar6 + iVar10) / 2;
              iVar7 = iVar10;
            } while (iVar6 < iVar10);
          }
          uVar14 = uVar25;
          if ((int)uVar25 < (int)uVar24) {
            uVar14 = uVar24;
          }
          if ((int)uVar14 < (int)uVar28) {
            uVar14 = uVar28;
          }
          uVar22 = iVar5 * iVar7;
          if (iVar5 * iVar7 <= (int)uVar14) {
            uVar22 = uVar14;
          }
          if (uVar22 == 0) goto LAB_001088d6;
          uVar14 = 0;
          if (uVar28 != 0) {
            if ((uVar28 & 0x80000000) == 0x80000000) {
              if ((uVar28 & 0xffff8000) == 0xffff8000) {
                uVar14 = 0;
              }
              else {
                if (-1 < (int)(uVar28 << 1)) goto LAB_00114176;
                if (-1 < (int)(uVar28 << 2)) goto LAB_00114182;
                if (-1 < (int)(uVar28 << 3)) goto LAB_0011417c;
                if (-1 < (int)(uVar28 << 4)) goto LAB_0011418e;
                if (-1 < (int)(uVar28 << 5)) goto LAB_00114188;
                if (-1 < (int)(uVar28 << 6)) goto LAB_0011495e;
                if (-1 < (int)(uVar28 << 7)) goto LAB_00114958;
                if (-1 < (int)(uVar28 << 8)) goto LAB_0011499a;
                if (-1 < (int)(uVar28 << 9)) goto LAB_00114994;
                if (-1 < (int)(uVar28 << 10)) goto LAB_0011498e;
                if (-1 < (int)(uVar28 << 0xb)) goto LAB_00114988;
                if (-1 < (int)(uVar28 << 0xc)) goto LAB_00114982;
                if (-1 < (int)(uVar28 << 0xd)) goto LAB_0011497c;
                if (-1 < (int)(uVar28 << 0xe)) goto LAB_00114976;
                if (-1 < (int)(uVar28 << 0xf)) goto LAB_00114970;
                uVar14 = (uint)((uVar28 & 0x8000) == 0);
              }
            }
            else if ((uVar28 & 0xffff8000) == 0) {
              uVar14 = 0;
            }
            else if ((int)(uVar28 << 1) < 0) {
LAB_00114176:
              uVar14 = 0x10;
            }
            else if ((int)(uVar28 << 2) < 0) {
LAB_00114182:
              uVar14 = 0xf;
            }
            else if ((int)(uVar28 << 3) < 0) {
LAB_0011417c:
              uVar14 = 0xe;
            }
            else if ((int)(uVar28 << 4) < 0) {
LAB_0011418e:
              uVar14 = 0xd;
            }
            else if ((int)(uVar28 << 5) < 0) {
LAB_00114188:
              uVar14 = 0xc;
            }
            else if ((int)(uVar28 << 6) < 0) {
LAB_0011495e:
              uVar14 = 0xb;
            }
            else if ((int)(uVar28 << 7) < 0) {
LAB_00114958:
              uVar14 = 10;
            }
            else if ((int)(uVar28 << 8) < 0) {
LAB_0011499a:
              uVar14 = 9;
            }
            else if ((int)(uVar28 << 9) < 0) {
LAB_00114994:
              uVar14 = 8;
            }
            else if ((int)(uVar28 << 10) < 0) {
LAB_0011498e:
              uVar14 = 7;
            }
            else if ((int)(uVar28 << 0xb) < 0) {
LAB_00114988:
              uVar14 = 6;
            }
            else if ((int)(uVar28 << 0xc) < 0) {
LAB_00114982:
              uVar14 = 5;
            }
            else if ((int)(uVar28 << 0xd) < 0) {
LAB_0011497c:
              uVar14 = 4;
            }
            else if ((int)(uVar28 << 0xe) < 0) {
LAB_00114976:
              uVar14 = 3;
            }
            else if ((int)(uVar28 << 0xf) < 0) {
LAB_00114970:
              uVar14 = 2;
            }
            else {
              uVar14 = (uVar28 & 0xffff) >> 0xf;
            }
          }
          uVar11 = 0;
          if (uVar25 != 0) {
            if ((uVar25 & 0x80000000) == 0x80000000) {
              if ((uVar25 & 0xffff8000) == 0xffff8000) {
                uVar11 = 0;
              }
              else {
                if (-1 < (int)(uVar25 << 1)) goto LAB_00114194;
                if (-1 < (int)(uVar25 << 2)) goto LAB_00113fec;
                if (-1 < (int)(uVar25 << 3)) goto LAB_00113fe4;
                if (-1 < (int)(uVar25 << 4)) goto LAB_001141d2;
                if (-1 < (int)(uVar25 << 5)) goto LAB_001141ca;
                if (-1 < (int)(uVar25 << 6)) goto LAB_00114680;
                if (-1 < (int)(uVar25 << 7)) goto LAB_00114678;
                if (-1 < (int)(uVar25 << 8)) goto LAB_00114fae;
                if (-1 < (int)(uVar25 << 9)) goto LAB_00114fa6;
                if (-1 < (int)(uVar25 << 10)) goto LAB_00114f9e;
                if (-1 < (int)(uVar25 << 0xb)) goto LAB_00114f96;
                if (-1 < (int)(uVar25 << 0xc)) goto LAB_00114f8e;
                if (-1 < (int)(uVar25 << 0xd)) goto LAB_00114f86;
                if (-1 < (int)(uVar25 << 0xe)) goto LAB_00114f7e;
                if (-1 < (int)(uVar25 << 0xf)) goto LAB_00114f76;
                uVar11 = (uint)((uVar25 & 0x8000) == 0);
              }
            }
            else {
              uVar11 = 0;
              if ((uVar25 & 0xffff8000) != 0) {
                if ((int)(uVar25 << 1) < 0) {
LAB_00114194:
                  uVar11 = 0x10;
                }
                else if ((int)(uVar25 << 2) < 0) {
LAB_00113fec:
                  uVar11 = 0xf;
                }
                else if ((int)(uVar25 << 3) < 0) {
LAB_00113fe4:
                  uVar11 = 0xe;
                }
                else if ((int)(uVar25 << 4) < 0) {
LAB_001141d2:
                  uVar11 = 0xd;
                }
                else if ((int)(uVar25 << 5) < 0) {
LAB_001141ca:
                  uVar11 = 0xc;
                }
                else if ((int)(uVar25 << 6) < 0) {
LAB_00114680:
                  uVar11 = 0xb;
                }
                else if ((int)(uVar25 << 7) < 0) {
LAB_00114678:
                  uVar11 = 10;
                }
                else if ((int)(uVar25 << 8) < 0) {
LAB_00114fae:
                  uVar11 = 9;
                }
                else if ((int)(uVar25 << 9) < 0) {
LAB_00114fa6:
                  uVar11 = 8;
                }
                else if ((int)(uVar25 << 10) < 0) {
LAB_00114f9e:
                  uVar11 = 7;
                }
                else if ((int)(uVar25 << 0xb) < 0) {
LAB_00114f96:
                  uVar11 = 6;
                }
                else if ((int)(uVar25 << 0xc) < 0) {
LAB_00114f8e:
                  uVar11 = 5;
                }
                else if ((int)(uVar25 << 0xd) < 0) {
LAB_00114f86:
                  uVar11 = 4;
                }
                else if ((int)(uVar25 << 0xe) < 0) {
LAB_00114f7e:
                  uVar11 = 3;
                }
                else if ((int)(uVar25 << 0xf) < 0) {
LAB_00114f76:
                  uVar11 = 2;
                }
                else {
                  uVar11 = (uVar25 & 0xffff) >> 0xf;
                }
              }
            }
          }
          uVar34 = 0;
          if (uVar24 != 0) {
            if ((uVar24 & 0x80000000) == 0x80000000) {
              if ((uVar24 & 0xffff8000) == 0xffff8000) {
                uVar34 = 0;
              }
              else {
                if (-1 < (int)(uVar24 << 1)) goto LAB_0011419c;
                if (-1 < (int)(uVar24 << 2)) goto LAB_001141ac;
                if (-1 < (int)(uVar24 << 3)) goto LAB_001141a4;
                if (-1 < (int)(uVar24 << 4)) goto LAB_001141bc;
                if (-1 < (int)(uVar24 << 5)) goto LAB_001141b4;
                if (-1 < (int)(uVar24 << 6)) goto LAB_001145f4;
                if (-1 < (int)(uVar24 << 7)) goto LAB_001145ec;
                if (-1 < (int)(uVar24 << 8)) goto LAB_00114a18;
                if (-1 < (int)(uVar24 << 9)) goto LAB_00114a10;
                if (-1 < (int)(uVar24 << 10)) goto LAB_00114a08;
                if (-1 < (int)(uVar24 << 0xb)) goto LAB_00114a00;
                if (-1 < (int)(uVar24 << 0xc)) goto LAB_001149f8;
                if (-1 < (int)(uVar24 << 0xd)) goto LAB_001149f0;
                if (-1 < (int)(uVar24 << 0xe)) goto LAB_001149e8;
                if (-1 < (int)(uVar24 << 0xf)) goto LAB_001149e0;
                uVar34 = (uint)((uVar24 & 0x8000) == 0);
              }
            }
            else {
              uVar34 = 0;
              if ((uVar24 & 0xffff8000) != 0) {
                if ((int)(uVar24 << 1) < 0) {
LAB_0011419c:
                  uVar34 = 0x10;
                }
                else if ((int)(uVar24 << 2) < 0) {
LAB_001141ac:
                  uVar34 = 0xf;
                }
                else if ((int)(uVar24 << 3) < 0) {
LAB_001141a4:
                  uVar34 = 0xe;
                }
                else if ((int)(uVar24 << 4) < 0) {
LAB_001141bc:
                  uVar34 = 0xd;
                }
                else if ((int)(uVar24 << 5) < 0) {
LAB_001141b4:
                  uVar34 = 0xc;
                }
                else if ((int)(uVar24 << 6) < 0) {
LAB_001145f4:
                  uVar34 = 0xb;
                }
                else if ((int)(uVar24 << 7) < 0) {
LAB_001145ec:
                  uVar34 = 10;
                }
                else if ((int)(uVar24 << 8) < 0) {
LAB_00114a18:
                  uVar34 = 9;
                }
                else if ((int)(uVar24 << 9) < 0) {
LAB_00114a10:
                  uVar34 = 8;
                }
                else if ((int)(uVar24 << 10) < 0) {
LAB_00114a08:
                  uVar34 = 7;
                }
                else if ((int)(uVar24 << 0xb) < 0) {
LAB_00114a00:
                  uVar34 = 6;
                }
                else if ((int)(uVar24 << 0xc) < 0) {
LAB_001149f8:
                  uVar34 = 5;
                }
                else if ((int)(uVar24 << 0xd) < 0) {
LAB_001149f0:
                  uVar34 = 4;
                }
                else if ((int)(uVar24 << 0xe) < 0) {
LAB_001149e8:
                  uVar34 = 3;
                }
                else if ((int)(uVar24 << 0xf) < 0) {
LAB_001149e0:
                  uVar34 = 2;
                }
                else {
                  uVar34 = (uVar24 & 0xffff) >> 0xf;
                }
              }
            }
          }
          if (uVar11 < uVar14) {
            uVar11 = uVar14;
          }
          if (uVar11 < uVar34) {
            uVar11 = uVar34;
          }
          switch(uVar11) {
          case 1:
            uVar23 = 2;
            break;
          case 2:
            uVar23 = 4;
            break;
          case 3:
            uVar23 = 8;
            break;
          case 4:
            uVar23 = 0x10;
            break;
          case 5:
            uVar23 = 0x20;
            break;
          case 6:
            uVar23 = 0x40;
            break;
          case 7:
            uVar23 = 0x80;
            break;
          case 8:
            uVar23 = 0x100;
            break;
          case 9:
            uVar23 = 0x200;
            break;
          case 10:
            uVar23 = 0x400;
            break;
          case 0xb:
            uVar23 = 0x800;
            break;
          case 0xc:
            uVar23 = 0x1000;
            break;
          case 0xd:
            uVar23 = 0x2000;
            break;
          case 0xe:
            uVar23 = 0x4000;
            break;
          case 0xf:
            uVar23 = 0x8000;
            break;
          case 0x10:
            uVar23 = 0x10000;
            break;
          default:
            uVar23 = 1;
            goto LAB_0010a40a;
          }
          uVar22 = __divsi3(uVar22,uVar23);
          if (uVar22 == 0) goto LAB_001088d6;
LAB_0010a40a:
          if (uVar28 != 0) {
            iVar5 = __divsi3(uVar28,uVar23);
            uVar4 = __divsi3(iVar5 * 0x7fff,uVar22);
            *(undefined4 *)(param_2 + 0x148) = uVar4;
          }
          if (uVar25 != 0) {
            iVar5 = __divsi3(uVar25,uVar23);
            uVar4 = __divsi3(iVar5 * 0x7fff,uVar22);
            *(undefined4 *)(param_2 + 0x14c) = uVar4;
          }
          if (uVar24 != 0) {
            iVar5 = __divsi3(uVar24,uVar23);
            uVar23 = __divsi3(iVar5 * 0x7fff,uVar22);
            *(undefined4 *)(param_2 + 0x150) = uVar23;
          }
        }
        uVar31 = uVar31 | 2;
      }
      if ((int)(uVar31 << 0x1e) < 0) {
        uVar14 = *(int *)(param_2 + 0x144) * *(int *)(param_2 + 0x14c) -
                 *(int *)(param_2 + 0x150) * *(int *)(param_2 + 0x140);
        uVar24 = *(int *)(param_2 + 0x148) * *(int *)(param_2 + 0x140) -
                 *(int *)(param_2 + 0x13c) * *(int *)(param_2 + 0x14c);
        uVar25 = *(int *)(param_2 + 0x13c) * *(int *)(param_2 + 0x150) -
                 *(int *)(param_2 + 0x148) * *(int *)(param_2 + 0x144);
        *(uint *)(param_2 + 0x154) = uVar14;
        *(uint *)(param_2 + 0x15c) = uVar24;
        *(uint *)(param_2 + 0x158) = uVar25;
        uVar28 = uVar25;
        if (uVar14 == 0) {
          if (uVar25 != 0) {
            uVar22 = 0;
            goto LAB_0010cf8e;
          }
          uVar22 = uVar25;
          if (uVar24 != 0) goto LAB_0010a582;
LAB_0010b900:
          *(undefined4 *)(param_2 + 0x154) = 0;
          *(undefined4 *)(param_2 + 0x158) = 0;
          *(undefined4 *)(param_2 + 0x15c) = 0;
          goto LAB_001088ee;
        }
        if ((uVar14 & 0x80000000) == 0x80000000) {
          if ((uVar14 & 0xffffc000) == 0xffffc000) {
            uVar22 = 0;
          }
          else {
            if (-1 < (int)(uVar14 * 2)) goto LAB_001146ec;
            if (-1 < (int)(uVar14 * 4)) goto LAB_001146e4;
            if (-1 < (int)(uVar14 * 8)) goto LAB_001146dc;
            if (-1 < (int)(uVar14 * 0x10)) goto LAB_001146d4;
            if (-1 < (int)(uVar14 * 0x20)) goto LAB_001146cc;
            if (-1 < (int)(uVar14 * 0x40)) goto LAB_001146c4;
            if (-1 < (int)(uVar14 * 0x80)) goto LAB_001146bc;
            if (-1 < (int)(uVar14 * 0x100)) goto LAB_001146b4;
            if (-1 < (int)(uVar14 * 0x200)) goto LAB_001146ac;
            if (-1 < (int)(uVar14 * 0x400)) goto LAB_001146a4;
            if (-1 < (int)(uVar14 * 0x800)) goto LAB_0011469c;
            if (-1 < (int)(uVar14 * 0x1000)) goto LAB_00114694;
            if (-1 < (int)(uVar14 * 0x2000)) goto LAB_00115424;
            if (-1 < (int)(uVar14 * 0x4000)) goto LAB_0011541c;
            if (-1 < (int)(uVar14 * 0x8000)) goto LAB_00115414;
            if (-1 < (int)(uVar14 * 0x10000)) goto LAB_0011540c;
            uVar22 = (uint)((uVar14 & 0x4000) == 0);
          }
        }
        else {
          uVar22 = 0;
          if ((uVar14 & 0xffffc000) != 0) {
            if ((int)(uVar14 * 2) < 0) {
LAB_001146ec:
              uVar22 = 0x11;
            }
            else if ((int)(uVar14 * 4) < 0) {
LAB_001146e4:
              uVar22 = 0x10;
            }
            else if ((int)(uVar14 * 8) < 0) {
LAB_001146dc:
              uVar22 = 0xf;
            }
            else if ((int)(uVar14 * 0x10) < 0) {
LAB_001146d4:
              uVar22 = 0xe;
            }
            else if ((int)(uVar14 * 0x20) < 0) {
LAB_001146cc:
              uVar22 = 0xd;
            }
            else if ((int)(uVar14 * 0x40) < 0) {
LAB_001146c4:
              uVar22 = 0xc;
            }
            else if ((int)(uVar14 * 0x80) < 0) {
LAB_001146bc:
              uVar22 = 0xb;
            }
            else if ((int)(uVar14 * 0x100) < 0) {
LAB_001146b4:
              uVar22 = 10;
            }
            else if ((int)(uVar14 * 0x200) < 0) {
LAB_001146ac:
              uVar22 = 9;
            }
            else if ((int)(uVar14 * 0x400) < 0) {
LAB_001146a4:
              uVar22 = 8;
            }
            else if ((int)(uVar14 * 0x800) < 0) {
LAB_0011469c:
              uVar22 = 7;
            }
            else if ((int)(uVar14 * 0x1000) < 0) {
LAB_00114694:
              uVar22 = 6;
            }
            else if ((int)(uVar14 * 0x2000) < 0) {
LAB_00115424:
              uVar22 = 5;
            }
            else if ((int)(uVar14 * 0x4000) < 0) {
LAB_0011541c:
              uVar22 = 4;
            }
            else if ((int)(uVar14 * 0x8000) < 0) {
LAB_00115414:
              uVar22 = 3;
            }
            else if ((int)(uVar14 * 0x10000) < 0) {
LAB_0011540c:
              uVar22 = 2;
            }
            else {
              uVar22 = (uVar14 & 0x7fff) >> 0xe;
            }
          }
        }
        if (uVar25 != 0) {
LAB_0010cf8e:
          if ((uVar25 & 0x80000000) == 0x80000000) {
            if ((uVar25 & 0xffffc000) == 0xffffc000) {
              uVar28 = 0;
            }
            else {
              if (-1 < (int)(uVar25 * 2)) goto LAB_0011493a;
              if (-1 < (int)(uVar25 * 4)) goto LAB_00114932;
              if (-1 < (int)(uVar25 * 8)) goto LAB_0011492a;
              if (-1 < (int)(uVar25 * 0x10)) goto LAB_00114922;
              if (-1 < (int)(uVar25 * 0x20)) goto LAB_0011491a;
              if (-1 < (int)(uVar25 * 0x40)) goto LAB_00114912;
              if (-1 < (int)(uVar25 * 0x80)) goto LAB_0011490a;
              if (-1 < (int)(uVar25 * 0x100)) goto LAB_00114902;
              if (-1 < (int)(uVar25 * 0x200)) goto LAB_001148fa;
              if (-1 < (int)(uVar25 * 0x400)) goto LAB_001148f2;
              if (-1 < (int)(uVar25 * 0x800)) goto LAB_001148ea;
              if (-1 < (int)(uVar25 * 0x1000)) goto LAB_001148e2;
              if (-1 < (int)(uVar25 * 0x2000)) goto LAB_0011651e;
              if (-1 < (int)(uVar25 * 0x4000)) goto LAB_00116516;
              if (-1 < (int)(uVar25 * 0x8000)) goto LAB_0011650e;
              if (-1 < (int)(uVar25 * 0x10000)) goto LAB_00116506;
              uVar28 = (uint)((uVar25 & 0x4000) == 0);
            }
          }
          else {
            uVar28 = 0;
            if ((uVar25 & 0xffffc000) != 0) {
              if ((int)(uVar25 * 2) < 0) {
LAB_0011493a:
                uVar28 = 0x11;
              }
              else if ((int)(uVar25 * 4) < 0) {
LAB_00114932:
                uVar28 = 0x10;
              }
              else if ((int)(uVar25 * 8) < 0) {
LAB_0011492a:
                uVar28 = 0xf;
              }
              else if ((int)(uVar25 * 0x10) < 0) {
LAB_00114922:
                uVar28 = 0xe;
              }
              else if ((int)(uVar25 * 0x20) < 0) {
LAB_0011491a:
                uVar28 = 0xd;
              }
              else if ((int)(uVar25 * 0x40) < 0) {
LAB_00114912:
                uVar28 = 0xc;
              }
              else if ((int)(uVar25 * 0x80) < 0) {
LAB_0011490a:
                uVar28 = 0xb;
              }
              else if ((int)(uVar25 * 0x100) < 0) {
LAB_00114902:
                uVar28 = 10;
              }
              else if ((int)(uVar25 * 0x200) < 0) {
LAB_001148fa:
                uVar28 = 9;
              }
              else if ((int)(uVar25 * 0x400) < 0) {
LAB_001148f2:
                uVar28 = 8;
              }
              else if ((int)(uVar25 * 0x800) < 0) {
LAB_001148ea:
                uVar28 = 7;
              }
              else if ((int)(uVar25 * 0x1000) < 0) {
LAB_001148e2:
                uVar28 = 6;
              }
              else if ((int)(uVar25 * 0x2000) < 0) {
LAB_0011651e:
                uVar28 = 5;
              }
              else if ((int)(uVar25 * 0x4000) < 0) {
LAB_00116516:
                uVar28 = 4;
              }
              else if ((int)(uVar25 * 0x8000) < 0) {
LAB_0011650e:
                uVar28 = 3;
              }
              else if ((int)(uVar25 * 0x10000) < 0) {
LAB_00116506:
                uVar28 = 2;
              }
              else {
                uVar28 = (uVar25 & 0x7fff) >> 0xe;
              }
            }
          }
        }
        uVar11 = 0;
        if (uVar24 != 0) {
LAB_0010a582:
          if ((uVar24 & 0x80000000) == 0x80000000) {
            if ((uVar24 & 0xffffc000) == 0xffffc000) {
              uVar11 = 0;
            }
            else {
              if (-1 < (int)(uVar24 * 2)) goto LAB_00114c86;
              if (-1 < (int)(uVar24 * 4)) goto LAB_00114c7e;
              if (-1 < (int)(uVar24 * 8)) goto LAB_00114c76;
              if (-1 < (int)(uVar24 * 0x10)) goto LAB_00114c6e;
              if (-1 < (int)(uVar24 * 0x20)) goto LAB_00114c66;
              if (-1 < (int)(uVar24 * 0x40)) goto LAB_00114c5e;
              if (-1 < (int)(uVar24 * 0x80)) goto LAB_00114c56;
              if (-1 < (int)(uVar24 * 0x100)) goto LAB_00114c4e;
              if (-1 < (int)(uVar24 * 0x200)) goto LAB_00114c46;
              if (-1 < (int)(uVar24 * 0x400)) goto LAB_00114c3e;
              if (-1 < (int)(uVar24 * 0x800)) goto LAB_00114c36;
              if (-1 < (int)(uVar24 * 0x1000)) goto LAB_00114c2e;
              if (-1 < (int)(uVar24 * 0x2000)) goto LAB_00115f48;
              if (-1 < (int)(uVar24 * 0x4000)) goto LAB_00115f40;
              if (-1 < (int)(uVar24 * 0x8000)) goto LAB_00115f38;
              if (-1 < (int)(uVar24 * 0x10000)) goto LAB_00115f30;
              uVar11 = (uint)((uVar24 & 0x4000) == 0);
            }
          }
          else {
            uVar11 = 0;
            if ((uVar24 & 0xffffc000) != 0) {
              if ((int)(uVar24 * 2) < 0) {
LAB_00114c86:
                uVar11 = 0x11;
              }
              else if ((int)(uVar24 * 4) < 0) {
LAB_00114c7e:
                uVar11 = 0x10;
              }
              else if ((int)(uVar24 * 8) < 0) {
LAB_00114c76:
                uVar11 = 0xf;
              }
              else if ((int)(uVar24 * 0x10) < 0) {
LAB_00114c6e:
                uVar11 = 0xe;
              }
              else if ((int)(uVar24 * 0x20) < 0) {
LAB_00114c66:
                uVar11 = 0xd;
              }
              else if ((int)(uVar24 * 0x40) < 0) {
LAB_00114c5e:
                uVar11 = 0xc;
              }
              else if ((int)(uVar24 * 0x80) < 0) {
LAB_00114c56:
                uVar11 = 0xb;
              }
              else if ((int)(uVar24 * 0x100) < 0) {
LAB_00114c4e:
                uVar11 = 10;
              }
              else if ((int)(uVar24 * 0x200) < 0) {
LAB_00114c46:
                uVar11 = 9;
              }
              else if ((int)(uVar24 * 0x400) < 0) {
LAB_00114c3e:
                uVar11 = 8;
              }
              else if ((int)(uVar24 * 0x800) < 0) {
LAB_00114c36:
                uVar11 = 7;
              }
              else if ((int)(uVar24 * 0x1000) < 0) {
LAB_00114c2e:
                uVar11 = 6;
              }
              else if ((int)(uVar24 * 0x2000) < 0) {
LAB_00115f48:
                uVar11 = 5;
              }
              else if ((int)(uVar24 * 0x4000) < 0) {
LAB_00115f40:
                uVar11 = 4;
              }
              else if ((int)(uVar24 * 0x8000) < 0) {
LAB_00115f38:
                uVar11 = 3;
              }
              else if ((int)(uVar24 * 0x10000) < 0) {
LAB_00115f30:
                uVar11 = 2;
              }
              else {
                uVar11 = (uVar24 & 0x7fff) >> 0xe;
              }
            }
          }
        }
        if ((int)uVar22 < (int)uVar28) {
          uVar22 = uVar28;
        }
        if ((int)uVar11 <= (int)uVar22) {
          uVar11 = uVar22;
        }
        switch(uVar11) {
        case 0:
          iVar5 = 1;
          break;
        case 1:
          iVar5 = 2;
          break;
        case 2:
          iVar5 = 4;
          break;
        case 3:
          iVar5 = 8;
          break;
        case 4:
          iVar5 = 0x10;
          break;
        case 5:
          iVar5 = 0x20;
          break;
        case 6:
          iVar5 = 0x40;
          break;
        case 7:
          iVar5 = 0x80;
          break;
        case 8:
          iVar5 = 0x100;
          break;
        case 9:
          iVar5 = 0x200;
          break;
        case 10:
          iVar5 = 0x400;
          break;
        case 0xb:
          iVar5 = 0x800;
          break;
        case 0xc:
          iVar5 = 0x1000;
          break;
        case 0xd:
          iVar5 = 0x2000;
          break;
        case 0xe:
          iVar5 = 0x4000;
          break;
        case 0xf:
          iVar5 = 0x8000;
          break;
        case 0x10:
          iVar5 = 0x10000;
          break;
        case 0x11:
          iVar5 = 0x20000;
          break;
        case 0x12:
          iVar5 = 0x40000;
          break;
        case 0x13:
          iVar5 = 0x80000;
          break;
        case 0x14:
          iVar5 = 0x100000;
          break;
        case 0x15:
          iVar5 = 0x200000;
          break;
        case 0x16:
          iVar5 = 0x400000;
          break;
        case 0x17:
          iVar5 = 0x800000;
          break;
        case 0x18:
          iVar5 = 0x1000000;
          break;
        case 0x19:
          iVar5 = 0x2000000;
          break;
        case 0x1a:
          iVar5 = 0x4000000;
          break;
        case 0x1b:
          iVar5 = 0x8000000;
          break;
        case 0x1c:
          iVar5 = 0x10000000;
          break;
        case 0x1d:
          iVar5 = 0x20000000;
          break;
        default:
          iVar5 = 0x40000000;
        }
        iVar6 = __divsi3(uVar14,iVar5);
        iVar7 = __divsi3(uVar25,iVar5);
        iVar15 = __divsi3(uVar24,iVar5);
        iVar6 = iVar15 * iVar15 + iVar6 * iVar6 + iVar7 * iVar7;
        if (iVar6 < 1) {
          iVar7 = 0;
        }
        else {
          iVar15 = iVar6;
          if (iVar6 == 0x7fffffff) {
            iVar6 = 0x7ffffffe;
            iVar15 = 0x7ffffffe;
          }
          do {
            iVar7 = __divsi3(iVar15,iVar6);
            iVar10 = (iVar6 + iVar7) / 2;
            iVar7 = iVar6;
            if (iVar6 <= iVar10) break;
            iVar6 = __divsi3(iVar15,iVar10);
            iVar6 = (iVar10 + iVar6) / 2;
            iVar7 = iVar10;
            if (iVar10 <= iVar6) break;
            iVar7 = __divsi3(iVar15,iVar6);
            iVar10 = (iVar6 + iVar7) / 2;
            iVar7 = iVar6;
            if (iVar6 <= iVar10) break;
            iVar6 = __divsi3(iVar15);
            iVar6 = (iVar10 + iVar6) / 2;
            iVar7 = iVar10;
            if (iVar10 <= iVar6) break;
            iVar7 = __divsi3(iVar15,iVar6);
            iVar10 = (iVar6 + iVar7) / 2;
            iVar7 = iVar6;
            if (iVar6 <= iVar10) break;
            iVar6 = __divsi3(iVar15,iVar10);
            iVar6 = (iVar10 + iVar6) / 2;
            iVar7 = iVar10;
            if (iVar10 <= iVar6) break;
            iVar7 = __divsi3(iVar15,iVar6);
            iVar10 = (iVar6 + iVar7) / 2;
            iVar7 = iVar6;
            if (iVar6 <= iVar10) break;
            iVar6 = __divsi3(iVar15);
            iVar6 = (iVar6 + iVar10) / 2;
            iVar7 = iVar10;
          } while (iVar6 < iVar10);
        }
        uVar28 = uVar25;
        if ((int)uVar25 < (int)uVar14) {
          uVar28 = uVar14;
        }
        if ((int)uVar28 < (int)uVar24) {
          uVar28 = uVar24;
        }
        if ((int)uVar28 < iVar5 * iVar7) {
          uVar28 = iVar5 * iVar7;
        }
        if (uVar28 == 0) goto LAB_0010b900;
        uVar22 = 0;
        if (uVar14 != 0) {
          if ((uVar14 & 0x80000000) == 0x80000000) {
            if ((uVar14 & 0xffff8000) == 0xffff8000) {
              uVar22 = 0;
            }
            else {
              if (-1 < (int)(uVar14 * 2)) goto LAB_001162d0;
              if (-1 < (int)(uVar14 * 4)) goto LAB_001162dc;
              if (-1 < (int)(uVar14 * 8)) goto LAB_001162d6;
              if (-1 < (int)(uVar14 * 0x10)) goto LAB_001162f4;
              if (-1 < (int)(uVar14 * 0x20)) goto LAB_001162ee;
              if (-1 < (int)(uVar14 * 0x40)) goto LAB_001162e8;
              if (-1 < (int)(uVar14 * 0x80)) goto LAB_001162e2;
              if (-1 < (int)(uVar14 * 0x100)) goto LAB_00116324;
              if (-1 < (int)(uVar14 * 0x200)) goto LAB_0011631e;
              if (-1 < (int)(uVar14 * 0x400)) goto LAB_00116318;
              if (-1 < (int)(uVar14 * 0x800)) goto LAB_00116312;
              if (-1 < (int)(uVar14 * 0x1000)) goto LAB_0011630c;
              if (-1 < (int)(uVar14 * 0x2000)) goto LAB_00116306;
              if (-1 < (int)(uVar14 * 0x4000)) goto LAB_00116300;
              if (-1 < (int)(uVar14 * 0x8000)) goto LAB_001162fa;
              uVar22 = (uint)((uVar14 & 0x8000) == 0);
            }
          }
          else if ((uVar14 & 0xffff8000) == 0) {
            uVar22 = 0;
          }
          else if ((int)(uVar14 * 2) < 0) {
LAB_001162d0:
            uVar22 = 0x10;
          }
          else if ((int)(uVar14 * 4) < 0) {
LAB_001162dc:
            uVar22 = 0xf;
          }
          else if ((int)(uVar14 * 8) < 0) {
LAB_001162d6:
            uVar22 = 0xe;
          }
          else if ((int)(uVar14 * 0x10) < 0) {
LAB_001162f4:
            uVar22 = 0xd;
          }
          else if ((int)(uVar14 * 0x20) < 0) {
LAB_001162ee:
            uVar22 = 0xc;
          }
          else if ((int)(uVar14 * 0x40) < 0) {
LAB_001162e8:
            uVar22 = 0xb;
          }
          else if ((int)(uVar14 * 0x80) < 0) {
LAB_001162e2:
            uVar22 = 10;
          }
          else if ((int)(uVar14 * 0x100) < 0) {
LAB_00116324:
            uVar22 = 9;
          }
          else if ((int)(uVar14 * 0x200) < 0) {
LAB_0011631e:
            uVar22 = 8;
          }
          else if ((int)(uVar14 * 0x400) < 0) {
LAB_00116318:
            uVar22 = 7;
          }
          else if ((int)(uVar14 * 0x800) < 0) {
LAB_00116312:
            uVar22 = 6;
          }
          else if ((int)(uVar14 * 0x1000) < 0) {
LAB_0011630c:
            uVar22 = 5;
          }
          else if ((int)(uVar14 * 0x2000) < 0) {
LAB_00116306:
            uVar22 = 4;
          }
          else if ((int)(uVar14 * 0x4000) < 0) {
LAB_00116300:
            uVar22 = 3;
          }
          else if ((int)(uVar14 * 0x8000) < 0) {
LAB_001162fa:
            uVar22 = 2;
          }
          else {
            uVar22 = (uVar14 & 0xffff) >> 0xf;
          }
        }
        uVar11 = 0;
        if (uVar25 != 0) {
          if ((uVar25 & 0x80000000) == 0x80000000) {
            if ((uVar25 & 0xffff8000) == 0xffff8000) {
              uVar11 = 0;
            }
            else {
              if (-1 < (int)(uVar25 * 2)) goto LAB_00116408;
              if (-1 < (int)(uVar25 * 4)) goto LAB_00116418;
              if (-1 < (int)(uVar25 * 8)) goto LAB_00116410;
              if (-1 < (int)(uVar25 * 0x10)) goto LAB_00116438;
              if (-1 < (int)(uVar25 * 0x20)) goto LAB_00116430;
              if (-1 < (int)(uVar25 * 0x40)) goto LAB_00116428;
              if (-1 < (int)(uVar25 * 0x80)) goto LAB_00116420;
              if (-1 < (int)(uVar25 * 0x100)) goto LAB_00116478;
              if (-1 < (int)(uVar25 * 0x200)) goto LAB_00116470;
              if (-1 < (int)(uVar25 * 0x400)) goto LAB_00116468;
              if (-1 < (int)(uVar25 * 0x800)) goto LAB_00116460;
              if (-1 < (int)(uVar25 * 0x1000)) goto LAB_00116458;
              if (-1 < (int)(uVar25 * 0x2000)) goto LAB_00116450;
              if (-1 < (int)(uVar25 * 0x4000)) goto LAB_00116448;
              if (-1 < (int)(uVar25 * 0x8000)) goto LAB_00116440;
              uVar11 = (uint)((uVar25 & 0x8000) == 0);
            }
          }
          else if ((uVar25 & 0xffff8000) == 0) {
            uVar11 = 0;
          }
          else if ((int)(uVar25 * 2) < 0) {
LAB_00116408:
            uVar11 = 0x10;
          }
          else if ((int)(uVar25 * 4) < 0) {
LAB_00116418:
            uVar11 = 0xf;
          }
          else if ((int)(uVar25 * 8) < 0) {
LAB_00116410:
            uVar11 = 0xe;
          }
          else if ((int)(uVar25 * 0x10) < 0) {
LAB_00116438:
            uVar11 = 0xd;
          }
          else if ((int)(uVar25 * 0x20) < 0) {
LAB_00116430:
            uVar11 = 0xc;
          }
          else if ((int)(uVar25 * 0x40) < 0) {
LAB_00116428:
            uVar11 = 0xb;
          }
          else if ((int)(uVar25 * 0x80) < 0) {
LAB_00116420:
            uVar11 = 10;
          }
          else if ((int)(uVar25 * 0x100) < 0) {
LAB_00116478:
            uVar11 = 9;
          }
          else if ((int)(uVar25 * 0x200) < 0) {
LAB_00116470:
            uVar11 = 8;
          }
          else if ((int)(uVar25 * 0x400) < 0) {
LAB_00116468:
            uVar11 = 7;
          }
          else if ((int)(uVar25 * 0x800) < 0) {
LAB_00116460:
            uVar11 = 6;
          }
          else if ((int)(uVar25 * 0x1000) < 0) {
LAB_00116458:
            uVar11 = 5;
          }
          else if ((int)(uVar25 * 0x2000) < 0) {
LAB_00116450:
            uVar11 = 4;
          }
          else if ((int)(uVar25 * 0x4000) < 0) {
LAB_00116448:
            uVar11 = 3;
          }
          else if ((int)(uVar25 * 0x8000) < 0) {
LAB_00116440:
            uVar11 = 2;
          }
          else {
            uVar11 = (uVar25 & 0xffff) >> 0xf;
          }
        }
        uVar34 = 0;
        if (uVar24 != 0) {
          if ((uVar24 & 0x80000000) == 0x80000000) {
            if ((uVar24 & 0xffff8000) == 0xffff8000) {
              uVar34 = 0;
            }
            else {
              if (-1 < (int)(uVar24 * 2)) goto LAB_001162c8;
              if (-1 < (int)(uVar24 * 4)) goto LAB_0011652e;
              if (-1 < (int)(uVar24 * 8)) goto LAB_00116526;
              if (-1 < (int)(uVar24 * 0x10)) goto LAB_001164fe;
              if (-1 < (int)(uVar24 * 0x20)) goto LAB_001164f6;
              if (-1 < (int)(uVar24 * 0x40)) goto LAB_001164ee;
              if (-1 < (int)(uVar24 * 0x80)) goto LAB_001164e6;
              if (-1 < (int)(uVar24 * 0x100)) goto LAB_001163fa;
              if (-1 < (int)(uVar24 * 0x200)) goto LAB_001163f2;
              if (-1 < (int)(uVar24 * 0x400)) goto LAB_001163ea;
              if (-1 < (int)(uVar24 * 0x800)) goto LAB_001163e2;
              if (-1 < (int)(uVar24 * 0x1000)) goto LAB_001163da;
              if (-1 < (int)(uVar24 * 0x2000)) goto LAB_001163d2;
              if (-1 < (int)(uVar24 * 0x4000)) goto LAB_001163ca;
              if (-1 < (int)(uVar24 * 0x8000)) goto LAB_001163c2;
              uVar34 = (uint)((uVar24 & 0x8000) == 0);
            }
          }
          else {
            uVar34 = 0;
            if ((uVar24 & 0xffff8000) != 0) {
              if ((int)(uVar24 * 2) < 0) {
LAB_001162c8:
                uVar34 = 0x10;
              }
              else if ((int)(uVar24 * 4) < 0) {
LAB_0011652e:
                uVar34 = 0xf;
              }
              else if ((int)(uVar24 * 8) < 0) {
LAB_00116526:
                uVar34 = 0xe;
              }
              else if ((int)(uVar24 * 0x10) < 0) {
LAB_001164fe:
                uVar34 = 0xd;
              }
              else if ((int)(uVar24 * 0x20) < 0) {
LAB_001164f6:
                uVar34 = 0xc;
              }
              else if ((int)(uVar24 * 0x40) < 0) {
LAB_001164ee:
                uVar34 = 0xb;
              }
              else if ((int)(uVar24 * 0x80) < 0) {
LAB_001164e6:
                uVar34 = 10;
              }
              else if ((int)(uVar24 * 0x100) < 0) {
LAB_001163fa:
                uVar34 = 9;
              }
              else if ((int)(uVar24 * 0x200) < 0) {
LAB_001163f2:
                uVar34 = 8;
              }
              else if ((int)(uVar24 * 0x400) < 0) {
LAB_001163ea:
                uVar34 = 7;
              }
              else if ((int)(uVar24 * 0x800) < 0) {
LAB_001163e2:
                uVar34 = 6;
              }
              else if ((int)(uVar24 * 0x1000) < 0) {
LAB_001163da:
                uVar34 = 5;
              }
              else if ((int)(uVar24 * 0x2000) < 0) {
LAB_001163d2:
                uVar34 = 4;
              }
              else if ((int)(uVar24 * 0x4000) < 0) {
LAB_001163ca:
                uVar34 = 3;
              }
              else if ((int)(uVar24 * 0x8000) < 0) {
LAB_001163c2:
                uVar34 = 2;
              }
              else {
                uVar34 = (uVar24 & 0xffff) >> 0xf;
              }
            }
          }
        }
        if (uVar22 <= uVar11) {
          uVar22 = uVar11;
        }
        if (uVar34 <= uVar22) {
          uVar34 = uVar22;
        }
        switch(uVar34) {
        case 1:
          uVar23 = 2;
          break;
        case 2:
          uVar23 = 4;
          break;
        case 3:
          uVar23 = 8;
          break;
        case 4:
          uVar23 = 0x10;
          break;
        case 5:
          uVar23 = 0x20;
          break;
        case 6:
          uVar23 = 0x40;
          break;
        case 7:
          uVar23 = 0x80;
          break;
        case 8:
          uVar23 = 0x100;
          break;
        case 9:
          uVar23 = 0x200;
          break;
        case 10:
          uVar23 = 0x400;
          break;
        case 0xb:
          uVar23 = 0x800;
          break;
        case 0xc:
          uVar23 = 0x1000;
          break;
        case 0xd:
          uVar23 = 0x2000;
          break;
        case 0xe:
          uVar23 = 0x4000;
          break;
        case 0xf:
          uVar23 = 0x8000;
          break;
        case 0x10:
          uVar23 = 0x10000;
          break;
        default:
          uVar23 = 1;
          goto LAB_0010d94c;
        }
        uVar28 = __divsi3(uVar28,uVar23);
        if (uVar28 == 0) {
          *(undefined4 *)(param_2 + 0x154) = 0;
          *(undefined4 *)(param_2 + 0x158) = 0;
          *(undefined4 *)(param_2 + 0x15c) = 0;
        }
        else {
LAB_0010d94c:
          if (uVar14 != 0) {
            iVar5 = __divsi3(uVar14,uVar23);
            uVar4 = __divsi3(iVar5 * 0x7fff,uVar28);
            *(undefined4 *)(param_2 + 0x154) = uVar4;
          }
          if (uVar25 != 0) {
            iVar5 = __divsi3(uVar25,uVar23);
            uVar4 = __divsi3(iVar5 * 0x7fff,uVar28);
            *(undefined4 *)(param_2 + 0x158) = uVar4;
          }
          if (uVar24 != 0) {
            iVar5 = __divsi3(uVar24,uVar23);
            uVar23 = __divsi3(iVar5 * 0x7fff,uVar28);
            *(undefined4 *)(param_2 + 0x15c) = uVar23;
          }
        }
      }
LAB_001088ee:
      if (uVar31 == 0) {
        uVar23 = *(undefined4 *)(param_2 + 0x164);
        uVar4 = *(undefined4 *)(param_2 + 0x168);
        *(undefined4 *)(param_3 + 0xc) = *(undefined4 *)(param_2 + 0x160);
        *(undefined4 *)(param_3 + 0x10) = uVar23;
        *(undefined4 *)(param_3 + 0x14) = uVar4;
        uVar23 = *(undefined4 *)(param_2 + 0x170);
        uVar4 = *(undefined4 *)(param_2 + 0x174);
        *(undefined4 *)(param_3 + 0x24) = *(undefined4 *)(param_2 + 0x16c);
        *(undefined4 *)(param_3 + 0x28) = uVar23;
        *(undefined4 *)(param_3 + 0x2c) = uVar4;
        uVar23 = *(undefined4 *)(param_2 + 0x118);
        uVar4 = *(undefined4 *)(param_2 + 0x11c);
        *(undefined4 *)(param_3 + 0x18) = *(undefined4 *)(param_2 + 0x114);
        *(undefined4 *)(param_3 + 0x1c) = uVar23;
        *(undefined4 *)(param_3 + 0x20) = uVar4;
        uVar28 = *(uint *)param_1;
        uVar31 = *(uint *)(param_2 + 0x10);
      }
      else {
        uVar28 = (*(int *)(param_2 + 0x154) * *(int *)(param_2 + 0x114)) / 0x7fff +
                 (*(int *)(param_2 + 0x158) * *(int *)(param_2 + 0x118)) / 0x7fff +
                 (*(int *)(param_2 + 0x15c) * *(int *)(param_2 + 0x11c)) / 0x7fff;
        *(uint *)(param_3 + 0xc) = uVar28;
        uVar25 = (*(int *)(param_2 + 0x148) * *(int *)(param_2 + 0x114)) / 0x7fff +
                 (*(int *)(param_2 + 0x14c) * *(int *)(param_2 + 0x118)) / 0x7fff +
                 (*(int *)(param_2 + 0x150) * *(int *)(param_2 + 0x11c)) / 0x7fff;
        *(uint *)(param_3 + 0x10) = uVar25;
        uVar24 = (*(int *)(param_2 + 0x13c) * *(int *)(param_2 + 0x114)) / 0x7fff +
                 (*(int *)(param_2 + 0x140) * *(int *)(param_2 + 0x118)) / 0x7fff +
                 (*(int *)(param_2 + 0x144) * *(int *)(param_2 + 0x11c)) / 0x7fff;
        *(uint *)(param_3 + 0x14) = uVar24;
        uVar31 = uVar25;
        if (uVar28 == 0) {
          if (uVar25 != 0) {
            uVar14 = 0;
            goto LAB_0010e564;
          }
          uVar14 = uVar25;
          if (uVar24 != 0) goto LAB_0010dc98;
LAB_00105720:
          *(undefined4 *)(param_3 + 0xc) = 0;
          *(undefined4 *)(param_3 + 0x10) = 0;
          *(undefined4 *)(param_3 + 0x14) = 0;
        }
        else {
          if ((uVar28 & 0x80000000) == 0x80000000) {
            if ((uVar28 & 0xffffc000) == 0xffffc000) {
              uVar14 = 0;
            }
            else {
              if (-1 < (int)(uVar28 * 0x4000)) goto LAB_00114852;
              if (-1 < (int)(uVar28 * 0x8000)) goto LAB_0011636a;
              if (-1 < (int)(uVar28 * 0x10000)) goto LAB_00115304;
              uVar14 = (uint)((uVar28 & 0x4000) == 0);
            }
          }
          else if ((uVar28 & 0xffffc000) == 0) {
            uVar14 = 0;
          }
          else if ((int)(uVar28 * 0x4000) < 0) {
LAB_00114852:
            uVar14 = 4;
          }
          else if ((int)(uVar28 * 0x8000) < 0) {
LAB_0011636a:
            uVar14 = 3;
          }
          else if ((int)(uVar28 * 0x10000) < 0) {
LAB_00115304:
            uVar14 = 2;
          }
          else {
            uVar14 = (uVar28 & 0x7fff) >> 0xe;
          }
          if (uVar25 != 0) {
LAB_0010e564:
            if ((uVar25 & 0x80000000) == 0x80000000) {
              if ((uVar25 & 0xffffc000) == 0xffffc000) {
                uVar31 = 0;
              }
              else {
                if (-1 < (int)(uVar25 * 0x4000)) goto LAB_00114772;
                if (-1 < (int)(uVar25 * 0x8000)) goto LAB_00115c78;
                if (-1 < (int)(uVar25 * 0x10000)) goto LAB_00115c72;
                uVar31 = (uint)((uVar25 & 0x4000) == 0);
              }
            }
            else if ((uVar25 & 0xffffc000) == 0) {
              uVar31 = 0;
            }
            else if ((int)(uVar25 * 0x4000) < 0) {
LAB_00114772:
              uVar31 = 4;
            }
            else if ((int)(uVar25 * 0x8000) < 0) {
LAB_00115c78:
              uVar31 = 3;
            }
            else if ((int)(uVar25 * 0x10000) < 0) {
LAB_00115c72:
              uVar31 = 2;
            }
            else {
              uVar31 = (uVar25 & 0x7fff) >> 0xe;
            }
          }
          uVar22 = 0;
          if (uVar24 != 0) {
LAB_0010dc98:
            if ((uVar24 & 0x80000000) == 0x80000000) {
              if ((uVar24 & 0xffffc000) == 0xffffc000) {
                uVar22 = 0;
              }
              else {
                if (-1 < (int)(uVar24 * 0x4000)) goto LAB_00114fd8;
                if (-1 < (int)(uVar24 * 0x8000)) goto LAB_001161e0;
                if (-1 < (int)(uVar24 * 0x10000)) goto LAB_001161d8;
                uVar22 = (uint)((uVar24 & 0x4000) == 0);
              }
            }
            else {
              uVar22 = 0;
              if ((uVar24 & 0xffffc000) != 0) {
                if ((int)(uVar24 * 0x4000) < 0) {
LAB_00114fd8:
                  uVar22 = 4;
                }
                else if ((int)(uVar24 * 0x8000) < 0) {
LAB_001161e0:
                  uVar22 = 3;
                }
                else if ((int)(uVar24 * 0x10000) < 0) {
LAB_001161d8:
                  uVar22 = 2;
                }
                else {
                  uVar22 = (uVar24 & 0x7fff) >> 0xe;
                }
              }
            }
          }
          if ((int)uVar31 <= (int)uVar14) {
            uVar31 = uVar14;
          }
          if ((int)uVar22 <= (int)uVar31) {
            uVar22 = uVar31;
          }
          switch(uVar22) {
          case 0:
            iVar5 = 1;
            break;
          case 1:
            iVar5 = 2;
            break;
          case 2:
            iVar5 = 4;
            break;
          case 3:
            iVar5 = 8;
            break;
          case 4:
            iVar5 = 0x10;
            break;
          case 5:
            iVar5 = 0x20;
            break;
          case 6:
            iVar5 = 0x40;
            break;
          case 7:
            iVar5 = 0x80;
            break;
          case 8:
            iVar5 = 0x100;
            break;
          case 9:
            iVar5 = 0x200;
            break;
          case 10:
            iVar5 = 0x400;
            break;
          case 0xb:
            iVar5 = 0x800;
            break;
          case 0xc:
            iVar5 = 0x1000;
            break;
          case 0xd:
            iVar5 = 0x2000;
            break;
          case 0xe:
            iVar5 = 0x4000;
            break;
          case 0xf:
            iVar5 = 0x8000;
            break;
          case 0x10:
            iVar5 = 0x10000;
            break;
          case 0x11:
            iVar5 = 0x20000;
            break;
          case 0x12:
            iVar5 = 0x40000;
            break;
          case 0x13:
            iVar5 = 0x80000;
            break;
          case 0x14:
            iVar5 = 0x100000;
            break;
          case 0x15:
            iVar5 = 0x200000;
            break;
          case 0x16:
            iVar5 = 0x400000;
            break;
          case 0x17:
            iVar5 = 0x800000;
            break;
          case 0x18:
            iVar5 = 0x1000000;
            break;
          case 0x19:
            iVar5 = 0x2000000;
            break;
          case 0x1a:
            iVar5 = 0x4000000;
            break;
          case 0x1b:
            iVar5 = 0x8000000;
            break;
          case 0x1c:
            iVar5 = 0x10000000;
            break;
          case 0x1d:
            iVar5 = 0x20000000;
            break;
          default:
            iVar5 = 0x40000000;
          }
          iVar6 = __divsi3(uVar28,iVar5);
          iVar7 = __divsi3(uVar25,iVar5);
          iVar15 = __divsi3(uVar24,iVar5);
          iVar6 = iVar15 * iVar15 + iVar6 * iVar6 + iVar7 * iVar7;
          if (iVar6 < 1) {
            iVar7 = 0;
          }
          else {
            iVar15 = iVar6;
            if (iVar6 == 0x7fffffff) {
              iVar6 = 0x7ffffffe;
              iVar15 = 0x7ffffffe;
            }
            do {
              iVar7 = __divsi3(iVar15,iVar6);
              iVar10 = (iVar6 + iVar7) / 2;
              iVar7 = iVar6;
              if (iVar6 <= iVar10) break;
              iVar6 = __divsi3(iVar15,iVar10);
              iVar6 = (iVar10 + iVar6) / 2;
              iVar7 = iVar10;
              if (iVar10 <= iVar6) break;
              iVar7 = __divsi3(iVar15,iVar6);
              iVar10 = (iVar6 + iVar7) / 2;
              iVar7 = iVar6;
              if (iVar6 <= iVar10) break;
              iVar6 = __divsi3(iVar15,iVar10);
              iVar6 = (iVar10 + iVar6) / 2;
              iVar7 = iVar10;
              if (iVar10 <= iVar6) break;
              iVar7 = __divsi3(iVar15,iVar6);
              iVar10 = (iVar6 + iVar7) / 2;
              iVar7 = iVar6;
              if (iVar6 <= iVar10) break;
              iVar6 = __divsi3(iVar15,iVar10);
              iVar6 = (iVar10 + iVar6) / 2;
              iVar7 = iVar10;
              if (iVar10 <= iVar6) break;
              iVar7 = __divsi3(iVar15);
              iVar10 = (iVar6 + iVar7) / 2;
              iVar7 = iVar6;
              if (iVar6 <= iVar10) break;
              iVar6 = __divsi3(iVar15,iVar10);
              iVar6 = (iVar6 + iVar10) / 2;
              iVar7 = iVar10;
            } while (iVar6 < iVar10);
          }
          uVar31 = uVar25;
          if ((int)uVar25 < (int)uVar28) {
            uVar31 = uVar28;
          }
          if ((int)uVar31 < (int)uVar24) {
            uVar31 = uVar24;
          }
          uVar14 = iVar5 * iVar7;
          if (iVar5 * iVar7 <= (int)uVar31) {
            uVar14 = uVar31;
          }
          if (uVar14 == 0) goto LAB_00105720;
          uVar31 = 0;
          if (uVar28 != 0) {
            if ((uVar28 & 0x80000000) == 0x80000000) {
              if ((uVar28 & 0xffff8000) == 0xffff8000) {
                uVar31 = 0;
              }
              else {
                if (-1 < (int)(uVar28 * 0x4000)) goto LAB_001159f6;
                if (-1 < (int)(uVar28 * 0x8000)) goto LAB_001159e0;
                uVar31 = (uint)((uVar28 & 0x8000) == 0);
              }
            }
            else if ((uVar28 & 0xffff8000) == 0) {
              uVar31 = 0;
            }
            else if ((int)(uVar28 * 0x4000) < 0) {
LAB_001159f6:
              uVar31 = 3;
            }
            else if ((int)(uVar28 * 0x8000) < 0) {
LAB_001159e0:
              uVar31 = 2;
            }
            else {
              uVar31 = (uVar28 & 0xffff) >> 0xf;
            }
          }
          uVar22 = 0;
          if (uVar25 != 0) {
            if ((uVar25 & 0x80000000) == 0x80000000) {
              if ((uVar25 & 0xffff8000) == 0xffff8000) {
                uVar22 = 0;
              }
              else {
                if (-1 < (int)(uVar25 * 0x4000)) goto LAB_001159da;
                if (-1 < (int)(uVar25 * 0x8000)) goto LAB_001159e8;
                uVar22 = (uint)((uVar25 & 0x8000) == 0);
              }
            }
            else if ((uVar25 & 0xffff8000) == 0) {
              uVar22 = 0;
            }
            else if ((int)(uVar25 * 0x4000) < 0) {
LAB_001159da:
              uVar22 = 3;
            }
            else if ((int)(uVar25 * 0x8000) < 0) {
LAB_001159e8:
              uVar22 = 2;
            }
            else {
              uVar22 = (uVar25 & 0xffff) >> 0xf;
            }
          }
          uVar11 = 0;
          if (uVar24 != 0) {
            if ((uVar24 & 0x80000000) == 0x80000000) {
              if ((uVar24 & 0xffff8000) == 0xffff8000) {
                uVar11 = 0;
              }
              else {
                if (-1 < (int)(uVar24 * 0x4000)) goto LAB_001161cc;
                if (-1 < (int)(uVar24 * 0x8000)) goto LAB_00115464;
                uVar11 = (uint)((uVar24 & 0x8000) == 0);
              }
            }
            else {
              uVar11 = 0;
              if ((uVar24 & 0xffff8000) != 0) {
                if ((int)(uVar24 * 0x4000) < 0) {
LAB_001161cc:
                  uVar11 = 3;
                }
                else if ((int)(uVar24 * 0x8000) < 0) {
LAB_00115464:
                  uVar11 = 2;
                }
                else {
                  uVar11 = (uVar24 & 0xffff) >> 0xf;
                }
              }
            }
          }
          if (uVar31 <= uVar22) {
            uVar31 = uVar22;
          }
          if (uVar11 <= uVar31) {
            uVar11 = uVar31;
          }
          switch(uVar11) {
          case 0:
            uVar23 = 1;
            goto code_r0x0010e7d0;
          case 1:
            uVar23 = 2;
            break;
          case 2:
            uVar23 = 4;
            break;
          case 3:
            uVar23 = 8;
            break;
          default:
            uVar23 = 0x40000000;
          }
          uVar14 = __divsi3(uVar14,uVar23);
          if (uVar14 == 0) {
            *(undefined4 *)(param_3 + 0xc) = 0;
            *(undefined4 *)(param_3 + 0x10) = 0;
            *(undefined4 *)(param_3 + 0x14) = 0;
          }
          else {
code_r0x0010e7d0:
            if (uVar28 != 0) {
              iVar5 = __divsi3(uVar28,uVar23);
              uVar4 = __divsi3(iVar5 * 0x7fff,uVar14);
              *(undefined4 *)(param_3 + 0xc) = uVar4;
            }
            if (uVar25 != 0) {
              iVar5 = __divsi3(uVar25,uVar23);
              uVar4 = __divsi3(iVar5 * 0x7fff,uVar14);
              *(undefined4 *)(param_3 + 0x10) = uVar4;
            }
            if (uVar24 != 0) {
              iVar5 = __divsi3(uVar24,uVar23);
              uVar23 = __divsi3(iVar5 * 0x7fff,uVar14);
              *(undefined4 *)(param_3 + 0x14) = uVar23;
            }
          }
        }
        uVar31 = *(uint *)(param_3 + 0xc);
        *(uint *)(param_3 + 0x24) = uVar31;
        *(undefined4 *)(param_3 + 0x28) = *(undefined4 *)(param_3 + 0x10);
        *(undefined4 *)(param_3 + 0x2c) = *(undefined4 *)(param_3 + 0x14);
        uVar23 = *(undefined4 *)(param_2 + 0x120);
        if (uVar31 == 0) {
          uVar28 = *(uint *)(param_3 + 0x2c);
          if (uVar28 != 0) {
LAB_001124cc:
            if ((uVar28 & 0x80000000) == 0x80000000) {
              if ((uVar28 & 0xffff8000) == 0xffff8000) {
                uVar24 = 0;
              }
              else {
                if (-1 < (int)(uVar28 << 1)) goto LAB_0011599e;
                if (-1 < (int)(uVar28 << 2)) goto LAB_00115998;
                if (-1 < (int)(uVar28 << 3)) goto LAB_00115992;
                if (-1 < (int)(uVar28 << 4)) goto LAB_0011598c;
                if (-1 < (int)(uVar28 << 5)) goto LAB_00115986;
                if (-1 < (int)(uVar28 << 6)) goto LAB_00115980;
                if (-1 < (int)(uVar28 << 7)) goto LAB_0011597a;
                if (-1 < (int)(uVar28 << 8)) goto LAB_00115974;
                if (-1 < (int)(uVar28 << 9)) goto LAB_0011596e;
                if (-1 < (int)(uVar28 << 10)) goto LAB_00115968;
                if (-1 < (int)(uVar28 << 0xb)) goto LAB_00115962;
                if (-1 < (int)(uVar28 << 0xc)) goto LAB_0011595c;
                if (-1 < (int)(uVar28 << 0xd)) goto LAB_00115956;
                if (-1 < (int)(uVar28 << 0xe)) goto LAB_00115950;
                if (-1 < (int)(uVar28 << 0xf)) goto LAB_0011594a;
                uVar24 = (uint)((uVar28 & 0x8000) == 0);
              }
            }
            else {
              uVar24 = 0;
              if ((uVar28 & 0xffff8000) != 0) {
                if ((int)(uVar28 << 1) < 0) {
LAB_0011599e:
                  uVar24 = 0x10;
                }
                else if ((int)(uVar28 << 2) < 0) {
LAB_00115998:
                  uVar24 = 0xf;
                }
                else if ((int)(uVar28 << 3) < 0) {
LAB_00115992:
                  uVar24 = 0xe;
                }
                else if ((int)(uVar28 << 4) < 0) {
LAB_0011598c:
                  uVar24 = 0xd;
                }
                else if ((int)(uVar28 << 5) < 0) {
LAB_00115986:
                  uVar24 = 0xc;
                }
                else if ((int)(uVar28 << 6) < 0) {
LAB_00115980:
                  uVar24 = 0xb;
                }
                else if ((int)(uVar28 << 7) < 0) {
LAB_0011597a:
                  uVar24 = 10;
                }
                else if ((int)(uVar28 << 8) < 0) {
LAB_00115974:
                  uVar24 = 9;
                }
                else if ((int)(uVar28 << 9) < 0) {
LAB_0011596e:
                  uVar24 = 8;
                }
                else if ((int)(uVar28 << 10) < 0) {
LAB_00115968:
                  uVar24 = 7;
                }
                else if ((int)(uVar28 << 0xb) < 0) {
LAB_00115962:
                  uVar24 = 6;
                }
                else if ((int)(uVar28 << 0xc) < 0) {
LAB_0011595c:
                  uVar24 = 5;
                }
                else if ((int)(uVar28 << 0xd) < 0) {
LAB_00115956:
                  uVar24 = 4;
                }
                else if ((int)(uVar28 << 0xe) < 0) {
LAB_00115950:
                  uVar24 = 3;
                }
                else if ((int)(uVar28 << 0xf) < 0) {
LAB_0011594a:
                  uVar24 = 2;
                }
                else {
                  uVar24 = (uVar28 & 0xffff) >> 0xf;
                }
              }
            }
            if (uVar31 != 0) {
              if ((uVar31 & 0x80000000) == 0x80000000) {
                if ((uVar31 & 0xffff8000) != 0xffff8000) {
                  if ((uVar31 & 0x40000000) == 0) goto LAB_001158ca;
                  if ((uVar31 & 0x20000000) == 0) goto LAB_001158c4;
                  if ((uVar31 & 0x10000000) == 0) goto LAB_001158be;
                  if ((uVar31 & 0x8000000) == 0) goto LAB_001158b8;
                  if ((uVar31 & 0x4000000) == 0) goto LAB_001158b2;
                  if ((uVar31 & 0x2000000) == 0) goto LAB_001158ac;
                  if ((uVar31 & 0x1000000) == 0) goto LAB_001158a6;
                  if ((uVar31 & 0x800000) == 0) goto LAB_001158a0;
                  if ((uVar31 & 0x400000) == 0) goto LAB_0011589a;
                  if ((uVar31 & 0x200000) == 0) goto LAB_00115894;
                  if ((uVar31 & 0x100000) == 0) goto LAB_0011588e;
                  if ((uVar31 & 0x80000) == 0) goto LAB_00115888;
                  if ((uVar31 & 0x40000) == 0) goto LAB_00115882;
                  if ((uVar31 & 0x20000) == 0) goto LAB_0011587c;
                  if ((uVar31 & 0x10000) == 0) goto LAB_00115876;
                  uVar25 = (uint)((uVar31 & 0x8000) == 0);
                  goto LAB_001125dc;
                }
              }
              else if ((uVar31 & 0xffff8000) != 0) {
                if ((uVar31 & 0x40000000) == 0) {
                  if ((uVar31 & 0x20000000) == 0) {
                    if ((uVar31 & 0x10000000) == 0) {
                      if ((uVar31 & 0x8000000) == 0) {
                        if ((uVar31 & 0x4000000) == 0) {
                          if ((uVar31 & 0x2000000) == 0) {
                            if ((uVar31 & 0x1000000) == 0) {
                              if ((uVar31 & 0x800000) == 0) {
                                if ((uVar31 & 0x400000) == 0) {
                                  if ((uVar31 & 0x200000) == 0) {
                                    if ((uVar31 & 0x100000) == 0) {
                                      if ((uVar31 & 0x80000) == 0) {
                                        if ((uVar31 & 0x40000) == 0) {
                                          if ((uVar31 & 0x20000) == 0) {
                                            if ((uVar31 & 0x10000) == 0) {
                                              uVar25 = (uVar31 & 0xffff) >> 0xf;
                                            }
                                            else {
LAB_00115876:
                                              uVar25 = 2;
                                            }
                                          }
                                          else {
LAB_0011587c:
                                            uVar25 = 3;
                                          }
                                        }
                                        else {
LAB_00115882:
                                          uVar25 = 4;
                                        }
                                      }
                                      else {
LAB_00115888:
                                        uVar25 = 5;
                                      }
                                    }
                                    else {
LAB_0011588e:
                                      uVar25 = 6;
                                    }
                                  }
                                  else {
LAB_00115894:
                                    uVar25 = 7;
                                  }
                                }
                                else {
LAB_0011589a:
                                  uVar25 = 8;
                                }
                              }
                              else {
LAB_001158a0:
                                uVar25 = 9;
                              }
                            }
                            else {
LAB_001158a6:
                              uVar25 = 10;
                            }
                          }
                          else {
LAB_001158ac:
                            uVar25 = 0xb;
                          }
                        }
                        else {
LAB_001158b2:
                          uVar25 = 0xc;
                        }
                      }
                      else {
LAB_001158b8:
                        uVar25 = 0xd;
                      }
                    }
                    else {
LAB_001158be:
                      uVar25 = 0xe;
                    }
                  }
                  else {
LAB_001158c4:
                    uVar25 = 0xf;
                  }
                }
                else {
LAB_001158ca:
                  uVar25 = 0x10;
                }
LAB_001125dc:
                if (uVar24 < uVar25) {
                  uVar24 = uVar25;
                }
              }
            }
            switch(uVar24) {
            case 0:
              uVar4 = 1;
              break;
            case 1:
              uVar4 = 2;
              break;
            case 2:
              uVar4 = 4;
              break;
            case 3:
              uVar4 = 8;
              break;
            case 4:
              uVar4 = 0x10;
              break;
            case 5:
              uVar4 = 0x20;
              break;
            case 6:
              uVar4 = 0x40;
              break;
            case 7:
              uVar4 = 0x80;
              break;
            case 8:
              uVar4 = 0x100;
              break;
            case 9:
              uVar4 = 0x200;
              break;
            case 10:
              uVar4 = 0x400;
              break;
            case 0xb:
              uVar4 = 0x800;
              break;
            case 0xc:
              uVar4 = 0x1000;
              break;
            case 0xd:
              uVar4 = 0x2000;
              break;
            case 0xe:
              uVar4 = 0x4000;
              break;
            case 0xf:
              uVar4 = 0x8000;
              break;
            case 0x10:
              uVar4 = 0x10000;
              break;
            case 0x11:
              uVar4 = 0x20000;
              break;
            case 0x12:
              uVar4 = 0x40000;
              break;
            case 0x13:
              uVar4 = 0x80000;
              break;
            case 0x14:
              uVar4 = 0x100000;
              break;
            case 0x15:
              uVar4 = 0x200000;
              break;
            case 0x16:
              uVar4 = 0x400000;
              break;
            case 0x17:
              uVar4 = 0x800000;
              break;
            case 0x18:
              uVar4 = 0x1000000;
              break;
            case 0x19:
              uVar4 = 0x2000000;
              break;
            case 0x1a:
              uVar4 = 0x4000000;
              break;
            case 0x1b:
              uVar4 = 0x8000000;
              break;
            case 0x1c:
              uVar4 = 0x10000000;
              break;
            case 0x1d:
              uVar4 = 0x20000000;
              break;
            default:
              uVar4 = 0x40000000;
            }
            iVar5 = __divsi3(uVar28,uVar4);
            iVar6 = __divsi3(uVar31,uVar4);
            if (iVar5 < 0) {
              if (iVar6 < 0) {
                if (iVar5 == iVar6 || -iVar6 < -iVar5) {
                  iVar7 = *(int *)(iVar20 + DAT_00115da4);
                  uVar24 = __divsi3(iVar6 * 0x7fff,iVar5);
                  if ((int)uVar24 < 0) {
                    uVar24 = uVar24 + 0x1ff;
                  }
                  local_80 = *(int *)(iVar7 + ((uVar24 & 0x7fff) >> 9) * 4) + -0xb4;
                }
                else {
                  iVar7 = *(int *)(iVar20 + DAT_00115da4);
                  uVar24 = __divsi3(iVar5 * 0x7fff,iVar6);
                  if ((int)uVar24 < 0) {
                    uVar24 = uVar24 + 0x1ff;
                  }
                  local_80 = -0x5a - *(int *)(iVar7 + ((uVar24 & 0x7fff) >> 9) * 4);
                }
              }
              else if (-iVar5 < iVar6) {
                iVar7 = *(int *)(iVar20 + DAT_00115da4);
                uVar24 = __divsi3(iVar5 * -0x7fff,iVar6);
                if ((int)uVar24 < 0) {
                  uVar24 = uVar24 + 0x1ff;
                }
                local_80 = *(int *)(iVar7 + ((uVar24 & 0x7fff) >> 9) * 4) + 0x5a;
              }
              else {
                iVar7 = *(int *)(iVar20 + DAT_00115da4);
                uVar24 = __divsi3(iVar6 * -0x7fff,iVar5);
                if ((int)uVar24 < 0) {
                  uVar24 = uVar24 + 0x1ff;
                }
                local_80 = 0xb4 - *(int *)(iVar7 + ((uVar24 & 0x7fff) >> 9) * 4);
              }
            }
            else if (iVar6 < 0) {
              if (iVar5 < -iVar6) {
                iVar7 = *(int *)(iVar20 + DAT_00115da4);
                uVar24 = __divsi3(iVar5 * -0x7fff,iVar6);
                if ((int)uVar24 < 0) {
                  uVar24 = uVar24 + 0x1ff;
                }
                local_80 = *(int *)(iVar7 + ((uVar24 & 0x7fff) >> 9) * 4) + -0x5a;
              }
              else {
                iVar7 = *(int *)(iVar20 + DAT_00115da4);
                uVar24 = __divsi3(iVar6 * -0x7fff,iVar5);
                if ((int)uVar24 < 0) {
                  uVar24 = uVar24 + 0x1ff;
                }
                local_80 = -*(int *)(iVar7 + ((uVar24 & 0x7fff) >> 9) * 4);
              }
            }
            else if (iVar5 < iVar6) {
              iVar7 = *(int *)(iVar20 + DAT_00115da4);
              uVar24 = __divsi3(iVar5 * 0x7fff,iVar6);
              if ((int)uVar24 < 0) {
                uVar24 = uVar24 + 0x1ff;
              }
              local_80 = 0x5a - *(int *)(iVar7 + ((uVar24 & 0x7fff) >> 9) * 4);
            }
            else {
              iVar7 = *(int *)(iVar20 + DAT_00115da4);
              uVar24 = __divsi3(iVar6 * 0x7fff,iVar5);
              local_80 = *(int *)(iVar7 + ((uVar24 & 0x7fff) >> 9) * 4);
            }
LAB_0011203a:
            uVar24 = *(uint *)(param_3 + 0x28);
            if (uVar24 == 0) {
LAB_0010dcf0:
              if (uVar31 != 0) {
                uVar24 = 0;
                goto LAB_0010dde6;
              }
              uVar24 = 0;
              iVar5 = 0;
              if (uVar28 == 0) goto LAB_0010576e;
            }
            else {
              if (uVar31 != 0) goto LAB_0010dde6;
              if (uVar28 == 0) goto LAB_00105764;
            }
            uVar25 = 0;
            goto LAB_0010dd02;
          }
          uVar24 = *(uint *)(param_3 + 0x28);
          if (uVar24 == 0) {
            iVar5 = 0;
            local_80 = 0;
          }
          else {
            local_80 = 0;
LAB_00105764:
            if ((int)uVar24 < 0) {
              iVar5 = -0x5a;
            }
            else {
              iVar5 = 0x5a;
            }
          }
        }
        else {
          uVar28 = *(uint *)(param_3 + 0x2c);
          if (uVar28 != 0) {
            if (uVar31 != 0 || uVar28 != 0) goto LAB_001124cc;
            local_80 = 0;
            goto LAB_0011203a;
          }
          uVar24 = *(uint *)(param_3 + 0x28);
          if ((int)uVar31 < 0) {
            local_80 = -0x5a;
          }
          else {
            local_80 = 0x5a;
          }
          if (uVar24 == 0) goto LAB_0010dcf0;
LAB_0010dde6:
          if ((uVar31 & 0x80000000) == 0x80000000) {
            if ((uVar31 & 0xffffc000) == 0xffffc000) {
              uVar25 = 0;
            }
            else {
              if ((uVar31 & 0x40000000) == 0) goto LAB_00115d84;
              if ((uVar31 & 0x20000000) == 0) goto LAB_00115d7e;
              if ((uVar31 & 0x10000000) == 0) goto LAB_00115d78;
              if ((uVar31 & 0x8000000) == 0) goto LAB_00115d72;
              if ((uVar31 & 0x4000000) == 0) goto LAB_00115d6c;
              if ((uVar31 & 0x2000000) == 0) goto LAB_00115d66;
              if ((uVar31 & 0x1000000) == 0) goto LAB_00115d60;
              if ((uVar31 & 0x800000) == 0) goto LAB_00115d5a;
              if ((uVar31 & 0x400000) == 0) goto LAB_00115d54;
              if ((uVar31 & 0x200000) == 0) goto LAB_00115d4e;
              if ((uVar31 & 0x100000) == 0) goto LAB_00115d48;
              if ((uVar31 & 0x80000) == 0) goto LAB_00115d42;
              if ((uVar31 & 0x40000) == 0) goto LAB_00115d3c;
              if ((uVar31 & 0x20000) == 0) goto LAB_00115d36;
              if ((uVar31 & 0x10000) == 0) goto LAB_00115d30;
              if ((uVar31 & 0x8000) == 0) goto LAB_00115d2a;
              uVar25 = (uint)((uVar31 & 0x4000) == 0);
            }
          }
          else {
            uVar25 = 0;
            if ((uVar31 & 0xffffc000) != 0) {
              if ((uVar31 & 0x40000000) == 0) {
                if ((uVar31 & 0x20000000) == 0) {
                  if ((uVar31 & 0x10000000) == 0) {
                    if ((uVar31 & 0x8000000) == 0) {
                      if ((uVar31 & 0x4000000) == 0) {
                        if ((uVar31 & 0x2000000) == 0) {
                          if ((uVar31 & 0x1000000) == 0) {
                            if ((uVar31 & 0x800000) == 0) {
                              if ((uVar31 & 0x400000) == 0) {
                                if ((uVar31 & 0x200000) == 0) {
                                  if ((uVar31 & 0x100000) == 0) {
                                    if ((uVar31 & 0x80000) == 0) {
                                      if ((uVar31 & 0x40000) == 0) {
                                        if ((uVar31 & 0x20000) == 0) {
                                          if ((uVar31 & 0x10000) == 0) {
                                            if ((uVar31 & 0x8000) == 0) {
                                              uVar25 = (uVar31 & 0x7fff) >> 0xe;
                                            }
                                            else {
LAB_00115d2a:
                                              uVar25 = 2;
                                            }
                                          }
                                          else {
LAB_00115d30:
                                            uVar25 = 3;
                                          }
                                        }
                                        else {
LAB_00115d36:
                                          uVar25 = 4;
                                        }
                                      }
                                      else {
LAB_00115d3c:
                                        uVar25 = 5;
                                      }
                                    }
                                    else {
LAB_00115d42:
                                      uVar25 = 6;
                                    }
                                  }
                                  else {
LAB_00115d48:
                                    uVar25 = 7;
                                  }
                                }
                                else {
LAB_00115d4e:
                                  uVar25 = 8;
                                }
                              }
                              else {
LAB_00115d54:
                                uVar25 = 9;
                              }
                            }
                            else {
LAB_00115d5a:
                              uVar25 = 10;
                            }
                          }
                          else {
LAB_00115d60:
                            uVar25 = 0xb;
                          }
                        }
                        else {
LAB_00115d66:
                          uVar25 = 0xc;
                        }
                      }
                      else {
LAB_00115d6c:
                        uVar25 = 0xd;
                      }
                    }
                    else {
LAB_00115d72:
                      uVar25 = 0xe;
                    }
                  }
                  else {
LAB_00115d78:
                    uVar25 = 0xf;
                  }
                }
                else {
LAB_00115d7e:
                  uVar25 = 0x10;
                }
              }
              else {
LAB_00115d84:
                uVar25 = 0x11;
              }
            }
          }
          uVar14 = 0;
          if (uVar28 != 0) {
LAB_0010dd02:
            if ((uVar28 & 0x80000000) == 0x80000000) {
              if ((uVar28 & 0xffffc000) == 0xffffc000) {
                uVar14 = 0;
              }
              else {
                if (-1 < (int)(uVar28 << 1)) goto LAB_00116622;
                if (-1 < (int)(uVar28 << 2)) goto LAB_0011661c;
                if (-1 < (int)(uVar28 << 3)) goto LAB_00116616;
                if (-1 < (int)(uVar28 << 4)) goto LAB_00116610;
                if (-1 < (int)(uVar28 << 5)) goto LAB_0011660a;
                if (-1 < (int)(uVar28 << 6)) goto LAB_00116604;
                if (-1 < (int)(uVar28 << 7)) goto LAB_001165fe;
                if (-1 < (int)(uVar28 << 8)) goto LAB_001165f8;
                if (-1 < (int)(uVar28 << 9)) goto LAB_001165f2;
                if (-1 < (int)(uVar28 << 10)) goto LAB_001165ec;
                if (-1 < (int)(uVar28 << 0xb)) goto LAB_001165e6;
                if (-1 < (int)(uVar28 << 0xc)) goto LAB_001165e0;
                if (-1 < (int)(uVar28 << 0xd)) goto LAB_001165da;
                if (-1 < (int)(uVar28 << 0xe)) goto LAB_001165d4;
                if (-1 < (int)(uVar28 << 0xf)) goto LAB_001165ce;
                if (-1 < (int)(uVar28 << 0x10)) goto LAB_001165c8;
                uVar14 = (uint)((uVar28 & 0x4000) == 0);
              }
            }
            else {
              uVar14 = 0;
              if ((uVar28 & 0xffffc000) != 0) {
                if ((int)(uVar28 << 1) < 0) {
LAB_00116622:
                  uVar14 = 0x11;
                }
                else if ((int)(uVar28 << 2) < 0) {
LAB_0011661c:
                  uVar14 = 0x10;
                }
                else if ((int)(uVar28 << 3) < 0) {
LAB_00116616:
                  uVar14 = 0xf;
                }
                else if ((int)(uVar28 << 4) < 0) {
LAB_00116610:
                  uVar14 = 0xe;
                }
                else if ((int)(uVar28 << 5) < 0) {
LAB_0011660a:
                  uVar14 = 0xd;
                }
                else if ((int)(uVar28 << 6) < 0) {
LAB_00116604:
                  uVar14 = 0xc;
                }
                else if ((int)(uVar28 << 7) < 0) {
LAB_001165fe:
                  uVar14 = 0xb;
                }
                else if ((int)(uVar28 << 8) < 0) {
LAB_001165f8:
                  uVar14 = 10;
                }
                else if ((int)(uVar28 << 9) < 0) {
LAB_001165f2:
                  uVar14 = 9;
                }
                else if ((int)(uVar28 << 10) < 0) {
LAB_001165ec:
                  uVar14 = 8;
                }
                else if ((int)(uVar28 << 0xb) < 0) {
LAB_001165e6:
                  uVar14 = 7;
                }
                else if ((int)(uVar28 << 0xc) < 0) {
LAB_001165e0:
                  uVar14 = 6;
                }
                else if ((int)(uVar28 << 0xd) < 0) {
LAB_001165da:
                  uVar14 = 5;
                }
                else if ((int)(uVar28 << 0xe) < 0) {
LAB_001165d4:
                  uVar14 = 4;
                }
                else if ((int)(uVar28 << 0xf) < 0) {
LAB_001165ce:
                  uVar14 = 3;
                }
                else if ((int)(uVar28 << 0x10) < 0) {
LAB_001165c8:
                  uVar14 = 2;
                }
                else {
                  uVar14 = (uVar28 & 0x7fff) >> 0xe;
                }
              }
            }
          }
          if (uVar14 < uVar25) {
            uVar14 = uVar25;
          }
          switch(uVar14) {
          case 0:
            iVar5 = 1;
            break;
          case 1:
            iVar5 = 2;
            break;
          case 2:
            iVar5 = 4;
            break;
          case 3:
            iVar5 = 8;
            break;
          case 4:
            iVar5 = 0x10;
            break;
          case 5:
            iVar5 = 0x20;
            break;
          case 6:
            iVar5 = 0x40;
            break;
          case 7:
            iVar5 = 0x80;
            break;
          case 8:
            iVar5 = 0x100;
            break;
          case 9:
            iVar5 = 0x200;
            break;
          case 10:
            iVar5 = 0x400;
            break;
          case 0xb:
            iVar5 = 0x800;
            break;
          case 0xc:
            iVar5 = 0x1000;
            break;
          case 0xd:
            iVar5 = 0x2000;
            break;
          case 0xe:
            iVar5 = 0x4000;
            break;
          case 0xf:
            iVar5 = 0x8000;
            break;
          case 0x10:
            iVar5 = 0x10000;
            break;
          case 0x11:
            iVar5 = 0x20000;
            break;
          case 0x12:
            iVar5 = 0x40000;
            break;
          case 0x13:
            iVar5 = 0x80000;
            break;
          case 0x14:
            iVar5 = 0x100000;
            break;
          case 0x15:
            iVar5 = 0x200000;
            break;
          case 0x16:
            iVar5 = 0x400000;
            break;
          case 0x17:
            iVar5 = 0x800000;
            break;
          case 0x18:
            iVar5 = 0x1000000;
            break;
          case 0x19:
            iVar5 = 0x2000000;
            break;
          case 0x1a:
            iVar5 = 0x4000000;
            break;
          case 0x1b:
            iVar5 = 0x8000000;
            break;
          case 0x1c:
            iVar5 = 0x10000000;
            break;
          case 0x1d:
            iVar5 = 0x20000000;
            break;
          default:
            iVar5 = 0x40000000;
          }
          iVar6 = __divsi3(uVar31,iVar5);
          iVar7 = __divsi3(uVar28,iVar5);
          iVar6 = iVar6 * iVar6 + iVar7 * iVar7;
          if (iVar6 < 1) {
            iVar7 = 0;
          }
          else {
            iVar15 = iVar6;
            if (iVar6 == 0x7fffffff) {
              iVar6 = 0x7ffffffe;
              iVar15 = 0x7ffffffe;
            }
            do {
              iVar7 = __divsi3(iVar15,iVar6);
              iVar10 = (iVar6 + iVar7) / 2;
              iVar7 = iVar6;
              if (iVar6 <= iVar10) break;
              iVar6 = __divsi3(iVar15,iVar10);
              iVar6 = (iVar10 + iVar6) / 2;
              iVar7 = iVar10;
              if (iVar10 <= iVar6) break;
              iVar7 = __divsi3(iVar15,iVar6);
              iVar10 = (iVar6 + iVar7) / 2;
              iVar7 = iVar6;
              if (iVar6 <= iVar10) break;
              iVar6 = __divsi3(iVar15);
              iVar6 = (iVar10 + iVar6) / 2;
              iVar7 = iVar10;
              if (iVar10 <= iVar6) break;
              iVar7 = __divsi3(iVar15,iVar6);
              iVar10 = (iVar6 + iVar7) / 2;
              iVar7 = iVar6;
              if (iVar6 <= iVar10) break;
              iVar6 = __divsi3(iVar15,iVar10);
              iVar6 = (iVar10 + iVar6) / 2;
              iVar7 = iVar10;
              if (iVar10 <= iVar6) break;
              iVar7 = __divsi3(iVar15,iVar6);
              iVar10 = (iVar6 + iVar7) / 2;
              iVar7 = iVar6;
              if (iVar6 <= iVar10) break;
              iVar6 = __divsi3(iVar15);
              iVar6 = (iVar6 + iVar10) / 2;
              iVar7 = iVar10;
            } while (iVar6 < iVar10);
          }
          uVar31 = uVar31 & ~((int)uVar31 >> 0x1f);
          if ((int)uVar31 < iVar5 * iVar7) {
            uVar31 = iVar5 * iVar7;
          }
          if ((int)uVar31 < (int)uVar28) {
            iVar5 = 0;
            uVar31 = uVar28;
            if (uVar28 != 0 || uVar24 != 0) {
LAB_0010e056:
              uVar28 = 0;
              if ((uVar31 & 0xffff8000) != 0) {
                if ((uVar31 & 0x40000000) == 0) {
                  if ((uVar31 & 0x20000000) == 0) {
                    if ((uVar31 & 0x10000000) == 0) {
                      if ((uVar31 & 0x8000000) == 0) {
                        if ((uVar31 & 0x4000000) == 0) {
                          if ((uVar31 & 0x2000000) == 0) {
                            if ((uVar31 & 0x1000000) == 0) {
                              if ((uVar31 & 0x800000) == 0) {
                                if ((uVar31 & 0x400000) == 0) {
                                  if ((uVar31 & 0x200000) == 0) {
                                    if ((uVar31 & 0x100000) == 0) {
                                      if ((uVar31 & 0x80000) == 0) {
                                        if ((uVar31 & 0x40000) == 0) {
                                          if ((uVar31 & 0x20000) == 0) {
                                            if ((uVar31 & 0x10000) == 0) {
                                              uVar28 = (uVar31 & 0xffff) >> 0xf;
                                            }
                                            else {
                                              uVar28 = 2;
                                            }
                                          }
                                          else {
                                            uVar28 = 3;
                                          }
                                        }
                                        else {
                                          uVar28 = 4;
                                        }
                                      }
                                      else {
                                        uVar28 = 5;
                                      }
                                    }
                                    else {
                                      uVar28 = 6;
                                    }
                                  }
                                  else {
                                    uVar28 = 7;
                                  }
                                }
                                else {
                                  uVar28 = 8;
                                }
                              }
                              else {
                                uVar28 = 9;
                              }
                            }
                            else {
                              uVar28 = 10;
                            }
                          }
                          else {
                            uVar28 = 0xb;
                          }
                        }
                        else {
                          uVar28 = 0xc;
                        }
                      }
                      else {
                        uVar28 = 0xd;
                      }
                    }
                    else {
                      uVar28 = 0xe;
                    }
                  }
                  else {
                    uVar28 = 0xf;
                  }
                }
                else {
                  uVar28 = 0x10;
                }
              }
LAB_0010e0de:
              if (uVar24 != 0) {
                if ((uVar24 & 0x80000000) == 0x80000000) {
                  if ((uVar24 & 0xffff8000) != 0xffff8000) {
                    if (-1 < (int)(uVar24 << 1)) goto LAB_00115e16;
                    if (-1 < (int)(uVar24 << 2)) goto LAB_00115e22;
                    if (-1 < (int)(uVar24 << 3)) goto LAB_00115e1c;
                    if (-1 < (int)(uVar24 << 4)) goto LAB_00115e3a;
                    if (-1 < (int)(uVar24 << 5)) goto LAB_00115e34;
                    if (-1 < (int)(uVar24 << 6)) goto LAB_00115e2e;
                    if (-1 < (int)(uVar24 << 7)) goto LAB_00115e28;
                    if (-1 < (int)(uVar24 << 8)) goto LAB_00115e6a;
                    if (-1 < (int)(uVar24 << 9)) goto LAB_00115e64;
                    if (-1 < (int)(uVar24 << 10)) goto LAB_00115e5e;
                    if (-1 < (int)(uVar24 << 0xb)) goto LAB_00115e58;
                    if (-1 < (int)(uVar24 << 0xc)) goto LAB_00115e52;
                    if (-1 < (int)(uVar24 << 0xd)) goto LAB_00115e4c;
                    if (-1 < (int)(uVar24 << 0xe)) goto LAB_00115e46;
                    if (-1 < (int)(uVar24 << 0xf)) goto LAB_00115e40;
                    uVar25 = (uint)((uVar24 & 0x8000) == 0);
                    goto LAB_0010e158;
                  }
                }
                else if ((uVar24 & 0xffff8000) != 0) {
                  if ((int)(uVar24 << 1) < 0) {
LAB_00115e16:
                    uVar25 = 0x10;
                  }
                  else if ((int)(uVar24 << 2) < 0) {
LAB_00115e22:
                    uVar25 = 0xf;
                  }
                  else if ((int)(uVar24 << 3) < 0) {
LAB_00115e1c:
                    uVar25 = 0xe;
                  }
                  else if ((int)(uVar24 << 4) < 0) {
LAB_00115e3a:
                    uVar25 = 0xd;
                  }
                  else if ((int)(uVar24 << 5) < 0) {
LAB_00115e34:
                    uVar25 = 0xc;
                  }
                  else if ((int)(uVar24 << 6) < 0) {
LAB_00115e2e:
                    uVar25 = 0xb;
                  }
                  else if ((int)(uVar24 << 7) < 0) {
LAB_00115e28:
                    uVar25 = 10;
                  }
                  else if ((int)(uVar24 << 8) < 0) {
LAB_00115e6a:
                    uVar25 = 9;
                  }
                  else if ((int)(uVar24 << 9) < 0) {
LAB_00115e64:
                    uVar25 = 8;
                  }
                  else if ((int)(uVar24 << 10) < 0) {
LAB_00115e5e:
                    uVar25 = 7;
                  }
                  else if ((int)(uVar24 << 0xb) < 0) {
LAB_00115e58:
                    uVar25 = 6;
                  }
                  else if ((int)(uVar24 << 0xc) < 0) {
LAB_00115e52:
                    uVar25 = 5;
                  }
                  else if ((int)(uVar24 << 0xd) < 0) {
LAB_00115e4c:
                    uVar25 = 4;
                  }
                  else if ((int)(uVar24 << 0xe) < 0) {
LAB_00115e46:
                    uVar25 = 3;
                  }
                  else if ((int)(uVar24 << 0xf) < 0) {
LAB_00115e40:
                    uVar25 = 2;
                  }
                  else {
                    uVar25 = (uVar24 & 0xffff) >> 0xf;
                  }
LAB_0010e158:
                  if (uVar28 < uVar25) {
                    uVar28 = uVar25;
                  }
                }
              }
              switch(uVar28) {
              case 0:
                uVar4 = 1;
                break;
              case 1:
                uVar4 = 2;
                break;
              case 2:
                uVar4 = 4;
                break;
              case 3:
                uVar4 = 8;
                break;
              case 4:
                uVar4 = 0x10;
                break;
              case 5:
                uVar4 = 0x20;
                break;
              case 6:
                uVar4 = 0x40;
                break;
              case 7:
                uVar4 = 0x80;
                break;
              case 8:
                uVar4 = 0x100;
                break;
              case 9:
                uVar4 = 0x200;
                break;
              case 10:
                uVar4 = 0x400;
                break;
              case 0xb:
                uVar4 = 0x800;
                break;
              case 0xc:
                uVar4 = 0x1000;
                break;
              case 0xd:
                uVar4 = 0x2000;
                break;
              case 0xe:
                uVar4 = 0x4000;
                break;
              case 0xf:
                uVar4 = 0x8000;
                break;
              case 0x10:
                uVar4 = 0x10000;
                break;
              case 0x11:
                uVar4 = 0x20000;
                break;
              case 0x12:
                uVar4 = 0x40000;
                break;
              case 0x13:
                uVar4 = 0x80000;
                break;
              case 0x14:
                uVar4 = 0x100000;
                break;
              case 0x15:
                uVar4 = 0x200000;
                break;
              case 0x16:
                uVar4 = 0x400000;
                break;
              case 0x17:
                uVar4 = 0x800000;
                break;
              case 0x18:
                uVar4 = 0x1000000;
                break;
              case 0x19:
                uVar4 = 0x2000000;
                break;
              case 0x1a:
                uVar4 = 0x4000000;
                break;
              case 0x1b:
                uVar4 = 0x8000000;
                break;
              case 0x1c:
                uVar4 = 0x10000000;
                break;
              case 0x1d:
                uVar4 = 0x20000000;
                break;
              default:
                uVar4 = 0x40000000;
              }
              iVar7 = __divsi3(uVar31,uVar4);
              iVar15 = __divsi3(uVar24,uVar4);
              iVar6 = DAT_00113870;
              iVar5 = DAT_0010ecf0;
              if (iVar15 < 0) {
                if (iVar7 < -iVar15) {
                  iVar5 = *(int *)(iVar20 + DAT_00113870);
                  uVar31 = __divsi3(iVar7 * -0x7fff,iVar15);
                  if ((int)uVar31 < 0) {
                    uVar31 = uVar31 + 0x1ff;
                  }
                  iVar5 = *(int *)(iVar5 + ((uVar31 & 0x7fff) >> 9) * 4) + -0x5a;
                }
                else {
                  uVar31 = __divsi3(iVar15 * -0x7fff,iVar7);
                  if ((int)uVar31 < 0) {
                    uVar31 = uVar31 + 0x1ff;
                  }
                  iVar5 = -*(int *)(*(int *)(iVar20 + iVar6) + ((uVar31 & 0x7fff) >> 9) * 4);
                }
              }
              else if (iVar7 < iVar15) {
                uVar31 = __divsi3(iVar7 * 0x7fff,iVar15);
                if ((int)uVar31 < 0) {
                  uVar31 = uVar31 + 0x1ff;
                }
                iVar5 = 0x5a - *(int *)(*(int *)(iVar20 + iVar5) + ((uVar31 & 0x7fff) >> 9) * 4);
              }
              else {
                uVar31 = __divsi3(iVar15 * 0x7fff,iVar7);
                iVar5 = *(int *)(*(int *)(iVar20 + iVar5) + ((uVar31 & 0x7fff) >> 9) * 4);
              }
            }
          }
          else {
            iVar5 = 0;
            if (uVar31 != 0 || uVar24 != 0) {
              uVar28 = 0;
              if (uVar31 != 0) goto LAB_0010e056;
              goto LAB_0010e0de;
            }
          }
        }
LAB_0010576e:
        *(int *)(param_3 + 0x28) = iVar5;
        *(int *)(param_3 + 0x24) = local_80;
        *(undefined4 *)(param_3 + 0x2c) = uVar23;
        uVar23 = *(undefined4 *)(param_3 + 0x10);
        uVar4 = *(undefined4 *)(param_3 + 0x14);
        *(uint *)(param_2 + 0x160) = *(uint *)(param_3 + 0xc);
        *(undefined4 *)(param_2 + 0x164) = uVar23;
        *(undefined4 *)(param_2 + 0x168) = uVar4;
        uVar23 = *(undefined4 *)(param_3 + 0x28);
        uVar4 = *(undefined4 *)(param_3 + 0x2c);
        *(uint *)(param_2 + 0x16c) = *(uint *)(param_3 + 0x24);
        *(undefined4 *)(param_2 + 0x170) = uVar23;
        *(undefined4 *)(param_2 + 0x174) = uVar4;
        uVar23 = *(undefined4 *)(param_2 + 0x118);
        uVar4 = *(undefined4 *)(param_2 + 0x11c);
        *(undefined4 *)(param_3 + 0x18) = *(undefined4 *)(param_2 + 0x114);
        *(undefined4 *)(param_3 + 0x1c) = uVar23;
        *(undefined4 *)(param_3 + 0x20) = uVar4;
        uVar28 = *(uint *)param_1;
        uVar31 = *(uint *)(param_2 + 0x10);
      }
    }
    else {
      if (2 < uVar31) goto LAB_001057b0;
      uVar31 = *(uint *)(param_2 + 0x2c);
      if (uVar31 == 0) {
        if ((*(int *)(param_2 + 0x30) != 0) || (*(int *)(param_2 + 0x34) != 0)) {
          uVar24 = *(uint *)(param_2 + 0x30);
          uVar25 = 0;
          uVar28 = *(uint *)(param_2 + 0x34);
          goto LAB_001055a8;
        }
        uVar23 = *(undefined4 *)(param_2 + 0x30);
        uVar4 = *(undefined4 *)(param_2 + 0x34);
        *(undefined4 *)(param_3 + 0x24) = *(undefined4 *)(param_2 + 0x2c);
        *(undefined4 *)(param_3 + 0x28) = uVar23;
        *(undefined4 *)(param_3 + 0x2c) = uVar4;
LAB_00108340:
        uVar31 = 0;
        *(undefined4 *)(param_3 + 0x24) = 0;
        *(undefined4 *)(param_3 + 0x28) = 0;
        *(undefined4 *)(param_3 + 0x2c) = 0;
LAB_0010834c:
        iVar6 = 0;
        local_80 = 0;
      }
      else {
        uVar24 = *(uint *)(param_2 + 0x30);
        uVar28 = *(uint *)(param_2 + 0x34);
        if ((uVar31 & 0x80000000) == 0x80000000) {
          if ((uVar31 & 0xffffc000) == 0xffffc000) {
            uVar25 = 0;
          }
          else {
            if (-1 < (int)(uVar31 << 1)) goto LAB_00112bc2;
            if (-1 < (int)(uVar31 << 2)) goto LAB_00112c52;
            if (-1 < (int)(uVar31 << 3)) goto LAB_00112c4c;
            if (-1 < (int)(uVar31 << 4)) goto LAB_00112fa0;
            if (-1 < (int)(uVar31 << 5)) goto LAB_00113774;
            if (-1 < (int)(uVar31 << 6)) goto LAB_00113798;
            if (-1 < (int)(uVar31 << 7)) goto LAB_00113792;
            if (-1 < (int)(uVar31 << 8)) goto LAB_00113f6e;
            if (-1 < (int)(uVar31 << 9)) goto LAB_00113f68;
            if (-1 < (int)(uVar31 << 10)) goto LAB_00113f62;
            if (-1 < (int)(uVar31 << 0xb)) goto LAB_00113f5c;
            if (-1 < (int)(uVar31 << 0xc)) goto LAB_00113f7a;
            if (-1 < (int)(uVar31 << 0xd)) goto LAB_00113f74;
            if (-1 < (int)(uVar31 << 0xe)) goto LAB_00113f80;
            if (-1 < (int)(uVar31 << 0xf)) goto LAB_00113e74;
            if (-1 < (int)(uVar31 << 0x10)) goto LAB_001144ca;
            uVar25 = (uint)((uVar31 & 0x4000) == 0);
          }
        }
        else {
          uVar25 = 0;
          if ((uVar31 & 0xffffc000) != 0) {
            if ((int)(uVar31 << 1) < 0) {
LAB_00112bc2:
              uVar25 = 0x11;
            }
            else if ((int)(uVar31 << 2) < 0) {
LAB_00112c52:
              uVar25 = 0x10;
            }
            else if ((int)(uVar31 << 3) < 0) {
LAB_00112c4c:
              uVar25 = 0xf;
            }
            else if ((int)(uVar31 << 4) < 0) {
LAB_00112fa0:
              uVar25 = 0xe;
            }
            else if ((int)(uVar31 << 5) < 0) {
LAB_00113774:
              uVar25 = 0xd;
            }
            else if ((int)(uVar31 << 6) < 0) {
LAB_00113798:
              uVar25 = 0xc;
            }
            else if ((int)(uVar31 << 7) < 0) {
LAB_00113792:
              uVar25 = 0xb;
            }
            else if ((int)(uVar31 << 8) < 0) {
LAB_00113f6e:
              uVar25 = 10;
            }
            else if ((int)(uVar31 << 9) < 0) {
LAB_00113f68:
              uVar25 = 9;
            }
            else if ((int)(uVar31 << 10) < 0) {
LAB_00113f62:
              uVar25 = 8;
            }
            else if ((int)(uVar31 << 0xb) < 0) {
LAB_00113f5c:
              uVar25 = 7;
            }
            else if ((int)(uVar31 << 0xc) < 0) {
LAB_00113f7a:
              uVar25 = 6;
            }
            else if ((int)(uVar31 << 0xd) < 0) {
LAB_00113f74:
              uVar25 = 5;
            }
            else if ((int)(uVar31 << 0xe) < 0) {
LAB_00113f80:
              uVar25 = 4;
            }
            else if ((int)(uVar31 << 0xf) < 0) {
LAB_00113e74:
              uVar25 = 3;
            }
            else if ((int)(uVar31 << 0x10) < 0) {
LAB_001144ca:
              uVar25 = 2;
            }
            else {
              uVar25 = (uVar31 & 0x7fff) >> 0xe;
            }
          }
        }
LAB_001055a8:
        uVar14 = 0;
        if (uVar24 != 0) {
          if ((uVar24 & 0x80000000) == 0x80000000) {
            if ((uVar24 & 0xffffc000) == 0xffffc000) {
              uVar14 = 0;
            }
            else {
              if (-1 < (int)(uVar24 << 1)) goto LAB_00112bba;
              if (-1 < (int)(uVar24 << 2)) goto LAB_0011305e;
              if (-1 < (int)(uVar24 << 3)) goto LAB_00113056;
              if (-1 < (int)(uVar24 << 4)) goto LAB_00112fa6;
              if (-1 < (int)(uVar24 << 5)) goto LAB_0011377a;
              if (-1 < (int)(uVar24 << 6)) goto LAB_0011378a;
              if (-1 < (int)(uVar24 << 7)) goto LAB_00113782;
              if (-1 < (int)(uVar24 << 8)) goto LAB_001137d6;
              if (-1 < (int)(uVar24 << 9)) goto LAB_001137ce;
              if (-1 < (int)(uVar24 << 10)) goto LAB_001137c6;
              if (-1 < (int)(uVar24 << 0xb)) goto LAB_001137be;
              if (-1 < (int)(uVar24 << 0xc)) goto LAB_001137b6;
              if (-1 < (int)(uVar24 << 0xd)) goto LAB_001137ae;
              if (-1 < (int)(uVar24 << 0xe)) goto LAB_001137a6;
              if (-1 < (int)(uVar24 << 0xf)) goto LAB_0011379e;
              if (-1 < (int)(uVar24 << 0x10)) goto LAB_001140a0;
              uVar14 = (uint)((uVar24 & 0x4000) == 0);
            }
          }
          else {
            uVar14 = 0;
            if ((uVar24 & 0xffffc000) != 0) {
              if ((int)(uVar24 << 1) < 0) {
LAB_00112bba:
                uVar14 = 0x11;
              }
              else if ((int)(uVar24 << 2) < 0) {
LAB_0011305e:
                uVar14 = 0x10;
              }
              else if ((int)(uVar24 << 3) < 0) {
LAB_00113056:
                uVar14 = 0xf;
              }
              else if ((int)(uVar24 << 4) < 0) {
LAB_00112fa6:
                uVar14 = 0xe;
              }
              else if ((int)(uVar24 << 5) < 0) {
LAB_0011377a:
                uVar14 = 0xd;
              }
              else if ((int)(uVar24 << 6) < 0) {
LAB_0011378a:
                uVar14 = 0xc;
              }
              else if ((int)(uVar24 << 7) < 0) {
LAB_00113782:
                uVar14 = 0xb;
              }
              else if ((int)(uVar24 << 8) < 0) {
LAB_001137d6:
                uVar14 = 10;
              }
              else if ((int)(uVar24 << 9) < 0) {
LAB_001137ce:
                uVar14 = 9;
              }
              else if ((int)(uVar24 << 10) < 0) {
LAB_001137c6:
                uVar14 = 8;
              }
              else if ((int)(uVar24 << 0xb) < 0) {
LAB_001137be:
                uVar14 = 7;
              }
              else if ((int)(uVar24 << 0xc) < 0) {
LAB_001137b6:
                uVar14 = 6;
              }
              else if ((int)(uVar24 << 0xd) < 0) {
LAB_001137ae:
                uVar14 = 5;
              }
              else if ((int)(uVar24 << 0xe) < 0) {
LAB_001137a6:
                uVar14 = 4;
              }
              else if ((int)(uVar24 << 0xf) < 0) {
LAB_0011379e:
                uVar14 = 3;
              }
              else if ((int)(uVar24 << 0x10) < 0) {
LAB_001140a0:
                uVar14 = 2;
              }
              else {
                uVar14 = (uVar24 & 0x7fff) >> 0xe;
              }
            }
          }
        }
        uVar22 = 0;
        if (uVar28 != 0) {
          if ((uVar28 & 0x80000000) == 0x80000000) {
            if ((uVar28 & 0xffffc000) == 0xffffc000) {
              uVar22 = 0;
            }
            else {
              if (-1 < (int)(uVar28 << 1)) goto LAB_00112b60;
              if (-1 < (int)(uVar28 << 2)) goto LAB_001130e6;
              if (-1 < (int)(uVar28 << 3)) goto LAB_001130e0;
              if (-1 < (int)(uVar28 << 4)) goto LAB_00113038;
              if (-1 < (int)(uVar28 << 5)) goto LAB_00113762;
              if (-1 < (int)(uVar28 << 6)) goto LAB_0011376e;
              if (-1 < (int)(uVar28 << 7)) goto LAB_00113768;
              if (-1 < (int)(uVar28 << 8)) goto LAB_00113ea4;
              if (-1 < (int)(uVar28 << 9)) goto LAB_00113e9e;
              if (-1 < (int)(uVar28 << 10)) goto LAB_00113e98;
              if (-1 < (int)(uVar28 << 0xb)) goto LAB_00113e92;
              if (-1 < (int)(uVar28 << 0xc)) goto LAB_00113e8c;
              if (-1 < (int)(uVar28 << 0xd)) goto LAB_00113e86;
              if (-1 < (int)(uVar28 << 0xe)) goto LAB_00113e80;
              if (-1 < (int)(uVar28 << 0xf)) goto LAB_00113e7a;
              if (-1 < (int)(uVar28 << 0x10)) goto LAB_001140a8;
              uVar22 = (uint)((uVar28 & 0x4000) == 0);
            }
          }
          else {
            uVar22 = 0;
            if ((uVar28 & 0xffffc000) != 0) {
              if ((int)(uVar28 << 1) < 0) {
LAB_00112b60:
                uVar22 = 0x11;
              }
              else if ((int)(uVar28 << 2) < 0) {
LAB_001130e6:
                uVar22 = 0x10;
              }
              else if ((int)(uVar28 << 3) < 0) {
LAB_001130e0:
                uVar22 = 0xf;
              }
              else if ((int)(uVar28 << 4) < 0) {
LAB_00113038:
                uVar22 = 0xe;
              }
              else if ((int)(uVar28 << 5) < 0) {
LAB_00113762:
                uVar22 = 0xd;
              }
              else if ((int)(uVar28 << 6) < 0) {
LAB_0011376e:
                uVar22 = 0xc;
              }
              else if ((int)(uVar28 << 7) < 0) {
LAB_00113768:
                uVar22 = 0xb;
              }
              else if ((int)(uVar28 << 8) < 0) {
LAB_00113ea4:
                uVar22 = 10;
              }
              else if ((int)(uVar28 << 9) < 0) {
LAB_00113e9e:
                uVar22 = 9;
              }
              else if ((int)(uVar28 << 10) < 0) {
LAB_00113e98:
                uVar22 = 8;
              }
              else if ((int)(uVar28 << 0xb) < 0) {
LAB_00113e92:
                uVar22 = 7;
              }
              else if ((int)(uVar28 << 0xc) < 0) {
LAB_00113e8c:
                uVar22 = 6;
              }
              else if ((int)(uVar28 << 0xd) < 0) {
LAB_00113e86:
                uVar22 = 5;
              }
              else if ((int)(uVar28 << 0xe) < 0) {
LAB_00113e80:
                uVar22 = 4;
              }
              else if ((int)(uVar28 << 0xf) < 0) {
LAB_00113e7a:
                uVar22 = 3;
              }
              else if ((int)(uVar28 << 0x10) < 0) {
LAB_001140a8:
                uVar22 = 2;
              }
              else {
                uVar22 = (uVar28 & 0x7fff) >> 0xe;
              }
            }
          }
        }
        if (uVar14 < uVar25) {
          uVar14 = uVar25;
        }
        if (uVar14 < uVar22) {
          uVar14 = uVar22;
        }
        switch(uVar14) {
        case 0:
          iVar5 = 1;
          break;
        case 1:
          iVar5 = 2;
          break;
        case 2:
          iVar5 = 4;
          break;
        case 3:
          iVar5 = 8;
          break;
        case 4:
          iVar5 = 0x10;
          break;
        case 5:
          iVar5 = 0x20;
          break;
        case 6:
          iVar5 = 0x40;
          break;
        case 7:
          iVar5 = 0x80;
          break;
        case 8:
          iVar5 = 0x100;
          break;
        case 9:
          iVar5 = 0x200;
          break;
        case 10:
          iVar5 = 0x400;
          break;
        case 0xb:
          iVar5 = 0x800;
          break;
        case 0xc:
          iVar5 = 0x1000;
          break;
        case 0xd:
          iVar5 = 0x2000;
          break;
        case 0xe:
          iVar5 = 0x4000;
          break;
        case 0xf:
          iVar5 = 0x8000;
          break;
        case 0x10:
          iVar5 = 0x10000;
          break;
        case 0x11:
          iVar5 = 0x20000;
          break;
        case 0x12:
          iVar5 = 0x40000;
          break;
        case 0x13:
          iVar5 = 0x80000;
          break;
        case 0x14:
          iVar5 = 0x100000;
          break;
        case 0x15:
          iVar5 = 0x200000;
          break;
        case 0x16:
          iVar5 = 0x400000;
          break;
        case 0x17:
          iVar5 = 0x800000;
          break;
        case 0x18:
          iVar5 = 0x1000000;
          break;
        case 0x19:
          iVar5 = 0x2000000;
          break;
        case 0x1a:
          iVar5 = 0x4000000;
          break;
        case 0x1b:
          iVar5 = 0x8000000;
          break;
        case 0x1c:
          iVar5 = 0x10000000;
          break;
        case 0x1d:
          iVar5 = 0x20000000;
          break;
        default:
          iVar5 = 0x40000000;
        }
        iVar6 = __divsi3(uVar31,iVar5);
        iVar7 = __divsi3(uVar24,iVar5);
        iVar15 = __divsi3(uVar28,iVar5);
        iVar6 = iVar15 * iVar15 + iVar6 * iVar6 + iVar7 * iVar7;
        if (iVar6 < 1) {
          iVar7 = 0;
        }
        else {
          iVar15 = iVar6;
          if (iVar6 == 0x7fffffff) {
            iVar6 = 0x7ffffffe;
            iVar15 = 0x7ffffffe;
          }
          do {
            iVar7 = __divsi3(iVar15,iVar6);
            iVar10 = (iVar6 + iVar7) / 2;
            iVar7 = iVar6;
            if (iVar6 <= iVar10) break;
            iVar6 = __divsi3(iVar15,iVar10);
            iVar6 = (iVar10 + iVar6) / 2;
            iVar7 = iVar10;
            if (iVar10 <= iVar6) break;
            iVar7 = __divsi3(iVar15,iVar6);
            iVar10 = (iVar6 + iVar7) / 2;
            iVar7 = iVar6;
            if (iVar6 <= iVar10) break;
            iVar6 = __divsi3(iVar15,iVar10);
            iVar6 = (iVar10 + iVar6) / 2;
            iVar7 = iVar10;
            if (iVar10 <= iVar6) break;
            iVar7 = __divsi3(iVar15,iVar6);
            iVar10 = (iVar6 + iVar7) / 2;
            iVar7 = iVar6;
            if (iVar6 <= iVar10) break;
            iVar6 = __divsi3(iVar15);
            iVar6 = (iVar10 + iVar6) / 2;
            iVar7 = iVar10;
            if (iVar10 <= iVar6) break;
            iVar7 = __divsi3(iVar15,iVar6);
            iVar10 = (iVar6 + iVar7) / 2;
            iVar7 = iVar6;
            if (iVar6 <= iVar10) break;
            iVar6 = __divsi3(iVar15,iVar10);
            iVar6 = (iVar6 + iVar10) / 2;
            iVar7 = iVar10;
          } while (iVar6 < iVar10);
        }
        if ((int)uVar28 < (int)uVar24) {
          uVar28 = uVar24;
        }
        uVar23 = *(undefined4 *)(param_2 + 0x30);
        uVar4 = *(undefined4 *)(param_2 + 0x34);
        if ((int)uVar31 <= (int)uVar28) {
          uVar31 = uVar28;
        }
        if ((int)uVar31 < iVar5 * iVar7) {
          uVar31 = iVar5 * iVar7;
        }
        *(undefined4 *)(param_3 + 0x24) = *(undefined4 *)(param_2 + 0x2c);
        *(undefined4 *)(param_3 + 0x28) = uVar23;
        *(undefined4 *)(param_3 + 0x2c) = uVar4;
        if (uVar31 == 0) goto LAB_00108340;
        uVar24 = *(uint *)(param_3 + 0x24);
        uVar28 = 0;
        if (uVar24 != 0) {
          if ((uVar24 & 0x80000000) == 0x80000000) {
            if ((uVar24 & 0xffff8000) == 0xffff8000) {
              uVar28 = 0;
            }
            else {
              if (-1 < (int)(uVar24 << 1)) goto LAB_0011449c;
              if (-1 < (int)(uVar24 << 2)) goto LAB_0011441e;
              if (-1 < (int)(uVar24 << 3)) goto LAB_00114418;
              if (-1 < (int)(uVar24 << 4)) goto LAB_001144d6;
              if (-1 < (int)(uVar24 << 5)) goto LAB_001144d0;
              if (-1 < (int)(uVar24 << 6)) goto LAB_00114564;
              if (-1 < (int)(uVar24 << 7)) goto LAB_0011455e;
              if (-1 < (int)(uVar24 << 8)) goto LAB_00114b64;
              if (-1 < (int)(uVar24 << 9)) goto LAB_00114b5e;
              if (-1 < (int)(uVar24 << 10)) goto LAB_00114b58;
              if (-1 < (int)(uVar24 << 0xb)) goto LAB_00114b52;
              if (-1 < (int)(uVar24 << 0xc)) goto LAB_00114b4c;
              if (-1 < (int)(uVar24 << 0xd)) goto LAB_00114b46;
              if (-1 < (int)(uVar24 << 0xe)) goto LAB_00114b40;
              if (-1 < (int)(uVar24 << 0xf)) goto LAB_00114b3a;
              uVar28 = (uint)((uVar24 & 0x8000) == 0);
            }
          }
          else if ((uVar24 & 0xffff8000) == 0) {
            uVar28 = 0;
          }
          else if ((int)(uVar24 << 1) < 0) {
LAB_0011449c:
            uVar28 = 0x10;
          }
          else if ((int)(uVar24 << 2) < 0) {
LAB_0011441e:
            uVar28 = 0xf;
          }
          else if ((int)(uVar24 << 3) < 0) {
LAB_00114418:
            uVar28 = 0xe;
          }
          else if ((int)(uVar24 << 4) < 0) {
LAB_001144d6:
            uVar28 = 0xd;
          }
          else if ((int)(uVar24 << 5) < 0) {
LAB_001144d0:
            uVar28 = 0xc;
          }
          else if ((int)(uVar24 << 6) < 0) {
LAB_00114564:
            uVar28 = 0xb;
          }
          else if ((int)(uVar24 << 7) < 0) {
LAB_0011455e:
            uVar28 = 10;
          }
          else if ((int)(uVar24 << 8) < 0) {
LAB_00114b64:
            uVar28 = 9;
          }
          else if ((int)(uVar24 << 9) < 0) {
LAB_00114b5e:
            uVar28 = 8;
          }
          else if ((int)(uVar24 << 10) < 0) {
LAB_00114b58:
            uVar28 = 7;
          }
          else if ((int)(uVar24 << 0xb) < 0) {
LAB_00114b52:
            uVar28 = 6;
          }
          else if ((int)(uVar24 << 0xc) < 0) {
LAB_00114b4c:
            uVar28 = 5;
          }
          else if ((int)(uVar24 << 0xd) < 0) {
LAB_00114b46:
            uVar28 = 4;
          }
          else if ((int)(uVar24 << 0xe) < 0) {
LAB_00114b40:
            uVar28 = 3;
          }
          else if ((int)(uVar24 << 0xf) < 0) {
LAB_00114b3a:
            uVar28 = 2;
          }
          else {
            uVar28 = (uVar24 & 0xffff) >> 0xf;
          }
        }
        uVar14 = *(uint *)(param_3 + 0x28);
        uVar25 = 0;
        if (uVar14 != 0) {
          if ((uVar14 & 0x80000000) == 0x80000000) {
            if ((uVar14 & 0xffff8000) == 0xffff8000) {
              uVar25 = 0;
            }
            else {
              if ((uVar14 & 0x40000000) == 0) goto LAB_001144a2;
              if ((uVar14 & 0x20000000) == 0) goto LAB_001144b2;
              if ((uVar14 & 0x10000000) == 0) goto LAB_001144aa;
              if ((uVar14 & 0x8000000) == 0) goto LAB_001144c2;
              if ((uVar14 & 0x4000000) == 0) goto LAB_001144ba;
              if ((uVar14 & 0x2000000) == 0) goto LAB_00114b82;
              if ((uVar14 & 0x1000000) == 0) goto LAB_00114b7a;
              if ((uVar14 & 0x800000) == 0) goto LAB_00114bdc;
              if ((uVar14 & 0x400000) == 0) goto LAB_00114bd4;
              if ((uVar14 & 0x200000) == 0) goto LAB_00114bcc;
              if ((uVar14 & 0x100000) == 0) goto LAB_00114bc4;
              if ((uVar14 & 0x80000) == 0) goto LAB_00114bbc;
              if ((uVar14 & 0x40000) == 0) goto LAB_00114bb4;
              if ((uVar14 & 0x20000) == 0) goto LAB_00114bac;
              if ((uVar14 & 0x10000) == 0) goto LAB_00114ba4;
              uVar25 = (uint)((uVar14 & 0x8000) == 0);
            }
          }
          else {
            uVar25 = 0;
            if ((uVar14 & 0xffff8000) != 0) {
              if ((uVar14 & 0x40000000) == 0) {
                if ((uVar14 & 0x20000000) == 0) {
                  if ((uVar14 & 0x10000000) == 0) {
                    if ((uVar14 & 0x8000000) == 0) {
                      if ((uVar14 & 0x4000000) == 0) {
                        if ((uVar14 & 0x2000000) == 0) {
                          if ((uVar14 & 0x1000000) == 0) {
                            if ((uVar14 & 0x800000) == 0) {
                              if ((uVar14 & 0x400000) == 0) {
                                if ((uVar14 & 0x200000) == 0) {
                                  if ((uVar14 & 0x100000) == 0) {
                                    if ((uVar14 & 0x80000) == 0) {
                                      if ((uVar14 & 0x40000) == 0) {
                                        if ((uVar14 & 0x20000) == 0) {
                                          if ((uVar14 & 0x10000) == 0) {
                                            uVar25 = (uVar14 & 0xffff) >> 0xf;
                                          }
                                          else {
LAB_00114ba4:
                                            uVar25 = 2;
                                          }
                                        }
                                        else {
LAB_00114bac:
                                          uVar25 = 3;
                                        }
                                      }
                                      else {
LAB_00114bb4:
                                        uVar25 = 4;
                                      }
                                    }
                                    else {
LAB_00114bbc:
                                      uVar25 = 5;
                                    }
                                  }
                                  else {
LAB_00114bc4:
                                    uVar25 = 6;
                                  }
                                }
                                else {
LAB_00114bcc:
                                  uVar25 = 7;
                                }
                              }
                              else {
LAB_00114bd4:
                                uVar25 = 8;
                              }
                            }
                            else {
LAB_00114bdc:
                              uVar25 = 9;
                            }
                          }
                          else {
LAB_00114b7a:
                            uVar25 = 10;
                          }
                        }
                        else {
LAB_00114b82:
                          uVar25 = 0xb;
                        }
                      }
                      else {
LAB_001144ba:
                        uVar25 = 0xc;
                      }
                    }
                    else {
LAB_001144c2:
                      uVar25 = 0xd;
                    }
                  }
                  else {
LAB_001144aa:
                    uVar25 = 0xe;
                  }
                }
                else {
LAB_001144b2:
                  uVar25 = 0xf;
                }
              }
              else {
LAB_001144a2:
                uVar25 = 0x10;
              }
            }
          }
        }
        uVar11 = *(uint *)(param_3 + 0x2c);
        uVar22 = 0;
        if (uVar11 != 0) {
          if ((uVar11 & 0x80000000) == 0x80000000) {
            if ((uVar11 & 0xffff8000) == 0xffff8000) {
              uVar22 = 0;
            }
            else {
              if (-1 < (int)(uVar11 << 1)) goto LAB_00114474;
              if (-1 < (int)(uVar11 << 2)) goto LAB_00114484;
              if (-1 < (int)(uVar11 << 3)) goto LAB_0011447c;
              if (-1 < (int)(uVar11 << 4)) goto LAB_00114494;
              if (-1 < (int)(uVar11 << 5)) goto LAB_0011448c;
              if (-1 < (int)(uVar11 << 6)) goto LAB_00114b72;
              if (-1 < (int)(uVar11 << 7)) goto LAB_00114b6a;
              if (-1 < (int)(uVar11 << 8)) goto LAB_00114b32;
              if (-1 < (int)(uVar11 << 9)) goto LAB_00114b2a;
              if (-1 < (int)(uVar11 << 10)) goto LAB_00114b22;
              if (-1 < (int)(uVar11 << 0xb)) goto LAB_00114b1a;
              if (-1 < (int)(uVar11 << 0xc)) goto LAB_00114b12;
              if (-1 < (int)(uVar11 << 0xd)) goto LAB_00114b0a;
              if (-1 < (int)(uVar11 << 0xe)) goto LAB_00114b02;
              if (-1 < (int)(uVar11 << 0xf)) goto LAB_00114afa;
              uVar22 = (uint)((uVar11 & 0x8000) == 0);
            }
          }
          else {
            uVar22 = 0;
            if ((uVar11 & 0xffff8000) != 0) {
              if ((int)(uVar11 << 1) < 0) {
LAB_00114474:
                uVar22 = 0x10;
              }
              else if ((int)(uVar11 << 2) < 0) {
LAB_00114484:
                uVar22 = 0xf;
              }
              else if ((int)(uVar11 << 3) < 0) {
LAB_0011447c:
                uVar22 = 0xe;
              }
              else if ((int)(uVar11 << 4) < 0) {
LAB_00114494:
                uVar22 = 0xd;
              }
              else if ((int)(uVar11 << 5) < 0) {
LAB_0011448c:
                uVar22 = 0xc;
              }
              else if ((int)(uVar11 << 6) < 0) {
LAB_00114b72:
                uVar22 = 0xb;
              }
              else if ((int)(uVar11 << 7) < 0) {
LAB_00114b6a:
                uVar22 = 10;
              }
              else if ((int)(uVar11 << 8) < 0) {
LAB_00114b32:
                uVar22 = 9;
              }
              else if ((int)(uVar11 << 9) < 0) {
LAB_00114b2a:
                uVar22 = 8;
              }
              else if ((int)(uVar11 << 10) < 0) {
LAB_00114b22:
                uVar22 = 7;
              }
              else if ((int)(uVar11 << 0xb) < 0) {
LAB_00114b1a:
                uVar22 = 6;
              }
              else if ((int)(uVar11 << 0xc) < 0) {
LAB_00114b12:
                uVar22 = 5;
              }
              else if ((int)(uVar11 << 0xd) < 0) {
LAB_00114b0a:
                uVar22 = 4;
              }
              else if ((int)(uVar11 << 0xe) < 0) {
LAB_00114b02:
                uVar22 = 3;
              }
              else if ((int)(uVar11 << 0xf) < 0) {
LAB_00114afa:
                uVar22 = 2;
              }
              else {
                uVar22 = (uVar11 & 0xffff) >> 0xf;
              }
            }
          }
        }
        if (uVar25 < uVar28) {
          uVar25 = uVar28;
        }
        if (uVar25 < uVar22) {
          uVar25 = uVar22;
        }
        switch(uVar25) {
        case 0:
          uVar23 = 1;
          uVar28 = uVar31;
          goto code_r0x0010992a;
        case 1:
          uVar23 = 2;
          break;
        case 2:
          uVar23 = 4;
          break;
        case 3:
          uVar23 = 8;
          break;
        case 4:
          uVar23 = 0x10;
          break;
        case 5:
          uVar23 = 0x20;
          break;
        case 6:
          uVar23 = 0x40;
          break;
        case 7:
          uVar23 = 0x80;
          break;
        case 8:
          uVar23 = 0x100;
          break;
        case 9:
          uVar23 = 0x200;
          break;
        case 10:
          uVar23 = 0x400;
          break;
        case 0xb:
          uVar23 = 0x800;
          break;
        case 0xc:
          uVar23 = 0x1000;
          break;
        case 0xd:
          uVar23 = 0x2000;
          break;
        case 0xe:
          uVar23 = 0x4000;
          break;
        case 0xf:
          uVar23 = 0x8000;
          break;
        case 0x10:
          uVar23 = 0x10000;
          break;
        case 0x11:
          uVar23 = 0x20000;
          break;
        case 0x12:
          uVar23 = 0x40000;
          break;
        case 0x13:
          uVar23 = 0x80000;
          break;
        case 0x14:
          uVar23 = 0x100000;
          break;
        case 0x15:
          uVar23 = 0x200000;
          break;
        case 0x16:
          uVar23 = 0x400000;
          break;
        case 0x17:
          uVar23 = 0x800000;
          break;
        case 0x18:
          uVar23 = 0x1000000;
          break;
        case 0x19:
          uVar23 = 0x2000000;
          break;
        case 0x1a:
          uVar23 = 0x4000000;
          break;
        case 0x1b:
          uVar23 = 0x8000000;
          break;
        case 0x1c:
          uVar23 = 0x10000000;
          break;
        case 0x1d:
          uVar23 = 0x20000000;
          break;
        default:
          uVar23 = 0x40000000;
        }
        uVar28 = __divsi3(uVar31,uVar23);
        if (uVar28 == 0) {
          *(undefined4 *)(param_3 + 0x24) = 0;
          *(undefined4 *)(param_3 + 0x28) = 0;
          *(undefined4 *)(param_3 + 0x2c) = 0;
          goto LAB_0010834c;
        }
code_r0x0010992a:
        local_7c = 0;
        if (uVar24 != 0) {
          iVar5 = __divsi3(uVar24,uVar23);
          local_7c = __divsi3(iVar5 * 0x7fff,uVar28);
          *(uint *)(param_3 + 0x24) = local_7c;
        }
        iVar5 = 0;
        if (uVar14 != 0) {
          iVar5 = __divsi3(uVar14,uVar23);
          iVar5 = __divsi3(iVar5 * 0x7fff,uVar28);
          *(int *)(param_3 + 0x28) = iVar5;
        }
        if (uVar11 == 0) {
          uVar28 = 0;
        }
        else {
          iVar6 = __divsi3(uVar11,uVar23);
          uVar28 = __divsi3(iVar6 * 0x7fff,uVar28);
          *(uint *)(param_3 + 0x2c) = uVar28;
        }
        if (local_7c == 0) {
          if (uVar28 == 0) {
            if (iVar5 == 0) goto LAB_0010834c;
            local_80 = 0;
LAB_0010999e:
            if (iVar5 < 0) {
              iVar6 = -0x5a;
            }
            else {
              iVar6 = 0x5a;
            }
          }
          else {
LAB_0010e2a8:
            if ((uVar28 & 0x80000000) == 0x80000000) {
              if ((uVar28 & 0xffff8000) == 0xffff8000) {
                uVar24 = 0;
              }
              else {
                if (-1 < (int)(uVar28 << 1)) goto LAB_00114a4e;
                if (-1 < (int)(uVar28 << 2)) goto LAB_00114a48;
                if (-1 < (int)(uVar28 << 3)) goto LAB_00114a42;
                if (-1 < (int)(uVar28 << 4)) goto LAB_00116498;
                if (-1 < (int)(uVar28 << 5)) goto LAB_001164b0;
                if (-1 < (int)(uVar28 << 6)) goto LAB_001164aa;
                if (-1 < (int)(uVar28 << 7)) goto LAB_001164a4;
                if (-1 < (int)(uVar28 << 8)) goto LAB_0011649e;
                if (-1 < (int)(uVar28 << 9)) goto LAB_00115b3e;
                if (-1 < (int)(uVar28 << 10)) goto LAB_00115b38;
                if (-1 < (int)(uVar28 << 0xb)) goto LAB_00115b32;
                if (-1 < (int)(uVar28 << 0xc)) goto LAB_00115b2c;
                if (-1 < (int)(uVar28 << 0xd)) goto LAB_0011654c;
                if (-1 < (int)(uVar28 << 0xe)) goto LAB_00116546;
                if (-1 < (int)(uVar28 << 0xf)) goto LAB_00116370;
                uVar24 = (uint)((uVar28 & 0x8000) == 0);
              }
            }
            else if ((uVar28 & 0xffff8000) == 0) {
              uVar24 = 0;
            }
            else if ((int)(uVar28 << 1) < 0) {
LAB_00114a4e:
              uVar24 = 0x10;
            }
            else if ((int)(uVar28 << 2) < 0) {
LAB_00114a48:
              uVar24 = 0xf;
            }
            else if ((int)(uVar28 << 3) < 0) {
LAB_00114a42:
              uVar24 = 0xe;
            }
            else if ((int)(uVar28 << 4) < 0) {
LAB_00116498:
              uVar24 = 0xd;
            }
            else if ((int)(uVar28 << 5) < 0) {
LAB_001164b0:
              uVar24 = 0xc;
            }
            else if ((int)(uVar28 << 6) < 0) {
LAB_001164aa:
              uVar24 = 0xb;
            }
            else if ((int)(uVar28 << 7) < 0) {
LAB_001164a4:
              uVar24 = 10;
            }
            else if ((int)(uVar28 << 8) < 0) {
LAB_0011649e:
              uVar24 = 9;
            }
            else if ((int)(uVar28 << 9) < 0) {
LAB_00115b3e:
              uVar24 = 8;
            }
            else if ((int)(uVar28 << 10) < 0) {
LAB_00115b38:
              uVar24 = 7;
            }
            else if ((int)(uVar28 << 0xb) < 0) {
LAB_00115b32:
              uVar24 = 6;
            }
            else if ((int)(uVar28 << 0xc) < 0) {
LAB_00115b2c:
              uVar24 = 5;
            }
            else if ((int)(uVar28 << 0xd) < 0) {
LAB_0011654c:
              uVar24 = 4;
            }
            else if ((int)(uVar28 << 0xe) < 0) {
LAB_00116546:
              uVar24 = 3;
            }
            else if ((int)(uVar28 << 0xf) < 0) {
LAB_00116370:
              uVar24 = 2;
            }
            else {
              uVar24 = (uVar28 & 0xffff) >> 0xf;
            }
            if (local_7c != 0) {
              if ((local_7c & 0x80000000) == 0x80000000) {
                if ((local_7c & 0xffff8000) != 0xffff8000) {
                  if (-1 < (int)(local_7c << 1)) goto LAB_00114af2;
                  if (-1 < (int)(local_7c << 2)) goto LAB_00114aea;
                  if (-1 < (int)(local_7c << 3)) goto LAB_00114ae2;
                  if (-1 < (int)(local_7c << 4)) goto LAB_00116090;
                  if (-1 < (int)(local_7c << 5)) goto LAB_00116088;
                  if (-1 < (int)(local_7c << 6)) goto LAB_00116080;
                  if (-1 < (int)(local_7c << 7)) goto LAB_00116078;
                  if (-1 < (int)(local_7c << 8)) goto LAB_00116118;
                  if (-1 < (int)(local_7c << 9)) goto LAB_00116110;
                  if (-1 < (int)(local_7c << 10)) goto LAB_00116108;
                  if (-1 < (int)(local_7c << 0xb)) goto LAB_00116100;
                  if (-1 < (int)(local_7c << 0xc)) goto LAB_001160f8;
                  if (-1 < (int)(local_7c << 0xd)) goto LAB_001160f0;
                  if (-1 < (int)(local_7c << 0xe)) goto LAB_001160e8;
                  if (-1 < (int)(local_7c << 0xf)) goto LAB_001160e0;
                  uVar25 = (uint)((local_7c & 0x8000) == 0);
                  goto LAB_0010e39a;
                }
              }
              else if ((local_7c & 0xffff8000) != 0) {
                if ((int)(local_7c << 1) < 0) {
LAB_00114af2:
                  uVar25 = 0x10;
                }
                else if ((int)(local_7c << 2) < 0) {
LAB_00114aea:
                  uVar25 = 0xf;
                }
                else if ((int)(local_7c << 3) < 0) {
LAB_00114ae2:
                  uVar25 = 0xe;
                }
                else if ((int)(local_7c << 4) < 0) {
LAB_00116090:
                  uVar25 = 0xd;
                }
                else if ((int)(local_7c << 5) < 0) {
LAB_00116088:
                  uVar25 = 0xc;
                }
                else if ((int)(local_7c << 6) < 0) {
LAB_00116080:
                  uVar25 = 0xb;
                }
                else if ((int)(local_7c << 7) < 0) {
LAB_00116078:
                  uVar25 = 10;
                }
                else if ((int)(local_7c << 8) < 0) {
LAB_00116118:
                  uVar25 = 9;
                }
                else if ((int)(local_7c << 9) < 0) {
LAB_00116110:
                  uVar25 = 8;
                }
                else if ((int)(local_7c << 10) < 0) {
LAB_00116108:
                  uVar25 = 7;
                }
                else if ((int)(local_7c << 0xb) < 0) {
LAB_00116100:
                  uVar25 = 6;
                }
                else if ((int)(local_7c << 0xc) < 0) {
LAB_001160f8:
                  uVar25 = 5;
                }
                else if ((int)(local_7c << 0xd) < 0) {
LAB_001160f0:
                  uVar25 = 4;
                }
                else if ((int)(local_7c << 0xe) < 0) {
LAB_001160e8:
                  uVar25 = 3;
                }
                else if ((int)(local_7c << 0xf) < 0) {
LAB_001160e0:
                  uVar25 = 2;
                }
                else {
                  uVar25 = (local_7c & 0xffff) >> 0xf;
                }
LAB_0010e39a:
                if (uVar24 < uVar25) {
                  uVar24 = uVar25;
                }
              }
            }
            switch(uVar24) {
            case 0:
              uVar23 = 1;
              break;
            case 1:
              uVar23 = 2;
              break;
            case 2:
              uVar23 = 4;
              break;
            case 3:
              uVar23 = 8;
              break;
            case 4:
              uVar23 = 0x10;
              break;
            case 5:
              uVar23 = 0x20;
              break;
            case 6:
              uVar23 = 0x40;
              break;
            case 7:
              uVar23 = 0x80;
              break;
            case 8:
              uVar23 = 0x100;
              break;
            case 9:
              uVar23 = 0x200;
              break;
            case 10:
              uVar23 = 0x400;
              break;
            case 0xb:
              uVar23 = 0x800;
              break;
            case 0xc:
              uVar23 = 0x1000;
              break;
            case 0xd:
              uVar23 = 0x2000;
              break;
            case 0xe:
              uVar23 = 0x4000;
              break;
            case 0xf:
              uVar23 = 0x8000;
              break;
            case 0x10:
              uVar23 = 0x10000;
              break;
            case 0x11:
              uVar23 = 0x20000;
              break;
            case 0x12:
              uVar23 = 0x40000;
              break;
            case 0x13:
              uVar23 = 0x80000;
              break;
            case 0x14:
              uVar23 = 0x100000;
              break;
            case 0x15:
              uVar23 = 0x200000;
              break;
            case 0x16:
              uVar23 = 0x400000;
              break;
            case 0x17:
              uVar23 = 0x800000;
              break;
            case 0x18:
              uVar23 = 0x1000000;
              break;
            case 0x19:
              uVar23 = 0x2000000;
              break;
            case 0x1a:
              uVar23 = 0x4000000;
              break;
            case 0x1b:
              uVar23 = 0x8000000;
              break;
            case 0x1c:
              uVar23 = 0x10000000;
              break;
            case 0x1d:
              uVar23 = 0x20000000;
              break;
            case 0x1e:
              uVar23 = 0x40000000;
              break;
            default:
              if ((int)uVar24 < 0) {
                uVar23 = 1;
              }
              else {
                uVar23 = 0x40000000;
              }
            }
            iVar7 = __divsi3(uVar28,uVar23);
            iVar15 = __divsi3(local_7c,uVar23);
            iVar6 = DAT_00111640;
            if (iVar7 < 0) {
              if (iVar15 < 0) {
                if (iVar7 == iVar15 || -iVar15 < -iVar7) {
                  iVar6 = *(int *)(iVar20 + DAT_00113870);
                  uVar24 = __divsi3(iVar15 * 0x7fff,iVar7);
                  if ((int)uVar24 < 0) {
                    uVar24 = uVar24 + 0x1ff;
                  }
                  local_80 = *(int *)(iVar6 + ((uVar24 & 0x7fff) >> 9) * 4) + -0xb4;
                }
                else {
                  iVar6 = *(int *)(iVar20 + DAT_00113870);
                  uVar24 = __divsi3(iVar7 * 0x7fff,iVar15);
                  if ((int)uVar24 < 0) {
                    uVar24 = uVar24 + 0x1ff;
                  }
                  local_80 = -0x5a - *(int *)(iVar6 + ((uVar24 & 0x7fff) >> 9) * 4);
                }
              }
              else if (-iVar7 < iVar15) {
                uVar24 = __divsi3(iVar7 * -0x7fff,iVar15);
                if ((int)uVar24 < 0) {
                  uVar24 = uVar24 + 0x1ff;
                }
                local_80 = *(int *)(*(int *)(iVar20 + iVar6) + ((uVar24 & 0x7fff) >> 9) * 4) + 0x5a;
              }
              else {
                iVar6 = *(int *)(iVar20 + DAT_00111640);
                uVar24 = __divsi3(iVar15 * -0x7fff,iVar7);
                if ((int)uVar24 < 0) {
                  uVar24 = uVar24 + 0x1ff;
                }
                local_80 = 0xb4 - *(int *)(iVar6 + ((uVar24 & 0x7fff) >> 9) * 4);
              }
            }
            else if (iVar15 < 0) {
              if (iVar7 < -iVar15) {
                iVar6 = *(int *)(iVar20 + DAT_00111640);
                uVar24 = __divsi3(iVar7 * -0x7fff,iVar15);
                if ((int)uVar24 < 0) {
                  uVar24 = uVar24 + 0x1ff;
                }
                local_80 = *(int *)(iVar6 + ((uVar24 & 0x7fff) >> 9) * 4) + -0x5a;
              }
              else {
                iVar6 = *(int *)(iVar20 + DAT_00111640);
                uVar24 = __divsi3(iVar15 * -0x7fff,iVar7);
                if ((int)uVar24 < 0) {
                  uVar24 = uVar24 + 0x1ff;
                }
                local_80 = -*(int *)(iVar6 + ((uVar24 & 0x7fff) >> 9) * 4);
              }
            }
            else if (iVar7 < iVar15) {
              iVar6 = *(int *)(iVar20 + DAT_0010ecf0);
              uVar25 = __divsi3(iVar7 * 0x7fff,iVar15);
              uVar24 = uVar25 & ~((int)uVar25 >> 0x20);
              if ((int)uVar25 < 0) {
                uVar24 = uVar25 + 0x1ff;
              }
              local_80 = 0x5a - *(int *)(iVar6 + ((uVar24 & 0x7fff) >> 9) * 4);
            }
            else {
              iVar6 = *(int *)(iVar20 + DAT_0010ecf0);
              uVar24 = __divsi3(iVar15 * 0x7fff,iVar7);
              local_80 = *(int *)(iVar6 + ((uVar24 & 0x7fff) >> 9) * 4);
            }
LAB_0010d2e4:
            if (iVar5 != 0) {
              if (local_7c != 0) goto LAB_00109b6a;
              if (uVar28 == 0) goto LAB_0010999e;
LAB_00109a9a:
              uVar24 = 0;
              goto LAB_00109a9c;
            }
LAB_00109a8c:
            if (local_7c != 0) {
              iVar5 = 0;
              goto LAB_00109b6a;
            }
            iVar5 = 0;
            iVar6 = 0;
            if (uVar28 != 0) goto LAB_00109a9a;
          }
        }
        else {
          if (uVar28 != 0) {
            if (local_7c != 0 || uVar28 != 0) goto LAB_0010e2a8;
            local_80 = 0;
            goto LAB_0010d2e4;
          }
          if ((int)local_7c < 0) {
            local_80 = -0x5a;
          }
          else {
            local_80 = 0x5a;
          }
          if (iVar5 == 0) goto LAB_00109a8c;
LAB_00109b6a:
          if ((local_7c & 0x80000000) == 0x80000000) {
            if ((local_7c & 0xffffc000) == 0xffffc000) {
              uVar24 = 0;
            }
            else {
              if (-1 < (int)(local_7c << 1)) goto LAB_00113de0;
              if (-1 < (int)(local_7c << 2)) goto LAB_00113dda;
              if (-1 < (int)(local_7c << 3)) goto LAB_00113dd4;
              if (-1 < (int)(local_7c << 4)) goto LAB_00113dce;
              if (-1 < (int)(local_7c << 5)) goto LAB_00113dec;
              if (-1 < (int)(local_7c << 6)) goto LAB_00113de6;
              if (-1 < (int)(local_7c << 7)) goto LAB_00113bba;
              if (-1 < (int)(local_7c << 8)) goto LAB_0011407a;
              if (-1 < (int)(local_7c << 9)) goto LAB_001140d2;
              if (-1 < (int)(local_7c << 10)) goto LAB_001140cc;
              if (-1 < (int)(local_7c << 0xb)) goto LAB_001140c6;
              if (-1 < (int)(local_7c << 0xc)) goto LAB_001140c0;
              if (-1 < (int)(local_7c << 0xd)) goto LAB_001140ba;
              if (-1 < (int)(local_7c << 0xe)) goto LAB_001140b4;
              if (-1 < (int)(local_7c << 0xf)) goto LAB_001140ae;
              if (-1 < (int)(local_7c << 0x10)) goto LAB_00114a54;
              uVar24 = (uint)((local_7c & 0x4000) == 0);
            }
          }
          else {
            uVar24 = 0;
            if ((local_7c & 0xffffc000) != 0) {
              if ((int)(local_7c << 1) < 0) {
LAB_00113de0:
                uVar24 = 0x11;
              }
              else if ((int)(local_7c << 2) < 0) {
LAB_00113dda:
                uVar24 = 0x10;
              }
              else if ((int)(local_7c << 3) < 0) {
LAB_00113dd4:
                uVar24 = 0xf;
              }
              else if ((int)(local_7c << 4) < 0) {
LAB_00113dce:
                uVar24 = 0xe;
              }
              else if ((int)(local_7c << 5) < 0) {
LAB_00113dec:
                uVar24 = 0xd;
              }
              else if ((int)(local_7c << 6) < 0) {
LAB_00113de6:
                uVar24 = 0xc;
              }
              else if ((int)(local_7c << 7) < 0) {
LAB_00113bba:
                uVar24 = 0xb;
              }
              else if ((int)(local_7c << 8) < 0) {
LAB_0011407a:
                uVar24 = 10;
              }
              else if ((int)(local_7c << 9) < 0) {
LAB_001140d2:
                uVar24 = 9;
              }
              else if ((int)(local_7c << 10) < 0) {
LAB_001140cc:
                uVar24 = 8;
              }
              else if ((int)(local_7c << 0xb) < 0) {
LAB_001140c6:
                uVar24 = 7;
              }
              else if ((int)(local_7c << 0xc) < 0) {
LAB_001140c0:
                uVar24 = 6;
              }
              else if ((int)(local_7c << 0xd) < 0) {
LAB_001140ba:
                uVar24 = 5;
              }
              else if ((int)(local_7c << 0xe) < 0) {
LAB_001140b4:
                uVar24 = 4;
              }
              else if ((int)(local_7c << 0xf) < 0) {
LAB_001140ae:
                uVar24 = 3;
              }
              else if ((int)(local_7c << 0x10) < 0) {
LAB_00114a54:
                uVar24 = 2;
              }
              else {
                uVar24 = (local_7c & 0x7fff) >> 0xe;
              }
            }
          }
          uVar25 = 0;
          if (uVar28 != 0) {
LAB_00109a9c:
            if ((uVar28 & 0x80000000) == 0x80000000) {
              if ((uVar28 & 0xffffc000) == 0xffffc000) {
                uVar25 = 0;
              }
              else {
                if (-1 < (int)(uVar28 << 1)) goto LAB_00113dc6;
                if (-1 < (int)(uVar28 << 2)) goto LAB_00113dbe;
                if (-1 < (int)(uVar28 << 3)) goto LAB_00113db6;
                if (-1 < (int)(uVar28 << 4)) goto LAB_00113dae;
                if (-1 < (int)(uVar28 << 5)) goto LAB_00113da6;
                if (-1 < (int)(uVar28 << 6)) goto LAB_00113d9e;
                if (-1 < (int)(uVar28 << 7)) goto LAB_00113d96;
                if (-1 < (int)(uVar28 << 8)) goto LAB_001140d8;
                if (-1 < (int)(uVar28 << 9)) goto LAB_00114110;
                if (-1 < (int)(uVar28 << 10)) goto LAB_00114108;
                if (-1 < (int)(uVar28 << 0xb)) goto LAB_00114100;
                if (-1 < (int)(uVar28 << 0xc)) goto LAB_001140f8;
                if (-1 < (int)(uVar28 << 0xd)) goto LAB_001140f0;
                if (-1 < (int)(uVar28 << 0xe)) goto LAB_001140e8;
                if (-1 < (int)(uVar28 << 0xf)) goto LAB_001140e0;
                if (-1 < (int)(uVar28 << 0x10)) goto LAB_00114a8a;
                uVar25 = (uint)((uVar28 & 0x4000) == 0);
              }
            }
            else {
              uVar25 = 0;
              if ((uVar28 & 0xffffc000) != 0) {
                if ((int)(uVar28 << 1) < 0) {
LAB_00113dc6:
                  uVar25 = 0x11;
                }
                else if ((int)(uVar28 << 2) < 0) {
LAB_00113dbe:
                  uVar25 = 0x10;
                }
                else if ((int)(uVar28 << 3) < 0) {
LAB_00113db6:
                  uVar25 = 0xf;
                }
                else if ((int)(uVar28 << 4) < 0) {
LAB_00113dae:
                  uVar25 = 0xe;
                }
                else if ((int)(uVar28 << 5) < 0) {
LAB_00113da6:
                  uVar25 = 0xd;
                }
                else if ((int)(uVar28 << 6) < 0) {
LAB_00113d9e:
                  uVar25 = 0xc;
                }
                else if ((int)(uVar28 << 7) < 0) {
LAB_00113d96:
                  uVar25 = 0xb;
                }
                else if ((int)(uVar28 << 8) < 0) {
LAB_001140d8:
                  uVar25 = 10;
                }
                else if ((int)(uVar28 << 9) < 0) {
LAB_00114110:
                  uVar25 = 9;
                }
                else if ((int)(uVar28 << 10) < 0) {
LAB_00114108:
                  uVar25 = 8;
                }
                else if ((int)(uVar28 << 0xb) < 0) {
LAB_00114100:
                  uVar25 = 7;
                }
                else if ((int)(uVar28 << 0xc) < 0) {
LAB_001140f8:
                  uVar25 = 6;
                }
                else if ((int)(uVar28 << 0xd) < 0) {
LAB_001140f0:
                  uVar25 = 5;
                }
                else if ((int)(uVar28 << 0xe) < 0) {
LAB_001140e8:
                  uVar25 = 4;
                }
                else if ((int)(uVar28 << 0xf) < 0) {
LAB_001140e0:
                  uVar25 = 3;
                }
                else if ((int)(uVar28 << 0x10) < 0) {
LAB_00114a8a:
                  uVar25 = 2;
                }
                else {
                  uVar25 = (uVar28 & 0x7fff) >> 0xe;
                }
              }
            }
          }
          if (uVar25 < uVar24) {
            uVar25 = uVar24;
          }
          switch(uVar25) {
          case 0:
            local_84 = 1;
            break;
          case 1:
            local_84 = 2;
            break;
          case 2:
            local_84 = 4;
            break;
          case 3:
            local_84 = 8;
            break;
          case 4:
            local_84 = 0x10;
            break;
          case 5:
            local_84 = 0x20;
            break;
          case 6:
            local_84 = 0x40;
            break;
          case 7:
            local_84 = 0x80;
            break;
          case 8:
            local_84 = 0x100;
            break;
          case 9:
            local_84 = 0x200;
            break;
          case 10:
            local_84 = 0x400;
            break;
          case 0xb:
            local_84 = 0x800;
            break;
          case 0xc:
            local_84 = 0x1000;
            break;
          case 0xd:
            local_84 = 0x2000;
            break;
          case 0xe:
            local_84 = 0x4000;
            break;
          case 0xf:
            local_84 = 0x8000;
            break;
          case 0x10:
            local_84 = 0x10000;
            break;
          case 0x11:
            local_84 = 0x20000;
            break;
          case 0x12:
            local_84 = 0x40000;
            break;
          case 0x13:
            local_84 = 0x80000;
            break;
          case 0x14:
            local_84 = 0x100000;
            break;
          case 0x15:
            local_84 = 0x200000;
            break;
          case 0x16:
            local_84 = 0x400000;
            break;
          case 0x17:
            local_84 = 0x800000;
            break;
          case 0x18:
            local_84 = 0x1000000;
            break;
          case 0x19:
            local_84 = 0x2000000;
            break;
          case 0x1a:
            local_84 = 0x4000000;
            break;
          case 0x1b:
            local_84 = 0x8000000;
            break;
          case 0x1c:
            local_84 = 0x10000000;
            break;
          case 0x1d:
            local_84 = 0x20000000;
            break;
          case 0x1e:
            local_84 = 0x40000000;
            break;
          default:
            if ((int)uVar25 < 0) {
              local_84 = 1;
            }
            else {
              local_84 = 0x40000000;
            }
          }
          iVar6 = __divsi3(local_7c,local_84);
          iVar7 = __divsi3(uVar28,local_84);
          iVar6 = iVar6 * iVar6 + iVar7 * iVar7;
          if (iVar6 < 1) {
            iVar7 = 0;
          }
          else {
            iVar15 = iVar6;
            if (iVar6 == 0x7fffffff) {
              iVar6 = 0x7ffffffe;
              iVar15 = 0x7ffffffe;
            }
            do {
              iVar7 = __divsi3(iVar15,iVar6);
              iVar10 = (iVar6 + iVar7) / 2;
              iVar7 = iVar6;
              if (iVar6 <= iVar10) break;
              iVar6 = __divsi3(iVar15);
              iVar6 = (iVar10 + iVar6) / 2;
              iVar7 = iVar10;
              if (iVar10 <= iVar6) break;
              iVar7 = __divsi3(iVar15,iVar6);
              iVar10 = (iVar6 + iVar7) / 2;
              iVar7 = iVar6;
              if (iVar6 <= iVar10) break;
              iVar6 = __divsi3(iVar15,iVar10);
              iVar6 = (iVar10 + iVar6) / 2;
              iVar7 = iVar10;
              if (iVar10 <= iVar6) break;
              iVar7 = __divsi3(iVar15,iVar6);
              iVar10 = (iVar6 + iVar7) / 2;
              iVar7 = iVar6;
              if (iVar6 <= iVar10) break;
              iVar6 = __divsi3(iVar15);
              iVar6 = (iVar10 + iVar6) / 2;
              iVar7 = iVar10;
              if (iVar10 <= iVar6) break;
              iVar7 = __divsi3(iVar15,iVar6);
              iVar10 = (iVar6 + iVar7) / 2;
              iVar7 = iVar6;
              if (iVar6 <= iVar10) break;
              iVar6 = __divsi3(iVar15,iVar10);
              iVar6 = (iVar6 + iVar10) / 2;
              iVar7 = iVar10;
            } while (iVar6 < iVar10);
          }
          local_7c = local_7c & ~((int)local_7c >> 0x1f);
          if ((int)local_7c < (int)(local_84 * iVar7)) {
            local_7c = local_84 * iVar7;
          }
          if ((int)local_7c < (int)uVar28) {
            iVar6 = 0;
            local_7c = uVar28;
            if (iVar5 != 0 || uVar28 != 0) {
LAB_00109e4e:
              iVar6 = FUN_00100a74(local_7c);
LAB_00109e54:
              iVar7 = 0;
              if (iVar5 != 0) {
                iVar7 = FUN_00100a74();
              }
              if (iVar6 <= iVar7) {
                iVar6 = iVar7;
              }
              switch(iVar6) {
              case 0:
                uVar23 = 1;
                break;
              case 1:
                uVar23 = 2;
                break;
              case 2:
                uVar23 = 4;
                break;
              case 3:
                uVar23 = 8;
                break;
              case 4:
                uVar23 = 0x10;
                break;
              case 5:
                uVar23 = 0x20;
                break;
              case 6:
                uVar23 = 0x40;
                break;
              case 7:
                uVar23 = 0x80;
                break;
              case 8:
                uVar23 = 0x100;
                break;
              case 9:
                uVar23 = 0x200;
                break;
              case 10:
                uVar23 = 0x400;
                break;
              case 0xb:
                uVar23 = 0x800;
                break;
              case 0xc:
                uVar23 = 0x1000;
                break;
              case 0xd:
                uVar23 = 0x2000;
                break;
              case 0xe:
                uVar23 = 0x4000;
                break;
              case 0xf:
                uVar23 = 0x8000;
                break;
              case 0x10:
                uVar23 = 0x10000;
                break;
              case 0x11:
                uVar23 = 0x20000;
                break;
              case 0x12:
                uVar23 = 0x40000;
                break;
              case 0x13:
                uVar23 = 0x80000;
                break;
              case 0x14:
                uVar23 = 0x100000;
                break;
              case 0x15:
                uVar23 = 0x200000;
                break;
              case 0x16:
                uVar23 = 0x400000;
                break;
              case 0x17:
                uVar23 = 0x800000;
                break;
              case 0x18:
                uVar23 = 0x1000000;
                break;
              case 0x19:
                uVar23 = 0x2000000;
                break;
              case 0x1a:
                uVar23 = 0x4000000;
                break;
              case 0x1b:
                uVar23 = 0x8000000;
                break;
              case 0x1c:
                uVar23 = 0x10000000;
                break;
              case 0x1d:
                uVar23 = 0x20000000;
                break;
              case 0x1e:
                uVar23 = 0x40000000;
                break;
              default:
                if (iVar6 < 0) {
                  uVar23 = 1;
                }
                else {
                  uVar23 = 0x40000000;
                }
              }
              iVar6 = __divsi3(local_7c,uVar23);
              iVar7 = __divsi3(iVar5,uVar23);
              iVar5 = DAT_0010a828;
              if (iVar7 < 0) {
                if (iVar6 < -iVar7) {
                  iVar5 = *(int *)(iVar20 + DAT_0010f884);
                  uVar24 = __divsi3(iVar6 * -0x7fff);
                  uVar28 = uVar24 & ~((int)uVar24 >> 0x20);
                  if ((int)uVar24 < 0) {
                    uVar28 = uVar24 + 0x1ff;
                  }
                  iVar6 = *(int *)(iVar5 + ((uVar28 & 0x7fff) >> 9) * 4) + -0x5a;
                }
                else {
                  iVar5 = *(int *)(iVar20 + DAT_0010f884);
                  uVar24 = __divsi3(iVar7 * -0x7fff,iVar6);
                  uVar28 = uVar24 & ~((int)uVar24 >> 0x20);
                  if ((int)uVar24 < 0) {
                    uVar28 = uVar24 + 0x1ff;
                  }
                  iVar6 = -*(int *)(iVar5 + ((uVar28 & 0x7fff) >> 9) * 4);
                }
              }
              else if (iVar6 < iVar7) {
                uVar24 = __divsi3(iVar6 * 0x7fff);
                uVar28 = uVar24 & ~((int)uVar24 >> 0x20);
                if ((int)uVar24 < 0) {
                  uVar28 = uVar24 + 0x1ff;
                }
                iVar6 = 0x5a - *(int *)(*(int *)(iVar20 + iVar5) + ((uVar28 & 0x7fff) >> 9) * 4);
              }
              else {
                iVar5 = *(int *)(iVar20 + DAT_0010a828);
                uVar28 = __divsi3(iVar7 * 0x7fff,iVar6);
                iVar6 = *(int *)(iVar5 + ((uVar28 & 0x7fff) >> 9) * 4);
              }
            }
          }
          else {
            iVar6 = 0;
            if (local_7c != 0 || iVar5 != 0) {
              iVar6 = 0;
              if (local_7c != 0) goto LAB_00109e4e;
              goto LAB_00109e54;
            }
          }
        }
      }
      *(int *)(param_3 + 0x28) = iVar6;
      *(int *)(param_3 + 0x24) = local_80;
      *(uint *)(param_3 + 0x2c) = uVar31;
      uVar23 = *(undefined4 *)(param_2 + 0x30);
      uVar4 = *(undefined4 *)(param_2 + 0x34);
      *(undefined4 *)(param_3 + 0xc) = *(undefined4 *)(param_2 + 0x2c);
      *(undefined4 *)(param_3 + 0x10) = uVar23;
      *(undefined4 *)(param_3 + 0x14) = uVar4;
      if (uVar31 == 0) {
LAB_00108376:
        *(undefined4 *)(param_3 + 0xc) = 0;
        *(undefined4 *)(param_3 + 0x10) = 0;
        *(undefined4 *)(param_3 + 0x14) = 0;
      }
      else {
        uVar24 = *(uint *)(param_3 + 0xc);
        uVar28 = 0;
        if (uVar24 != 0) {
          if ((uVar24 & 0x80000000) == 0x80000000) {
            if ((uVar24 & 0xffff8000) == 0xffff8000) {
              uVar28 = 0;
            }
            else {
              if (-1 < (int)(uVar24 << 1)) goto LAB_001143f2;
              if (-1 < (int)(uVar24 << 2)) goto LAB_0011442c;
              if (-1 < (int)(uVar24 << 3)) goto LAB_00114424;
              if (-1 < (int)(uVar24 << 4)) goto LAB_0011443c;
              if (-1 < (int)(uVar24 << 5)) goto LAB_00114434;
              if (-1 < (int)(uVar24 << 6)) goto LAB_00114e7a;
              if (-1 < (int)(uVar24 << 7)) goto LAB_00114e72;
              if (-1 < (int)(uVar24 << 8)) goto LAB_00114ee2;
              if (-1 < (int)(uVar24 << 9)) goto LAB_00114eda;
              if (-1 < (int)(uVar24 << 10)) goto LAB_00114ed2;
              if (-1 < (int)(uVar24 << 0xb)) goto LAB_00114eca;
              if (-1 < (int)(uVar24 << 0xc)) goto LAB_00114ec2;
              if (-1 < (int)(uVar24 << 0xd)) goto LAB_00114eba;
              if (-1 < (int)(uVar24 << 0xe)) goto LAB_00114eb2;
              if (-1 < (int)(uVar24 << 0xf)) goto LAB_00114eaa;
              uVar28 = (uint)((uVar24 & 0x8000) == 0);
            }
          }
          else if ((uVar24 & 0xffff8000) == 0) {
            uVar28 = 0;
          }
          else if ((int)(uVar24 << 1) < 0) {
LAB_001143f2:
            uVar28 = 0x10;
          }
          else if ((int)(uVar24 << 2) < 0) {
LAB_0011442c:
            uVar28 = 0xf;
          }
          else if ((int)(uVar24 << 3) < 0) {
LAB_00114424:
            uVar28 = 0xe;
          }
          else if ((int)(uVar24 << 4) < 0) {
LAB_0011443c:
            uVar28 = 0xd;
          }
          else if ((int)(uVar24 << 5) < 0) {
LAB_00114434:
            uVar28 = 0xc;
          }
          else if ((int)(uVar24 << 6) < 0) {
LAB_00114e7a:
            uVar28 = 0xb;
          }
          else if ((int)(uVar24 << 7) < 0) {
LAB_00114e72:
            uVar28 = 10;
          }
          else if ((int)(uVar24 << 8) < 0) {
LAB_00114ee2:
            uVar28 = 9;
          }
          else if ((int)(uVar24 << 9) < 0) {
LAB_00114eda:
            uVar28 = 8;
          }
          else if ((int)(uVar24 << 10) < 0) {
LAB_00114ed2:
            uVar28 = 7;
          }
          else if ((int)(uVar24 << 0xb) < 0) {
LAB_00114eca:
            uVar28 = 6;
          }
          else if ((int)(uVar24 << 0xc) < 0) {
LAB_00114ec2:
            uVar28 = 5;
          }
          else if ((int)(uVar24 << 0xd) < 0) {
LAB_00114eba:
            uVar28 = 4;
          }
          else if ((int)(uVar24 << 0xe) < 0) {
LAB_00114eb2:
            uVar28 = 3;
          }
          else if ((int)(uVar24 << 0xf) < 0) {
LAB_00114eaa:
            uVar28 = 2;
          }
          else {
            uVar28 = (uVar24 & 0xffff) >> 0xf;
          }
        }
        uVar14 = *(uint *)(param_3 + 0x10);
        uVar25 = 0;
        if (uVar14 != 0) {
          if ((uVar14 & 0x80000000) == 0x80000000) {
            if ((uVar14 & 0xffff8000) == 0xffff8000) {
              uVar25 = 0;
            }
            else {
              if (-1 < (int)(uVar14 << 1)) goto LAB_001143fa;
              if (-1 < (int)(uVar14 << 2)) goto LAB_00114406;
              if (-1 < (int)(uVar14 << 3)) goto LAB_00114400;
              if (-1 < (int)(uVar14 << 4)) goto LAB_00114412;
              if (-1 < (int)(uVar14 << 5)) goto LAB_0011440c;
              if (-1 < (int)(uVar14 << 6)) goto LAB_00114f6a;
              if (-1 < (int)(uVar14 << 7)) goto LAB_00114f64;
              if (-1 < (int)(uVar14 << 8)) goto LAB_00114f4c;
              if (-1 < (int)(uVar14 << 9)) goto LAB_00114f46;
              if (-1 < (int)(uVar14 << 10)) goto LAB_00114f40;
              if (-1 < (int)(uVar14 << 0xb)) goto LAB_00114f3a;
              if (-1 < (int)(uVar14 << 0xc)) goto LAB_00114f34;
              if (-1 < (int)(uVar14 << 0xd)) goto LAB_00114f2e;
              if (-1 < (int)(uVar14 << 0xe)) goto LAB_00114f28;
              if (-1 < (int)(uVar14 << 0xf)) goto LAB_00114f22;
              uVar25 = (uint)((uVar14 & 0x8000) == 0);
            }
          }
          else {
            uVar25 = 0;
            if ((uVar14 & 0xffff8000) != 0) {
              if ((int)(uVar14 << 1) < 0) {
LAB_001143fa:
                uVar25 = 0x10;
              }
              else if ((int)(uVar14 << 2) < 0) {
LAB_00114406:
                uVar25 = 0xf;
              }
              else if ((int)(uVar14 << 3) < 0) {
LAB_00114400:
                uVar25 = 0xe;
              }
              else if ((int)(uVar14 << 4) < 0) {
LAB_00114412:
                uVar25 = 0xd;
              }
              else if ((int)(uVar14 << 5) < 0) {
LAB_0011440c:
                uVar25 = 0xc;
              }
              else if ((int)(uVar14 << 6) < 0) {
LAB_00114f6a:
                uVar25 = 0xb;
              }
              else if ((int)(uVar14 << 7) < 0) {
LAB_00114f64:
                uVar25 = 10;
              }
              else if ((int)(uVar14 << 8) < 0) {
LAB_00114f4c:
                uVar25 = 9;
              }
              else if ((int)(uVar14 << 9) < 0) {
LAB_00114f46:
                uVar25 = 8;
              }
              else if ((int)(uVar14 << 10) < 0) {
LAB_00114f40:
                uVar25 = 7;
              }
              else if ((int)(uVar14 << 0xb) < 0) {
LAB_00114f3a:
                uVar25 = 6;
              }
              else if ((int)(uVar14 << 0xc) < 0) {
LAB_00114f34:
                uVar25 = 5;
              }
              else if ((int)(uVar14 << 0xd) < 0) {
LAB_00114f2e:
                uVar25 = 4;
              }
              else if ((int)(uVar14 << 0xe) < 0) {
LAB_00114f28:
                uVar25 = 3;
              }
              else if ((int)(uVar14 << 0xf) < 0) {
LAB_00114f22:
                uVar25 = 2;
              }
              else {
                uVar25 = (uVar14 & 0xffff) >> 0xf;
              }
            }
          }
        }
        uVar11 = *(uint *)(param_3 + 0x14);
        uVar22 = 0;
        if (uVar11 != 0) {
          if ((uVar11 & 0x80000000) == 0x80000000) {
            if ((uVar11 & 0xffff8000) == 0xffff8000) {
              uVar22 = 0;
            }
            else {
              if (-1 < (int)(uVar11 << 1)) goto LAB_0011416e;
              if (-1 < (int)(uVar11 << 2)) goto LAB_0011435a;
              if (-1 < (int)(uVar11 << 3)) goto LAB_00114352;
              if (-1 < (int)(uVar11 << 4)) goto LAB_0011436a;
              if (-1 < (int)(uVar11 << 5)) goto LAB_00114362;
              if (-1 < (int)(uVar11 << 6)) goto LAB_00114db4;
              if (-1 < (int)(uVar11 << 7)) goto LAB_00114dac;
              if (-1 < (int)(uVar11 << 8)) goto LAB_00114cd8;
              if (-1 < (int)(uVar11 << 9)) goto LAB_00114cd0;
              if (-1 < (int)(uVar11 << 10)) goto LAB_00114cc8;
              if (-1 < (int)(uVar11 << 0xb)) goto LAB_00114cc0;
              if (-1 < (int)(uVar11 << 0xc)) goto LAB_00114cb8;
              if (-1 < (int)(uVar11 << 0xd)) goto LAB_00114cb0;
              if (-1 < (int)(uVar11 << 0xe)) goto LAB_00114ca8;
              if (-1 < (int)(uVar11 << 0xf)) goto LAB_00114ca0;
              uVar22 = (uint)((uVar11 & 0x8000) == 0);
            }
          }
          else {
            uVar22 = 0;
            if ((uVar11 & 0xffff8000) != 0) {
              if ((int)(uVar11 << 1) < 0) {
LAB_0011416e:
                uVar22 = 0x10;
              }
              else if ((int)(uVar11 << 2) < 0) {
LAB_0011435a:
                uVar22 = 0xf;
              }
              else if ((int)(uVar11 << 3) < 0) {
LAB_00114352:
                uVar22 = 0xe;
              }
              else if ((int)(uVar11 << 4) < 0) {
LAB_0011436a:
                uVar22 = 0xd;
              }
              else if ((int)(uVar11 << 5) < 0) {
LAB_00114362:
                uVar22 = 0xc;
              }
              else if ((int)(uVar11 << 6) < 0) {
LAB_00114db4:
                uVar22 = 0xb;
              }
              else if ((int)(uVar11 << 7) < 0) {
LAB_00114dac:
                uVar22 = 10;
              }
              else if ((int)(uVar11 << 8) < 0) {
LAB_00114cd8:
                uVar22 = 9;
              }
              else if ((int)(uVar11 << 9) < 0) {
LAB_00114cd0:
                uVar22 = 8;
              }
              else if ((int)(uVar11 << 10) < 0) {
LAB_00114cc8:
                uVar22 = 7;
              }
              else if ((int)(uVar11 << 0xb) < 0) {
LAB_00114cc0:
                uVar22 = 6;
              }
              else if ((int)(uVar11 << 0xc) < 0) {
LAB_00114cb8:
                uVar22 = 5;
              }
              else if ((int)(uVar11 << 0xd) < 0) {
LAB_00114cb0:
                uVar22 = 4;
              }
              else if ((int)(uVar11 << 0xe) < 0) {
LAB_00114ca8:
                uVar22 = 3;
              }
              else if ((int)(uVar11 << 0xf) < 0) {
LAB_00114ca0:
                uVar22 = 2;
              }
              else {
                uVar22 = (uVar11 & 0xffff) >> 0xf;
              }
            }
          }
        }
        if (uVar25 < uVar28) {
          uVar25 = uVar28;
        }
        if (uVar25 < uVar22) {
          uVar25 = uVar22;
        }
        switch(uVar25) {
        case 0:
          uVar23 = 1;
          goto code_r0x00109632;
        case 1:
          uVar23 = 2;
          break;
        case 2:
          uVar23 = 4;
          break;
        case 3:
          uVar23 = 8;
          break;
        case 4:
          uVar23 = 0x10;
          break;
        case 5:
          uVar23 = 0x20;
          break;
        case 6:
          uVar23 = 0x40;
          break;
        case 7:
          uVar23 = 0x80;
          break;
        case 8:
          uVar23 = 0x100;
          break;
        case 9:
          uVar23 = 0x200;
          break;
        case 10:
          uVar23 = 0x400;
          break;
        case 0xb:
          uVar23 = 0x800;
          break;
        case 0xc:
          uVar23 = 0x1000;
          break;
        case 0xd:
          uVar23 = 0x2000;
          break;
        case 0xe:
          uVar23 = 0x4000;
          break;
        case 0xf:
          uVar23 = 0x8000;
          break;
        case 0x10:
          uVar23 = 0x10000;
          break;
        case 0x11:
          uVar23 = 0x20000;
          break;
        case 0x12:
          uVar23 = 0x40000;
          break;
        case 0x13:
          uVar23 = 0x80000;
          break;
        case 0x14:
          uVar23 = 0x100000;
          break;
        case 0x15:
          uVar23 = 0x200000;
          break;
        case 0x16:
          uVar23 = 0x400000;
          break;
        case 0x17:
          uVar23 = 0x800000;
          break;
        case 0x18:
          uVar23 = 0x1000000;
          break;
        case 0x19:
          uVar23 = 0x2000000;
          break;
        case 0x1a:
          uVar23 = 0x4000000;
          break;
        case 0x1b:
          uVar23 = 0x8000000;
          break;
        case 0x1c:
          uVar23 = 0x10000000;
          break;
        case 0x1d:
          uVar23 = 0x20000000;
          break;
        default:
          uVar23 = 0x40000000;
        }
        uVar31 = __divsi3(uVar31,uVar23);
        if (uVar31 == 0) goto LAB_00108376;
code_r0x00109632:
        if (uVar24 != 0) {
          iVar5 = __divsi3(uVar24,uVar23);
          uVar4 = __divsi3(iVar5 * 0x7fff,uVar31);
          *(undefined4 *)(param_3 + 0xc) = uVar4;
        }
        if (uVar14 != 0) {
          iVar5 = __divsi3(uVar14,uVar23);
          uVar4 = __divsi3(iVar5 * 0x7fff,uVar31);
          *(undefined4 *)(param_3 + 0x10) = uVar4;
        }
        if (uVar11 != 0) {
          iVar5 = __divsi3(uVar11,uVar23);
          uVar23 = __divsi3(iVar5 * 0x7fff,uVar31);
          *(undefined4 *)(param_3 + 0x14) = uVar23;
        }
      }
      *(undefined4 *)(param_3 + 0x18) = *(undefined4 *)(param_3 + 0xc);
      *(undefined4 *)(param_3 + 0x1c) = *(undefined4 *)(param_3 + 0x10);
      *(undefined4 *)(param_3 + 0x20) = *(undefined4 *)(param_3 + 0x14);
      uVar31 = *(uint *)(param_2 + 0x10);
      uVar28 = *(uint *)param_1;
    }
LAB_001057b0:
    if ((uVar28 & 6) == 0) {
      if (uVar31 == 0) {
        if ((uVar28 & 0x6800) == 0) {
          local_7c = 1;
          uVar31 = 0;
          goto LAB_00105528;
        }
        local_7c = 1;
      }
      else {
        if ((uVar28 & 0x7f0) == 0) goto LAB_00107c42;
        local_7c = 1;
      }
    }
    else {
      local_7c = 1;
    }
LAB_001057be:
    uVar24 = *(uint *)(param_2 + 0x50);
    uVar28 = *(uint *)(param_2 + 0x54);
    uVar25 = *(uint *)(param_2 + 0x58);
    uVar31 = uVar28;
    if (uVar24 == 0) {
      if (uVar28 != 0) {
        uVar14 = 0;
LAB_001057d8:
        if ((uVar28 & 0x80000000) == 0x80000000) {
          if ((uVar28 & 0xffffc000) == 0xffffc000) {
            uVar31 = 0;
          }
          else {
            if (-1 < (int)(uVar28 << 1)) goto LAB_00112010;
            if (-1 < (int)(uVar28 << 2)) goto LAB_0011219a;
            if (-1 < (int)(uVar28 << 3)) goto LAB_001121a6;
            if (-1 < (int)(uVar28 << 4)) goto LAB_001121a0;
            if (-1 < (int)(uVar28 << 5)) goto LAB_0011236e;
            if (-1 < (int)(uVar28 << 6)) goto LAB_00112368;
            if (-1 < (int)(uVar28 << 7)) goto LAB_00112362;
            if (-1 < (int)(uVar28 << 8)) goto LAB_0011235c;
            if (-1 < (int)(uVar28 << 9)) goto LAB_00112374;
            if (-1 < (int)(uVar28 << 10)) goto LAB_00112a70;
            if (-1 < (int)(uVar28 << 0xb)) goto LAB_00112b04;
            if (-1 < (int)(uVar28 << 0xc)) goto LAB_00112afe;
            if (-1 < (int)(uVar28 << 0xd)) goto LAB_00112af8;
            if (-1 < (int)(uVar28 << 0xe)) goto LAB_00112f26;
            if (-1 < (int)(uVar28 << 0xf)) goto LAB_00112f4a;
            if (-1 < (int)(uVar28 << 0x10)) goto LAB_00112f44;
            uVar31 = (uint)((uVar28 & 0x4000) == 0);
          }
        }
        else {
          uVar31 = 0;
          if ((uVar28 & 0xffffc000) != 0) {
            if ((int)(uVar28 << 1) < 0) {
LAB_00112010:
              uVar31 = 0x11;
            }
            else if ((int)(uVar28 << 2) < 0) {
LAB_0011219a:
              uVar31 = 0x10;
            }
            else if ((int)(uVar28 << 3) < 0) {
LAB_001121a6:
              uVar31 = 0xf;
            }
            else if ((int)(uVar28 << 4) < 0) {
LAB_001121a0:
              uVar31 = 0xe;
            }
            else if ((int)(uVar28 << 5) < 0) {
LAB_0011236e:
              uVar31 = 0xd;
            }
            else if ((int)(uVar28 << 6) < 0) {
LAB_00112368:
              uVar31 = 0xc;
            }
            else if ((int)(uVar28 << 7) < 0) {
LAB_00112362:
              uVar31 = 0xb;
            }
            else if ((int)(uVar28 << 8) < 0) {
LAB_0011235c:
              uVar31 = 10;
            }
            else if ((int)(uVar28 << 9) < 0) {
LAB_00112374:
              uVar31 = 9;
            }
            else if ((int)(uVar28 << 10) < 0) {
LAB_00112a70:
              uVar31 = 8;
            }
            else if ((int)(uVar28 << 0xb) < 0) {
LAB_00112b04:
              uVar31 = 7;
            }
            else if ((int)(uVar28 << 0xc) < 0) {
LAB_00112afe:
              uVar31 = 6;
            }
            else if ((int)(uVar28 << 0xd) < 0) {
LAB_00112af8:
              uVar31 = 5;
            }
            else if ((int)(uVar28 << 0xe) < 0) {
LAB_00112f26:
              uVar31 = 4;
            }
            else if ((int)(uVar28 << 0xf) < 0) {
LAB_00112f4a:
              uVar31 = 3;
            }
            else if ((int)(uVar28 << 0x10) < 0) {
LAB_00112f44:
              uVar31 = 2;
            }
            else {
              uVar31 = (uVar28 & 0x7fff) >> 0xe;
            }
          }
        }
        goto LAB_00105852;
      }
      uVar14 = uVar28;
      if (uVar25 != 0) goto LAB_00105df4;
    }
    else {
      if ((uVar24 & 0x80000000) == 0x80000000) {
        if ((uVar24 & 0xffffc000) == 0xffffc000) {
          uVar14 = 0;
        }
        else {
          if ((uVar24 & 0x40000000) == 0) goto LAB_001120c6;
          if ((uVar24 & 0x20000000) == 0) goto LAB_0011222e;
          if ((uVar24 & 0x10000000) == 0) goto LAB_0011223a;
          if ((uVar24 & 0x8000000) == 0) goto LAB_00112234;
          if ((uVar24 & 0x4000000) == 0) goto LAB_0011271a;
          if ((uVar24 & 0x2000000) == 0) goto LAB_00112714;
          if ((uVar24 & 0x1000000) == 0) goto LAB_0011270e;
          if ((uVar24 & 0x800000) == 0) goto LAB_00112708;
          if ((uVar24 & 0x400000) == 0) goto LAB_00112792;
          if ((uVar24 & 0x200000) == 0) goto LAB_00112b66;
          if ((uVar24 & 0x100000) == 0) goto LAB_00112b4c;
          if ((uVar24 & 0x80000) == 0) goto LAB_00112b46;
          if ((uVar24 & 0x40000) == 0) goto LAB_00112b52;
          if ((uVar24 & 0x20000) == 0) goto LAB_00112efc;
          if ((uVar24 & 0x10000) == 0) goto LAB_00112ef6;
          if ((uVar24 & 0x8000) == 0) goto LAB_00112ef0;
          uVar14 = (uint)((uVar24 & 0x4000) == 0);
        }
      }
      else {
        uVar14 = 0;
        if ((uVar24 & 0xffffc000) != 0) {
          if ((uVar24 & 0x40000000) == 0) {
            if ((uVar24 & 0x20000000) == 0) {
              if ((uVar24 & 0x10000000) == 0) {
                if ((uVar24 & 0x8000000) == 0) {
                  if ((uVar24 & 0x4000000) == 0) {
                    if ((uVar24 & 0x2000000) == 0) {
                      if ((uVar24 & 0x1000000) == 0) {
                        if ((uVar24 & 0x800000) == 0) {
                          if ((uVar24 & 0x400000) == 0) {
                            if ((uVar24 & 0x200000) == 0) {
                              if ((uVar24 & 0x100000) == 0) {
                                if ((uVar24 & 0x80000) == 0) {
                                  if ((uVar24 & 0x40000) == 0) {
                                    if ((uVar24 & 0x20000) == 0) {
                                      if ((uVar24 & 0x10000) == 0) {
                                        if ((uVar24 & 0x8000) == 0) {
                                          uVar14 = (uVar24 & 0x7fff) >> 0xe;
                                        }
                                        else {
LAB_00112ef0:
                                          uVar14 = 2;
                                        }
                                      }
                                      else {
LAB_00112ef6:
                                        uVar14 = 3;
                                      }
                                    }
                                    else {
LAB_00112efc:
                                      uVar14 = 4;
                                    }
                                  }
                                  else {
LAB_00112b52:
                                    uVar14 = 5;
                                  }
                                }
                                else {
LAB_00112b46:
                                  uVar14 = 6;
                                }
                              }
                              else {
LAB_00112b4c:
                                uVar14 = 7;
                              }
                            }
                            else {
LAB_00112b66:
                              uVar14 = 8;
                            }
                          }
                          else {
LAB_00112792:
                            uVar14 = 9;
                          }
                        }
                        else {
LAB_00112708:
                          uVar14 = 10;
                        }
                      }
                      else {
LAB_0011270e:
                        uVar14 = 0xb;
                      }
                    }
                    else {
LAB_00112714:
                      uVar14 = 0xc;
                    }
                  }
                  else {
LAB_0011271a:
                    uVar14 = 0xd;
                  }
                }
                else {
LAB_00112234:
                  uVar14 = 0xe;
                }
              }
              else {
LAB_0011223a:
                uVar14 = 0xf;
              }
            }
            else {
LAB_0011222e:
              uVar14 = 0x10;
            }
          }
          else {
LAB_001120c6:
            uVar14 = 0x11;
          }
        }
      }
      if (uVar28 != 0) goto LAB_001057d8;
LAB_00105852:
      uVar22 = 0;
      if (uVar25 != 0) {
LAB_00105df4:
        if ((uVar25 & 0x80000000) == 0x80000000) {
          if ((uVar25 & 0xffffc000) == 0xffffc000) {
            uVar22 = 0;
          }
          else {
            if (-1 < (int)(uVar25 << 1)) goto LAB_00112184;
            if (-1 < (int)(uVar25 << 2)) goto LAB_001121c4;
            if (-1 < (int)(uVar25 << 3)) goto LAB_001121bc;
            if (-1 < (int)(uVar25 << 4)) goto LAB_001121cc;
            if (-1 < (int)(uVar25 << 5)) goto LAB_0011263a;
            if (-1 < (int)(uVar25 << 6)) goto LAB_00112632;
            if (-1 < (int)(uVar25 << 7)) goto LAB_0011262a;
            if (-1 < (int)(uVar25 << 8)) goto LAB_00112492;
            if (-1 < (int)(uVar25 << 9)) goto LAB_0011248a;
            if (-1 < (int)(uVar25 << 10)) goto LAB_001128a2;
            if (-1 < (int)(uVar25 << 0xb)) goto LAB_0011289a;
            if (-1 < (int)(uVar25 << 0xc)) goto LAB_001128b2;
            if (-1 < (int)(uVar25 << 0xd)) goto LAB_001128aa;
            if (-1 < (int)(uVar25 << 0xe)) goto LAB_00112e64;
            if (-1 < (int)(uVar25 << 0xf)) goto LAB_00112da4;
            if (-1 < (int)(uVar25 << 0x10)) goto LAB_00113024;
            uVar22 = (uint)((uVar25 & 0x4000) == 0);
          }
        }
        else {
          uVar22 = 0;
          if ((uVar25 & 0xffffc000) != 0) {
            if ((int)(uVar25 << 1) < 0) {
LAB_00112184:
              uVar22 = 0x11;
            }
            else if ((int)(uVar25 << 2) < 0) {
LAB_001121c4:
              uVar22 = 0x10;
            }
            else if ((int)(uVar25 << 3) < 0) {
LAB_001121bc:
              uVar22 = 0xf;
            }
            else if ((int)(uVar25 << 4) < 0) {
LAB_001121cc:
              uVar22 = 0xe;
            }
            else if ((int)(uVar25 << 5) < 0) {
LAB_0011263a:
              uVar22 = 0xd;
            }
            else if ((int)(uVar25 << 6) < 0) {
LAB_00112632:
              uVar22 = 0xc;
            }
            else if ((int)(uVar25 << 7) < 0) {
LAB_0011262a:
              uVar22 = 0xb;
            }
            else if ((int)(uVar25 << 8) < 0) {
LAB_00112492:
              uVar22 = 10;
            }
            else if ((int)(uVar25 << 9) < 0) {
LAB_0011248a:
              uVar22 = 9;
            }
            else if ((int)(uVar25 << 10) < 0) {
LAB_001128a2:
              uVar22 = 8;
            }
            else if ((int)(uVar25 << 0xb) < 0) {
LAB_0011289a:
              uVar22 = 7;
            }
            else if ((int)(uVar25 << 0xc) < 0) {
LAB_001128b2:
              uVar22 = 6;
            }
            else if ((int)(uVar25 << 0xd) < 0) {
LAB_001128aa:
              uVar22 = 5;
            }
            else if ((int)(uVar25 << 0xe) < 0) {
LAB_00112e64:
              uVar22 = 4;
            }
            else if ((int)(uVar25 << 0xf) < 0) {
LAB_00112da4:
              uVar22 = 3;
            }
            else if ((int)(uVar25 << 0x10) < 0) {
LAB_00113024:
              uVar22 = 2;
            }
            else {
              uVar22 = (uVar25 & 0x7fff) >> 0xe;
            }
          }
        }
      }
      if ((int)uVar31 < (int)uVar14) {
        uVar31 = uVar14;
      }
      if ((int)uVar22 <= (int)uVar31) {
        uVar22 = uVar31;
      }
      switch(uVar22) {
      case 0:
        iVar5 = 1;
        break;
      case 1:
        iVar5 = 2;
        break;
      case 2:
        iVar5 = 4;
        break;
      case 3:
        iVar5 = 8;
        break;
      case 4:
        iVar5 = 0x10;
        break;
      case 5:
        iVar5 = 0x20;
        break;
      case 6:
        iVar5 = 0x40;
        break;
      case 7:
        iVar5 = 0x80;
        break;
      case 8:
        iVar5 = 0x100;
        break;
      case 9:
        iVar5 = 0x200;
        break;
      case 10:
        iVar5 = 0x400;
        break;
      case 0xb:
        iVar5 = 0x800;
        break;
      case 0xc:
        iVar5 = 0x1000;
        break;
      case 0xd:
        iVar5 = 0x2000;
        break;
      case 0xe:
        iVar5 = 0x4000;
        break;
      case 0xf:
        iVar5 = 0x8000;
        break;
      case 0x10:
        iVar5 = 0x10000;
        break;
      case 0x11:
        iVar5 = 0x20000;
        break;
      case 0x12:
        iVar5 = 0x40000;
        break;
      case 0x13:
        iVar5 = 0x80000;
        break;
      case 0x14:
        iVar5 = 0x100000;
        break;
      case 0x15:
        iVar5 = 0x200000;
        break;
      case 0x16:
        iVar5 = 0x400000;
        break;
      case 0x17:
        iVar5 = 0x800000;
        break;
      case 0x18:
        iVar5 = 0x1000000;
        break;
      case 0x19:
        iVar5 = 0x2000000;
        break;
      case 0x1a:
        iVar5 = 0x4000000;
        break;
      case 0x1b:
        iVar5 = 0x8000000;
        break;
      case 0x1c:
        iVar5 = 0x10000000;
        break;
      case 0x1d:
        iVar5 = 0x20000000;
        break;
      default:
        iVar5 = 0x40000000;
      }
      iVar6 = __divsi3(uVar24,iVar5);
      iVar7 = __divsi3(uVar28,iVar5);
      iVar15 = __divsi3(uVar25,iVar5);
      iVar6 = iVar15 * iVar15 + iVar6 * iVar6 + iVar7 * iVar7;
      if (iVar6 < 1) {
        iVar7 = 0;
      }
      else {
        iVar15 = iVar6;
        if (iVar6 == 0x7fffffff) {
          iVar6 = 0x7ffffffe;
          iVar15 = 0x7ffffffe;
        }
        do {
          iVar7 = __divsi3(iVar15,iVar6);
          iVar10 = (iVar6 + iVar7) / 2;
          iVar7 = iVar6;
          if (iVar6 <= iVar10) break;
          iVar6 = __divsi3(iVar15);
          iVar6 = (iVar10 + iVar6) / 2;
          iVar7 = iVar10;
          if (iVar10 <= iVar6) break;
          iVar7 = __divsi3(iVar15,iVar6);
          iVar10 = (iVar6 + iVar7) / 2;
          iVar7 = iVar6;
          if (iVar6 <= iVar10) break;
          iVar6 = __divsi3(iVar15,iVar10);
          iVar6 = (iVar10 + iVar6) / 2;
          iVar7 = iVar10;
          if (iVar10 <= iVar6) break;
          iVar7 = __divsi3(iVar15,iVar6);
          iVar10 = (iVar6 + iVar7) / 2;
          iVar7 = iVar6;
          if (iVar6 <= iVar10) break;
          iVar6 = __divsi3(iVar15,iVar10);
          iVar6 = (iVar10 + iVar6) / 2;
          iVar7 = iVar10;
          if (iVar10 <= iVar6) break;
          iVar7 = __divsi3(iVar15,iVar6);
          iVar10 = (iVar6 + iVar7) / 2;
          iVar7 = iVar6;
          if (iVar6 <= iVar10) break;
          iVar6 = __divsi3(iVar15,iVar10);
          iVar6 = (iVar6 + iVar10) / 2;
          iVar7 = iVar10;
        } while (iVar6 < iVar10);
      }
      uVar31 = uVar28;
      if ((int)uVar28 < (int)uVar24) {
        uVar31 = uVar24;
      }
      if ((int)uVar31 < (int)uVar25) {
        uVar31 = uVar25;
      }
      uVar14 = iVar5 * iVar7;
      if (iVar5 * iVar7 <= (int)uVar31) {
        uVar14 = uVar31;
      }
      if (uVar14 == 0) {
LAB_00107c34:
        uVar25 = 0;
        uVar28 = uVar25;
        uVar24 = uVar25;
      }
      else {
        uVar31 = 0;
        if (uVar24 != 0) {
          uVar31 = FUN_00100a74(uVar24);
        }
        uVar22 = 0;
        if (uVar28 != 0) {
          uVar22 = FUN_00100a74(uVar28);
        }
        uVar11 = 0;
        if (uVar25 != 0) {
          uVar11 = FUN_00100a74();
        }
        if ((int)uVar22 < (int)uVar31) {
          uVar22 = uVar31;
        }
        if ((int)uVar22 < (int)uVar11) {
          uVar22 = uVar11;
        }
        if (uVar22 < 0x1f) {
          return *(uint *)(&DAT_00108a88 + uVar22 * 4);
        }
        if ((int)uVar22 < 0) {
          uVar23 = 1;
        }
        else {
          uVar23 = 0x40000000;
          uVar14 = __divsi3(uVar14,0x40000000);
          if (uVar14 == 0) goto LAB_00107c34;
        }
        if (uVar24 != 0) {
          iVar5 = __divsi3(uVar24,uVar23);
          uVar24 = __divsi3(iVar5 * 0x7fff,uVar14);
        }
        if (uVar28 != 0) {
          iVar5 = __divsi3(uVar28,uVar23);
          uVar28 = __divsi3(iVar5 * 0x7fff,uVar14);
        }
        if (uVar25 != 0) {
          iVar5 = __divsi3(uVar25,uVar23);
          uVar25 = __divsi3(iVar5 * 0x7fff,uVar14);
        }
      }
    }
    iVar5 = *(int *)(param_3 + 0xc);
    iVar6 = *(int *)(param_3 + 0x10);
    uVar31 = -iVar5;
    uVar14 = -iVar6;
    uVar22 = -*(int *)(param_3 + 0x14);
    if (iVar5 == 0) {
      uVar11 = 0;
    }
    else if ((uVar31 & 0x80000000) == 0x80000000) {
      if ((uVar31 & 0xffffc000) == 0xffffc000) {
        uVar11 = 0;
      }
      else {
        if (-1 < iVar5 * -2) goto LAB_00111da6;
        if (-1 < iVar5 * -4) goto LAB_001120cc;
        if (-1 < iVar5 * -8) goto LAB_001120d8;
        if (-1 < iVar5 * -0x10) goto LAB_001120d2;
        if (-1 < iVar5 * -0x20) goto LAB_001121fa;
        if (-1 < iVar5 * -0x40) goto LAB_001121f4;
        if (-1 < iVar5 * -0x80) goto LAB_0011246c;
        if (-1 < iVar5 * -0x100) goto LAB_00112466;
        if (-1 < iVar5 * -0x200) goto LAB_00112414;
        if (-1 < iVar5 * -0x400) goto LAB_0011240e;
        if (-1 < iVar5 * -0x800) goto LAB_00112408;
        if (-1 < iVar5 * -0x1000) goto LAB_0011285c;
        if (-1 < iVar5 * -0x2000) goto LAB_00112836;
        if (-1 < iVar5 * -0x4000) goto LAB_00112830;
        if (-1 < iVar5 * -0x8000) goto LAB_0011282a;
        if (-1 < iVar5 * -0x10000) goto LAB_00112e6c;
        uVar11 = (uint)((uVar31 & 0x4000) == 0);
      }
    }
    else {
      uVar11 = 0;
      if ((uVar31 & 0xffffc000) != 0) {
        if (iVar5 * -2 < 0) {
LAB_00111da6:
          uVar11 = 0x11;
        }
        else if (iVar5 * -4 < 0) {
LAB_001120cc:
          uVar11 = 0x10;
        }
        else if (iVar5 * -8 < 0) {
LAB_001120d8:
          uVar11 = 0xf;
        }
        else if (iVar5 * -0x10 < 0) {
LAB_001120d2:
          uVar11 = 0xe;
        }
        else if (iVar5 * -0x20 < 0) {
LAB_001121fa:
          uVar11 = 0xd;
        }
        else if (iVar5 * -0x40 < 0) {
LAB_001121f4:
          uVar11 = 0xc;
        }
        else if (iVar5 * -0x80 < 0) {
LAB_0011246c:
          uVar11 = 0xb;
        }
        else if (iVar5 * -0x100 < 0) {
LAB_00112466:
          uVar11 = 10;
        }
        else if (iVar5 * -0x200 < 0) {
LAB_00112414:
          uVar11 = 9;
        }
        else if (iVar5 * -0x400 < 0) {
LAB_0011240e:
          uVar11 = 8;
        }
        else if (iVar5 * -0x800 < 0) {
LAB_00112408:
          uVar11 = 7;
        }
        else if (iVar5 * -0x1000 < 0) {
LAB_0011285c:
          uVar11 = 6;
        }
        else if (iVar5 * -0x2000 < 0) {
LAB_00112836:
          uVar11 = 5;
        }
        else if (iVar5 * -0x4000 < 0) {
LAB_00112830:
          uVar11 = 4;
        }
        else if (iVar5 * -0x8000 < 0) {
LAB_0011282a:
          uVar11 = 3;
        }
        else if (iVar5 * -0x10000 < 0) {
LAB_00112e6c:
          uVar11 = 2;
        }
        else {
          uVar11 = (uint)(iVar5 * -0x20000) >> 0x1f;
        }
      }
    }
    uVar34 = uVar14;
    if (iVar6 != 0) {
      if ((uVar14 & 0x80000000) == 0x80000000) {
        if ((uVar14 & 0xffffc000) == 0xffffc000) {
          uVar34 = 0;
        }
        else {
          if (-1 < iVar6 * -2) goto LAB_00111b06;
          if (-1 < iVar6 * -4) goto LAB_001120f2;
          if (-1 < iVar6 * -8) goto LAB_001120ea;
          if (-1 < iVar6 * -0x10) goto LAB_001120fa;
          if (-1 < iVar6 * -0x20) goto LAB_001121e4;
          if (-1 < iVar6 * -0x40) goto LAB_001121ec;
          if (-1 < iVar6 * -0x80) goto LAB_00112458;
          if (-1 < iVar6 * -0x100) goto LAB_001124b2;
          if (-1 < iVar6 * -0x200) goto LAB_001124aa;
          if (-1 < iVar6 * -0x400) goto LAB_001124a2;
          if (-1 < iVar6 * -0x800) goto LAB_0011249a;
          if (-1 < iVar6 * -0x1000) goto LAB_00112892;
          if (-1 < iVar6 * -0x2000) goto LAB_0011288a;
          if (-1 < iVar6 * -0x4000) goto LAB_00112882;
          if (-1 < iVar6 * -0x8000) goto LAB_0011287a;
          if (-1 < iVar6 * -0x10000) goto LAB_00112f58;
          uVar34 = (uint)((uVar14 & 0x4000) == 0);
        }
      }
      else {
        uVar34 = 0;
        if ((uVar14 & 0xffffc000) != 0) {
          if (iVar6 * -2 < 0) {
LAB_00111b06:
            uVar34 = 0x11;
          }
          else if (iVar6 * -4 < 0) {
LAB_001120f2:
            uVar34 = 0x10;
          }
          else if (iVar6 * -8 < 0) {
LAB_001120ea:
            uVar34 = 0xf;
          }
          else if (iVar6 * -0x10 < 0) {
LAB_001120fa:
            uVar34 = 0xe;
          }
          else if (iVar6 * -0x20 < 0) {
LAB_001121e4:
            uVar34 = 0xd;
          }
          else if (iVar6 * -0x40 < 0) {
LAB_001121ec:
            uVar34 = 0xc;
          }
          else if (iVar6 * -0x80 < 0) {
LAB_00112458:
            uVar34 = 0xb;
          }
          else if (iVar6 * -0x100 < 0) {
LAB_001124b2:
            uVar34 = 10;
          }
          else if (iVar6 * -0x200 < 0) {
LAB_001124aa:
            uVar34 = 9;
          }
          else if (iVar6 * -0x400 < 0) {
LAB_001124a2:
            uVar34 = 8;
          }
          else if (iVar6 * -0x800 < 0) {
LAB_0011249a:
            uVar34 = 7;
          }
          else if (iVar6 * -0x1000 < 0) {
LAB_00112892:
            uVar34 = 6;
          }
          else if (iVar6 * -0x2000 < 0) {
LAB_0011288a:
            uVar34 = 5;
          }
          else if (iVar6 * -0x4000 < 0) {
LAB_00112882:
            uVar34 = 4;
          }
          else if (iVar6 * -0x8000 < 0) {
LAB_0011287a:
            uVar34 = 3;
          }
          else if (iVar6 * -0x10000 < 0) {
LAB_00112f58:
            uVar34 = 2;
          }
          else {
            uVar34 = (uint)(iVar6 * -0x20000) >> 0x1f;
          }
        }
      }
    }
    uVar21 = 0;
    if (uVar22 != 0) {
      if ((uVar22 & 0x80000000) == 0x80000000) {
        if ((uVar22 & 0xffffc000) == 0xffffc000) {
          uVar21 = 0;
        }
        else {
          if ((uVar22 & 0x40000000) == 0) goto LAB_00111f6a;
          if ((uVar22 & 0x20000000) == 0) goto LAB_001120e4;
          if ((uVar22 & 0x10000000) == 0) goto LAB_001120de;
          if ((uVar22 & 0x8000000) == 0) goto LAB_0011213c;
          if ((uVar22 & 0x4000000) == 0) goto LAB_00112200;
          if ((uVar22 & 0x2000000) == 0) goto LAB_00112212;
          if ((uVar22 & 0x1000000) == 0) goto LAB_0011241a;
          if ((uVar22 & 0x800000) == 0) goto LAB_001127b6;
          if ((uVar22 & 0x400000) == 0) goto LAB_001127b0;
          if ((uVar22 & 0x200000) == 0) goto LAB_001127aa;
          if ((uVar22 & 0x100000) == 0) goto LAB_001127a4;
          if ((uVar22 & 0x80000) == 0) goto LAB_00112b96;
          if ((uVar22 & 0x40000) == 0) goto LAB_00112b90;
          if ((uVar22 & 0x20000) == 0) goto LAB_00112b8a;
          if ((uVar22 & 0x10000) == 0) goto LAB_00112b84;
          if ((uVar22 & 0x8000) == 0) goto LAB_00112f60;
          uVar21 = (uint)((uVar22 & 0x4000) == 0);
        }
      }
      else {
        uVar21 = 0;
        if ((uVar22 & 0xffffc000) != 0) {
          if ((uVar22 & 0x40000000) == 0) {
            if ((uVar22 & 0x20000000) == 0) {
              if ((uVar22 & 0x10000000) == 0) {
                if ((uVar22 & 0x8000000) == 0) {
                  if ((uVar22 & 0x4000000) == 0) {
                    if ((uVar22 & 0x2000000) == 0) {
                      if ((uVar22 & 0x1000000) == 0) {
                        if ((uVar22 & 0x800000) == 0) {
                          if ((uVar22 & 0x400000) == 0) {
                            if ((uVar22 & 0x200000) == 0) {
                              if ((uVar22 & 0x100000) == 0) {
                                if ((uVar22 & 0x80000) == 0) {
                                  if ((uVar22 & 0x40000) == 0) {
                                    if ((uVar22 & 0x20000) == 0) {
                                      if ((uVar22 & 0x10000) == 0) {
                                        if ((uVar22 & 0x8000) == 0) {
                                          uVar21 = (uint)(*(int *)(param_3 + 0x14) * -0x20000) >>
                                                   0x1f;
                                        }
                                        else {
LAB_00112f60:
                                          uVar21 = 2;
                                        }
                                      }
                                      else {
LAB_00112b84:
                                        uVar21 = 3;
                                      }
                                    }
                                    else {
LAB_00112b8a:
                                      uVar21 = 4;
                                    }
                                  }
                                  else {
LAB_00112b90:
                                    uVar21 = 5;
                                  }
                                }
                                else {
LAB_00112b96:
                                  uVar21 = 6;
                                }
                              }
                              else {
LAB_001127a4:
                                uVar21 = 7;
                              }
                            }
                            else {
LAB_001127aa:
                              uVar21 = 8;
                            }
                          }
                          else {
LAB_001127b0:
                            uVar21 = 9;
                          }
                        }
                        else {
LAB_001127b6:
                          uVar21 = 10;
                        }
                      }
                      else {
LAB_0011241a:
                        uVar21 = 0xb;
                      }
                    }
                    else {
LAB_00112212:
                      uVar21 = 0xc;
                    }
                  }
                  else {
LAB_00112200:
                    uVar21 = 0xd;
                  }
                }
                else {
LAB_0011213c:
                  uVar21 = 0xe;
                }
              }
              else {
LAB_001120de:
                uVar21 = 0xf;
              }
            }
            else {
LAB_001120e4:
              uVar21 = 0x10;
            }
          }
          else {
LAB_00111f6a:
            uVar21 = 0x11;
          }
        }
      }
    }
    if ((int)uVar11 <= (int)uVar34) {
      uVar11 = uVar34;
    }
    if ((int)uVar21 <= (int)uVar11) {
      uVar21 = uVar11;
    }
    switch(uVar21) {
    case 0:
      uVar23 = 1;
      break;
    case 1:
      uVar23 = 2;
      break;
    case 2:
      uVar23 = 4;
      break;
    case 3:
      uVar23 = 8;
      break;
    case 4:
      uVar23 = 0x10;
      break;
    case 5:
      uVar23 = 0x20;
      break;
    case 6:
      uVar23 = 0x40;
      break;
    case 7:
      uVar23 = 0x80;
      break;
    case 8:
      uVar23 = 0x100;
      break;
    case 9:
      uVar23 = 0x200;
      break;
    case 10:
      uVar23 = 0x400;
      break;
    case 0xb:
      uVar23 = 0x800;
      break;
    case 0xc:
      uVar23 = 0x1000;
      break;
    case 0xd:
      uVar23 = 0x2000;
      break;
    case 0xe:
      uVar23 = 0x4000;
      break;
    case 0xf:
      uVar23 = 0x8000;
      break;
    case 0x10:
      uVar23 = 0x10000;
      break;
    case 0x11:
      uVar23 = 0x20000;
      break;
    case 0x12:
      uVar23 = 0x40000;
      break;
    case 0x13:
      uVar23 = 0x80000;
      break;
    case 0x14:
      uVar23 = 0x100000;
      break;
    case 0x15:
      uVar23 = 0x200000;
      break;
    case 0x16:
      uVar23 = 0x400000;
      break;
    case 0x17:
      uVar23 = 0x800000;
      break;
    case 0x18:
      uVar23 = 0x1000000;
      break;
    case 0x19:
      uVar23 = 0x2000000;
      break;
    case 0x1a:
      uVar23 = 0x4000000;
      break;
    case 0x1b:
      uVar23 = 0x8000000;
      break;
    case 0x1c:
      uVar23 = 0x10000000;
      break;
    case 0x1d:
      uVar23 = 0x20000000;
      break;
    default:
      uVar23 = 0x40000000;
    }
    uVar11 = __divsi3(uVar31,uVar23);
    uVar14 = __divsi3(uVar14,uVar23);
    uVar22 = __divsi3(uVar22,uVar23);
    uVar31 = 0;
    if (uVar24 != 0) {
      if ((uVar24 & 0x80000000) == 0x80000000) {
        if ((uVar24 & 0xffffc000) == 0xffffc000) {
          uVar31 = 0;
        }
        else {
          if ((uVar24 & 0x40000000) == 0) goto LAB_00111b00;
          if ((uVar24 & 0x20000000) == 0) goto LAB_00112154;
          if ((uVar24 & 0x10000000) == 0) goto LAB_0011214e;
          if ((uVar24 & 0x8000000) == 0) goto LAB_00112142;
          if ((uVar24 & 0x4000000) == 0) goto LAB_00112206;
          if ((uVar24 & 0x2000000) == 0) goto LAB_0011220c;
          if ((uVar24 & 0x1000000) == 0) goto LAB_00112460;
          if ((uVar24 & 0x800000) == 0) goto LAB_00112484;
          if ((uVar24 & 0x400000) == 0) goto LAB_0011247e;
          if ((uVar24 & 0x200000) == 0) goto LAB_00112478;
          if ((uVar24 & 0x100000) == 0) goto LAB_00112472;
          if ((uVar24 & 0x80000) == 0) goto LAB_00112874;
          if ((uVar24 & 0x40000) == 0) goto LAB_0011286e;
          if ((uVar24 & 0x20000) == 0) goto LAB_00112868;
          if ((uVar24 & 0x10000) == 0) goto LAB_00112862;
          if ((uVar24 & 0x8000) == 0) goto LAB_001130ec;
          uVar31 = (uint)((uVar24 & 0x4000) == 0);
        }
      }
      else {
        uVar31 = 0;
        if ((uVar24 & 0xffffc000) != 0) {
          if ((uVar24 & 0x40000000) == 0) {
            if ((uVar24 & 0x20000000) == 0) {
              if ((uVar24 & 0x10000000) == 0) {
                if ((uVar24 & 0x8000000) == 0) {
                  if ((uVar24 & 0x4000000) == 0) {
                    if ((uVar24 & 0x2000000) == 0) {
                      if ((uVar24 & 0x1000000) == 0) {
                        if ((uVar24 & 0x800000) == 0) {
                          if ((uVar24 & 0x400000) == 0) {
                            if ((uVar24 & 0x200000) == 0) {
                              if ((uVar24 & 0x100000) == 0) {
                                if ((uVar24 & 0x80000) == 0) {
                                  if ((uVar24 & 0x40000) == 0) {
                                    if ((uVar24 & 0x20000) == 0) {
                                      if ((uVar24 & 0x10000) == 0) {
                                        if ((uVar24 & 0x8000) == 0) {
                                          uVar31 = (uVar24 & 0x7fff) >> 0xe;
                                        }
                                        else {
LAB_001130ec:
                                          uVar31 = 2;
                                        }
                                      }
                                      else {
LAB_00112862:
                                        uVar31 = 3;
                                      }
                                    }
                                    else {
LAB_00112868:
                                      uVar31 = 4;
                                    }
                                  }
                                  else {
LAB_0011286e:
                                    uVar31 = 5;
                                  }
                                }
                                else {
LAB_00112874:
                                  uVar31 = 6;
                                }
                              }
                              else {
LAB_00112472:
                                uVar31 = 7;
                              }
                            }
                            else {
LAB_00112478:
                              uVar31 = 8;
                            }
                          }
                          else {
LAB_0011247e:
                            uVar31 = 9;
                          }
                        }
                        else {
LAB_00112484:
                          uVar31 = 10;
                        }
                      }
                      else {
LAB_00112460:
                        uVar31 = 0xb;
                      }
                    }
                    else {
LAB_0011220c:
                      uVar31 = 0xc;
                    }
                  }
                  else {
LAB_00112206:
                    uVar31 = 0xd;
                  }
                }
                else {
LAB_00112142:
                  uVar31 = 0xe;
                }
              }
              else {
LAB_0011214e:
                uVar31 = 0xf;
              }
            }
            else {
LAB_00112154:
              uVar31 = 0x10;
            }
          }
          else {
LAB_00111b00:
            uVar31 = 0x11;
          }
        }
      }
    }
    uVar34 = 0;
    if (uVar28 != 0) {
      if ((uVar28 & 0x80000000) == 0x80000000) {
        if ((uVar28 & 0xffffc000) == 0xffffc000) {
          uVar34 = 0;
        }
        else {
          if (-1 < (int)(uVar28 << 1)) goto LAB_00111b0e;
          if (-1 < (int)(uVar28 << 2)) goto LAB_00112008;
          if (-1 < (int)(uVar28 << 3)) goto LAB_00112000;
          if (-1 < (int)(uVar28 << 4)) goto LAB_00112134;
          if (-1 < (int)(uVar28 << 5)) goto LAB_00112218;
          if (-1 < (int)(uVar28 << 6)) goto LAB_00112220;
          if (-1 < (int)(uVar28 << 7)) goto LAB_001123fa;
          if (-1 < (int)(uVar28 << 8)) goto LAB_00112438;
          if (-1 < (int)(uVar28 << 9)) goto LAB_00112430;
          if (-1 < (int)(uVar28 << 10)) goto LAB_00112428;
          if (-1 < (int)(uVar28 << 0xb)) goto LAB_00112420;
          if (-1 < (int)(uVar28 << 0xc)) goto LAB_00112854;
          if (-1 < (int)(uVar28 << 0xd)) goto LAB_0011284c;
          if (-1 < (int)(uVar28 << 0xe)) goto LAB_00112844;
          if (-1 < (int)(uVar28 << 0xf)) goto LAB_0011283c;
          if (-1 < (int)(uVar28 << 0x10)) goto LAB_001130f2;
          uVar34 = (uint)((uVar28 & 0x4000) == 0);
        }
      }
      else {
        uVar34 = 0;
        if ((uVar28 & 0xffffc000) != 0) {
          if ((int)(uVar28 << 1) < 0) {
LAB_00111b0e:
            uVar34 = 0x11;
          }
          else if ((int)(uVar28 << 2) < 0) {
LAB_00112008:
            uVar34 = 0x10;
          }
          else if ((int)(uVar28 << 3) < 0) {
LAB_00112000:
            uVar34 = 0xf;
          }
          else if ((int)(uVar28 << 4) < 0) {
LAB_00112134:
            uVar34 = 0xe;
          }
          else if ((int)(uVar28 << 5) < 0) {
LAB_00112218:
            uVar34 = 0xd;
          }
          else if ((int)(uVar28 << 6) < 0) {
LAB_00112220:
            uVar34 = 0xc;
          }
          else if ((int)(uVar28 << 7) < 0) {
LAB_001123fa:
            uVar34 = 0xb;
          }
          else if ((int)(uVar28 << 8) < 0) {
LAB_00112438:
            uVar34 = 10;
          }
          else if ((int)(uVar28 << 9) < 0) {
LAB_00112430:
            uVar34 = 9;
          }
          else if ((int)(uVar28 << 10) < 0) {
LAB_00112428:
            uVar34 = 8;
          }
          else if ((int)(uVar28 << 0xb) < 0) {
LAB_00112420:
            uVar34 = 7;
          }
          else if ((int)(uVar28 << 0xc) < 0) {
LAB_00112854:
            uVar34 = 6;
          }
          else if ((int)(uVar28 << 0xd) < 0) {
LAB_0011284c:
            uVar34 = 5;
          }
          else if ((int)(uVar28 << 0xe) < 0) {
LAB_00112844:
            uVar34 = 4;
          }
          else if ((int)(uVar28 << 0xf) < 0) {
LAB_0011283c:
            uVar34 = 3;
          }
          else if ((int)(uVar28 << 0x10) < 0) {
LAB_001130f2:
            uVar34 = 2;
          }
          else {
            uVar34 = (uVar28 & 0x7fff) >> 0xe;
          }
        }
      }
    }
    uVar21 = 0;
    if (uVar25 != 0) {
      if ((uVar25 & 0x80000000) == 0x80000000) {
        if ((uVar25 & 0xffffc000) == 0xffffc000) {
          uVar21 = 0;
        }
        else {
          if (-1 < (int)(uVar25 << 1)) goto LAB_00111f70;
          if (-1 < (int)(uVar25 << 2)) goto LAB_00111ff4;
          if (-1 < (int)(uVar25 << 3)) goto LAB_00111fee;
          if (-1 < (int)(uVar25 << 4)) goto LAB_00111ffa;
          if (-1 < (int)(uVar25 << 5)) goto LAB_00112194;
          if (-1 < (int)(uVar25 << 6)) goto LAB_00112228;
          if (-1 < (int)(uVar25 << 7)) goto LAB_00112402;
          if (-1 < (int)(uVar25 << 8)) goto LAB_00112702;
          if (-1 < (int)(uVar25 << 9)) goto LAB_001126fc;
          if (-1 < (int)(uVar25 << 10)) goto LAB_001126f6;
          if (-1 < (int)(uVar25 << 0xb)) goto LAB_001126f0;
          if (-1 < (int)(uVar25 << 0xc)) goto LAB_00112b1c;
          if (-1 < (int)(uVar25 << 0xd)) goto LAB_00112b16;
          if (-1 < (int)(uVar25 << 0xe)) goto LAB_00112b10;
          if (-1 < (int)(uVar25 << 0xf)) goto LAB_00112b0a;
          if (-1 < (int)(uVar25 << 0x10)) goto LAB_001130fa;
          uVar21 = (uint)((uVar25 & 0x4000) == 0);
        }
      }
      else {
        uVar21 = 0;
        if ((uVar25 & 0xffffc000) != 0) {
          if ((int)(uVar25 << 1) < 0) {
LAB_00111f70:
            uVar21 = 0x11;
          }
          else if ((int)(uVar25 << 2) < 0) {
LAB_00111ff4:
            uVar21 = 0x10;
          }
          else if ((int)(uVar25 << 3) < 0) {
LAB_00111fee:
            uVar21 = 0xf;
          }
          else if ((int)(uVar25 << 4) < 0) {
LAB_00111ffa:
            uVar21 = 0xe;
          }
          else if ((int)(uVar25 << 5) < 0) {
LAB_00112194:
            uVar21 = 0xd;
          }
          else if ((int)(uVar25 << 6) < 0) {
LAB_00112228:
            uVar21 = 0xc;
          }
          else if ((int)(uVar25 << 7) < 0) {
LAB_00112402:
            uVar21 = 0xb;
          }
          else if ((int)(uVar25 << 8) < 0) {
LAB_00112702:
            uVar21 = 10;
          }
          else if ((int)(uVar25 << 9) < 0) {
LAB_001126fc:
            uVar21 = 9;
          }
          else if ((int)(uVar25 << 10) < 0) {
LAB_001126f6:
            uVar21 = 8;
          }
          else if ((int)(uVar25 << 0xb) < 0) {
LAB_001126f0:
            uVar21 = 7;
          }
          else if ((int)(uVar25 << 0xc) < 0) {
LAB_00112b1c:
            uVar21 = 6;
          }
          else if ((int)(uVar25 << 0xd) < 0) {
LAB_00112b16:
            uVar21 = 5;
          }
          else if ((int)(uVar25 << 0xe) < 0) {
LAB_00112b10:
            uVar21 = 4;
          }
          else if ((int)(uVar25 << 0xf) < 0) {
LAB_00112b0a:
            uVar21 = 3;
          }
          else if ((int)(uVar25 << 0x10) < 0) {
LAB_001130fa:
            uVar21 = 2;
          }
          else {
            uVar21 = (uVar25 & 0x7fff) >> 0xe;
          }
        }
      }
    }
    if (uVar34 < uVar31) {
      uVar34 = uVar31;
    }
    if (uVar21 <= uVar34) {
      uVar21 = uVar34;
    }
    switch(uVar21) {
    case 0:
      uVar23 = 1;
      break;
    case 1:
      uVar23 = 2;
      break;
    case 2:
      uVar23 = 4;
      break;
    case 3:
      uVar23 = 8;
      break;
    case 4:
      uVar23 = 0x10;
      break;
    case 5:
      uVar23 = 0x20;
      break;
    case 6:
      uVar23 = 0x40;
      break;
    case 7:
      uVar23 = 0x80;
      break;
    case 8:
      uVar23 = 0x100;
      break;
    case 9:
      uVar23 = 0x200;
      break;
    case 10:
      uVar23 = 0x400;
      break;
    case 0xb:
      uVar23 = 0x800;
      break;
    case 0xc:
      uVar23 = 0x1000;
      break;
    case 0xd:
      uVar23 = 0x2000;
      break;
    case 0xe:
      uVar23 = 0x4000;
      break;
    case 0xf:
      uVar23 = 0x8000;
      break;
    case 0x10:
      uVar23 = 0x10000;
      break;
    case 0x11:
      uVar23 = 0x20000;
      break;
    case 0x12:
      uVar23 = 0x40000;
      break;
    case 0x13:
      uVar23 = 0x80000;
      break;
    case 0x14:
      uVar23 = 0x100000;
      break;
    case 0x15:
      uVar23 = 0x200000;
      break;
    case 0x16:
      uVar23 = 0x400000;
      break;
    case 0x17:
      uVar23 = 0x800000;
      break;
    case 0x18:
      uVar23 = 0x1000000;
      break;
    case 0x19:
      uVar23 = 0x2000000;
      break;
    case 0x1a:
      uVar23 = 0x4000000;
      break;
    case 0x1b:
      uVar23 = 0x8000000;
      break;
    case 0x1c:
      uVar23 = 0x10000000;
      break;
    case 0x1d:
      uVar23 = 0x20000000;
      break;
    default:
      uVar23 = 0x40000000;
    }
    uVar24 = __divsi3(uVar24,uVar23);
    uVar28 = __divsi3(uVar28,uVar23);
    uVar25 = __divsi3(uVar25,uVar23);
    uVar31 = uVar14;
    if (uVar11 == 0) {
      if (uVar14 != 0) {
        uVar34 = 0;
LAB_001089b6:
        if ((uVar14 & 0x80000000) == 0x80000000) {
          if ((uVar14 & 0xffffc000) == 0xffffc000) {
            uVar31 = 0;
          }
          else {
            if (-1 < (int)(uVar14 << 1)) goto LAB_00112148;
            if (-1 < (int)(uVar14 << 2)) goto LAB_00112084;
            if (-1 < (int)(uVar14 << 3)) goto LAB_0011225c;
            if (-1 < (int)(uVar14 << 4)) goto LAB_00112262;
            if (-1 < (int)(uVar14 << 5)) goto LAB_00112274;
            if (-1 < (int)(uVar14 << 6)) goto LAB_00112824;
            if (-1 < (int)(uVar14 << 7)) goto LAB_001123f4;
            if (-1 < (int)(uVar14 << 8)) goto LAB_0011279e;
            if (-1 < (int)(uVar14 << 9)) goto LAB_00112798;
            if (-1 < (int)(uVar14 << 10)) goto LAB_00112b9c;
            if (-1 < (int)(uVar14 << 0xb)) goto LAB_00112a24;
            if (-1 < (int)(uVar14 << 0xc)) goto LAB_00112b30;
            if (-1 < (int)(uVar14 << 0xd)) goto LAB_00112b2a;
            if (-1 < (int)(uVar14 << 0xe)) goto LAB_00112f20;
            if (-1 < (int)(uVar14 << 0xf)) goto LAB_00112f1a;
            if (-1 < (int)(uVar14 << 0x10)) goto LAB_001130da;
            uVar31 = (uint)((uVar14 & 0x4000) == 0);
          }
        }
        else {
          uVar31 = 0;
          if ((uVar14 & 0xffffc000) != 0) {
            if ((int)(uVar14 << 1) < 0) {
LAB_00112148:
              uVar31 = 0x11;
            }
            else if ((int)(uVar14 << 2) < 0) {
LAB_00112084:
              uVar31 = 0x10;
            }
            else if ((int)(uVar14 << 3) < 0) {
LAB_0011225c:
              uVar31 = 0xf;
            }
            else if ((int)(uVar14 << 4) < 0) {
LAB_00112262:
              uVar31 = 0xe;
            }
            else if ((int)(uVar14 << 5) < 0) {
LAB_00112274:
              uVar31 = 0xd;
            }
            else if ((int)(uVar14 << 6) < 0) {
LAB_00112824:
              uVar31 = 0xc;
            }
            else if ((int)(uVar14 << 7) < 0) {
LAB_001123f4:
              uVar31 = 0xb;
            }
            else if ((int)(uVar14 << 8) < 0) {
LAB_0011279e:
              uVar31 = 10;
            }
            else if ((int)(uVar14 << 9) < 0) {
LAB_00112798:
              uVar31 = 9;
            }
            else if ((int)(uVar14 << 10) < 0) {
LAB_00112b9c:
              uVar31 = 8;
            }
            else if ((int)(uVar14 << 0xb) < 0) {
LAB_00112a24:
              uVar31 = 7;
            }
            else if ((int)(uVar14 << 0xc) < 0) {
LAB_00112b30:
              uVar31 = 6;
            }
            else if ((int)(uVar14 << 0xd) < 0) {
LAB_00112b2a:
              uVar31 = 5;
            }
            else if ((int)(uVar14 << 0xe) < 0) {
LAB_00112f20:
              uVar31 = 4;
            }
            else if ((int)(uVar14 << 0xf) < 0) {
LAB_00112f1a:
              uVar31 = 3;
            }
            else if ((int)(uVar14 << 0x10) < 0) {
LAB_001130da:
              uVar31 = 2;
            }
            else {
              uVar31 = (uVar14 & 0x7fff) >> 0xe;
            }
          }
        }
        goto LAB_001084f2;
      }
      uVar34 = uVar14;
      local_74 = uVar22;
      if (uVar22 != 0) goto LAB_0010728c;
    }
    else {
      if ((uVar11 & 0x80000000) == 0x80000000) {
        if ((uVar11 & 0xffffc000) == 0xffffc000) {
          uVar34 = 0;
        }
        else {
          if ((uVar11 & 0x40000000) == 0) goto LAB_0011207e;
          if ((uVar11 & 0x20000000) == 0) goto LAB_00112078;
          if ((uVar11 & 0x10000000) == 0) goto LAB_0011226e;
          if ((uVar11 & 0x8000000) == 0) goto LAB_00112268;
          if ((uVar11 & 0x4000000) == 0) goto LAB_001127d4;
          if ((uVar11 & 0x2000000) == 0) goto LAB_001127ce;
          if ((uVar11 & 0x1000000) == 0) goto LAB_001127c8;
          if ((uVar11 & 0x800000) == 0) goto LAB_001127c2;
          if ((uVar11 & 0x400000) == 0) goto LAB_001127bc;
          if ((uVar11 & 0x200000) == 0) goto LAB_00112b6c;
          if ((uVar11 & 0x100000) == 0) goto LAB_00112b78;
          if ((uVar11 & 0x80000) == 0) goto LAB_00112b72;
          if ((uVar11 & 0x40000) == 0) goto LAB_00112b7e;
          if ((uVar11 & 0x20000) == 0) goto LAB_00112ece;
          if ((uVar11 & 0x10000) == 0) goto LAB_00112eda;
          if ((uVar11 & 0x8000) == 0) goto LAB_00112ed4;
          uVar34 = (uint)((uVar11 & 0x4000) == 0);
        }
      }
      else {
        uVar34 = 0;
        if ((uVar11 & 0xffffc000) != 0) {
          if ((uVar11 & 0x40000000) == 0) {
            if ((uVar11 & 0x20000000) == 0) {
              if ((uVar11 & 0x10000000) == 0) {
                if ((uVar11 & 0x8000000) == 0) {
                  if ((uVar11 & 0x4000000) == 0) {
                    if ((uVar11 & 0x2000000) == 0) {
                      if ((uVar11 & 0x1000000) == 0) {
                        if ((uVar11 & 0x800000) == 0) {
                          if ((uVar11 & 0x400000) == 0) {
                            if ((uVar11 & 0x200000) == 0) {
                              if ((uVar11 & 0x100000) == 0) {
                                if ((uVar11 & 0x80000) == 0) {
                                  if ((uVar11 & 0x40000) == 0) {
                                    if ((uVar11 & 0x20000) == 0) {
                                      if ((uVar11 & 0x10000) == 0) {
                                        if ((uVar11 & 0x8000) == 0) {
                                          uVar34 = (uVar11 & 0x7fff) >> 0xe;
                                        }
                                        else {
LAB_00112ed4:
                                          uVar34 = 2;
                                        }
                                      }
                                      else {
LAB_00112eda:
                                        uVar34 = 3;
                                      }
                                    }
                                    else {
LAB_00112ece:
                                      uVar34 = 4;
                                    }
                                  }
                                  else {
LAB_00112b7e:
                                    uVar34 = 5;
                                  }
                                }
                                else {
LAB_00112b72:
                                  uVar34 = 6;
                                }
                              }
                              else {
LAB_00112b78:
                                uVar34 = 7;
                              }
                            }
                            else {
LAB_00112b6c:
                              uVar34 = 8;
                            }
                          }
                          else {
LAB_001127bc:
                            uVar34 = 9;
                          }
                        }
                        else {
LAB_001127c2:
                          uVar34 = 10;
                        }
                      }
                      else {
LAB_001127c8:
                        uVar34 = 0xb;
                      }
                    }
                    else {
LAB_001127ce:
                      uVar34 = 0xc;
                    }
                  }
                  else {
LAB_001127d4:
                    uVar34 = 0xd;
                  }
                }
                else {
LAB_00112268:
                  uVar34 = 0xe;
                }
              }
              else {
LAB_0011226e:
                uVar34 = 0xf;
              }
            }
            else {
LAB_00112078:
              uVar34 = 0x10;
            }
          }
          else {
LAB_0011207e:
            uVar34 = 0x11;
          }
        }
      }
      if (uVar14 != 0) goto LAB_001089b6;
LAB_001084f2:
      uVar21 = 0;
      if (uVar22 != 0) {
LAB_0010728c:
        if ((uVar22 & 0x80000000) == 0x80000000) {
          if ((uVar22 & 0xffffc000) == 0xffffc000) {
            uVar21 = 0;
          }
          else {
            if (-1 < (int)(uVar22 << 1)) goto LAB_001120b2;
            if (-1 < (int)(uVar22 << 2)) goto LAB_001120aa;
            if (-1 < (int)(uVar22 << 3)) goto LAB_00112254;
            if (-1 < (int)(uVar22 << 4)) goto LAB_0011224c;
            if (-1 < (int)(uVar22 << 5)) goto LAB_001126e0;
            if (-1 < (int)(uVar22 << 6)) goto LAB_001126d8;
            if (-1 < (int)(uVar22 << 7)) goto LAB_001126d0;
            if (-1 < (int)(uVar22 << 8)) goto LAB_001126c8;
            if (-1 < (int)(uVar22 << 9)) goto LAB_001126e8;
            if (-1 < (int)(uVar22 << 10)) goto LAB_00112bce;
            if (-1 < (int)(uVar22 << 0xb)) goto LAB_00112bde;
            if (-1 < (int)(uVar22 << 0xc)) goto LAB_00112bd6;
            if (-1 < (int)(uVar22 << 0xd)) goto LAB_00112be6;
            if (-1 < (int)(uVar22 << 0xe)) goto LAB_00112e72;
            if (-1 < (int)(uVar22 << 0xf)) goto LAB_00112e82;
            if (-1 < (int)(uVar22 << 0x10)) goto LAB_00112e7a;
            uVar21 = (uint)((uVar22 & 0x4000) == 0);
          }
        }
        else {
          uVar21 = 0;
          if ((uVar22 & 0xffffc000) != 0) {
            if ((int)(uVar22 << 1) < 0) {
LAB_001120b2:
              uVar21 = 0x11;
            }
            else if ((int)(uVar22 << 2) < 0) {
LAB_001120aa:
              uVar21 = 0x10;
            }
            else if ((int)(uVar22 << 3) < 0) {
LAB_00112254:
              uVar21 = 0xf;
            }
            else if ((int)(uVar22 << 4) < 0) {
LAB_0011224c:
              uVar21 = 0xe;
            }
            else if ((int)(uVar22 << 5) < 0) {
LAB_001126e0:
              uVar21 = 0xd;
            }
            else if ((int)(uVar22 << 6) < 0) {
LAB_001126d8:
              uVar21 = 0xc;
            }
            else if ((int)(uVar22 << 7) < 0) {
LAB_001126d0:
              uVar21 = 0xb;
            }
            else if ((int)(uVar22 << 8) < 0) {
LAB_001126c8:
              uVar21 = 10;
            }
            else if ((int)(uVar22 << 9) < 0) {
LAB_001126e8:
              uVar21 = 9;
            }
            else if ((int)(uVar22 << 10) < 0) {
LAB_00112bce:
              uVar21 = 8;
            }
            else if ((int)(uVar22 << 0xb) < 0) {
LAB_00112bde:
              uVar21 = 7;
            }
            else if ((int)(uVar22 << 0xc) < 0) {
LAB_00112bd6:
              uVar21 = 6;
            }
            else if ((int)(uVar22 << 0xd) < 0) {
LAB_00112be6:
              uVar21 = 5;
            }
            else if ((int)(uVar22 << 0xe) < 0) {
LAB_00112e72:
              uVar21 = 4;
            }
            else if ((int)(uVar22 << 0xf) < 0) {
LAB_00112e82:
              uVar21 = 3;
            }
            else if ((int)(uVar22 << 0x10) < 0) {
LAB_00112e7a:
              uVar21 = 2;
            }
            else {
              uVar21 = (uVar22 & 0x7fff) >> 0xe;
            }
          }
        }
      }
      if ((int)uVar31 < (int)uVar34) {
        uVar31 = uVar34;
      }
      if ((int)uVar21 <= (int)uVar31) {
        uVar21 = uVar31;
      }
      switch(uVar21) {
      case 0:
        local_80 = 1;
        uVar23 = 1;
        break;
      case 1:
        uVar23 = 2;
        local_80 = 2;
        break;
      case 2:
        local_80 = 4;
        uVar23 = 4;
        break;
      case 3:
        local_80 = 8;
        uVar23 = 8;
        break;
      case 4:
        local_80 = 0x10;
        uVar23 = 0x10;
        break;
      case 5:
        local_80 = 0x20;
        uVar23 = 0x20;
        break;
      case 6:
        uVar23 = 0x40;
        local_80 = 0x40;
        break;
      case 7:
        local_80 = 0x80;
        uVar23 = 0x80;
        break;
      case 8:
        local_80 = 0x100;
        uVar23 = 0x100;
        break;
      case 9:
        local_80 = 0x200;
        uVar23 = 0x200;
        break;
      case 10:
        local_80 = 0x400;
        uVar23 = 0x400;
        break;
      case 0xb:
        local_80 = 0x800;
        uVar23 = 0x800;
        break;
      case 0xc:
        uVar23 = 0x1000;
        local_80 = 0x1000;
        break;
      case 0xd:
        local_80 = 0x2000;
        uVar23 = 0x2000;
        break;
      case 0xe:
        local_80 = 0x4000;
        uVar23 = 0x4000;
        break;
      case 0xf:
        local_80 = 0x8000;
        uVar23 = 0x8000;
        break;
      case 0x10:
        local_80 = 0x10000;
        uVar23 = 0x10000;
        break;
      case 0x11:
        local_80 = 0x20000;
        uVar23 = 0x20000;
        break;
      case 0x12:
        uVar23 = 0x40000;
        local_80 = 0x40000;
        break;
      case 0x13:
        local_80 = 0x80000;
        uVar23 = 0x80000;
        break;
      case 0x14:
        local_80 = 0x100000;
        uVar23 = 0x100000;
        break;
      case 0x15:
        local_80 = 0x200000;
        uVar23 = 0x200000;
        break;
      case 0x16:
        local_80 = 0x400000;
        uVar23 = 0x400000;
        break;
      case 0x17:
        local_80 = 0x800000;
        uVar23 = 0x800000;
        break;
      case 0x18:
        uVar23 = 0x1000000;
        local_80 = 0x1000000;
        break;
      case 0x19:
        local_80 = 0x2000000;
        uVar23 = 0x2000000;
        break;
      case 0x1a:
        local_80 = 0x4000000;
        uVar23 = 0x4000000;
        break;
      case 0x1b:
        local_80 = 0x8000000;
        uVar23 = 0x8000000;
        break;
      case 0x1c:
        local_80 = 0x10000000;
        uVar23 = 0x10000000;
        break;
      case 0x1d:
        local_80 = 0x20000000;
        uVar23 = 0x20000000;
        break;
      case 0x1e:
        uVar23 = 0x40000000;
        local_80 = 0x40000000;
        break;
      default:
        uVar23 = 0x40000000;
        local_80 = 0x40000000;
      }
      iVar5 = __divsi3(uVar11,uVar23);
      iVar6 = __divsi3(uVar14,local_80);
      iVar7 = __divsi3(uVar22,local_80);
      iVar5 = iVar7 * iVar7 + iVar5 * iVar5 + iVar6 * iVar6;
      if (iVar5 < 1) {
        iVar6 = 0;
      }
      else {
        iVar7 = iVar5;
        if (iVar5 == 0x7fffffff) {
          iVar5 = 0x7ffffffe;
          iVar7 = 0x7ffffffe;
        }
        do {
          iVar6 = __divsi3(iVar7,iVar5);
          iVar15 = (iVar5 + iVar6) / 2;
          iVar6 = iVar5;
          if (iVar5 <= iVar15) break;
          iVar5 = __divsi3(iVar7,iVar15);
          iVar5 = (iVar15 + iVar5) / 2;
          iVar6 = iVar15;
          if (iVar15 <= iVar5) break;
          iVar6 = __divsi3(iVar7,iVar5);
          iVar15 = (iVar5 + iVar6) / 2;
          iVar6 = iVar5;
          if (iVar5 <= iVar15) break;
          iVar5 = __divsi3(iVar7);
          iVar5 = (iVar15 + iVar5) / 2;
          iVar6 = iVar15;
          if (iVar15 <= iVar5) break;
          iVar6 = __divsi3(iVar7,iVar5);
          iVar15 = (iVar5 + iVar6) / 2;
          iVar6 = iVar5;
          if (iVar5 <= iVar15) break;
          iVar5 = __divsi3(iVar7,iVar15);
          iVar5 = (iVar15 + iVar5) / 2;
          iVar6 = iVar15;
          if (iVar15 <= iVar5) break;
          iVar6 = __divsi3(iVar7,iVar5);
          iVar15 = (iVar5 + iVar6) / 2;
          iVar6 = iVar5;
          if (iVar5 <= iVar15) break;
          iVar5 = __divsi3(iVar7,iVar15);
          iVar5 = (iVar5 + iVar15) / 2;
          iVar6 = iVar15;
        } while (iVar5 < iVar15);
      }
      local_74 = uVar14;
      if ((int)uVar14 < (int)uVar11) {
        local_74 = uVar11;
      }
      if ((int)local_74 < (int)uVar22) {
        local_74 = uVar22;
      }
      if ((int)local_74 < local_80 * iVar6) {
        local_74 = local_80 * iVar6;
      }
    }
    uVar31 = uVar28;
    if (uVar24 == 0) {
      if (uVar28 != 0) {
        uVar34 = 0;
        goto LAB_00108936;
      }
      iVar5 = 0;
      uVar34 = uVar28;
      if (uVar25 != 0) goto LAB_0010774a;
      goto LAB_00106c18;
    }
    if ((uVar24 & 0x80000000) == 0x80000000) {
      if ((uVar24 & 0xffffc000) == 0xffffc000) {
        uVar34 = 0;
      }
      else {
        if (-1 < (int)(uVar24 << 1)) goto LAB_001120c0;
        if (-1 < (int)(uVar24 << 2)) goto LAB_001120ba;
        if (-1 < (int)(uVar24 << 3)) goto LAB_00112246;
        if (-1 < (int)(uVar24 << 4)) goto LAB_00112240;
        if (-1 < (int)(uVar24 << 5)) goto LAB_00112732;
        if (-1 < (int)(uVar24 << 6)) goto LAB_0011272c;
        if (-1 < (int)(uVar24 << 7)) goto LAB_00112726;
        if (-1 < (int)(uVar24 << 8)) goto LAB_00112720;
        if (-1 < (int)(uVar24 << 9)) goto LAB_00112738;
        if (-1 < (int)(uVar24 << 10)) goto LAB_00112ba2;
        if (-1 < (int)(uVar24 << 0xb)) goto LAB_00112bae;
        if (-1 < (int)(uVar24 << 0xc)) goto LAB_00112ba8;
        if (-1 < (int)(uVar24 << 0xd)) goto LAB_00112bb4;
        if (-1 < (int)(uVar24 << 0xe)) goto LAB_00112ec8;
        if (-1 < (int)(uVar24 << 0xf)) goto LAB_00112eb0;
        if (-1 < (int)(uVar24 << 0x10)) goto LAB_00112eaa;
        uVar34 = (uint)((uVar24 & 0x4000) == 0);
      }
    }
    else {
      uVar34 = 0;
      if ((uVar24 & 0xffffc000) != 0) {
        if ((int)(uVar24 << 1) < 0) {
LAB_001120c0:
          uVar34 = 0x11;
        }
        else if ((int)(uVar24 << 2) < 0) {
LAB_001120ba:
          uVar34 = 0x10;
        }
        else if ((int)(uVar24 << 3) < 0) {
LAB_00112246:
          uVar34 = 0xf;
        }
        else if ((int)(uVar24 << 4) < 0) {
LAB_00112240:
          uVar34 = 0xe;
        }
        else if ((int)(uVar24 << 5) < 0) {
LAB_00112732:
          uVar34 = 0xd;
        }
        else if ((int)(uVar24 << 6) < 0) {
LAB_0011272c:
          uVar34 = 0xc;
        }
        else if ((int)(uVar24 << 7) < 0) {
LAB_00112726:
          uVar34 = 0xb;
        }
        else if ((int)(uVar24 << 8) < 0) {
LAB_00112720:
          uVar34 = 10;
        }
        else if ((int)(uVar24 << 9) < 0) {
LAB_00112738:
          uVar34 = 9;
        }
        else if ((int)(uVar24 << 10) < 0) {
LAB_00112ba2:
          uVar34 = 8;
        }
        else if ((int)(uVar24 << 0xb) < 0) {
LAB_00112bae:
          uVar34 = 7;
        }
        else if ((int)(uVar24 << 0xc) < 0) {
LAB_00112ba8:
          uVar34 = 6;
        }
        else if ((int)(uVar24 << 0xd) < 0) {
LAB_00112bb4:
          uVar34 = 5;
        }
        else if ((int)(uVar24 << 0xe) < 0) {
LAB_00112ec8:
          uVar34 = 4;
        }
        else if ((int)(uVar24 << 0xf) < 0) {
LAB_00112eb0:
          uVar34 = 3;
        }
        else if ((int)(uVar24 << 0x10) < 0) {
LAB_00112eaa:
          uVar34 = 2;
        }
        else {
          uVar34 = (uVar24 & 0x7fff) >> 0xe;
        }
      }
    }
    if (uVar28 != 0) {
LAB_00108936:
      if ((uVar28 & 0x80000000) == 0x80000000) {
        if ((uVar28 & 0xffffc000) == 0xffffc000) {
          uVar31 = 0;
        }
        else {
          if (-1 < (int)(uVar28 << 1)) goto LAB_0011218c;
          if (-1 < (int)(uVar28 << 2)) goto LAB_0011215a;
          if (-1 < (int)(uVar28 << 3)) goto LAB_001121d4;
          if (-1 < (int)(uVar28 << 4)) goto LAB_001121dc;
          if (-1 < (int)(uVar28 << 5)) goto LAB_00112450;
          if (-1 < (int)(uVar28 << 6)) goto LAB_00112448;
          if (-1 < (int)(uVar28 << 7)) goto LAB_00112440;
          if (-1 < (int)(uVar28 << 8)) goto LAB_0011264a;
          if (-1 < (int)(uVar28 << 9)) goto LAB_00112642;
          if (-1 < (int)(uVar28 << 10)) goto LAB_00112c26;
          if (-1 < (int)(uVar28 << 0xb)) goto LAB_00112c1e;
          if (-1 < (int)(uVar28 << 0xc)) goto LAB_00112c16;
          if (-1 < (int)(uVar28 << 0xd)) goto LAB_00112c0e;
          if (-1 < (int)(uVar28 << 0xe)) goto LAB_00112c44;
          if (-1 < (int)(uVar28 << 0xf)) goto LAB_00112c3c;
          if (-1 < (int)(uVar28 << 0x10)) goto LAB_00112f50;
          uVar31 = (uint)((uVar28 & 0x4000) == 0);
        }
      }
      else {
        uVar31 = 0;
        if ((uVar28 & 0xffffc000) != 0) {
          if ((int)(uVar28 << 1) < 0) {
LAB_0011218c:
            uVar31 = 0x11;
          }
          else if ((int)(uVar28 << 2) < 0) {
LAB_0011215a:
            uVar31 = 0x10;
          }
          else if ((int)(uVar28 << 3) < 0) {
LAB_001121d4:
            uVar31 = 0xf;
          }
          else if ((int)(uVar28 << 4) < 0) {
LAB_001121dc:
            uVar31 = 0xe;
          }
          else if ((int)(uVar28 << 5) < 0) {
LAB_00112450:
            uVar31 = 0xd;
          }
          else if ((int)(uVar28 << 6) < 0) {
LAB_00112448:
            uVar31 = 0xc;
          }
          else if ((int)(uVar28 << 7) < 0) {
LAB_00112440:
            uVar31 = 0xb;
          }
          else if ((int)(uVar28 << 8) < 0) {
LAB_0011264a:
            uVar31 = 10;
          }
          else if ((int)(uVar28 << 9) < 0) {
LAB_00112642:
            uVar31 = 9;
          }
          else if ((int)(uVar28 << 10) < 0) {
LAB_00112c26:
            uVar31 = 8;
          }
          else if ((int)(uVar28 << 0xb) < 0) {
LAB_00112c1e:
            uVar31 = 7;
          }
          else if ((int)(uVar28 << 0xc) < 0) {
LAB_00112c16:
            uVar31 = 6;
          }
          else if ((int)(uVar28 << 0xd) < 0) {
LAB_00112c0e:
            uVar31 = 5;
          }
          else if ((int)(uVar28 << 0xe) < 0) {
LAB_00112c44:
            uVar31 = 4;
          }
          else if ((int)(uVar28 << 0xf) < 0) {
LAB_00112c3c:
            uVar31 = 3;
          }
          else if ((int)(uVar28 << 0x10) < 0) {
LAB_00112f50:
            uVar31 = 2;
          }
          else {
            uVar31 = (uVar28 & 0x7fff) >> 0xe;
          }
        }
      }
    }
    uVar21 = 0;
    if (uVar25 != 0) {
LAB_0010774a:
      if ((uVar25 & 0x80000000) == 0x80000000) {
        if ((uVar25 & 0xffffc000) == 0xffffc000) {
          uVar21 = 0;
        }
        else {
          if (-1 < (int)(uVar25 << 1)) goto LAB_0011216a;
          if (-1 < (int)(uVar25 << 2)) goto LAB_00112162;
          if (-1 < (int)(uVar25 << 3)) goto LAB_001121b4;
          if (-1 < (int)(uVar25 << 4)) goto LAB_001121ac;
          if (-1 < (int)(uVar25 << 5)) goto LAB_00112756;
          if (-1 < (int)(uVar25 << 6)) goto LAB_0011274e;
          if (-1 < (int)(uVar25 << 7)) goto LAB_00112746;
          if (-1 < (int)(uVar25 << 8)) goto LAB_0011273e;
          if (-1 < (int)(uVar25 << 9)) goto LAB_0011275e;
          if (-1 < (int)(uVar25 << 10)) goto LAB_00112a76;
          if (-1 < (int)(uVar25 << 0xb)) goto LAB_00112b3e;
          if (-1 < (int)(uVar25 << 0xc)) goto LAB_00112b36;
          if (-1 < (int)(uVar25 << 0xd)) goto LAB_00112b22;
          if (-1 < (int)(uVar25 << 0xe)) goto LAB_00112f2c;
          if (-1 < (int)(uVar25 << 0xf)) goto LAB_00112f3c;
          if (-1 < (int)(uVar25 << 0x10)) goto LAB_00112f34;
          uVar21 = (uint)((uVar25 & 0x4000) == 0);
        }
      }
      else {
        uVar21 = 0;
        if ((uVar25 & 0xffffc000) != 0) {
          if ((int)(uVar25 << 1) < 0) {
LAB_0011216a:
            uVar21 = 0x11;
          }
          else if ((int)(uVar25 << 2) < 0) {
LAB_00112162:
            uVar21 = 0x10;
          }
          else if ((int)(uVar25 << 3) < 0) {
LAB_001121b4:
            uVar21 = 0xf;
          }
          else if ((int)(uVar25 << 4) < 0) {
LAB_001121ac:
            uVar21 = 0xe;
          }
          else if ((int)(uVar25 << 5) < 0) {
LAB_00112756:
            uVar21 = 0xd;
          }
          else if ((int)(uVar25 << 6) < 0) {
LAB_0011274e:
            uVar21 = 0xc;
          }
          else if ((int)(uVar25 << 7) < 0) {
LAB_00112746:
            uVar21 = 0xb;
          }
          else if ((int)(uVar25 << 8) < 0) {
LAB_0011273e:
            uVar21 = 10;
          }
          else if ((int)(uVar25 << 9) < 0) {
LAB_0011275e:
            uVar21 = 9;
          }
          else if ((int)(uVar25 << 10) < 0) {
LAB_00112a76:
            uVar21 = 8;
          }
          else if ((int)(uVar25 << 0xb) < 0) {
LAB_00112b3e:
            uVar21 = 7;
          }
          else if ((int)(uVar25 << 0xc) < 0) {
LAB_00112b36:
            uVar21 = 6;
          }
          else if ((int)(uVar25 << 0xd) < 0) {
LAB_00112b22:
            uVar21 = 5;
          }
          else if ((int)(uVar25 << 0xe) < 0) {
LAB_00112f2c:
            uVar21 = 4;
          }
          else if ((int)(uVar25 << 0xf) < 0) {
LAB_00112f3c:
            uVar21 = 3;
          }
          else if ((int)(uVar25 << 0x10) < 0) {
LAB_00112f34:
            uVar21 = 2;
          }
          else {
            uVar21 = (uVar25 & 0x7fff) >> 0xe;
          }
        }
      }
    }
    if ((int)uVar31 < (int)uVar34) {
      uVar31 = uVar34;
    }
    if ((int)uVar21 <= (int)uVar31) {
      uVar21 = uVar31;
    }
    switch(uVar21) {
    case 0:
      local_80 = 1;
      break;
    case 1:
      local_80 = 2;
      break;
    case 2:
      local_80 = 4;
      break;
    case 3:
      local_80 = 8;
      break;
    case 4:
      local_80 = 0x10;
      break;
    case 5:
      local_80 = 0x20;
      break;
    case 6:
      local_80 = 0x40;
      break;
    case 7:
      local_80 = 0x80;
      break;
    case 8:
      local_80 = 0x100;
      break;
    case 9:
      local_80 = 0x200;
      break;
    case 10:
      local_80 = 0x400;
      break;
    case 0xb:
      local_80 = 0x800;
      break;
    case 0xc:
      local_80 = 0x1000;
      break;
    case 0xd:
      local_80 = 0x2000;
      break;
    case 0xe:
      local_80 = 0x4000;
      break;
    case 0xf:
      local_80 = 0x8000;
      break;
    case 0x10:
      local_80 = 0x10000;
      break;
    case 0x11:
      local_80 = 0x20000;
      break;
    case 0x12:
      local_80 = 0x40000;
      break;
    case 0x13:
      local_80 = 0x80000;
      break;
    case 0x14:
      local_80 = 0x100000;
      break;
    case 0x15:
      local_80 = 0x200000;
      break;
    case 0x16:
      local_80 = 0x400000;
      break;
    case 0x17:
      local_80 = 0x800000;
      break;
    case 0x18:
      local_80 = 0x1000000;
      break;
    case 0x19:
      local_80 = 0x2000000;
      break;
    case 0x1a:
      local_80 = 0x4000000;
      break;
    case 0x1b:
      local_80 = 0x8000000;
      break;
    case 0x1c:
      local_80 = 0x10000000;
      break;
    case 0x1d:
      local_80 = 0x20000000;
      break;
    case 0x1e:
      local_80 = 0x40000000;
      break;
    default:
      if ((int)uVar21 < 0) {
        local_80 = 1;
      }
      else {
        local_80 = 0x40000000;
      }
    }
    iVar5 = __divsi3(uVar24,local_80);
    iVar6 = __divsi3(uVar28,local_80);
    iVar7 = __divsi3(uVar25,local_80);
    iVar5 = iVar7 * iVar7 + iVar5 * iVar5 + iVar6 * iVar6;
    if (iVar5 < 1) {
      iVar6 = 0;
    }
    else {
      iVar7 = iVar5;
      if (iVar5 == 0x7fffffff) {
        iVar5 = 0x7ffffffe;
        iVar7 = 0x7ffffffe;
      }
      do {
        iVar6 = __divsi3(iVar7,iVar5);
        iVar15 = (iVar5 + iVar6) / 2;
        iVar6 = iVar5;
        if (iVar5 <= iVar15) break;
        iVar5 = __divsi3(iVar7,iVar15);
        iVar5 = (iVar15 + iVar5) / 2;
        iVar6 = iVar15;
        if (iVar15 <= iVar5) break;
        iVar6 = __divsi3(iVar7);
        iVar15 = (iVar5 + iVar6) / 2;
        iVar6 = iVar5;
        if (iVar5 <= iVar15) break;
        iVar5 = __divsi3(iVar7,iVar15);
        iVar5 = (iVar15 + iVar5) / 2;
        iVar6 = iVar15;
        if (iVar15 <= iVar5) break;
        iVar6 = __divsi3(iVar7,iVar5);
        iVar15 = (iVar5 + iVar6) / 2;
        iVar6 = iVar5;
        if (iVar5 <= iVar15) break;
        iVar5 = __divsi3(iVar7,iVar15);
        iVar5 = (iVar15 + iVar5) / 2;
        iVar6 = iVar15;
        if (iVar15 <= iVar5) break;
        iVar6 = __divsi3(iVar7);
        iVar15 = (iVar5 + iVar6) / 2;
        iVar6 = iVar5;
        if (iVar5 <= iVar15) break;
        iVar5 = __divsi3(iVar7,iVar15);
        iVar5 = (iVar5 + iVar15) / 2;
        iVar6 = iVar15;
      } while (iVar5 < iVar15);
    }
    uVar31 = uVar24;
    if ((int)uVar24 <= (int)uVar28) {
      uVar31 = uVar28;
    }
    if ((int)uVar31 < (int)uVar25) {
      uVar31 = uVar25;
    }
    if ((int)uVar31 < local_80 * iVar6) {
      uVar31 = local_80 * iVar6;
    }
    uVar31 = uVar31 * local_74;
    uVar28 = uVar25 * uVar22 + uVar24 * uVar11 + uVar28 * uVar14;
    if ((int)uVar31 < 1) {
LAB_0010844a:
      iVar5 = 0;
    }
    else {
      bVar37 = uVar28 == 0;
      if (-1 < (int)uVar28) {
        bVar37 = uVar28 == uVar31;
      }
      if (!bVar37 && (-1 < (int)uVar28 && (int)uVar31 <= (int)uVar28)) goto LAB_0010844a;
      if (((int)uVar28 < 0) && ((int)uVar31 < (int)-uVar28)) {
LAB_0010bc6a:
        iVar5 = 0xb4;
      }
      else {
        iVar5 = 0;
        if (uVar31 == 0 && uVar28 == 0) goto LAB_00106c18;
        if (uVar28 != 0) {
          if ((uVar28 & 0x80000000) == 0x80000000) {
            if ((uVar28 & 0xffff8000) != 0xffff8000) {
              if (-1 < (int)(uVar28 * 2)) goto LAB_00114080;
              if (-1 < (int)(uVar28 * 4)) goto LAB_001144e4;
              if (-1 < (int)(uVar28 * 8)) goto LAB_001144dc;
              if (-1 < (int)(uVar28 * 0x10)) goto LAB_00114072;
              if (-1 < (int)(uVar28 * 0x20)) goto LAB_0011406a;
              if (-1 < (int)(uVar28 * 0x40)) goto LAB_00114062;
              if (-1 < (int)(uVar28 * 0x80)) goto LAB_0011405a;
              if (-1 < (int)(uVar28 * 0x100)) goto LAB_00114556;
              if (-1 < (int)(uVar28 * 0x200)) goto LAB_0011458a;
              if (-1 < (int)(uVar28 * 0x400)) goto LAB_0011459a;
              if (-1 < (int)(uVar28 * 0x800)) goto LAB_00114592;
              if (-1 < (int)(uVar28 * 0x1000)) goto LAB_001145ba;
              if (-1 < (int)(uVar28 * 0x2000)) goto LAB_001145b2;
              if (-1 < (int)(uVar28 * 0x4000)) goto LAB_001145aa;
              if (-1 < (int)(uVar28 * 0x8000)) goto LAB_001145a2;
              uVar24 = (uint)((uVar28 & 0x8000) == 0);
              goto LAB_00107b60;
            }
LAB_00106bc8:
            iVar5 = __divsi3(uVar28 * -0x7fff,uVar31);
            if (iVar5 < 0x7fff) {
              if (iVar5 < 0x7d01) {
                iVar5 = 0xb4 - *(int *)(*(int *)(iVar20 + DAT_001124bc) + (iVar5 >> 8) * 4);
              }
              else {
                iVar5 = 0xb4 - (*(int *)(*(int *)(iVar20 + DAT_00107704) + 500) * (0x7fff - iVar5))
                               / 0xff;
              }
              goto LAB_00106c18;
            }
            goto LAB_0010bc6a;
          }
          if ((uVar28 & 0xffff8000) != 0) {
            if ((int)(uVar28 * 2) < 0) {
LAB_00114080:
              uVar24 = 0x10;
            }
            else if ((int)(uVar28 * 4) < 0) {
LAB_001144e4:
              uVar24 = 0xf;
            }
            else if ((int)(uVar28 * 8) < 0) {
LAB_001144dc:
              uVar24 = 0xe;
            }
            else if ((int)(uVar28 * 0x10) < 0) {
LAB_00114072:
              uVar24 = 0xd;
            }
            else if ((int)(uVar28 * 0x20) < 0) {
LAB_0011406a:
              uVar24 = 0xc;
            }
            else if ((int)(uVar28 * 0x40) < 0) {
LAB_00114062:
              uVar24 = 0xb;
            }
            else if ((int)(uVar28 * 0x80) < 0) {
LAB_0011405a:
              uVar24 = 10;
            }
            else if ((int)(uVar28 * 0x100) < 0) {
LAB_00114556:
              uVar24 = 9;
            }
            else if ((int)(uVar28 * 0x200) < 0) {
LAB_0011458a:
              uVar24 = 8;
            }
            else if ((int)(uVar28 * 0x400) < 0) {
LAB_0011459a:
              uVar24 = 7;
            }
            else if ((int)(uVar28 * 0x800) < 0) {
LAB_00114592:
              uVar24 = 6;
            }
            else if ((int)(uVar28 * 0x1000) < 0) {
LAB_001145ba:
              uVar24 = 5;
            }
            else if ((int)(uVar28 * 0x2000) < 0) {
LAB_001145b2:
              uVar24 = 4;
            }
            else if ((int)(uVar28 * 0x4000) < 0) {
LAB_001145aa:
              uVar24 = 3;
            }
            else if ((int)(uVar28 * 0x8000) < 0) {
LAB_001145a2:
              uVar24 = 2;
            }
            else {
              uVar24 = (uVar28 & 0xffff) >> 0xf;
            }
LAB_00107b60:
            switch(uVar24) {
            case 1:
              uVar23 = 2;
              break;
            case 2:
              uVar23 = 4;
              break;
            case 3:
              uVar23 = 8;
              break;
            case 4:
              uVar23 = 0x10;
              break;
            case 5:
              uVar23 = 0x20;
              break;
            case 6:
              uVar23 = 0x40;
              break;
            case 7:
              uVar23 = 0x80;
              break;
            case 8:
              uVar23 = 0x100;
              break;
            case 9:
              uVar23 = 0x200;
              break;
            case 10:
              uVar23 = 0x400;
              break;
            case 0xb:
              uVar23 = 0x800;
              break;
            case 0xc:
              uVar23 = 0x1000;
              break;
            case 0xd:
              uVar23 = 0x2000;
              break;
            case 0xe:
              uVar23 = 0x4000;
              break;
            case 0xf:
              uVar23 = 0x8000;
              break;
            case 0x10:
              uVar23 = 0x10000;
              break;
            default:
              uVar23 = 1;
            }
            uVar28 = __divsi3(uVar28,uVar23);
            uVar31 = __divsi3(uVar31,uVar23);
            if ((int)uVar28 < 0) goto LAB_00106bc8;
          }
        }
        uVar31 = __divsi3(uVar28 * 0x7fff,uVar31);
        if (0x7ffe < (int)uVar31) goto LAB_0010844a;
        if ((int)uVar31 < 0x7d01) {
          uVar28 = uVar31 & ~((int)uVar31 >> 0x20);
          if ((int)uVar31 < 0) {
            uVar28 = uVar31 + 0xff;
          }
          iVar5 = *(int *)(*(int *)(iVar20 + DAT_0010ecf4) + ((uVar28 & 0x7fff) >> 8) * 4);
        }
        else {
          iVar5 = (int)(*(int *)(*(int *)(iVar20 + DAT_0010a830) + 500) * (0x7fff - uVar31)) / 0xff;
        }
      }
    }
LAB_00106c18:
    iVar5 = iVar5 * 2;
    iVar20 = *(int *)(param_1 + 0x44);
    uVar31 = *(uint *)(param_1 + 0x4c);
    if (iVar20 < iVar5) {
      if (iVar5 <= *(int *)(param_1 + 0x48)) {
        uVar31 = __divsi3((iVar5 - iVar20) * uVar31,*(int *)(param_1 + 0x48) - iVar20);
      }
      if (-1 < (int)uVar31) goto LAB_00107c4a;
      if ((int)uVar31 < -9999) {
        iVar20 = 0;
      }
      else {
        uVar28 = uVar31 + 0x3f & (int)uVar31 >> 0x20;
        if (uVar31 < 0xffffd8f1) {
          uVar28 = uVar31;
        }
        iVar20 = DAT_00107708 + 0x106c6c + ((int)uVar28 >> 6) * -4;
        uVar28 = *(int *)(iVar20 + 0x608) * (0x40 - (-uVar31 & 0x3f)) +
                 *(int *)(iVar20 + 0x60c) * (-uVar31 & 0x3f);
        uVar31 = uVar28 & ~((int)uVar28 >> 0x20);
        if ((int)uVar28 < 0) {
          uVar31 = uVar28 + 0x3f;
        }
        iVar20 = (int)uVar31 >> 6;
      }
    }
    else {
LAB_00107c4a:
      iVar20 = 0x7fff;
    }
    iVar5 = *(int *)(param_1 + 0x54);
    iVar6 = *(int *)(param_3 + 0x2c);
    iVar7 = *(int *)(param_1 + 0x50);
    uVar23 = *(undefined4 *)(param_1 + 0x58);
    iVar15 = *(int *)(param_2 + 0x1fc);
    iVar10 = *(int *)(param_2 + 0x200);
    if (iVar5 < iVar7 && iVar5 <= iVar6) {
      iVar3 = iVar7 - iVar15;
      iVar32 = iVar7;
      if (iVar15 <= iVar7) {
        iVar3 = iVar6 - iVar15;
        iVar32 = iVar6;
      }
      if (iVar3 < 0 == SBORROW4(iVar32,iVar15)) {
        iVar3 = 0;
        if (iVar10 < 0x10001) {
          if (iVar7 < iVar6) {
            if (*(int *)(param_1 + 0x5c) == 1) goto LAB_00106cd0;
            iVar5 = __divsi3(iVar5,iVar15);
            uVar4 = __divsi3(iVar7,iVar15);
            iVar5 = __divsi3(iVar5 * 0x7fff,uVar4);
            if (iVar5 < 1) {
              iVar3 = -10000;
            }
            else if (iVar5 < 0x7fff) {
              iVar3 = FUN_001009c4();
            }
            iVar5 = __divsi3(uVar23,iVar10);
            uVar23 = __divsi3(0x10000,iVar10);
            iVar5 = __divsi3(iVar3 * iVar5,uVar23);
          }
          else {
            iVar5 = __divsi3(iVar5,iVar15);
            uVar4 = __divsi3(iVar6,iVar15);
            iVar5 = __divsi3(iVar5 * 0x7fff,uVar4);
            if (iVar5 < 1) {
              iVar3 = -10000;
            }
            else if (iVar5 < 0x7fff) {
              iVar3 = FUN_001009c4();
            }
            iVar5 = __divsi3(uVar23,iVar10);
            uVar23 = __divsi3(0x10000,iVar10);
            iVar5 = __divsi3(iVar3 * iVar5,uVar23);
          }
          if (-1 < iVar5) goto LAB_00106ccc;
          if (iVar5 < -9999) {
            iVar3 = 0;
          }
          else {
            iVar3 = FUN_00100a28();
          }
        }
      }
      else {
        iVar3 = 0;
      }
    }
    else {
LAB_00106ccc:
      iVar3 = 0x7fff;
    }
LAB_00106cd0:
    local_7c = local_7c | 2;
    *(short *)param_3 = (short)((iVar3 * iVar20) / 0x7fff);
LAB_00106cf2:
    iVar20 = *(int *)(param_3 + 0x24);
    if (0x5a < iVar20) {
      iVar20 = 0xb4 - iVar20;
    }
    if (iVar20 < -0x5a) {
      iVar20 = -0xb4 - iVar20;
    }
    iVar5 = iVar20 / 2 + 0x2d;
    if (iVar5 < 0xb5) {
      if (-0xb5 < iVar5) {
        iVar6 = iVar20 / 2 + 0x87;
        iVar20 = iVar5;
        if (0xb4 < iVar6) goto LAB_00107a66;
        goto LAB_00106d3a;
      }
      iVar6 = -0x5a;
LAB_00106d48:
      iVar20 = -*(int *)(DAT_0010770c + iVar6 * 4 + 0x1078a0);
    }
    else {
      iVar20 = 0xb4;
LAB_00107a66:
      iVar6 = iVar20 + -0x10e;
LAB_00106d3a:
      if (iVar6 < -0xb4) {
        iVar6 = -0xb4;
        goto LAB_00106d48;
      }
      if (iVar6 < -0x59) goto LAB_00106d48;
      if (iVar6 < 0) {
        iVar20 = -*(int *)(DAT_00115da0 + iVar6 * -4 + 0x115d74);
      }
      else if (iVar6 < 0x5b) {
        iVar20 = *(int *)(DAT_00115d9c + iVar6 * 4 + 0x115d62);
      }
      else {
        iVar20 = *(int *)(DAT_00115d98 + (0xb4 - iVar6) * 4 + 0x115d50);
      }
    }
    *(short *)(param_3 + 2) = (short)((iVar20 * *(short *)param_3) / 0x7fff);
    if (iVar5 < 0xb5) {
      if (iVar5 < -0xb4) {
        iVar5 = -0xb4;
      }
      else if (-0x5a < iVar5) {
        if (iVar5 < 0) {
          iVar20 = -*(int *)(DAT_0010a82c + iVar5 * -4 + 0x10ad3a);
        }
        else {
          if (0x5a < iVar5) goto LAB_00107a7a;
          iVar20 = *(int *)(DAT_0010973c + iVar5 * 4 + 0x1094e2);
        }
        goto LAB_00106d9a;
      }
      iVar20 = -*(int *)(DAT_00107710 + iVar5 * 4 + 0x1078e2);
    }
    else {
      iVar5 = 0xb4;
LAB_00107a7a:
      iVar20 = *(int *)(&UNK_00108306 + DAT_00108504 + (0xb4 - iVar5) * 4);
    }
LAB_00106d9a:
    *(short *)(param_3 + 4) = (short)((iVar20 * *(short *)param_3) / 0x7fff);
    uVar28 = *(uint *)param_1;
    uVar31 = *(uint *)(param_2 + 0x10);
    if ((uVar28 & 6) == 0) goto LAB_0010553a;
  }
  if (*(uint *)(param_1 + 0x60) < 2) {
    uVar28 = *(uint *)(param_2 + 0xe0);
    uVar25 = *(uint *)(param_2 + 0xe4);
    uVar24 = *(uint *)(param_2 + 0xe8);
    uVar31 = 0;
    if (uVar28 != 0) {
      if ((uVar28 & 0x80000000) == 0x80000000) {
        if ((uVar28 & 0xffffc000) == 0xffffc000) {
          uVar31 = 0;
        }
        else {
          if (-1 < (int)(uVar28 << 1)) goto LAB_00113f94;
          if (-1 < (int)(uVar28 << 2)) goto LAB_001143d0;
          if (-1 < (int)(uVar28 << 3)) goto LAB_001143c8;
          if (-1 < (int)(uVar28 << 4)) goto LAB_001143d8;
          if (-1 < (int)(uVar28 << 5)) goto LAB_00114d18;
          if (-1 < (int)(uVar28 << 6)) goto LAB_00114d28;
          if (-1 < (int)(uVar28 << 7)) goto LAB_00114d20;
          if (-1 < (int)(uVar28 << 8)) goto LAB_00114d88;
          if (-1 < (int)(uVar28 << 9)) goto LAB_00114d80;
          if (-1 < (int)(uVar28 << 10)) goto LAB_00114d78;
          if (-1 < (int)(uVar28 << 0xb)) goto LAB_00114d70;
          if (-1 < (int)(uVar28 << 0xc)) goto LAB_00114d68;
          if (-1 < (int)(uVar28 << 0xd)) goto LAB_00114d60;
          if (-1 < (int)(uVar28 << 0xe)) goto LAB_00114d58;
          if (-1 < (int)(uVar28 << 0xf)) goto LAB_00114d50;
          if (-1 < (int)(uVar28 << 0x10)) goto LAB_00114858;
          uVar31 = (uint)((uVar28 & 0x4000) == 0);
        }
      }
      else if ((uVar28 & 0xffffc000) == 0) {
        uVar31 = 0;
      }
      else if ((int)(uVar28 << 1) < 0) {
LAB_00113f94:
        uVar31 = 0x11;
      }
      else if ((int)(uVar28 << 2) < 0) {
LAB_001143d0:
        uVar31 = 0x10;
      }
      else if ((int)(uVar28 << 3) < 0) {
LAB_001143c8:
        uVar31 = 0xf;
      }
      else if ((int)(uVar28 << 4) < 0) {
LAB_001143d8:
        uVar31 = 0xe;
      }
      else if ((int)(uVar28 << 5) < 0) {
LAB_00114d18:
        uVar31 = 0xd;
      }
      else if ((int)(uVar28 << 6) < 0) {
LAB_00114d28:
        uVar31 = 0xc;
      }
      else if ((int)(uVar28 << 7) < 0) {
LAB_00114d20:
        uVar31 = 0xb;
      }
      else if ((int)(uVar28 << 8) < 0) {
LAB_00114d88:
        uVar31 = 10;
      }
      else if ((int)(uVar28 << 9) < 0) {
LAB_00114d80:
        uVar31 = 9;
      }
      else if ((int)(uVar28 << 10) < 0) {
LAB_00114d78:
        uVar31 = 8;
      }
      else if ((int)(uVar28 << 0xb) < 0) {
LAB_00114d70:
        uVar31 = 7;
      }
      else if ((int)(uVar28 << 0xc) < 0) {
LAB_00114d68:
        uVar31 = 6;
      }
      else if ((int)(uVar28 << 0xd) < 0) {
LAB_00114d60:
        uVar31 = 5;
      }
      else if ((int)(uVar28 << 0xe) < 0) {
LAB_00114d58:
        uVar31 = 4;
      }
      else if ((int)(uVar28 << 0xf) < 0) {
LAB_00114d50:
        uVar31 = 3;
      }
      else if ((int)(uVar28 << 0x10) < 0) {
LAB_00114858:
        uVar31 = 2;
      }
      else {
        uVar31 = (uVar28 & 0x7fff) >> 0xe;
      }
    }
    uVar14 = 0;
    if (uVar25 != 0) {
      if ((uVar25 & 0x80000000) == 0x80000000) {
        if ((uVar25 & 0xffffc000) == 0xffffc000) {
          uVar14 = 0;
        }
        else {
          if (-1 < (int)(uVar25 << 1)) goto LAB_0011446e;
          if (-1 < (int)(uVar25 << 2)) goto LAB_001143e6;
          if (-1 < (int)(uVar25 << 3)) goto LAB_001143e0;
          if (-1 < (int)(uVar25 << 4)) goto LAB_001143ec;
          if (-1 < (int)(uVar25 << 5)) goto LAB_00114e92;
          if (-1 < (int)(uVar25 << 6)) goto LAB_00114f70;
          if (-1 < (int)(uVar25 << 7)) goto LAB_00114bf4;
          if (-1 < (int)(uVar25 << 8)) goto LAB_00114d0a;
          if (-1 < (int)(uVar25 << 9)) goto LAB_00114d04;
          if (-1 < (int)(uVar25 << 10)) goto LAB_00114cfe;
          if (-1 < (int)(uVar25 << 0xb)) goto LAB_00114cf8;
          if (-1 < (int)(uVar25 << 0xc)) goto LAB_00114cf2;
          if (-1 < (int)(uVar25 << 0xd)) goto LAB_00114cec;
          if (-1 < (int)(uVar25 << 0xe)) goto LAB_00114ce6;
          if (-1 < (int)(uVar25 << 0xf)) goto LAB_00114ce0;
          if (-1 < (int)(uVar25 << 0x10)) goto LAB_00114860;
          uVar14 = (uint)((uVar25 & 0x4000) == 0);
        }
      }
      else {
        uVar14 = 0;
        if ((uVar25 & 0xffffc000) != 0) {
          if ((int)(uVar25 << 1) < 0) {
LAB_0011446e:
            uVar14 = 0x11;
          }
          else if ((int)(uVar25 << 2) < 0) {
LAB_001143e6:
            uVar14 = 0x10;
          }
          else if ((int)(uVar25 << 3) < 0) {
LAB_001143e0:
            uVar14 = 0xf;
          }
          else if ((int)(uVar25 << 4) < 0) {
LAB_001143ec:
            uVar14 = 0xe;
          }
          else if ((int)(uVar25 << 5) < 0) {
LAB_00114e92:
            uVar14 = 0xd;
          }
          else if ((int)(uVar25 << 6) < 0) {
LAB_00114f70:
            uVar14 = 0xc;
          }
          else if ((int)(uVar25 << 7) < 0) {
LAB_00114bf4:
            uVar14 = 0xb;
          }
          else if ((int)(uVar25 << 8) < 0) {
LAB_00114d0a:
            uVar14 = 10;
          }
          else if ((int)(uVar25 << 9) < 0) {
LAB_00114d04:
            uVar14 = 9;
          }
          else if ((int)(uVar25 << 10) < 0) {
LAB_00114cfe:
            uVar14 = 8;
          }
          else if ((int)(uVar25 << 0xb) < 0) {
LAB_00114cf8:
            uVar14 = 7;
          }
          else if ((int)(uVar25 << 0xc) < 0) {
LAB_00114cf2:
            uVar14 = 6;
          }
          else if ((int)(uVar25 << 0xd) < 0) {
LAB_00114cec:
            uVar14 = 5;
          }
          else if ((int)(uVar25 << 0xe) < 0) {
LAB_00114ce6:
            uVar14 = 4;
          }
          else if ((int)(uVar25 << 0xf) < 0) {
LAB_00114ce0:
            uVar14 = 3;
          }
          else if ((int)(uVar25 << 0x10) < 0) {
LAB_00114860:
            uVar14 = 2;
          }
          else {
            uVar14 = (uVar25 & 0x7fff) >> 0xe;
          }
        }
      }
    }
    uVar22 = 0;
    if (uVar24 != 0) {
      if ((uVar24 & 0x80000000) == 0x80000000) {
        if ((uVar24 & 0xffffc000) == 0xffffc000) {
          uVar22 = 0;
        }
        else {
          if (-1 < (int)(uVar24 << 1)) goto LAB_0011437a;
          if (-1 < (int)(uVar24 << 2)) goto LAB_0011434c;
          if (-1 < (int)(uVar24 << 3)) goto LAB_00114346;
          if (-1 < (int)(uVar24 << 4)) goto LAB_001141c4;
          if (-1 < (int)(uVar24 << 5)) goto LAB_001146f4;
          if (-1 < (int)(uVar24 << 6)) goto LAB_00114602;
          if (-1 < (int)(uVar24 << 7)) goto LAB_001145fc;
          if (-1 < (int)(uVar24 << 8)) goto LAB_001148a2;
          if (-1 < (int)(uVar24 << 9)) goto LAB_0011489c;
          if (-1 < (int)(uVar24 << 10)) goto LAB_00114896;
          if (-1 < (int)(uVar24 << 0xb)) goto LAB_00114890;
          if (-1 < (int)(uVar24 << 0xc)) goto LAB_0011488a;
          if (-1 < (int)(uVar24 << 0xd)) goto LAB_00114884;
          if (-1 < (int)(uVar24 << 0xe)) goto LAB_0011487e;
          if (-1 < (int)(uVar24 << 0xf)) goto LAB_00114878;
          if (-1 < (int)(uVar24 << 0x10)) goto LAB_00114fd2;
          uVar22 = (uint)((uVar24 & 0x4000) == 0);
        }
      }
      else {
        uVar22 = 0;
        if ((uVar24 & 0xffffc000) != 0) {
          if ((int)(uVar24 << 1) < 0) {
LAB_0011437a:
            uVar22 = 0x11;
          }
          else if ((int)(uVar24 << 2) < 0) {
LAB_0011434c:
            uVar22 = 0x10;
          }
          else if ((int)(uVar24 << 3) < 0) {
LAB_00114346:
            uVar22 = 0xf;
          }
          else if ((int)(uVar24 << 4) < 0) {
LAB_001141c4:
            uVar22 = 0xe;
          }
          else if ((int)(uVar24 << 5) < 0) {
LAB_001146f4:
            uVar22 = 0xd;
          }
          else if ((int)(uVar24 << 6) < 0) {
LAB_00114602:
            uVar22 = 0xc;
          }
          else if ((int)(uVar24 << 7) < 0) {
LAB_001145fc:
            uVar22 = 0xb;
          }
          else if ((int)(uVar24 << 8) < 0) {
LAB_001148a2:
            uVar22 = 10;
          }
          else if ((int)(uVar24 << 9) < 0) {
LAB_0011489c:
            uVar22 = 9;
          }
          else if ((int)(uVar24 << 10) < 0) {
LAB_00114896:
            uVar22 = 8;
          }
          else if ((int)(uVar24 << 0xb) < 0) {
LAB_00114890:
            uVar22 = 7;
          }
          else if ((int)(uVar24 << 0xc) < 0) {
LAB_0011488a:
            uVar22 = 6;
          }
          else if ((int)(uVar24 << 0xd) < 0) {
LAB_00114884:
            uVar22 = 5;
          }
          else if ((int)(uVar24 << 0xe) < 0) {
LAB_0011487e:
            uVar22 = 4;
          }
          else if ((int)(uVar24 << 0xf) < 0) {
LAB_00114878:
            uVar22 = 3;
          }
          else if ((int)(uVar24 << 0x10) < 0) {
LAB_00114fd2:
            uVar22 = 2;
          }
          else {
            uVar22 = (uVar24 & 0x7fff) >> 0xe;
          }
        }
      }
    }
    if (uVar14 < uVar31) {
      uVar14 = uVar31;
    }
    if (uVar14 < uVar22) {
      uVar14 = uVar22;
    }
    switch(uVar14) {
    case 0:
      iVar20 = 1;
      break;
    case 1:
      iVar20 = 2;
      break;
    case 2:
      iVar20 = 4;
      break;
    case 3:
      iVar20 = 8;
      break;
    case 4:
      iVar20 = 0x10;
      break;
    case 5:
      iVar20 = 0x20;
      break;
    case 6:
      iVar20 = 0x40;
      break;
    case 7:
      iVar20 = 0x80;
      break;
    case 8:
      iVar20 = 0x100;
      break;
    case 9:
      iVar20 = 0x200;
      break;
    case 10:
      iVar20 = 0x400;
      break;
    case 0xb:
      iVar20 = 0x800;
      break;
    case 0xc:
      iVar20 = 0x1000;
      break;
    case 0xd:
      iVar20 = 0x2000;
      break;
    case 0xe:
      iVar20 = 0x4000;
      break;
    case 0xf:
      iVar20 = 0x8000;
      break;
    case 0x10:
      iVar20 = 0x10000;
      break;
    case 0x11:
      iVar20 = 0x20000;
      break;
    case 0x12:
      iVar20 = 0x40000;
      break;
    case 0x13:
      iVar20 = 0x80000;
      break;
    case 0x14:
      iVar20 = 0x100000;
      break;
    case 0x15:
      iVar20 = 0x200000;
      break;
    case 0x16:
      iVar20 = 0x400000;
      break;
    case 0x17:
      iVar20 = 0x800000;
      break;
    case 0x18:
      iVar20 = 0x1000000;
      break;
    case 0x19:
      iVar20 = 0x2000000;
      break;
    case 0x1a:
      iVar20 = 0x4000000;
      break;
    case 0x1b:
      iVar20 = 0x8000000;
      break;
    case 0x1c:
      iVar20 = 0x10000000;
      break;
    case 0x1d:
      iVar20 = 0x20000000;
      break;
    default:
      iVar20 = 0x40000000;
    }
    iVar5 = __divsi3(uVar28,iVar20);
    iVar15 = *(int *)(param_3 + 0x18);
    iVar6 = __divsi3(uVar25,iVar20);
    iVar6 = *(int *)(param_3 + 0x1c) * iVar6;
    iVar7 = __divsi3(uVar24,iVar20,(int)((ulonglong)((longlong)iVar6 * 0x80010003) >> 0x20),
                     (int)((longlong)iVar6 * -0x7ffefffd));
    uVar31 = iVar20 * (iVar6 / 0x7fff + (iVar15 * iVar5) / 0x7fff +
                      (*(int *)(param_3 + 0x20) * iVar7) / 0x7fff);
    if (uVar31 == 0) {
LAB_0010b8da:
      iVar20 = 1;
    }
    else {
      if ((uVar31 & 0x80000000) == 0x80000000) {
        if ((uVar31 & 0xffff8000) != 0xffff8000) {
          if (-1 < (int)(uVar31 * 2)) goto LAB_00113ffc;
          if (-1 < (int)(uVar31 * 4)) goto LAB_00113ff4;
          if (-1 < (int)(uVar31 * 8)) goto LAB_00114014;
          if (-1 < (int)(uVar31 * 0x10)) goto LAB_0011400c;
          if (-1 < (int)(uVar31 * 0x20)) goto LAB_00114004;
          if (-1 < (int)(uVar31 * 0x40)) goto LAB_001148ae;
          if (-1 < (int)(uVar31 * 0x80)) goto LAB_00114dfc;
          if (-1 < (int)(uVar31 * 0x100)) goto LAB_00114df4;
          if (-1 < (int)(uVar31 * 0x200)) goto LAB_00114dec;
          if (-1 < (int)(uVar31 * 0x400)) goto LAB_00114de4;
          if (-1 < (int)(uVar31 * 0x800)) goto LAB_00114e0c;
          if (-1 < (int)(uVar31 * 0x1000)) goto LAB_00114e04;
          if (-1 < (int)(uVar31 * 0x2000)) goto LAB_00114e14;
          if (-1 < (int)(uVar31 * 0x4000)) goto LAB_00114ddc;
          if (-1 < (int)(uVar31 * 0x8000)) goto LAB_00114a20;
          uVar28 = (uint)((uVar31 & 0x8000) == 0);
          goto LAB_001091dc;
        }
        goto LAB_0010b8da;
      }
      if ((uVar31 & 0xffff8000) == 0) goto LAB_0010b8da;
      if ((int)(uVar31 * 2) < 0) {
LAB_00113ffc:
        uVar28 = 0x10;
      }
      else if ((int)(uVar31 * 4) < 0) {
LAB_00113ff4:
        uVar28 = 0xf;
      }
      else if ((int)(uVar31 * 8) < 0) {
LAB_00114014:
        uVar28 = 0xe;
      }
      else if ((int)(uVar31 * 0x10) < 0) {
LAB_0011400c:
        uVar28 = 0xd;
      }
      else if ((int)(uVar31 * 0x20) < 0) {
LAB_00114004:
        uVar28 = 0xc;
      }
      else if ((int)(uVar31 * 0x40) < 0) {
LAB_001148ae:
        uVar28 = 0xb;
      }
      else if ((int)(uVar31 * 0x80) < 0) {
LAB_00114dfc:
        uVar28 = 10;
      }
      else if ((int)(uVar31 * 0x100) < 0) {
LAB_00114df4:
        uVar28 = 9;
      }
      else if ((int)(uVar31 * 0x200) < 0) {
LAB_00114dec:
        uVar28 = 8;
      }
      else if ((int)(uVar31 * 0x400) < 0) {
LAB_00114de4:
        uVar28 = 7;
      }
      else if ((int)(uVar31 * 0x800) < 0) {
LAB_00114e0c:
        uVar28 = 6;
      }
      else if ((int)(uVar31 * 0x1000) < 0) {
LAB_00114e04:
        uVar28 = 5;
      }
      else if ((int)(uVar31 * 0x2000) < 0) {
LAB_00114e14:
        uVar28 = 4;
      }
      else if ((int)(uVar31 * 0x4000) < 0) {
LAB_00114ddc:
        uVar28 = 3;
      }
      else if ((int)(uVar31 * 0x8000) < 0) {
LAB_00114a20:
        uVar28 = 2;
      }
      else {
        uVar28 = (uVar31 & 0xffff) >> 0xf;
      }
LAB_001091dc:
      switch(uVar28) {
      case 1:
        iVar20 = 2;
        break;
      case 2:
        iVar20 = 4;
        break;
      case 3:
        iVar20 = 8;
        break;
      case 4:
        iVar20 = 0x10;
        break;
      case 5:
        iVar20 = 0x20;
        break;
      case 6:
        iVar20 = 0x40;
        break;
      case 7:
        iVar20 = 0x80;
        break;
      case 8:
        iVar20 = 0x100;
        break;
      case 9:
        iVar20 = 0x200;
        break;
      case 10:
        iVar20 = 0x400;
        break;
      case 0xb:
        iVar20 = 0x800;
        break;
      case 0xc:
        iVar20 = 0x1000;
        break;
      case 0xd:
        iVar20 = 0x2000;
        break;
      case 0xe:
        iVar20 = 0x4000;
        break;
      case 0xf:
        iVar20 = 0x8000;
        break;
      case 0x10:
        iVar20 = 0x10000;
        break;
      default:
        goto LAB_0010b8da;
      }
    }
    uVar28 = *(uint *)(param_2 + 4);
    if (uVar28 == 0) {
      *(undefined4 *)(param_3 + 8) = 0x400;
    }
    else {
      p_Var33 = (_MASMW_P3DACALCRESULT *)(uVar28 & 0xffff807f);
      uVar24 = uVar28 & 0xffff8000;
      if ((uVar28 & 0x80000000) == 0x80000000) {
        cVar36 = 0xffff7fff < uVar24;
        if (uVar24 != 0xffff8000) {
          if (-1 < (int)(uVar28 << 1)) goto LAB_0011404c;
          if (-1 < (int)(uVar28 << 2)) goto LAB_00114044;
          if (-1 < (int)(uVar28 << 3)) goto LAB_001143c0;
          if (-1 < (int)(uVar28 << 4)) goto LAB_001143b8;
          if (-1 < (int)(uVar28 << 5)) goto LAB_001143b0;
          if (-1 < (int)(uVar28 << 6)) goto LAB_00114d10;
          if (-1 < (int)(uVar28 << 7)) goto LAB_00114d48;
          if (-1 < (int)(uVar28 << 8)) goto LAB_00114d40;
          if (-1 < (int)(uVar28 << 9)) goto LAB_00114d38;
          if (-1 < (int)(uVar28 << 10)) goto LAB_00114d30;
          if (-1 < (int)(uVar28 << 0xb)) goto LAB_0011501e;
          if (-1 < (int)(uVar28 << 0xc)) goto LAB_00115016;
          if (-1 < (int)(uVar28 << 0xd)) goto LAB_0011500e;
          if (-1 < (int)(uVar28 << 0xe)) goto LAB_00115006;
          if (-1 < (int)(uVar28 << 0xf)) goto LAB_00114a28;
          uVar24 = (uint)((uVar28 & 0x8000) == 0);
          goto LAB_00109344;
        }
LAB_0010edc8:
        iVar5 = 1;
      }
      else {
        cVar36 = true;
        if (uVar24 == 0) goto LAB_0010edc8;
        if ((int)(uVar28 << 1) < 0) {
LAB_0011404c:
          uVar24 = 0x10;
        }
        else if ((int)(uVar28 << 2) < 0) {
LAB_00114044:
          uVar24 = 0xf;
        }
        else if ((int)(uVar28 << 3) < 0) {
LAB_001143c0:
          uVar24 = 0xe;
        }
        else if ((int)(uVar28 << 4) < 0) {
LAB_001143b8:
          uVar24 = 0xd;
        }
        else if ((int)(uVar28 << 5) < 0) {
LAB_001143b0:
          uVar24 = 0xc;
        }
        else if ((int)(uVar28 << 6) < 0) {
LAB_00114d10:
          uVar24 = 0xb;
        }
        else if ((int)(uVar28 << 7) < 0) {
LAB_00114d48:
          uVar24 = 10;
        }
        else if ((int)(uVar28 << 8) < 0) {
LAB_00114d40:
          uVar24 = 9;
        }
        else if ((int)(uVar28 << 9) < 0) {
LAB_00114d38:
          uVar24 = 8;
        }
        else if ((int)(uVar28 << 10) < 0) {
LAB_00114d30:
          uVar24 = 7;
        }
        else if ((int)(uVar28 << 0xb) < 0) {
LAB_0011501e:
          uVar24 = 6;
        }
        else if ((int)(uVar28 << 0xc) < 0) {
LAB_00115016:
          uVar24 = 5;
        }
        else if ((int)(uVar28 << 0xd) < 0) {
LAB_0011500e:
          uVar24 = 4;
        }
        else if ((int)(uVar28 << 0xe) < 0) {
LAB_00115006:
          uVar24 = 3;
        }
        else if ((int)(uVar28 << 0xf) < 0) {
LAB_00114a28:
          uVar24 = 2;
        }
        else {
          uVar24 = (uVar28 & 0xffff) >> 0xf;
        }
LAB_00109344:
        cVar36 = 0xe < uVar24 - 1;
        switch(uVar24 - 1) {
        case 0:
          iVar5 = 2;
          break;
        case 1:
          iVar5 = 4;
          break;
        case 2:
          iVar5 = 8;
          break;
        case 3:
          iVar5 = 0x10;
          break;
        case 4:
          iVar5 = 0x20;
          break;
        case 5:
          iVar5 = 0x40;
          break;
        case 6:
          iVar5 = 0x80;
          break;
        case 7:
          iVar5 = 0x100;
          break;
        case 8:
          iVar5 = 0x200;
          break;
        case 9:
          iVar5 = 0x400;
          break;
        case 10:
          iVar5 = 0x800;
          break;
        case 0xb:
          iVar5 = 0x1000;
          break;
        case 0xc:
          iVar5 = 0x2000;
          break;
        case 0xd:
          iVar5 = 0x4000;
          break;
        case 0xe:
          iVar5 = 0x8000;
          break;
        case 0xf:
          iVar5 = 0x10000;
          break;
        default:
          goto LAB_0010edc8;
        }
      }
      iVar6 = __udivsi3(uVar28,iVar5);
      iVar7 = __divsi3(uVar31,iVar20);
      uVar28 = iVar7 * iVar6;
      uVar31 = uVar28 + 0xffff & (int)uVar28 >> 0x20;
      if (cVar36 == '\0') {
        uVar31 = uVar28;
      }
      p_Var26 = (_MASMW_P3DACALCRESULT *)(iVar20 * ((int)uVar31 >> 0x10));
      iVar20 = 0x400 - (iVar5 * (int)p_Var26) / 0x14e;
      if (iVar20 < 0x801) {
        iVar5 = iVar20;
        if (iVar20 < 1) {
          p_Var33 = param_3;
          iVar5 = 1;
          param_3 = p_Var26;
        }
        if (iVar20 < 1) {
          *(int *)(p_Var33 + 8) = iVar5;
        }
        else {
          *(int *)(param_3 + 8) = iVar5;
        }
      }
      else {
        *(undefined4 *)(param_3 + 8) = 0x800;
      }
    }
  }
  else {
    *(undefined4 *)(param_3 + 8) = 0x400;
  }
  local_7c = local_7c | 4;
  uVar28 = *(uint *)param_1;
LAB_00105556:
  if ((int)(uVar28 << 0x10) < 0) {
    local_7c = local_7c | 8;
  }
  *(uint *)param_1 = uVar28 & ~(local_78 | 0x187e0);
  return local_7c;
}

