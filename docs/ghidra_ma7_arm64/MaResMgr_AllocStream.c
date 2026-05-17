/* MaResMgr_AllocStream @ 00231370 572B */


/* YAMAHA::MaResMgr_AllocStream(unsigned int, unsigned int, unsigned int*) */

undefined1 * YAMAHA::MaResMgr_AllocStream(uint param_1,uint param_2,uint *param_3)

{
  long lVar1;
  uint uVar2;
  byte bVar3;
  byte bVar4;
  char cVar5;
  undefined1 uVar6;
  long lVar7;
  
  lVar1 = DAT_00748f10;
  if ((param_3 == (uint *)0x0) || (*(char *)(DAT_00748f10 + 0x1434) == '\x01')) {
    return (undefined1 *)0x0;
  }
  *param_3 = 1;
  if (param_1 == 1) {
    if (DAT_00748f18 < '\0') {
      uVar2 = 0;
      cVar5 = DAT_00748f18;
LAB_002314d0:
      (&DAT_00748f18)[(ulong)uVar2 * 0x30] = cVar5 + '\x01';
      *param_3 = 0;
      return &DAT_00748f18 + (ulong)uVar2 * 0x30;
    }
    uVar2 = 1;
    cVar5 = DAT_00748f48;
    if (DAT_00748f48 < '\0') goto LAB_002314d0;
    if (DAT_00748f78 < '\0') {
      uVar2 = 2;
      cVar5 = DAT_00748f78;
      goto LAB_002314d0;
    }
    if (DAT_00748fa8 < '\0') {
      uVar2 = 3;
      cVar5 = DAT_00748fa8;
      goto LAB_002314d0;
    }
  }
  if (DAT_00748f18 == '\0') {
    lVar7 = 0;
  }
  else if (DAT_00748f48 == '\0') {
    lVar7 = 1;
  }
  else if (DAT_00748f78 == '\0') {
    lVar7 = 2;
  }
  else {
    lVar7 = 3;
    if (DAT_00748fa8 != '\0') {
      return (undefined1 *)0x0;
    }
  }
  bVar3 = *(byte *)(lVar1 + 0x142f);
  if (param_2 == 1) {
    bVar4 = bVar3 & 3;
    if ((bVar3 & 3) == 0) {
      *(undefined1 *)(lVar1 + 0x142b) = 1;
      *(byte *)(lVar1 + 0x142f) = bVar3 | 3;
      *(undefined1 *)(lVar1 + 0x142c) = 1;
      uVar6 = 1;
    }
    else {
      if ((bVar3 & 0xc) != 0) {
        return (undefined1 *)0x0;
      }
      *(undefined1 *)(lVar1 + 0x142d) = 1;
      *(byte *)(lVar1 + 0x142f) = bVar3 | 0xc;
      uVar6 = 3;
      *(undefined1 *)(lVar1 + 0x142e) = 1;
      bVar4 = 2;
    }
    (&DAT_00748f30)[lVar7 * 0x30] = bVar4;
    (&DAT_00748f44)[lVar7 * 0x30] = uVar6;
    goto LAB_00231468;
  }
  bVar4 = bVar3 & 3;
  if ((bVar3 & 3) == 0) {
    if ((bVar3 & 0xc) == 4) {
LAB_0023156c:
      bVar4 = 3;
      *(byte *)(lVar1 + 0x142f) = bVar3 | 8;
    }
    else if ((bVar3 & 0xc) == 8) {
LAB_0023143c:
      bVar4 = 2;
      *(byte *)(lVar1 + 0x142f) = bVar3 | 4;
    }
    else {
      *(byte *)(lVar1 + 0x142f) = bVar3 | 1;
    }
  }
  else if (bVar4 == 2) {
    bVar4 = 0;
    *(byte *)(lVar1 + 0x142f) = bVar3 | 1;
  }
  else {
    if (bVar4 != 1) {
      if ((bVar3 & 0xc) != 4) {
        if ((bVar3 & 0xc) == 0xc) {
          return (undefined1 *)0x0;
        }
        goto LAB_0023143c;
      }
      goto LAB_0023156c;
    }
    *(byte *)(lVar1 + 0x142f) = bVar3 | 2;
  }
  (&DAT_00748f30)[lVar7 * 0x30] = bVar4;
  (&DAT_00748f44)[lVar7 * 0x30] = 4;
LAB_00231468:
  bVar3 = (&DAT_00748f18)[lVar7 * 0x30] + 1;
  if (param_1 == 1) {
    bVar3 = bVar3 | 0x80;
  }
  (&DAT_00748f18)[lVar7 * 0x30] = bVar3;
  return &DAT_00748f18 + lVar7 * 0x30;
}

