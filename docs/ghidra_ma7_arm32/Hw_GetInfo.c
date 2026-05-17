/* Hw_GetInfo @ 00037a74 780B */


uint Hw_GetInfo(undefined4 param_1,uint param_2)

{
  sbyte sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  byte bVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  
  if (*(char *)(DAT_00037d98 + 0x37a82) == -1) {
    return 0xffffffff;
  }
  EnterCriticalSection((critical_section *)(DAT_00037d9c + 0x37a90));
  switch(param_1) {
  case 0:
    uVar7 = ARM::GetDllVersion();
    break;
  case 1:
  case 2:
  case 3:
    uVar7 = 0;
    break;
  case 4:
    if ((*(byte *)(DAT_00037da4 + 0x37acd) & 8) != 0) goto LAB_00037ad8;
    uVar7 = ARM::VIRTUALREGISTER_GetRegM(*(byte *)(DAT_00037da4 + 0x37acd) & 8,0x87);
    iVar5 = DAT_00037de4;
    iVar4 = DAT_00037dcc;
    iVar3 = DAT_00037dc4;
    iVar2 = DAT_00037dbc;
    iVar10 = DAT_00037db0;
    switch(uVar7 & 7) {
    case 2:
      uVar7 = FUN_00037064(0);
      bVar6 = *(byte *)(DAT_00037dc8 + 0x37c0b) & 8;
      break;
    case 3:
      uVar7 = FUN_00037064(0);
      iVar10 = *(int *)(&BYTE_00037c48 + iVar4);
      bVar6 = *(byte *)(iVar4 + 0x37c21);
      goto joined_r0x00037b2a;
    case 4:
      bVar6 = *(byte *)(DAT_00037dc4 + 0x37bef) & 8;
      if ((*(byte *)(DAT_00037dc4 + 0x37bef) & 8) == 0) {
        uVar7 = ARM::VIRTUALREGISTER_GetRegM(bVar6,0x86);
        bVar6 = *(byte *)(iVar3 + 0x37bef) & 8;
        uVar7 = uVar7 & 7;
      }
      else {
        uVar7 = 7;
      }
      break;
    case 5:
      uVar7 = 7;
      bVar6 = *(byte *)(DAT_00037dbc + 0x37bc7) & 8;
      if ((*(byte *)(DAT_00037dbc + 0x37bc7) & 8) == 0) {
        uVar7 = ARM::VIRTUALREGISTER_GetRegM(bVar6,0x86);
        bVar6 = *(byte *)(iVar2 + 0x37bc7) & 8;
        uVar7 = uVar7 & 7;
      }
      if (*(int *)(DAT_00037dc0 + 0x37c04) == 0) {
        uVar7 = 0;
      }
      break;
    case 6:
      if ((*(byte *)(DAT_00037db0 + 0x37b57) & 8) == 0) {
        uVar7 = ARM::VIRTUALREGISTER_GetRegM(*(byte *)(DAT_00037db0 + 0x37b57) & 8,0x86);
        uVar7 = uVar7 & 7;
        if (((*(byte *)(iVar10 + 0x37b57) & 8) != 0) ||
           (uVar8 = ARM::VIRTUALREGISTER_GetRegM(*(byte *)(iVar10 + 0x37b57) & 8,0x88),
           (uVar8 & 0x7fff) >> 7 != 0)) goto LAB_00037b64;
      }
      else {
LAB_00037b64:
        uVar7 = FUN_00033fe4(0x89);
        uVar8 = FUN_00033fe4(0x8a);
        uVar9 = FUN_00033fe4(0x8b);
        sVar1 = *(sbyte *)(DAT_00037db4 + 0x37bac);
        uVar7 = (uVar9 >> sVar1 & 1) << 2 | (uVar8 >> sVar1 & 1) << 1 | uVar7 >> sVar1 & 1;
      }
      bVar6 = *(byte *)(DAT_00037db8 + 0x37bab) & 8;
      break;
    case 7:
      if ((*(byte *)(DAT_00037de4 + 0x37d55) & 8) == 0) {
        uVar7 = ARM::VIRTUALREGISTER_GetRegM(*(byte *)(DAT_00037de4 + 0x37d55) & 8,0x86);
        uVar7 = uVar7 & 7;
        if (((*(byte *)(iVar5 + 0x37d55) & 8) != 0) ||
           (uVar8 = ARM::VIRTUALREGISTER_GetRegM(*(byte *)(iVar5 + 0x37d55) & 8,0x88),
           (uVar8 & 0x7fff) >> 7 != 0)) goto LAB_00037ad8;
      }
      else {
LAB_00037ad8:
        uVar7 = FUN_00033fe4(0x89);
        uVar8 = FUN_00033fe4(0x8a);
        uVar9 = FUN_00033fe4(0x8b);
        sVar1 = *(sbyte *)(DAT_00037da8 + 0x37b20);
        uVar7 = (uVar9 >> sVar1 & 1) << 2 | (uVar8 >> sVar1 & 1) << 1 | uVar7 >> sVar1 & 1;
      }
      iVar10 = *(int *)((int)&USHORT_00037b4a + DAT_00037dac);
      bVar6 = *(byte *)(DAT_00037dac + 0x37b23);
joined_r0x00037b2a:
      if (iVar10 == 0) {
        uVar7 = 0;
      }
      bVar6 = bVar6 & 8;
      break;
    default:
      uVar7 = 0;
      bVar6 = *(byte *)(DAT_00037de0 + 0x37ce7) & 8;
    }
    if (bVar6 == 0) {
      uVar8 = ARM::VIRTUALREGISTER_GetRegM('\0',0x8d);
      switch(uVar8 & 7) {
      case 2:
        iVar10 = FUN_00037064(2);
        uVar7 = uVar7 + iVar10 * 0x10;
        break;
      case 3:
        uVar8 = FUN_00037064(2);
        uVar7 = uVar7 + (uVar8 & *(uint *)(DAT_00037ddc + 0x37cd6)) * 0x10;
        break;
      case 4:
        if ((*(byte *)(DAT_00037dd8 + 0x37c7f) & 8) == 0) {
          uVar8 = ARM::VIRTUALREGISTER_GetRegM(*(byte *)(DAT_00037dd8 + 0x37c7f) & 8,0x8c);
          uVar7 = uVar7 + (uVar8 & 1) * 0x10;
        }
        else {
          uVar7 = uVar7 + 0x10;
        }
        break;
      case 5:
        if ((*(byte *)(DAT_00037dd0 + 0x37c53) & 8) == 0) {
          uVar8 = ARM::VIRTUALREGISTER_GetRegM(*(byte *)(DAT_00037dd0 + 0x37c53) & 8,0x8c);
          uVar8 = uVar8 & 1;
        }
        else {
          uVar8 = 1;
        }
        uVar7 = uVar7 + (uVar8 & *(uint *)(DAT_00037dd4 + 0x37ca0)) * 0x10;
      }
    }
    break;
  case 5:
    uVar7 = ARM::DINCONTROL_GetPos(param_2);
    break;
  default:
    uVar7 = 0xffffffff;
  }
  LeaveCriticalSection((critical_section *)(DAT_00037da0 + 0x37ab4));
  return uVar7;
}

