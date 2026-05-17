/* MaResMgr_FreeRam @ 000e9e5c 430B */


/* YAMAHA::MaResMgr_FreeRam(unsigned int, unsigned int) */

undefined4 YAMAHA::MaResMgr_FreeRam(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  byte bVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  bool bVar19;
  bool bVar20;
  
  bVar20 = 0x3fff < param_2;
  bVar19 = param_2 == 0x4000;
  if (param_2 < 0x4001) {
    bVar20 = 2 < param_1;
    bVar19 = param_1 == 3;
  }
  if (bVar20 && !bVar19) {
    return 0xfffffffe;
  }
  iVar4 = *(int *)(DAT_000ea00c + 0xe9e78);
  iVar5 = iVar4 + param_1;
  if (*(char *)(iVar5 + 0x1c) == '\0') {
    return 0xffffffff;
  }
  iVar6 = param_1 * 3 + iVar4;
  uVar7 = (uint)*(byte *)(iVar6 + 0xd);
  if (param_2 == 0x4000) {
    bVar13 = *(byte *)(iVar6 + 0xe);
    *(undefined1 *)(iVar5 + 0x1c) = 0;
    *(undefined1 *)(iVar6 + 0xd) = 0;
    bVar13 = ~bVar13;
    *(undefined1 *)(iVar6 + 0xe) = 0;
    goto LAB_000e9fca;
  }
  uVar1 = param_2 >> 0xc;
  if (uVar7 < uVar1) {
    return 0xfffffffe;
  }
  iVar9 = *(byte *)(iVar6 + 0xc) + uVar7;
  if (uVar1 == 0) {
    bVar13 = 0xff;
  }
  else {
    uVar8 = (iVar9 - 1U) - uVar1;
    uVar2 = iVar9 - 2;
    uVar10 = 1 << (iVar9 - 1U & 0xff);
    bVar13 = (byte)uVar10;
    uVar14 = uVar1 - 1 & 7;
    if (uVar2 != uVar8) {
      if (uVar14 != 0) {
        if (uVar14 != 1) {
          if (uVar14 != 2) {
            if (uVar14 != 3) {
              if (uVar14 != 4) {
                if (uVar14 != 5) {
                  uVar3 = uVar10;
                  if (uVar14 != 6) {
                    uVar3 = 1 << (uVar2 & 0xff);
                    uVar2 = iVar9 - 3;
                  }
                  if (uVar14 != 6) {
                    uVar3 = uVar10 | uVar3;
                  }
                  uVar10 = uVar3 | 1 << (uVar2 & 0xff);
                  uVar2 = uVar2 - 1;
                }
                uVar14 = uVar2 & 0xff;
                uVar2 = uVar2 - 1;
                uVar10 = uVar10 | 1 << uVar14;
              }
              uVar14 = uVar2 & 0xff;
              uVar2 = uVar2 - 1;
              uVar10 = uVar10 | 1 << uVar14;
            }
            uVar14 = uVar2 & 0xff;
            uVar2 = uVar2 - 1;
            uVar10 = uVar10 | 1 << uVar14;
          }
          uVar14 = uVar2 & 0xff;
          uVar2 = uVar2 - 1;
          uVar10 = uVar10 | 1 << uVar14;
        }
        uVar14 = uVar2 & 0xff;
        uVar2 = uVar2 - 1;
        uVar10 = uVar10 | 1 << uVar14;
        bVar13 = (byte)uVar10;
        if (uVar2 == uVar8) goto LAB_000e9fa8;
      }
      do {
        uVar14 = uVar2 & 0xff;
        uVar16 = uVar2 - 1;
        uVar3 = uVar2 - 2;
        uVar15 = uVar2 - 3;
        uVar11 = uVar2 - 4;
        uVar17 = uVar2 - 5;
        uVar12 = uVar2 - 6;
        uVar18 = uVar2 - 7;
        uVar2 = uVar2 - 8;
        uVar10 = uVar10 | 1 << uVar14 | 1 << (uVar16 & 0xff) | 1 << (uVar3 & 0xff) |
                 1 << (uVar15 & 0xff) | 1 << (uVar11 & 0xff) | 1 << (uVar17 & 0xff) |
                 1 << (uVar12 & 0xff) | 1 << (uVar18 & 0xff);
        bVar13 = (byte)uVar10;
      } while (uVar2 != uVar8);
    }
LAB_000e9fa8:
    bVar13 = ~bVar13;
  }
  iVar9 = param_1 * 3 + iVar4;
  *(byte *)(iVar9 + 0xd) = *(byte *)(iVar6 + 0xd) - (char)uVar1;
  *(byte *)(iVar9 + 0xe) = bVar13 & *(byte *)(iVar9 + 0xe);
  if (uVar7 == uVar1) {
    *(undefined1 *)(iVar5 + 0x1c) = 0;
  }
LAB_000e9fca:
  *(byte *)(iVar4 + 0x1435) = bVar13 & *(byte *)(iVar4 + 0x1435);
  return 0;
}

