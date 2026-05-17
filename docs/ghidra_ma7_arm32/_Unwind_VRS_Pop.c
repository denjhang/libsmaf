/* _Unwind_VRS_Pop @ 0011f7d0 540B */


undefined4 _Unwind_VRS_Pop(uint *param_1,undefined4 param_2,uint param_3,uint param_4)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  bool bVar9;
  undefined4 auStack_1a0 [32];
  undefined1 local_120 [128];
  undefined4 local_a0 [34];
  
  switch(param_2) {
  case 0:
    if (param_4 != 0) {
      return 2;
    }
    puVar3 = (uint *)param_1[0xe];
    uVar5 = 0;
    do {
      if ((1 << (uVar5 & 0xff) & param_3 & 0xffff) != 0) {
        uVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        param_1[uVar5 + 1] = uVar4;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 != 0x10);
    if ((param_3 & 0x2000) != 0) {
      return 0;
    }
    param_1[0xe] = (uint)puVar3;
    return 0;
  case 1:
    if ((param_4 & 0xfffffffb) != 1) {
      return 2;
    }
    uVar4 = param_3 >> 0x10;
    param_3 = param_3 & 0xffff;
    uVar5 = param_3 + uVar4;
    if (param_4 == 1) {
      if (0x10 < uVar5) {
        return 2;
      }
      if (0xf < uVar4) {
        return 2;
      }
LAB_0011f922:
      uVar5 = 0;
LAB_0011f924:
      uVar6 = *param_1;
      if ((int)(uVar6 << 0x1f) < 0) {
        *param_1 = uVar6 & 0xfffffffe;
        if (param_4 == 5) {
          *param_1 = uVar6 & 0xfffffffe | 2;
          __gnu_Unwind_Save_VFP_D();
        }
        else {
          *param_1 = uVar6 & 0xfffffffc;
          __gnu_Unwind_Save_VFP(param_1 + 0x12);
        }
      }
    }
    else {
      if (0x20 < uVar5) {
        return 2;
      }
      if (uVar4 < 0x10) {
        if (uVar5 < 0x11) goto LAB_0011f922;
        uVar5 = uVar5 - 0x10;
      }
      else {
        uVar5 = param_3;
        if (param_3 == 0) goto LAB_0011f988;
      }
      if (param_4 != 5) {
        return 2;
      }
      if (uVar4 < 0x10) goto LAB_0011f924;
    }
    if ((uVar5 != 0) && ((int)(*param_1 << 0x1d) < 0)) {
      *param_1 = *param_1 & 0xfffffffb;
      __gnu_Unwind_Save_VFP_D_16_to_31(param_1 + 0x34);
    }
    if (param_4 == 1) {
      __gnu_Unwind_Save_VFP(local_a0);
      if (uVar5 == 0) goto LAB_0011f988;
    }
    else {
      if (uVar4 < 0x10) {
        __gnu_Unwind_Save_VFP_D(local_a0);
      }
      if (uVar5 == 0) goto LAB_0011f988;
      __gnu_Unwind_Save_VFP_D_16_to_31(local_120);
    }
    param_3 = 0x10 - uVar4;
LAB_0011f988:
    uVar6 = param_1[0xe];
    if (0 < (int)param_3) {
      iVar7 = param_3 << 1;
      puVar2 = (undefined4 *)(uVar6 - 4);
      while (bVar9 = iVar7 != 0, iVar7 = iVar7 + -1, bVar9) {
        puVar2 = puVar2 + 1;
        *(undefined4 *)((int)local_a0 + (uVar4 * 8 - uVar6) + (int)puVar2) = *puVar2;
      }
      uVar6 = uVar6 + param_3 * 8;
    }
    if (uVar5 != 0) {
      uVar8 = uVar4;
      if (uVar4 < 0x10) {
        uVar8 = 0x10;
      }
      iVar7 = 0;
      do {
        auStack_1a0[uVar8 * 2 + iVar7] = *(undefined4 *)(uVar6 + iVar7 * 4);
        iVar7 = iVar7 + 1;
      } while (iVar7 != uVar5 * 2);
      uVar6 = uVar6 + iVar7 * 4;
    }
    if (param_4 == 1) {
      uVar6 = uVar6 + 4;
    }
    param_1[0xe] = uVar6;
    if (param_4 == 1) {
      __gnu_Unwind_Restore_VFP(local_a0);
    }
    else {
      if (uVar4 < 0x10) {
        __gnu_Unwind_Restore_VFP_D(local_a0);
      }
      if (uVar5 != 0) {
        __gnu_Unwind_Restore_VFP_D_16_to_31(local_120);
      }
    }
    return 0;
  case 3:
    if (param_4 == 3) {
      uVar5 = param_3 & 0xffff;
      if (uVar5 + (param_3 >> 0x10) < 0x11) {
        if ((int)(*param_1 << 0x1c) < 0) {
          *param_1 = *param_1 & 0xfffffff7;
          __gnu_Unwind_Save_WMMXD(param_1 + 0x54);
        }
        iVar7 = uVar5 << 1;
        __gnu_Unwind_Save_WMMXD(local_a0);
        uVar4 = param_1[0xe];
        puVar2 = (undefined4 *)(uVar4 - 4);
        while (bVar9 = iVar7 != 0, iVar7 = iVar7 + -1, bVar9) {
          puVar2 = puVar2 + 1;
          *(undefined4 *)((int)local_a0 + ((param_3 >> 0x10) * 8 - uVar4) + (int)puVar2) = *puVar2;
        }
        param_1[0xe] = uVar4 + uVar5 * 8;
        __gnu_Unwind_Restore_WMMXD(local_a0);
        return 0;
      }
    }
    break;
  case 4:
    if ((param_4 == 0) && (param_3 < 0x11)) {
      if ((int)(*param_1 << 0x1b) < 0) {
        *param_1 = *param_1 & 0xffffffef;
        __gnu_Unwind_Save_WMMXC(param_1 + 0x74);
      }
      __gnu_Unwind_Save_WMMXC(local_a0);
      puVar2 = (undefined4 *)param_1[0xe];
      uVar5 = 0;
      do {
        if ((1 << (uVar5 & 0xff) & param_3) != 0) {
          uVar1 = *puVar2;
          puVar2 = puVar2 + 1;
          local_a0[uVar5] = uVar1;
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 != 4);
      param_1[0xe] = (uint)puVar2;
      __gnu_Unwind_Restore_WMMXC(local_a0);
      return 0;
    }
  }
  return 2;
}

