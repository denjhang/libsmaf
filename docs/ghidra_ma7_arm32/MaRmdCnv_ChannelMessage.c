/* MaRmdCnv_ChannelMessage @ 000c0d00 910B */


/* YAMAHA::MaRmdCnv_ChannelMessage(_MARMDCNV_INFO*, unsigned int, _MASND_CMD_PARAM*) */

undefined4
YAMAHA::MaRmdCnv_ChannelMessage(_MARMDCNV_INFO *param_1,uint param_2,_MASND_CMD_PARAM *param_3)

{
  byte bVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  
  uVar2 = param_2 & 0xf;
  if (param_3 != (_MASND_CMD_PARAM *)0x0) {
    *(uint *)(param_3 + 8) = uVar2;
    *(undefined4 *)param_3 = 0x1b;
    *(undefined4 *)(param_3 + 4) = 0;
    *(undefined4 *)(param_3 + 0xc) = 0;
    *(undefined4 *)(param_3 + 0x10) = 0;
  }
  iVar6 = DAT_000c119c;
  uVar5 = param_2 & 0xf0;
  if ((0x7f < uVar5 - 0x80) || ((int)(param_2 << 0x10) < 0)) {
    return 0xffffffe8;
  }
  if (uVar5 == 0xc0) {
LAB_000c0ec4:
    uVar5 = (param_2 & 0x7fff) >> 8;
    switch(*(uint *)(param_1 + uVar2 * 0x18 + 0x10) >> 8) {
    case 0x78:
      uVar4 = 0x80;
      uVar5 = 0;
      break;
    case 0x79:
      uVar4 = 0;
      break;
    default:
      if (uVar2 == 9) {
        uVar5 = 0;
        uVar4 = 0x80;
      }
      else {
        uVar4 = 0;
      }
      break;
    case 0x7c:
      uVar4 = (uint)*(byte *)(DAT_000c1198 + (*(uint *)(param_1 + uVar2 * 0x18 + 0x10) & 0x7f) +
                             0xc0fb6);
      break;
    case 0x7d:
      iVar6 = DAT_000c1194 + uVar5;
      uVar5 = 0;
      uVar4 = *(byte *)(iVar6 + 0xc0fa0) + 0x80;
    }
    *(uint *)(param_3 + 0x10) = uVar5;
    *(uint *)(param_3 + 8) = uVar2;
    *(uint *)(param_3 + 0xc) = uVar4;
    *(undefined4 *)param_3 = 2;
    *(undefined4 *)(param_3 + 4) = 0;
    return 0;
  }
  if ((param_2 & 0x800000) != 0) {
    return 0xffffffe8;
  }
  if (uVar5 != 0xb0) {
    if (uVar5 < 0xb1) {
      if (uVar5 == 0x80) {
        *(undefined4 *)(param_3 + 4) = 0;
        *(uint *)(param_3 + 0xc) = (param_2 & 0x7fff) >> 8;
        *(uint *)(param_3 + 8) = uVar2;
        *(undefined4 *)(param_3 + 0x10) = 0;
        *(undefined4 *)param_3 = 1;
        return 0;
      }
      if (uVar5 == 0x90) {
        uVar4 = (param_2 & 0x7fffff) >> 0x10;
        uVar5 = (param_2 & 0x7fff) >> 8;
        if (uVar4 == 0) {
          *(uint *)(param_3 + 8) = uVar2;
          *(undefined4 *)(param_3 + 4) = 0;
          *(uint *)(param_3 + 0xc) = uVar5;
          *(undefined4 *)(param_3 + 0x10) = 0;
          *(undefined4 *)param_3 = 1;
          return 0;
        }
        *(undefined4 *)param_3 = 0;
        *(undefined4 *)(param_3 + 4) = 0;
        *(uint *)(param_3 + 8) = uVar2;
        *(uint *)(param_3 + 0xc) = uVar5;
        *(uint *)(param_3 + 0x10) = uVar4;
        return 0;
      }
    }
    else {
      if (uVar5 == 0xc0) goto LAB_000c0ec4;
      if (uVar5 == 0xe0) {
        *(undefined4 *)(param_3 + 4) = 0;
        *(undefined4 *)(param_3 + 0x10) = 0;
        *(uint *)(param_3 + 8) = uVar2;
        *(uint *)(param_3 + 0xc) = (param_2 & 0x7fff) >> 8 | ((param_2 & 0x7fffff) >> 0x10) << 7;
        *(undefined4 *)param_3 = 0x15;
        return 0;
      }
    }
switchD_000c0dba_caseD_2:
    return 0;
  }
  uVar5 = (param_2 & 0x7fffff) >> 0x10;
  switch((param_2 & 0x7fff) >> 8) {
  case 0:
    *(uint *)(param_1 + uVar2 * 0x18 + 0x10) = (uint)(byte)param_1[uVar2 * 0x18 + 0x10] | uVar5 << 8
    ;
    break;
  case 1:
    *(uint *)(param_3 + 8) = uVar2;
    *(undefined4 *)(param_3 + 4) = 0;
    bVar1 = *(byte *)(iVar6 + 0xc0f58 + uVar5);
    *(undefined4 *)(param_3 + 0x10) = 0;
    *(undefined4 *)param_3 = 3;
    *(uint *)(param_3 + 0xc) = (uint)bVar1;
    break;
  default:
    goto switchD_000c0dba_caseD_2;
  case 6:
    iVar6 = *(int *)(param_1 + uVar2 * 0x18 + 0x14);
    if (iVar6 == 1) {
      uVar5 = uVar5 << 7;
      uVar3 = 0xe;
      *(uint *)(param_1 + (uVar2 + 1) * 0x18) = uVar5;
    }
    else if (iVar6 == 0) {
      uVar3 = 0xd;
    }
    else {
      if (iVar6 != 2) {
        return 0;
      }
      uVar3 = 0xf;
    }
    *(undefined4 *)param_3 = uVar3;
    *(uint *)(param_3 + 8) = uVar2;
    *(uint *)(param_3 + 0xc) = uVar5;
    *(undefined4 *)(param_3 + 4) = 0;
    *(undefined4 *)(param_3 + 0x10) = 0;
    break;
  case 7:
    *(uint *)(param_3 + 8) = uVar2;
    *(uint *)(param_3 + 0xc) = uVar5;
    *(undefined4 *)(param_3 + 4) = 0;
    *(undefined4 *)(param_3 + 0x10) = 0;
    *(undefined4 *)param_3 = 4;
    *(uint *)(param_1 + uVar2 * 0x18 + 8) = uVar5;
    break;
  case 10:
    *(uint *)(param_3 + 0xc) = uVar5;
    *(uint *)(param_3 + 8) = uVar2;
    *(undefined4 *)(param_3 + 4) = 0;
    *(undefined4 *)(param_3 + 0x10) = 0;
    *(undefined4 *)param_3 = 5;
    break;
  case 0xb:
    *(uint *)(param_1 + uVar2 * 0x18 + 0xc) = uVar5;
    *(uint *)(param_3 + 8) = uVar2;
    *(uint *)(param_3 + 0xc) = uVar5;
    *(undefined4 *)(param_3 + 4) = 0;
    *(undefined4 *)(param_3 + 0x10) = 0;
    *(undefined4 *)param_3 = 6;
    break;
  case 0x20:
    *(uint *)(param_1 + uVar2 * 0x18 + 0x10) =
         uVar5 | *(uint *)(param_1 + uVar2 * 0x18 + 0x10) & 0xff00;
    break;
  case 0x26:
    if (*(int *)(param_1 + uVar2 * 0x18 + 0x14) != 1) {
      return 0;
    }
    *(uint *)(param_3 + 8) = uVar2;
    *(undefined4 *)param_3 = 0xe;
    *(undefined4 *)(param_3 + 4) = 0;
    uVar2 = *(uint *)(param_1 + (uVar2 + 1) * 0x18);
    *(undefined4 *)(param_3 + 0x10) = 0;
    *(uint *)(param_3 + 0xc) = uVar5 | uVar2 & 0x3f80;
    break;
  case 0x40:
    *(uint *)(param_3 + 8) = uVar2;
    *(undefined4 *)(param_3 + 4) = 0;
    *(uint *)(param_3 + 0xc) = (uint)(0x3f < uVar5);
    *(undefined4 *)(param_3 + 0x10) = 0;
    *(undefined4 *)param_3 = 7;
    break;
  case 0x47:
    *(uint *)(param_3 + 8) = uVar2;
    *(uint *)(param_3 + 0xc) = uVar5;
    *(undefined4 *)(param_3 + 4) = 0;
    *(undefined4 *)(param_3 + 0x10) = 0;
    *(undefined4 *)param_3 = 8;
    break;
  case 0x4a:
    *(uint *)(param_3 + 8) = uVar2;
    *(uint *)(param_3 + 0xc) = uVar5;
    *(undefined4 *)(param_3 + 4) = 0;
    *(undefined4 *)(param_3 + 0x10) = 0;
    *(undefined4 *)param_3 = 9;
    break;
  case 0x5a:
    *(uint *)(param_3 + 0xc) = uVar5;
    *(uint *)(param_3 + 8) = uVar2;
    *(undefined4 *)(param_3 + 4) = 0;
    *(undefined4 *)(param_3 + 0x10) = 0;
    *(undefined4 *)param_3 = 10;
    break;
  case 0x5b:
    *(uint *)(param_3 + 8) = uVar2;
    *(uint *)(param_3 + 0xc) = uVar5;
    *(undefined4 *)(param_3 + 4) = 0;
    *(undefined4 *)(param_3 + 0x10) = 0;
    *(undefined4 *)param_3 = 0xb;
    break;
  case 0x5d:
    *(uint *)(param_3 + 8) = uVar2;
    *(uint *)(param_3 + 0xc) = uVar5;
    *(undefined4 *)(param_3 + 4) = 0;
    *(undefined4 *)(param_3 + 0x10) = 0;
    *(undefined4 *)param_3 = 0xc;
    break;
  case 0x62:
  case 99:
    *(uint *)(param_1 + uVar2 * 0x18 + 0x14) = *(uint *)(param_1 + uVar2 * 0x18 + 0x14) | 0x8000;
    break;
  case 100:
    *(uint *)(param_1 + uVar2 * 0x18 + 0x14) =
         uVar5 | *(uint *)(param_1 + uVar2 * 0x18 + 0x14) & 0x7f00;
    break;
  case 0x65:
    *(uint *)(param_1 + uVar2 * 0x18 + 0x14) =
         *(uint *)(param_1 + uVar2 * 0x18 + 0x14) & 0x7f | uVar5 << 8;
    break;
  case 0x78:
    *(uint *)(param_3 + 8) = uVar2;
    *(undefined4 *)(param_3 + 4) = 0;
    *(undefined4 *)(param_3 + 0xc) = 0;
    *(undefined4 *)(param_3 + 0x10) = 0;
    *(undefined4 *)param_3 = 0x10;
    break;
  case 0x79:
    *(uint *)(param_3 + 8) = uVar2;
    *(undefined4 *)(param_3 + 4) = 0;
    *(undefined4 *)(param_3 + 0xc) = 0;
    *(undefined4 *)(param_3 + 0x10) = 0;
    *(undefined4 *)param_3 = 0x11;
    *(undefined4 *)(param_1 + uVar2 * 0x18 + 0x14) = 0x7f7f;
    *(undefined4 *)(param_1 + uVar2 * 0x18 + 0xc) = 0x7f;
    break;
  case 0x7b:
    *(uint *)(param_3 + 8) = uVar2;
    *(undefined4 *)(param_3 + 4) = 0;
    *(undefined4 *)(param_3 + 0xc) = 0;
    *(undefined4 *)(param_3 + 0x10) = 0;
    *(undefined4 *)param_3 = 0x12;
    break;
  case 0x7e:
    if (uVar5 != 1) {
      return 0;
    }
    *(uint *)(param_3 + 8) = uVar2;
    *(undefined4 *)(param_3 + 4) = 0;
    *(undefined4 *)(param_3 + 0xc) = 0;
    *(undefined4 *)(param_3 + 0x10) = 0;
    *(undefined4 *)param_3 = 0x13;
    break;
  case 0x7f:
    if (uVar5 != 0) {
      return 0;
    }
    *(uint *)(param_3 + 8) = uVar2;
    *(undefined4 *)(param_3 + 4) = 0;
    *(undefined4 *)(param_3 + 0xc) = 0;
    *(undefined4 *)(param_3 + 0x10) = 0;
    *(undefined4 *)param_3 = 0x14;
  }
  return 0;
}

