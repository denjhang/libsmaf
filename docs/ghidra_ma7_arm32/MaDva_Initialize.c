/* MaDva_Initialize @ 000894e0 1504B */


/* YAMAHA::MaDva_Initialize(unsigned int) */

void YAMAHA::MaDva_Initialize(uint param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  uint uVar8;
  int *piVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  
  iVar10 = DAT_00089ac4;
  if (param_1 == 3) {
    uVar12 = 0x1f;
  }
  else if (param_1 == 5) {
    uVar12 = 0x40;
  }
  else {
    uVar12 = 0x20;
  }
  iVar2 = 0;
  piVar9 = (int *)(DAT_00089ac4 + 0x89514);
  iVar4 = DAT_00089ac4 + 0x89518;
  uVar8 = **(uint **)(DAT_00089ac0 + 0x8950c);
  if (uVar12 < **(uint **)(DAT_00089ac0 + 0x8950c)) {
    uVar8 = uVar12;
  }
  uVar11 = **(uint **)(DAT_00089ac8 + 0x89518);
  *(uint *)(DAT_00089ac4 + 0x89518) = param_1;
  if (uVar11 <= uVar12) {
    uVar12 = uVar11;
  }
  *piVar9 = iVar4;
  iVar3 = iVar4;
  do {
    *(undefined4 *)(iVar3 + 0xc) = 0;
    *(undefined4 *)(iVar3 + 8) = 0;
    cVar1 = (char)iVar2;
    *(undefined4 *)(iVar3 + 4) = 0;
    *(undefined4 *)(iVar3 + 0x10) = 1;
    *(undefined4 *)(iVar3 + 0x14) = 2;
    *(char *)(iVar3 + 0x18) = cVar1;
    *(char *)(iVar3 + 0x30) = cVar1 + '\x01';
    *(undefined4 *)(iVar3 + 0x24) = 0;
    *(undefined4 *)(iVar3 + 0x20) = 0;
    *(undefined4 *)(iVar3 + 0x1c) = 0;
    *(undefined4 *)(iVar3 + 0x28) = 1;
    *(undefined4 *)(iVar3 + 0x2c) = 2;
    *(char *)(iVar3 + 0x60) = cVar1 + '\x03';
    iVar2 = iVar2 + 8;
    *(undefined4 *)(iVar3 + 0x3c) = 0;
    *(char *)(iVar3 + 0x48) = cVar1 + '\x02';
    *(undefined4 *)(iVar3 + 0x38) = 0;
    *(undefined4 *)(iVar3 + 0x34) = 0;
    *(undefined4 *)(iVar3 + 0x40) = 1;
    *(undefined4 *)(iVar3 + 0x44) = 2;
    *(undefined4 *)(iVar3 + 0x54) = 0;
    *(undefined4 *)(iVar3 + 0x50) = 0;
    *(undefined4 *)(iVar3 + 0x4c) = 0;
    *(undefined4 *)(iVar3 + 0x58) = 1;
    *(undefined4 *)(iVar3 + 0x5c) = 2;
    *(undefined4 *)(iVar3 + 0x6c) = 0;
    *(undefined4 *)(iVar3 + 0x68) = 0;
    *(undefined4 *)(iVar3 + 100) = 0;
    *(undefined4 *)(iVar3 + 0x70) = 1;
    *(undefined4 *)(iVar3 + 0x74) = 2;
    *(char *)(iVar3 + 0x78) = cVar1 + '\x04';
    *(undefined4 *)(iVar3 + 0x84) = 0;
    *(undefined4 *)(iVar3 + 0x80) = 0;
    *(undefined4 *)(iVar3 + 0x7c) = 0;
    *(undefined4 *)(iVar3 + 0x88) = 1;
    *(undefined4 *)(iVar3 + 0x8c) = 2;
    *(char *)(iVar3 + 0x90) = cVar1 + '\x05';
    *(undefined4 *)(iVar3 + 0x9c) = 0;
    *(undefined4 *)(iVar3 + 0x98) = 0;
    *(undefined4 *)(iVar3 + 0x94) = 0;
    *(undefined4 *)(iVar3 + 0xa0) = 1;
    *(undefined4 *)(iVar3 + 0xa4) = 2;
    *(char *)(iVar3 + 0xa8) = cVar1 + '\x06';
    *(undefined4 *)(iVar3 + 0xb4) = 0;
    *(undefined4 *)(iVar3 + 0xb0) = 0;
    *(undefined4 *)(iVar3 + 0xac) = 0;
    *(undefined4 *)(iVar3 + 0xb8) = 1;
    *(undefined4 *)(iVar3 + 0xbc) = 2;
    *(char *)(iVar3 + 0xc0) = cVar1 + '\a';
    iVar3 = iVar3 + 0xc0;
  } while (iVar2 != 0x40);
  iVar3 = 0;
  iVar2 = iVar4;
  do {
    cVar1 = (char)iVar3;
    *(char *)(iVar2 + 0x660) = cVar1;
    *(char *)(iVar2 + 0x678) = cVar1 + '\x01';
    *(char *)(iVar2 + 0x690) = cVar1 + '\x02';
    *(char *)(iVar2 + 0x6a8) = cVar1 + '\x03';
    iVar3 = iVar3 + 8;
    *(undefined4 *)(iVar2 + 0x654) = 0;
    *(undefined4 *)(iVar2 + 0x650) = 0;
    *(undefined4 *)(iVar2 + 0x64c) = 0;
    *(undefined4 *)(iVar2 + 0x658) = 1;
    *(undefined4 *)(iVar2 + 0x65c) = 2;
    *(undefined4 *)(iVar2 + 0x66c) = 0;
    *(undefined4 *)(iVar2 + 0x668) = 0;
    *(undefined4 *)(iVar2 + 0x664) = 0;
    *(undefined4 *)(iVar2 + 0x670) = 1;
    *(undefined4 *)(iVar2 + 0x674) = 2;
    *(undefined4 *)(iVar2 + 0x684) = 0;
    *(undefined4 *)(iVar2 + 0x680) = 0;
    *(undefined4 *)(iVar2 + 0x67c) = 0;
    *(undefined4 *)(iVar2 + 0x688) = 1;
    *(undefined4 *)(iVar2 + 0x68c) = 2;
    *(undefined4 *)(iVar2 + 0x69c) = 0;
    *(undefined4 *)(iVar2 + 0x698) = 0;
    *(undefined4 *)(iVar2 + 0x694) = 0;
    *(undefined4 *)(iVar2 + 0x6a0) = 1;
    *(undefined4 *)(iVar2 + 0x6a4) = 2;
    *(undefined4 *)(iVar2 + 0x6b4) = 0;
    *(undefined4 *)(iVar2 + 0x6b0) = 0;
    *(undefined4 *)(iVar2 + 0x6ac) = 0;
    *(undefined4 *)(iVar2 + 0x6b8) = 1;
    *(undefined4 *)(iVar2 + 0x6bc) = 2;
    *(char *)(iVar2 + 0x6c0) = cVar1 + '\x04';
    *(undefined4 *)(iVar2 + 0x6cc) = 0;
    *(undefined4 *)(iVar2 + 0x6c8) = 0;
    *(undefined4 *)(iVar2 + 0x6c4) = 0;
    *(undefined4 *)(iVar2 + 0x6d0) = 1;
    *(undefined4 *)(iVar2 + 0x6d4) = 2;
    *(char *)(iVar2 + 0x6d8) = cVar1 + '\x05';
    *(undefined4 *)(iVar2 + 0x6e4) = 0;
    *(undefined4 *)(iVar2 + 0x6e0) = 0;
    *(undefined4 *)(iVar2 + 0x6dc) = 0;
    *(undefined4 *)(iVar2 + 0x6e8) = 1;
    *(undefined4 *)(iVar2 + 0x6ec) = 2;
    *(char *)(iVar2 + 0x6f0) = cVar1 + '\x06';
    *(undefined4 *)(iVar2 + 0x6fc) = 0;
    *(undefined4 *)(iVar2 + 0x6f8) = 0;
    *(undefined4 *)(iVar2 + 0x6f4) = 0;
    *(undefined4 *)(iVar2 + 0x700) = 1;
    *(undefined4 *)(iVar2 + 0x704) = 2;
    *(char *)(iVar2 + 0x708) = cVar1 + '\a';
    iVar2 = iVar2 + 0xc0;
  } while (iVar3 != 0x40);
  do {
    *(undefined4 *)(iVar4 + 0xc94) = 1;
    *(undefined1 *)(iVar4 + 0xc98) = 0;
    *(undefined4 *)(iVar4 + 0xc9c) = 0;
    *(undefined1 *)(iVar4 + 0xc99) = 0;
    iVar3 = iVar4 + 0x60;
    *(undefined4 *)(iVar4 + 0xca0) = 1;
    *(undefined1 *)(iVar4 + 0xca4) = 0;
    *(undefined4 *)(iVar4 + 0xca8) = 0;
    *(undefined1 *)(iVar4 + 0xca5) = 0;
    *(undefined4 *)(iVar4 + 0xcac) = 1;
    *(undefined1 *)(iVar4 + 0xcb0) = 0;
    *(undefined4 *)(iVar4 + 0xcb4) = 0;
    *(undefined1 *)(iVar4 + 0xcb1) = 0;
    *(undefined4 *)(iVar4 + 0xcb8) = 1;
    *(undefined1 *)(iVar4 + 0xcbc) = 0;
    *(undefined4 *)(iVar4 + 0xcc0) = 0;
    *(undefined1 *)(iVar4 + 0xcbd) = 0;
    *(undefined4 *)(iVar4 + 0xcc4) = 1;
    *(undefined1 *)(iVar4 + 0xcc8) = 0;
    *(undefined4 *)(iVar4 + 0xccc) = 0;
    *(undefined1 *)(iVar4 + 0xcc9) = 0;
    *(undefined4 *)(iVar4 + 0xcd0) = 1;
    *(undefined1 *)(iVar4 + 0xcd4) = 0;
    *(undefined4 *)(iVar4 + 0xcd8) = 0;
    *(undefined1 *)(iVar4 + 0xcd5) = 0;
    *(undefined4 *)(iVar4 + 0xcdc) = 1;
    *(undefined1 *)(iVar4 + 0xce0) = 0;
    *(undefined4 *)(iVar4 + 0xce4) = 0;
    *(undefined1 *)(iVar4 + 0xce1) = 0;
    *(undefined4 *)(iVar4 + 0xce8) = 1;
    *(undefined1 *)(iVar4 + 0xcec) = 0;
    *(undefined4 *)(iVar4 + 0xcf0) = 0;
    *(undefined1 *)(iVar4 + 0xced) = 0;
    iVar2 = DAT_00089acc;
    iVar4 = iVar3;
  } while (iVar3 != iVar10 + 0x89818);
  memset((void *)(DAT_00089acc + 0x8c74e),-1,0x18);
  memset((void *)(iVar2 + 0x8c766),-1,0x600);
  memset((void *)(iVar2 + 0x8a74e),0,0x2000);
  iVar10 = uVar8 + 1;
  if (uVar8 != 0) {
    iVar4 = 2;
    piVar9 = (int *)(iVar2 + 0x897d6);
    *(int *)(iVar2 + 0x897da) = iVar2 + 0x897be;
    uVar11 = uVar8 - 1 & 7;
    *(int *)(iVar2 + 0x897d6) = iVar2 + 0x897ee;
    if (iVar10 != 2) {
      if (uVar11 != 0) {
        if (uVar11 != 1) {
          if (uVar11 != 2) {
            if (uVar11 != 3) {
              if (uVar11 != 4) {
                if (uVar11 != 5) {
                  if (uVar11 != 6) {
                    *(int **)(iVar2 + 0x897f2) = piVar9;
                    piVar9 = (int *)(iVar2 + 0x897ee);
                    *piVar9 = iVar2 + 0x89806;
                    iVar4 = 3;
                  }
                  iVar4 = iVar4 + 1;
                  piVar9[7] = (int)piVar9;
                  piVar5 = piVar9 + 0xc;
                  piVar9 = piVar9 + 6;
                  *piVar9 = (int)piVar5;
                }
                iVar4 = iVar4 + 1;
                piVar9[7] = (int)piVar9;
                piVar5 = piVar9 + 0xc;
                piVar9 = piVar9 + 6;
                *piVar9 = (int)piVar5;
              }
              iVar4 = iVar4 + 1;
              piVar9[7] = (int)piVar9;
              piVar5 = piVar9 + 0xc;
              piVar9 = piVar9 + 6;
              *piVar9 = (int)piVar5;
            }
            iVar4 = iVar4 + 1;
            piVar9[7] = (int)piVar9;
            piVar5 = piVar9 + 0xc;
            piVar9 = piVar9 + 6;
            *piVar9 = (int)piVar5;
          }
          iVar4 = iVar4 + 1;
          piVar9[7] = (int)piVar9;
          piVar5 = piVar9 + 0xc;
          piVar9 = piVar9 + 6;
          *piVar9 = (int)piVar5;
        }
        iVar4 = iVar4 + 1;
        piVar9[7] = (int)piVar9;
        piVar5 = piVar9 + 0xc;
        piVar9 = piVar9 + 6;
        *piVar9 = (int)piVar5;
        if (iVar4 == iVar10) goto LAB_000898ea;
      }
      do {
        iVar4 = iVar4 + 8;
        piVar9[7] = (int)piVar9;
        piVar9[6] = (int)(piVar9 + 0xc);
        piVar9[0xd] = (int)(piVar9 + 6);
        piVar9[0xc] = (int)(piVar9 + 0x12);
        piVar9[0x13] = (int)(piVar9 + 0xc);
        piVar9[0x12] = (int)(piVar9 + 0x18);
        piVar9[0x19] = (int)(piVar9 + 0x12);
        piVar9[0x18] = (int)(piVar9 + 0x1e);
        piVar9[0x1f] = (int)(piVar9 + 0x18);
        piVar9[0x1e] = (int)(piVar9 + 0x24);
        piVar9[0x25] = (int)(piVar9 + 0x1e);
        piVar9[0x24] = (int)(piVar9 + 0x2a);
        piVar9[0x2b] = (int)(piVar9 + 0x24);
        piVar9[0x2a] = (int)(piVar9 + 0x30);
        piVar9[0x31] = (int)(piVar9 + 0x2a);
        piVar9[0x30] = (int)(piVar9 + 0x36);
        piVar9 = piVar9 + 0x30;
      } while (iVar4 != iVar10);
    }
  }
LAB_000898ea:
  iVar4 = DAT_00089ad0;
  iVar3 = DAT_00089ad0 + 0x89902;
  iVar2 = iVar3 + (uVar8 + 2) * 0x18;
  piVar9 = (int *)(DAT_00089ad0 + 0x8cebe);
  *(int *)(DAT_00089ad0 + 0x8ceae) = iVar2 + 4;
  *(uint *)(iVar4 + 0x8ceb6) = iVar3 + uVar8 * 0x18 + 4;
  *(int *)(iVar4 + 0x8990a) = iVar2 + 4;
  *piVar9 = iVar3 + iVar10 * 0x18 + 4;
  *(int *)(iVar4 + 0x89906) = iVar4 + 0x8991e;
  *(undefined4 *)(iVar2 + 8) = 0;
  *(int *)(iVar2 + 4) = iVar4 + 0x89906;
  puVar7 = (undefined4 *)*piVar9;
  uVar6 = *(undefined4 *)(iVar4 + 0x8ceb6);
  iVar10 = uVar12 + 1;
  *puVar7 = 0;
  puVar7[1] = uVar6;
  if (uVar12 != 0) {
    iVar2 = 2;
    uVar8 = ~(1U - iVar10) & 7;
    *(int *)(iVar4 + 0x89f6a) = iVar4 + 0x89f4e;
    *(int *)(iVar4 + 0x89f66) = iVar4 + 0x89f7e;
    piVar9 = (int *)(iVar4 + 0x89f66);
    if (iVar10 != 2) {
      if (uVar8 != 0) {
        if (uVar8 != 1) {
          if (uVar8 != 2) {
            if (uVar8 != 3) {
              if (uVar8 != 4) {
                if (uVar8 != 5) {
                  if (uVar8 != 6) {
                    *(int **)(iVar4 + 0x89f82) = piVar9;
                    *(int *)(iVar4 + 0x89f7e) = iVar4 + 0x89f96;
                    piVar9 = (int *)(iVar4 + 0x89f7e);
                    iVar2 = 3;
                  }
                  iVar2 = iVar2 + 1;
                  piVar5 = piVar9 + 0xc;
                  piVar9[7] = (int)piVar9;
                  piVar9 = piVar9 + 6;
                  *piVar9 = (int)piVar5;
                }
                iVar2 = iVar2 + 1;
                piVar9[7] = (int)piVar9;
                piVar5 = piVar9 + 0xc;
                piVar9 = piVar9 + 6;
                *piVar9 = (int)piVar5;
              }
              iVar2 = iVar2 + 1;
              piVar9[7] = (int)piVar9;
              piVar5 = piVar9 + 0xc;
              piVar9 = piVar9 + 6;
              *piVar9 = (int)piVar5;
            }
            iVar2 = iVar2 + 1;
            piVar9[7] = (int)piVar9;
            piVar5 = piVar9 + 0xc;
            piVar9 = piVar9 + 6;
            *piVar9 = (int)piVar5;
          }
          iVar2 = iVar2 + 1;
          piVar9[7] = (int)piVar9;
          piVar5 = piVar9 + 0xc;
          piVar9 = piVar9 + 6;
          *piVar9 = (int)piVar5;
        }
        iVar2 = iVar2 + 1;
        piVar9[7] = (int)piVar9;
        piVar5 = piVar9 + 0xc;
        piVar9 = piVar9 + 6;
        *piVar9 = (int)piVar5;
        if (iVar10 == iVar2) goto LAB_00089a4e;
      }
      do {
        iVar2 = iVar2 + 8;
        piVar9[7] = (int)piVar9;
        piVar9[6] = (int)(piVar9 + 0xc);
        piVar9[0xd] = (int)(piVar9 + 6);
        piVar9[0xc] = (int)(piVar9 + 0x12);
        piVar9[0x13] = (int)(piVar9 + 0xc);
        piVar9[0x12] = (int)(piVar9 + 0x18);
        piVar9[0x19] = (int)(piVar9 + 0x12);
        piVar9[0x18] = (int)(piVar9 + 0x1e);
        piVar9[0x1f] = (int)(piVar9 + 0x18);
        piVar9[0x1e] = (int)(piVar9 + 0x24);
        piVar9[0x25] = (int)(piVar9 + 0x1e);
        piVar9[0x24] = (int)(piVar9 + 0x2a);
        piVar9[0x2b] = (int)(piVar9 + 0x24);
        piVar9[0x2a] = (int)(piVar9 + 0x30);
        piVar9[0x31] = (int)(piVar9 + 0x2a);
        piVar9[0x30] = (int)(piVar9 + 0x36);
        piVar9 = piVar9 + 0x30;
      } while (iVar10 != iVar2);
    }
  }
LAB_00089a4e:
  iVar4 = DAT_00089ad4;
  iVar3 = DAT_00089ad4 + 0x89a6a;
  iVar2 = iVar3 + (uVar12 + 2) * 0x18;
  *(int *)(DAT_00089ad4 + 0x8d01a) = iVar2 + 0x64c;
  *(int *)(iVar4 + 0x8d02a) = iVar3 + iVar10 * 0x18 + 0x64c;
  *(int *)(iVar4 + 0x8a0ba) = iVar2 + 0x64c;
  *(int *)(iVar4 + 0x8a0b6) = iVar4 + 0x8a0ce;
  *(uint *)(iVar4 + 0x8d022) = iVar3 + uVar12 * 0x18 + 0x64c;
  *(int *)(iVar2 + 0x64c) = iVar4 + 0x8a0b6;
  *(undefined4 *)(iVar2 + 0x650) = 0;
  puVar7 = *(undefined4 **)(iVar4 + 0x8d02a);
  uVar6 = *(undefined4 *)(iVar4 + 0x8d022);
  *puVar7 = 0;
  puVar7[1] = uVar6;
  return;
}

