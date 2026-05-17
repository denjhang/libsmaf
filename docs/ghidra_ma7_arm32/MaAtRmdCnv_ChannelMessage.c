/* MaAtRmdCnv_ChannelMessage @ 00090ac8 1476B */


/* YAMAHA::MaAtRmdCnv_ChannelMessage(_MACNV_SEQ_INFO*, unsigned int, _MASND_CMD_PARAM*) */

undefined4
YAMAHA::MaAtRmdCnv_ChannelMessage(_MACNV_SEQ_INFO *param_1,uint param_2,_MASND_CMD_PARAM *param_3)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  byte bVar8;
  
  uVar7 = param_2 & 0x1000000;
  uVar5 = param_2 & 0xf;
  uVar4 = uVar5;
  if (uVar7 != 0) {
    uVar4 = uVar5 + 0x10;
  }
  iVar2 = DAT_00091220 + 0x90ae2;
  if (param_3 != (_MASND_CMD_PARAM *)0x0) {
    *(uint *)(param_3 + 8) = uVar4;
    *(undefined4 *)param_3 = 0x1b;
    *(undefined4 *)(param_3 + 4) = 0;
    *(undefined4 *)(param_3 + 0xc) = 0;
    *(undefined4 *)(param_3 + 0x10) = 0;
  }
  uVar4 = param_2 & 0xf0;
  iVar6 = *(int *)(param_1 + 4);
  if (0x60 < uVar4 - 0x80) {
    return 0xffffffff;
  }
  if ((int)(param_2 << 0x10) < 0) {
    return 0xffffffff;
  }
  if (uVar4 == 0xc0) {
LAB_00090de8:
    if (uVar7 != 0) {
      uVar5 = uVar5 + 0x10;
    }
    uVar7 = (param_2 & 0x7fff) >> 8;
    uVar4 = *(uint *)(uVar5 * 0x4c + iVar6 + 0x20);
    switch(uVar4 >> 8) {
    case 0x78:
      uVar4 = 0x80;
      uVar7 = 0;
      break;
    case 0x79:
      uVar4 = 0;
      break;
    default:
      if (uVar5 == 9) {
        uVar7 = 0;
        uVar4 = 0x80;
      }
      else {
        uVar4 = 0;
      }
      break;
    case 0x7c:
      uVar4 = (uint)*(byte *)(DAT_0009122c + (uVar4 & 0x7f) + 0x90f6a);
      break;
    case 0x7d:
      uVar4 = *(byte *)(DAT_00091228 + uVar7 + 0x90f54) + 0x80;
    }
    *(uint *)(uVar5 * 0x4c + iVar6 + 0x30) = uVar7;
    *(uint *)(param_3 + 8) = uVar5;
    *(uint *)(param_3 + 0xc) = uVar4;
    *(uint *)(param_3 + 0x10) = uVar7;
    *(undefined4 *)(param_3 + 4) = 0;
    *(undefined4 *)param_3 = 2;
    return 0;
  }
  if ((int)(param_2 << 8) < 0) {
    return 0xffffffff;
  }
  if (uVar4 == 0xb0) {
    if (uVar7 != 0) {
      uVar5 = uVar5 + 0x10;
    }
    uVar4 = (param_2 & 0x7fffff) >> 0x10;
    switch((param_2 & 0x7fff) >> 8) {
    case 0:
      if (uVar4 == 0x7a) {
        uVar4 = 0x7c00;
      }
      else if (uVar4 == 0x7b) {
        uVar4 = 32000;
      }
      else {
        uVar4 = uVar4 << 8;
      }
      iVar6 = uVar5 * 0x4c + iVar6;
      *(uint *)(iVar6 + 0x20) = uVar4 | *(byte *)(iVar6 + 0x20);
      return 0;
    case 1:
      iVar2 = DAT_00091230 + uVar4;
      *(uint *)(param_3 + 8) = uVar5;
      bVar8 = *(byte *)(iVar2 + 0x9117a);
      *(undefined4 *)(param_3 + 4) = 0;
      *(undefined4 *)(param_3 + 0x10) = 0;
      *(uint *)(param_3 + 0xc) = (uint)bVar8;
      *(undefined4 *)param_3 = 3;
      *(uint *)(uVar5 * 0x4c + iVar6 + 0x34) = uVar4;
      return 0;
    default:
      return 0xffffffff;
    case 6:
      iVar6 = uVar5 * 0x4c + iVar6;
      iVar2 = *(int *)(iVar6 + 0x24);
      if (iVar2 == 1) {
        uVar4 = uVar4 << 7;
        uVar1 = 0xe;
        *(uint *)(iVar6 + 0x28) = uVar4;
      }
      else if (iVar2 == 0) {
        *(uint *)(iVar6 + 0x44) = uVar4;
        uVar1 = 0xd;
      }
      else {
        if (iVar2 != 2) {
          return 0xffffffff;
        }
        uVar1 = 0xf;
        *(uint *)(iVar6 + 0x4c) = uVar4;
      }
      *(undefined4 *)param_3 = uVar1;
      *(uint *)(param_3 + 8) = uVar5;
      *(uint *)(param_3 + 0xc) = uVar4;
      *(undefined4 *)(param_3 + 4) = 0;
      *(undefined4 *)(param_3 + 0x10) = 0;
      return 0;
    case 7:
      *(uint *)(param_3 + 8) = uVar5;
      *(uint *)(param_3 + 0xc) = uVar4;
      *(undefined4 *)(param_3 + 4) = 0;
      *(undefined4 *)(param_3 + 0x10) = 0;
      *(undefined4 *)param_3 = 4;
      *(uint *)(uVar5 * 0x4c + iVar6 + 0x18) = uVar4;
      return 0;
    case 10:
      *(uint *)(param_3 + 8) = uVar5;
      *(uint *)(param_3 + 0xc) = uVar4;
      *(undefined4 *)(param_3 + 4) = 0;
      *(undefined4 *)(param_3 + 0x10) = 0;
      *(undefined4 *)param_3 = 5;
      *(uint *)(uVar5 * 0x4c + iVar6 + 0x38) = uVar4;
      return 0;
    case 0xb:
      *(uint *)(uVar5 * 0x4c + iVar6 + 0x1c) = uVar4;
      *(uint *)(param_3 + 8) = uVar5;
      *(uint *)(param_3 + 0xc) = uVar4;
      *(undefined4 *)(param_3 + 4) = 0;
      *(undefined4 *)(param_3 + 0x10) = 0;
      *(undefined4 *)param_3 = 6;
      return 0;
    case 0x20:
      iVar6 = uVar5 * 0x4c + iVar6;
      *(uint *)(iVar6 + 0x20) = uVar4 | *(uint *)(iVar6 + 0x20) & 0xff00;
      return 0;
    case 0x26:
      iVar6 = uVar5 * 0x4c + iVar6;
      iVar2 = *(int *)(iVar6 + 0x24);
      if (iVar2 == 1) {
        *(uint *)(param_3 + 8) = uVar5;
        *(undefined4 *)param_3 = 0xe;
        *(undefined4 *)(param_3 + 4) = 0;
        uVar5 = *(uint *)(iVar6 + 0x28);
        *(undefined4 *)(param_3 + 0x10) = 0;
        uVar4 = uVar4 | uVar5 & 0x3f80;
        *(uint *)(param_3 + 0xc) = uVar4;
        *(uint *)(iVar6 + 0x28) = uVar4;
        return 0;
      }
      if ((iVar2 != 0) && (iVar2 != 2)) {
        return 0xffffffff;
      }
      break;
    case 0x40:
      *(undefined4 *)(param_3 + 4) = 0;
      *(undefined4 *)(param_3 + 0x10) = 0;
      *(uint *)(param_3 + 8) = uVar5;
      *(undefined4 *)param_3 = 7;
      *(uint *)(param_3 + 0xc) = (uint)(0x3f < uVar4);
      *(uint *)(uVar5 * 0x4c + iVar6 + 0x3c) = uVar4;
      return 0;
    case 0x47:
      *(uint *)(param_3 + 8) = uVar5;
      *(uint *)(param_3 + 0xc) = uVar4;
      *(undefined4 *)(param_3 + 4) = 0;
      *(undefined4 *)(param_3 + 0x10) = 0;
      *(undefined4 *)param_3 = 8;
      *(uint *)(uVar5 * 0x4c + iVar6 + 0x50) = uVar4;
      return 0;
    case 0x4a:
      *(uint *)(param_3 + 8) = uVar5;
      *(uint *)(param_3 + 0xc) = uVar4;
      *(undefined4 *)(param_3 + 4) = 0;
      *(undefined4 *)(param_3 + 0x10) = 0;
      *(undefined4 *)param_3 = 9;
      *(uint *)(uVar5 * 0x4c + iVar6 + 0x54) = uVar4;
      return 0;
    case 0x4f:
      bVar8 = (byte)((param_2 << 9) >> 0x19);
      if (uVar4 == 1 || 5 < uVar4) {
        uVar4 = 0;
        bVar8 = 0;
      }
      (&UNK_001646a0)[uVar5 + *(int *)(iVar2 + DAT_00091224)] = bVar8;
      uVar1 = MaSmw_Ctrl(0x100,0x20000000,uVar4 | uVar5 << 0x10,(void *)0x0);
      return uVar1;
    case 0x5a:
      *(uint *)(param_3 + 8) = uVar5;
      *(uint *)(param_3 + 0xc) = uVar4;
      *(undefined4 *)(param_3 + 4) = 0;
      *(undefined4 *)(param_3 + 0x10) = 0;
      *(undefined4 *)param_3 = 10;
      *(uint *)(uVar5 * 0x4c + iVar6 + 0x58) = uVar4;
      return 0;
    case 0x5b:
      if (*(char *)(*(int *)(iVar2 + DAT_00091224) + 1) == '\0') {
        *(undefined4 *)(param_3 + 4) = 0;
        *(uint *)(param_3 + 8) = uVar5;
        *(uint *)(param_3 + 0xc) = uVar4;
        *(undefined4 *)(param_3 + 0x10) = 0;
        *(undefined4 *)param_3 = 0xb;
      }
      *(uint *)(uVar5 * 0x4c + iVar6 + 0x5c) = uVar4;
      return 0;
    case 0x5d:
      if (*(char *)(*(int *)(iVar2 + DAT_00091224) + 1) == '\0') {
        *(undefined4 *)(param_3 + 4) = 0;
        *(uint *)(param_3 + 8) = uVar5;
        *(uint *)(param_3 + 0xc) = uVar4;
        *(undefined4 *)(param_3 + 0x10) = 0;
        *(undefined4 *)param_3 = 0xc;
      }
      *(uint *)(uVar5 * 0x4c + iVar6 + 0x60) = uVar4;
      return 0;
    case 0x62:
    case 99:
      iVar6 = uVar5 * 0x4c + iVar6;
      *(uint *)(iVar6 + 0x24) = *(uint *)(iVar6 + 0x24) | 0x8000;
      return 0;
    case 100:
      iVar6 = uVar5 * 0x4c + iVar6;
      *(uint *)(iVar6 + 0x24) = uVar4 | *(uint *)(iVar6 + 0x24) & 0x7f00;
      return 0;
    case 0x65:
      iVar6 = uVar5 * 0x4c + iVar6;
      *(uint *)(iVar6 + 0x24) = *(uint *)(iVar6 + 0x24) & 0x7f | uVar4 << 8;
      return 0;
    case 0x78:
      *(uint *)(param_3 + 8) = uVar5;
      *(undefined4 *)(param_3 + 4) = 0;
      *(undefined4 *)(param_3 + 0xc) = 0;
      *(undefined4 *)(param_3 + 0x10) = 0;
      *(undefined4 *)param_3 = 0x10;
      return 0;
    case 0x79:
      iVar6 = uVar5 * 0x4c + iVar6;
      *(uint *)(param_3 + 8) = uVar5;
      *(undefined4 *)(param_3 + 4) = 0;
      *(undefined4 *)(param_3 + 0xc) = 0;
      *(undefined4 *)(param_3 + 0x10) = 0;
      *(undefined4 *)param_3 = 0x11;
      *(undefined4 *)(iVar6 + 0x34) = 0;
      *(undefined4 *)(iVar6 + 0x3c) = 0;
      *(undefined4 *)(iVar6 + 0x24) = 0x7f7f;
      *(undefined4 *)(iVar6 + 0x1c) = 0x7f;
      *(undefined4 *)(iVar6 + 0x40) = 0x2000;
      return 0;
    case 0x7b:
      *(uint *)(param_3 + 8) = uVar5;
      *(undefined4 *)(param_3 + 4) = 0;
      *(undefined4 *)(param_3 + 0xc) = 0;
      *(undefined4 *)(param_3 + 0x10) = 0;
      *(undefined4 *)param_3 = 0x12;
      return 0;
    case 0x7e:
      if (uVar4 == 1) {
        *(uint *)(param_3 + 8) = uVar5;
        *(undefined4 *)(param_3 + 4) = 0;
        *(undefined4 *)(param_3 + 0xc) = 0;
        *(undefined4 *)(param_3 + 0x10) = 0;
        *(undefined4 *)param_3 = 0x13;
        *(undefined4 *)(uVar5 * 0x4c + iVar6 + 0x48) = 0;
        return 0;
      }
      break;
    case 0x7f:
      if (uVar4 == 0) {
        *(undefined4 *)(param_3 + 4) = 0;
        *(uint *)(param_3 + 8) = uVar5;
        *(undefined4 *)(param_3 + 0xc) = 0;
        *(undefined4 *)(param_3 + 0x10) = 0;
        *(undefined4 *)param_3 = 0x14;
        *(undefined4 *)(uVar5 * 0x4c + iVar6 + 0x48) = 1;
        return 0;
      }
    }
    return 0;
  }
  if (0xb0 < uVar4) {
    if (uVar4 != 0xc0) {
      if (uVar4 != 0xe0) {
        return 0xffffffff;
      }
      if (uVar7 != 0) {
        uVar5 = uVar5 + 0x10;
      }
      *(uint *)(param_3 + 8) = uVar5;
      *(undefined4 *)(param_3 + 4) = 0;
      *(uint *)(param_3 + 0xc) = (param_2 & 0x7fff) >> 8 | ((param_2 & 0x7fffff) >> 0x10) << 7;
      *(undefined4 *)(param_3 + 0x10) = 0;
      *(undefined4 *)param_3 = 0x15;
      *(uint *)(uVar5 * 0x4c + iVar6 + 0x40) = param_2;
      return 0;
    }
    goto LAB_00090de8;
  }
  if (uVar4 != 0x80) {
    if (uVar4 != 0x90) {
      return 0xffffffff;
    }
    if (uVar7 != 0) {
      uVar5 = uVar5 + 0x10;
    }
    uVar4 = (param_2 & 0x7fffff) >> 0x10;
    uVar7 = (param_2 & 0x7fff) >> 8;
    if (uVar4 != 0) {
      iVar2 = *(int *)(iVar2 + DAT_00091224);
      if ((byte)(&UNK_001646f0)[iVar2] != uVar5) {
        uVar3 = *(uint *)(uVar5 * 0x4c + iVar6 + 0x20) & 0xff00;
        if (uVar5 < 0x10) {
          if ((uVar3 != 32000) || (uVar7 - 0xd < 0x4f)) {
            *(uint *)(param_3 + 8) = uVar5;
            *(uint *)(param_3 + 0xc) = uVar7;
            *(uint *)(param_3 + 0x10) = uVar4;
            *(undefined4 *)param_3 = 0;
            *(undefined4 *)(param_3 + 4) = 0;
            return 0;
          }
        }
        else {
          if (uVar3 != 32000) {
            return 0;
          }
          if (uVar7 - 0xd < 0x4f) {
            return 0;
          }
        }
        if (0x5b < uVar7) {
          uVar7 = uVar7 - 0x4f;
        }
        *(uint *)(param_3 + 8) = uVar5;
        *(uint *)(param_3 + 0xc) = uVar7;
        *(uint *)(param_3 + 0x10) = uVar4;
        *(undefined4 *)param_3 = 0x20;
        *(undefined4 *)(param_3 + 4) = 0;
        return 0;
      }
      if (0x3f < uVar7) {
        return 0;
      }
      if (*(int *)(iVar2 + (uVar7 + 0x2c8df) * 8) == 0) {
        return 0;
      }
      if (*(uchar **)(&UNK_001648f8 + iVar2) != (uchar *)0x0) {
        MaSndDrv_SetHvVoice(param_1,0xff,*(uchar **)(&UNK_001648f8 + iVar2),
                            *(uint *)(&UNK_001648fc + iVar2));
      }
      MaSmw_ReceiveMsg(1,0,2,uVar7);
      return 0;
    }
  }
  uVar4 = param_2 & 0xf;
  if ((int)(param_2 << 7) < 0) {
    uVar4 = uVar4 + 0x10;
  }
  uVar5 = (param_2 & 0x7fff) >> 8;
  if ((byte)(&UNK_001646f0)[*(int *)(DAT_000908e4 + 0x90886)] == uVar4) {
    return 0;
  }
  uVar7 = *(uint *)(uVar4 * 0x4c + iVar6 + 0x20) & 0xff00;
  if (uVar4 < 0x10) {
    if ((uVar7 != 32000) || (uVar5 - 0xd < 0x4f)) {
      uVar1 = 1;
      *(uint *)(param_3 + 8) = uVar4;
      goto LAB_000908ae;
    }
  }
  else {
    if (uVar7 != 32000) {
      return 0;
    }
    if (uVar5 - 0xd < 0x4f) {
      return 0;
    }
  }
  *(uint *)(param_3 + 8) = uVar4;
  if (0x5b < uVar5) {
    uVar5 = uVar5 - 0x4f;
  }
  uVar1 = 0x21;
LAB_000908ae:
  *(uint *)(param_3 + 0xc) = uVar5;
  *(undefined4 *)param_3 = uVar1;
  *(undefined4 *)(param_3 + 4) = 0;
  *(undefined4 *)(param_3 + 0x10) = 0;
  return 0;
}

