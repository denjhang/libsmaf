/* MaRmdCnv_ChannelMessage @ 001fa430 1304B */


/* YAMAHA::MaRmdCnv_ChannelMessage(_MARMDCNV_INFO*, unsigned int, _MASND_CMD_PARAM*) */

uint YAMAHA::MaRmdCnv_ChannelMessage(_MARMDCNV_INFO *param_1,uint param_2,_MASND_CMD_PARAM *param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  byte bVar4;
  uint uVar5;
  undefined4 uVar6;
  ulong uVar7;
  ulong uVar8;
  
  uVar1 = param_2 & 0xf;
  uVar8 = (ulong)uVar1;
  if (param_3 != (_MASND_CMD_PARAM *)0x0) {
    *(undefined4 *)(param_3 + 4) = 0;
    *(undefined4 *)param_3 = 0x1b;
    *(uint *)(param_3 + 8) = uVar1;
    *(undefined8 *)(param_3 + 0x10) = 0;
    *(undefined4 *)(param_3 + 0x18) = 0;
  }
  uVar5 = param_2 & 0xf0;
  if ((0x7f < uVar5 - 0x80) || ((param_2 >> 0xf & 1) != 0)) {
    return 0xffffffe8;
  }
  if (uVar5 == 0xc0) {
LAB_001fa558:
    uVar8 = (ulong)(param_2 >> 8) & 0x7f;
    uVar6 = (undefined4)uVar8;
    switch(*(uint *)(param_1 + (ulong)uVar1 * 0x18 + 0x10) >> 8) {
    case 0x78:
      uVar8 = 0x80;
      uVar6 = 0;
      break;
    case 0x79:
      uVar8 = 0;
      break;
    default:
      uVar8 = 0x80;
      if (uVar1 == 9) {
        uVar6 = 0;
      }
      else {
        uVar8 = 0;
      }
      break;
    case 0x7c:
      uVar8 = (ulong)(byte)(&DAT_0048ffd0)
                           [(ulong)*(uint *)(param_1 + (ulong)uVar1 * 0x18 + 0x10) & 0x7f];
      break;
    case 0x7d:
      uVar6 = 0;
      uVar8 = (ulong)(byte)(&DAT_0048ffd0)[uVar8] + 0x80;
    }
    *(undefined4 *)(param_3 + 4) = 0;
    *(undefined4 *)param_3 = 2;
    *(uint *)(param_3 + 8) = uVar1;
    *(ulong *)(param_3 + 0x10) = uVar8;
    *(undefined4 *)(param_3 + 0x18) = uVar6;
    return 0;
  }
  uVar2 = param_2 & 0x800000;
  if ((param_2 >> 0x17 & 1) != 0) {
    return 0xffffffe8;
  }
  if (uVar5 != 0xb0) {
    if (uVar5 < 0xb1) {
      if (uVar5 == 0x80) {
        *(uint *)(param_3 + 4) = uVar2;
        *(undefined4 *)param_3 = 1;
        *(uint *)(param_3 + 8) = uVar1;
        *(ulong *)(param_3 + 0x10) = (ulong)(param_2 >> 8) & 0x7f;
        *(uint *)(param_3 + 0x18) = uVar2;
        return uVar2;
      }
      if (uVar5 == 0x90) {
        uVar5 = param_2 >> 0x10 & 0x7f;
        uVar8 = (ulong)(param_2 >> 8) & 0x7f;
        if (uVar5 == 0) {
          *(undefined4 *)param_3 = 1;
          *(undefined4 *)(param_3 + 4) = 0;
          *(uint *)(param_3 + 8) = uVar1;
          *(ulong *)(param_3 + 0x10) = uVar8;
          *(undefined4 *)(param_3 + 0x18) = 0;
          return 0;
        }
        *(uint *)param_3 = uVar2;
        *(uint *)(param_3 + 4) = uVar2;
        *(uint *)(param_3 + 8) = uVar1;
        *(ulong *)(param_3 + 0x10) = uVar8;
        *(uint *)(param_3 + 0x18) = uVar5;
        return uVar2;
      }
    }
    else {
      if (uVar5 == 0xc0) goto LAB_001fa558;
      if (uVar5 == 0xe0) {
        *(uint *)(param_3 + 4) = uVar2;
        *(undefined4 *)param_3 = 0x15;
        *(uint *)(param_3 + 8) = uVar1;
        *(uint *)(param_3 + 0x18) = uVar2;
        *(ulong *)(param_3 + 0x10) = (ulong)(param_2 >> 8 & 0x7f | (param_2 >> 0x10 & 0x7f) << 7);
        return uVar2;
      }
    }
switchD_001fa548_caseD_2:
    return 0;
  }
  uVar7 = (ulong)(param_2 >> 0x10) & 0x7f;
  uVar5 = (uint)uVar7;
  switch(param_2 >> 8 & 0x7f) {
  case 0:
    *(uint *)(param_1 + uVar8 * 0x18 + 0x10) = (uint)(byte)param_1[uVar8 * 0x18 + 0x10] | uVar5 << 8
    ;
    break;
  case 1:
    *(undefined4 *)param_3 = 3;
    *(undefined4 *)(param_3 + 4) = 0;
    bVar4 = (&DAT_0048ff50)[uVar7];
    *(uint *)(param_3 + 8) = uVar1;
    *(ulong *)(param_3 + 0x10) = (ulong)bVar4;
    *(undefined4 *)(param_3 + 0x18) = 0;
    break;
  default:
    goto switchD_001fa548_caseD_2;
  case 6:
    iVar3 = *(int *)(param_1 + (ulong)uVar1 * 0x18 + 0x14);
    if (iVar3 == 1) {
      uVar7 = (ulong)(uVar5 << 7);
      uVar6 = 0xe;
      *(uint *)(param_1 + (ulong)uVar1 * 0x18 + 0x18) = uVar5 << 7;
    }
    else if (iVar3 == 0) {
      uVar6 = 0xd;
    }
    else {
      if (iVar3 != 2) {
        return 0;
      }
      uVar6 = 0xf;
    }
    *(undefined4 *)param_3 = uVar6;
    *(undefined4 *)(param_3 + 4) = 0;
    *(uint *)(param_3 + 8) = uVar1;
    *(ulong *)(param_3 + 0x10) = uVar7;
    *(undefined4 *)(param_3 + 0x18) = 0;
    break;
  case 7:
    *(uint *)(param_3 + 8) = uVar1;
    *(undefined4 *)(param_3 + 4) = 0;
    *(undefined4 *)param_3 = 4;
    *(ulong *)(param_3 + 0x10) = uVar7;
    *(undefined4 *)(param_3 + 0x18) = 0;
    *(uint *)(param_1 + (ulong)uVar1 * 0x18 + 8) = uVar5;
    break;
  case 10:
    uVar6 = 5;
    goto LAB_001fa684;
  case 0xb:
    *(uint *)(param_1 + (ulong)uVar1 * 0x18 + 0xc) = uVar5;
    *(undefined4 *)param_3 = 6;
    *(undefined4 *)(param_3 + 4) = 0;
    *(uint *)(param_3 + 8) = uVar1;
    *(ulong *)(param_3 + 0x10) = uVar7;
    *(undefined4 *)(param_3 + 0x18) = 0;
    break;
  case 0x20:
    *(uint *)(param_1 + uVar8 * 0x18 + 0x10) =
         uVar5 | *(uint *)(param_1 + uVar8 * 0x18 + 0x10) & 0xff00;
    break;
  case 0x26:
    if (*(int *)(param_1 + uVar8 * 0x18 + 0x14) != 1) {
      return 0;
    }
    uVar2 = *(uint *)(param_1 + uVar8 * 0x18 + 0x18);
    *(undefined4 *)(param_3 + 4) = 0;
    *(undefined4 *)param_3 = 0xe;
    *(uint *)(param_3 + 8) = uVar1;
    *(ulong *)(param_3 + 0x10) = (ulong)(uVar5 | uVar2 & 0x3f80);
    *(undefined4 *)(param_3 + 0x18) = 0;
    break;
  case 0x40:
    *(undefined4 *)param_3 = 7;
    *(undefined4 *)(param_3 + 4) = 0;
    *(uint *)(param_3 + 8) = uVar1;
    *(ulong *)(param_3 + 0x10) = (ulong)(0x3f < uVar5);
    *(undefined4 *)(param_3 + 0x18) = 0;
    break;
  case 0x47:
    uVar6 = 8;
    goto LAB_001fa684;
  case 0x4a:
    uVar6 = 9;
    goto LAB_001fa684;
  case 0x5a:
    uVar6 = 10;
    goto LAB_001fa684;
  case 0x5b:
    uVar6 = 0xb;
    goto LAB_001fa684;
  case 0x5d:
    uVar6 = 0xc;
LAB_001fa684:
    *(undefined4 *)param_3 = uVar6;
    *(uint *)(param_3 + 8) = uVar1;
    *(undefined4 *)(param_3 + 4) = 0;
    *(ulong *)(param_3 + 0x10) = uVar7;
    *(undefined4 *)(param_3 + 0x18) = 0;
    break;
  case 0x62:
  case 99:
    *(uint *)(param_1 + uVar8 * 0x18 + 0x14) = *(uint *)(param_1 + uVar8 * 0x18 + 0x14) | 0x8000;
    break;
  case 100:
    *(uint *)(param_1 + uVar8 * 0x18 + 0x14) =
         uVar5 | *(uint *)(param_1 + uVar8 * 0x18 + 0x14) & 0x7f00;
    break;
  case 0x65:
    *(uint *)(param_1 + uVar8 * 0x18 + 0x14) =
         *(uint *)(param_1 + uVar8 * 0x18 + 0x14) & 0x7f | uVar5 << 8;
    break;
  case 0x78:
    *(undefined4 *)(param_3 + 4) = 0;
    uVar6 = 0x10;
    goto LAB_001fa778;
  case 0x79:
    *(uint *)(param_3 + 8) = uVar1;
    *(undefined4 *)(param_3 + 4) = 0;
    *(undefined4 *)param_3 = 0x11;
    *(undefined8 *)(param_3 + 0x10) = 0;
    *(undefined4 *)(param_3 + 0x18) = 0;
    *(undefined4 *)(param_1 + uVar8 * 0x18 + 0xc) = 0x7f;
    *(undefined4 *)(param_1 + uVar8 * 0x18 + 0x14) = 0x7f7f;
    break;
  case 0x7b:
    *(undefined4 *)(param_3 + 4) = 0;
    uVar6 = 0x12;
LAB_001fa778:
    *(undefined4 *)param_3 = uVar6;
    *(uint *)(param_3 + 8) = uVar1;
    *(undefined8 *)(param_3 + 0x10) = 0;
    *(undefined4 *)(param_3 + 0x18) = 0;
    break;
  case 0x7e:
    if (uVar5 == 1) {
      *(undefined4 *)(param_3 + 4) = 0;
      *(undefined4 *)param_3 = 0x13;
      *(uint *)(param_3 + 8) = uVar1;
      *(undefined8 *)(param_3 + 0x10) = 0;
      *(undefined4 *)(param_3 + 0x18) = 0;
    }
    break;
  case 0x7f:
    if (uVar5 == 0) {
      *(undefined4 *)(param_3 + 4) = 0;
      *(undefined4 *)param_3 = 0x14;
      *(uint *)(param_3 + 8) = uVar1;
      *(undefined8 *)(param_3 + 0x10) = 0;
      *(undefined4 *)(param_3 + 0x18) = 0;
    }
  }
  return 0;
}

