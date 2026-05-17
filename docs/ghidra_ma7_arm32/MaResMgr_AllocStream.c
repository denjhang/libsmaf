/* MaResMgr_AllocStream @ 000ea050 416B */


/* YAMAHA::MaResMgr_AllocStream(unsigned int, unsigned int, unsigned int*) */

int YAMAHA::MaResMgr_AllocStream(uint param_1,uint param_2,uint *param_3)

{
  byte bVar1;
  byte bVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar4 = DAT_000ea1f0;
  iVar5 = *(int *)(DAT_000ea1f0 + 0xea058);
  if ((*(char *)(iVar5 + 0x1434) == '\x01') || (param_3 == (uint *)0x0)) {
    return 0;
  }
  *param_3 = 1;
  if (param_1 == 1) {
    bVar2 = *(byte *)(iVar4 + 0xea05c);
    if ((int)((uint)bVar2 << 0x18) < 0) {
      iVar6 = 0;
LAB_000ea0c0:
      iVar4 = DAT_000ea1f8 + 0xea0d2;
      *(byte *)(DAT_000ea1f8 + iVar6 * 0x30 + 0xea0d2) = bVar2 + 1;
      *param_3 = 0;
      return iVar4 + iVar6 * 0x30;
    }
    bVar2 = *(byte *)(iVar4 + 0xea08c);
    iVar6 = 1;
    if ((int)((uint)bVar2 << 0x18) < 0) goto LAB_000ea0c0;
    bVar2 = *(byte *)(iVar4 + 0xea0bc);
    if ((int)((uint)bVar2 << 0x18) < 0) {
      iVar6 = 2;
      goto LAB_000ea0c0;
    }
    bVar2 = *(byte *)(iVar4 + 0xea0ec);
    if ((int)((uint)bVar2 << 0x18) < 0) {
      iVar6 = 3;
      goto LAB_000ea0c0;
    }
  }
  if (*(char *)(DAT_000ea1f4 + 0xea078) == '\0') {
    iVar4 = 0;
  }
  else if (*(char *)(DAT_000ea1f4 + 0xea0a8) == '\0') {
    iVar4 = 1;
  }
  else if (*(char *)(DAT_000ea1f4 + 0xea0d8) == '\0') {
    iVar4 = 2;
  }
  else {
    if (*(char *)(DAT_000ea1f4 + 0xea108) != '\0') {
      return 0;
    }
    iVar4 = 3;
  }
  if (param_2 == 1) {
    bVar2 = *(byte *)(iVar5 + 0x142f);
    bVar1 = bVar2 & 3;
    if ((bVar2 & 3) == 0) {
      *(undefined1 *)(iVar5 + 0x142b) = 1;
      *(byte *)(iVar5 + 0x142f) = bVar2 | 3;
      *(undefined1 *)(iVar5 + 0x142c) = 1;
      uVar3 = 1;
    }
    else {
      if ((bVar2 & 0xc) != 0) {
        return 0;
      }
      *(undefined1 *)(iVar5 + 0x142d) = 1;
      *(byte *)(iVar5 + 0x142f) = bVar2 | 0xc;
      uVar3 = 3;
      *(undefined1 *)(iVar5 + 0x142e) = 1;
      bVar1 = 2;
    }
    iVar5 = DAT_000ea208 + 0xea1a8 + iVar4 * 0x30;
    *(byte *)(iVar5 + 0x1c) = bVar1;
    *(undefined1 *)(iVar5 + 0x30) = uVar3;
    goto LAB_000ea122;
  }
  bVar2 = *(byte *)(iVar5 + 0x142f);
  bVar1 = bVar2 & 3;
  if ((bVar2 & 3) == 0) {
    if ((bVar2 & 0xc) == 4) {
LAB_000ea1b2:
      bVar1 = 3;
      *(byte *)(iVar5 + 0x142f) = bVar2 | 8;
    }
    else if ((bVar2 & 0xc) == 8) {
LAB_000ea100:
      bVar1 = 2;
      *(byte *)(iVar5 + 0x142f) = bVar2 | 4;
    }
    else {
      *(byte *)(iVar5 + 0x142f) = bVar2 | 1;
    }
  }
  else if (bVar1 == 2) {
    *(byte *)(iVar5 + 0x142f) = bVar2 | 1;
    bVar1 = 0;
  }
  else {
    if (bVar1 != 1) {
      if ((bVar2 & 0xc) != 4) {
        if ((bVar2 & 0xc) == 0xc) {
          return 0;
        }
        goto LAB_000ea100;
      }
      goto LAB_000ea1b2;
    }
    *(byte *)(iVar5 + 0x142f) = bVar2 | 2;
  }
  iVar5 = DAT_000ea1fc + 0xea11a + iVar4 * 0x30;
  *(byte *)(iVar5 + 0x1c) = bVar1;
  *(undefined1 *)(iVar5 + 0x30) = 4;
LAB_000ea122:
  iVar5 = DAT_000ea200 + 0xea130 + iVar4 * 0x30;
  iVar6 = DAT_000ea204 + 0xea13c;
  bVar2 = *(char *)(iVar5 + 4) + 1;
  if (param_1 == 1) {
    bVar2 = bVar2 | 0x80;
  }
  *(byte *)(iVar5 + 4) = bVar2;
  return iVar6 + iVar4 * 0x30;
}

