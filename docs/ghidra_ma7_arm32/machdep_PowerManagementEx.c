/* machdep_PowerManagementEx @ 00067ba4 7678B */


/* YAMAHA::machdep_PowerManagementEx(unsigned int, _MAMACHDEP_POWERS*) */

undefined4 YAMAHA::machdep_PowerManagementEx(uint param_1,_MAMACHDEP_POWERS *param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  uchar uVar6;
  byte bVar7;
  byte bVar8;
  uint uVar9;
  int iVar10;
  byte bVar11;
  uint uVar12;
  byte bVar13;
  uint uVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  uchar *puVar22;
  byte bVar23;
  int iVar24;
  byte bVar25;
  byte bVar26;
  uint uVar27;
  bool bVar28;
  bool bVar29;
  
  if (4 < param_1 - 0x20) {
    return 0xffffffff;
  }
  if (((((param_2 == (_MAMACHDEP_POWERS *)0x0) || (3 < *(uint *)param_2)) ||
       ((*(uint *)(param_2 + 8) & 0xffff0100) != 0)) ||
      ((uVar12 = *(uint *)(param_2 + 0xc), 6 < uVar12 ||
       (uVar14 = *(uint *)(param_2 + 0x10), 3 < uVar14)))) ||
     ((((2 < *(uint *)(param_2 + 0x14) ||
        ((1 < *(uint *)(param_2 + 0x18) || (1 < *(uint *)(param_2 + 0x1c))))) ||
       (1 < *(uint *)(param_2 + 0x20))) ||
      ((1 < *(uint *)(param_2 + 0x24) || (1 < *(uint *)(param_2 + 0x28))))))) {
    return 0xfffffffe;
  }
  uVar9 = *(uint *)(param_2 + 4);
  if (param_1 == 0x23) {
    if (3 < uVar9) {
      return 0xfffffffe;
    }
LAB_000682e0:
    bVar29 = uVar12 == 0;
    uVar12 = uVar9;
    if (bVar29) goto joined_r0x000682e4;
LAB_000682e8:
    machdep_WriteReg(1,'d');
    bVar1 = machdep_ReadReg(2);
    machdep_WriteReg(2,bVar1 & 0xfe);
    machdep_Sleep(2);
    machdep_WriteReg(1,'f');
    bVar1 = machdep_ReadReg(2);
    machdep_WriteReg(2,bVar1 & 0x7f);
    machdep_Sleep(2);
    machdep_WriteReg(1,'d');
    bVar1 = machdep_ReadReg(2);
    machdep_WriteReg(2,bVar1 & 0xfd);
    machdep_WriteReg(1,'d');
    bVar1 = machdep_ReadReg(2);
    machdep_WriteReg(2,bVar1 & 0xfb);
    uVar12 = *(uint *)(param_2 + 0xc);
    bVar29 = 5 < uVar12;
    if (uVar12 != 6) {
      bVar29 = 1 < uVar12 - 1;
    }
    if (!bVar29 || (uVar12 == 6 || uVar12 - 1 == 2)) {
      machdep_WriteReg(1,'d');
      bVar1 = machdep_ReadReg(2);
      machdep_WriteReg(2,bVar1 & 0xf7);
    }
    iVar5 = *(int *)(param_2 + 4);
    if ((iVar5 << 0x1f < 0) && (param_1 - 0x23 < 2)) {
      machdep_WriteReg(1,'d');
      bVar1 = machdep_ReadReg(2);
      machdep_WriteReg(2,bVar1 & 0xdf);
      iVar5 = *(int *)(param_2 + 4);
    }
    if ((iVar5 << 0x1e < 0) && (param_1 == 0x23)) {
      machdep_WriteReg(1,'d');
      iVar5 = machdep_ReadReg(2);
      if (iVar5 << 0x19 < 0) {
        machdep_WriteReg(1,'d');
        bVar1 = machdep_ReadReg(2);
        machdep_WriteReg(2,bVar1 & 0xbf);
        machdep_Wait(0xa2e4);
        machdep_WriteReg(0x11,'\x0e');
        machdep_WriteReg(0x12,0x80);
        machdep_Wait(1000);
        machdep_WriteReg(0x11,'\x0e');
        machdep_WriteReg(0x12,'\0');
        machdep_WriteReg(0x11,'\x13');
        machdep_WriteReg(0x12,'|');
      }
    }
    uVar12 = *(uint *)(param_2 + 0xc);
    bVar29 = 4 < uVar12;
    if (uVar12 != 5) {
      bVar29 = uVar12 != 1;
    }
    if (!bVar29 || (uVar12 == 5 || uVar12 == 2)) {
      if (param_1 - 0x23 < 2) {
        machdep_WriteReg(1,'d');
        bVar1 = machdep_ReadReg(2);
        machdep_WriteReg(2,bVar1 & 0xef);
      }
      machdep_WriteReg(1,'0');
      bVar1 = machdep_ReadReg(2);
      machdep_WriteReg(2,bVar1 | 0x40);
    }
    uVar14 = *(uint *)(param_2 + 0x10);
  }
  else {
    if (param_1 == 0x24) {
      if (1 < uVar9) {
        return 0xfffffffe;
      }
      goto LAB_000682e0;
    }
    if (uVar9 != 0) {
      return 0xfffffffe;
    }
joined_r0x000682e4:
    if (uVar12 != 0) goto LAB_000682e8;
  }
  if ((param_1 != 0x20) && ((int)(uVar14 << 0x1e) < 0)) {
    machdep_WriteReg(1,'e');
    bVar1 = machdep_ReadReg(2);
    machdep_WriteReg(2,bVar1 & 0xfd);
    uVar14 = *(uint *)(param_2 + 0x10);
  }
  if ((int)(uVar14 << 0x1f) < 0) {
    machdep_WriteReg(1,'e');
    bVar1 = machdep_ReadReg(2);
    machdep_WriteReg(2,bVar1 & 0xfe);
  }
  uVar12 = 0;
  if ((((*(int *)(param_2 + 8) == 0) && (*(int *)(param_2 + 0xc) == 0)) &&
      (*(int *)(param_2 + 0x14) == 0)) &&
     (((*(int *)(param_2 + 0x18) == 0 && (*(int *)(param_2 + 0x1c) == 0)) &&
      ((*(int *)(param_2 + 0x20) == 0 &&
       ((*(int *)(param_2 + 0x24) == 0 && (*(int *)(param_2 + 0x28) == 0)))))))) {
LAB_000683c4:
    uVar14 = 1 << (param_1 - 0x20 & 0xff) & 0x1d;
    if (uVar14 != 0) {
      uVar12 = *(uint *)(param_2 + 0x14);
      if (uVar12 == 0) {
        bVar16 = 0;
        bVar1 = 0;
LAB_000683e0:
        if (param_1 - 0x22 < 3) {
          machdep_WriteReg(1,0xd3);
          bVar17 = machdep_ReadReg(2);
          machdep_WriteReg(2,bVar17 & bVar16);
          machdep_WriteReg(1,0xd4);
          machdep_ReadReg(2);
          machdep_WriteReg(2,'\0');
        }
        else {
          machdep_WriteReg(1,'m');
          bVar17 = machdep_ReadReg(2);
          machdep_WriteReg(2,bVar17 & bVar1);
        }
        if (*(int *)(param_2 + 0x14) == 0) {
          machdep_WriteReg(1,'|');
          bVar17 = machdep_ReadReg(2);
          machdep_WriteReg(2,bVar17 & 0x80);
          if (*(int *)(param_2 + 0x14) == 0) {
            machdep_WriteReg(1,'f');
            bVar17 = machdep_ReadReg(2);
            machdep_WriteReg(2,bVar17 | 6);
          }
        }
        machdep_WriteReg(1,'g');
        bVar17 = machdep_ReadReg(2);
        machdep_WriteReg(2,bVar17 | 6);
        uVar12 = *(uint *)(param_2 + 0x14);
LAB_00068440:
        if (uVar12 - 1 < 2) {
          bVar20 = 0;
          goto LAB_00068d70;
        }
      }
      else {
        iVar5 = *(int *)(param_2 + 0x28);
        iVar10 = *(int *)(param_2 + 0x24);
        if (iVar10 == 0) {
          bVar7 = 0x81;
          bVar11 = 9;
          bVar2 = 0x80;
          bVar25 = 0xc0;
          bVar15 = 0xc1;
          bVar20 = 1;
          bVar19 = 200;
          bVar8 = 0x41;
          bVar3 = 0x40;
          bVar21 = 0x88;
          bVar23 = 0x48;
          bVar16 = 0xc9;
          bVar4 = 0x89;
          bVar17 = 0x49;
          bVar1 = 8;
          bVar18 = 0;
        }
        else {
          bVar7 = 0x85;
          bVar11 = 0xd;
          bVar2 = 0x84;
          bVar25 = 0xc4;
          bVar15 = 0xc5;
          bVar20 = 5;
          bVar19 = 0xcc;
          bVar8 = 0x45;
          bVar3 = 0x44;
          bVar21 = 0x8c;
          bVar23 = 0x4c;
          bVar16 = 0xcd;
          bVar4 = 0x8d;
          bVar17 = 0x4d;
          bVar1 = 0xc;
          bVar18 = 4;
        }
        if (iVar5 == 0) {
          bVar23 = bVar3;
          bVar17 = bVar8;
          bVar21 = bVar2;
          bVar4 = bVar7;
          bVar19 = bVar25;
          bVar16 = bVar15;
          bVar1 = bVar18;
          bVar11 = bVar20;
        }
        iVar24 = *(int *)(param_2 + 0xc);
        bVar29 = iVar24 != 0;
        if (iVar24 != 1) {
          bVar29 = 1 < iVar24 - 4U;
        }
        if (bVar29 && (iVar24 != 1 && iVar24 - 4U != 2)) {
          bVar17 = bVar23;
          bVar4 = bVar21;
          bVar16 = bVar19;
          bVar11 = bVar1;
        }
        bVar1 = bVar11;
        if (uVar12 == 1) {
          bVar1 = bVar16;
          if (iVar10 == 0) {
            bVar17 = bVar11;
            bVar1 = bVar4;
          }
          if (iVar5 == 0) {
            bVar1 = bVar17;
          }
        }
        if (iVar10 == 0) {
          bVar18 = 2;
          bVar7 = 0x86;
          bVar11 = 0x80;
          bVar2 = 0x81;
          bVar25 = 0x83;
          bVar15 = 3;
          bVar20 = 1;
          bVar19 = 0x82;
          bVar8 = 0x84;
          bVar3 = 6;
          bVar21 = 5;
          bVar16 = 0x87;
          bVar23 = 0x85;
          bVar4 = 4;
          bVar17 = 7;
          bVar26 = 0;
        }
        else {
          bVar18 = 10;
          bVar7 = 0x8e;
          bVar11 = 0x88;
          bVar2 = 0x89;
          bVar25 = 0x8b;
          bVar15 = 0xb;
          bVar20 = 9;
          bVar19 = 0x8a;
          bVar8 = 0x8c;
          bVar3 = 0xe;
          bVar21 = 0xd;
          bVar16 = 0x8f;
          bVar23 = 0x8d;
          bVar4 = 0xc;
          bVar17 = 0xf;
          bVar26 = 8;
        }
        if (iVar5 == 0) {
          bVar4 = bVar26;
          bVar21 = bVar20;
          bVar3 = bVar18;
          bVar17 = bVar15;
          bVar8 = bVar11;
          bVar23 = bVar2;
          bVar7 = bVar19;
          bVar16 = bVar25;
        }
        uVar9 = *(uint *)(param_2 + 8) & 1;
        if (uVar9 == 0) {
          bVar21 = bVar4;
          bVar17 = bVar3;
          bVar23 = bVar8;
          bVar16 = bVar7;
        }
        uVar27 = *(uint *)(param_2 + 8) & 2;
        if (uVar27 == 0) {
          bVar17 = bVar21;
          bVar16 = bVar23;
        }
        if ((iVar24 != 4 && iVar24 != 1) && (1 < iVar24 - 5U)) {
          bVar16 = bVar17;
        }
        if (uVar12 != 1) {
          if ((uVar12 & 0xfffffffd) == 0) goto LAB_000683e0;
          goto LAB_00068440;
        }
        if (iVar10 == 0) {
          bVar26 = 0x81;
          bVar18 = 1;
          bVar7 = 0x86;
          bVar11 = 0x85;
          bVar2 = 7;
          bVar25 = 4;
          bVar15 = 3;
          bVar20 = 0x80;
          bVar19 = 0x82;
          bVar8 = 0x84;
          bVar3 = 2;
          bVar21 = 0x83;
          bVar23 = 6;
          bVar4 = 0x87;
          bVar17 = 5;
          bVar13 = 0;
        }
        else {
          bVar26 = 0x89;
          bVar18 = 9;
          bVar7 = 0x8e;
          bVar11 = 0x8d;
          bVar2 = 0xf;
          bVar25 = 0xc;
          bVar15 = 0xb;
          bVar20 = 0x88;
          bVar19 = 0x8a;
          bVar8 = 0x8c;
          bVar3 = 10;
          bVar21 = 0x8b;
          bVar23 = 0xe;
          bVar4 = 0x8f;
          bVar17 = 0xd;
          bVar13 = 8;
        }
        if (iVar5 != 0) {
          bVar19 = bVar7;
          bVar21 = bVar4;
          bVar13 = bVar25;
          bVar18 = bVar17;
          bVar20 = bVar8;
          bVar26 = bVar11;
          bVar3 = bVar23;
          bVar15 = bVar2;
        }
        if (uVar9 != 0) {
          bVar19 = bVar21;
          bVar13 = bVar18;
          bVar20 = bVar26;
          bVar3 = bVar15;
        }
        if (uVar27 != 0) {
          bVar20 = bVar19;
          bVar13 = bVar3;
        }
        if ((iVar24 != 4 && iVar24 != 1) && (1 < iVar24 - 5U)) {
          bVar20 = bVar13;
        }
LAB_00068d70:
        machdep_WriteReg(1,'~');
        bVar17 = machdep_ReadReg(2);
        if (*(int *)(param_2 + 0x14) == 1) {
          bVar17 = bVar17 & 0xbf;
        }
        else {
          bVar17 = bVar17 | 0x40;
        }
        machdep_WriteReg(2,bVar17);
        machdep_WriteReg(1,'f');
        bVar17 = machdep_ReadReg(2);
        machdep_WriteReg(2,bVar17 & 0xfd);
        if (*(int *)(param_2 + 0x14) == 1) {
          machdep_WriteReg(1,'g');
          bVar17 = machdep_ReadReg(2);
          machdep_WriteReg(2,bVar17 & 0xfd);
        }
        machdep_Wait(10000);
        machdep_WriteReg(1,'f');
        bVar17 = machdep_ReadReg(2);
        machdep_WriteReg(2,bVar17 & 0xfb);
        if (*(int *)(param_2 + 0x14) == 1) {
          machdep_WriteReg(1,'g');
          bVar17 = machdep_ReadReg(2);
          machdep_WriteReg(2,bVar17 & 0xfb);
        }
        iVar5 = DAT_0006952c;
        if (param_1 - 0x22 < 3) {
          bVar1 = *(byte *)(DAT_0006952c + 0x68e03);
          machdep_WriteReg(1,0xd3);
          machdep_WriteReg(2,bVar16 & bVar1);
          bVar1 = *(byte *)(iVar5 + 0x68e04);
          machdep_WriteReg(1,0xd4);
          machdep_WriteReg(2,bVar20 & bVar1);
        }
        else {
          bVar17 = *(byte *)(DAT_0006953c + 0x693f6);
          machdep_WriteReg(1,'m');
          machdep_WriteReg(2,bVar1 & bVar17);
        }
        machdep_WriteReg(1,'|');
        machdep_WriteReg(2,*(uchar *)(DAT_00069530 + 0x68e34));
      }
      uVar12 = uVar14;
      if (*(int *)(param_2 + 0x18) == 0) {
        if (param_1 - 0x22 < 3) {
          machdep_WriteReg(1,0xd1);
          machdep_ReadReg(2);
          machdep_WriteReg(2,'\0');
          uVar6 = 0xd2;
        }
        else {
          uVar6 = 'l';
        }
        machdep_WriteReg(1,uVar6);
        machdep_ReadReg(2);
        machdep_WriteReg(2,'\0');
        machdep_WriteReg(1,'y');
        machdep_WriteReg(2,'\0');
        machdep_WriteReg(1,'z');
        machdep_WriteReg(2,'\0');
        machdep_WriteReg(1,'f');
        bVar1 = machdep_ReadReg(2);
        machdep_WriteReg(2,bVar1 | 0x10);
        machdep_WriteReg(1,'f');
        iVar5 = machdep_ReadReg(2);
        if (-1 < iVar5 << 0x1f) {
          machdep_WriteReg(1,0x80);
          iVar5 = machdep_ReadReg(2);
          if (-1 < iVar5 << 0x1d) {
            iVar5 = 300;
            while( true ) {
              machdep_Sleep(10);
              iVar10 = machdep_ReadReg(2);
              if (iVar10 << 0x1d < 0) break;
              machdep_Sleep(10);
              iVar10 = machdep_ReadReg(2);
              if (iVar10 << 0x1d < 0) break;
              machdep_Sleep(10);
              iVar10 = machdep_ReadReg(2);
              if (iVar10 << 0x1d < 0) break;
              machdep_Sleep(10);
              iVar10 = machdep_ReadReg(2);
              if (iVar10 << 0x1d < 0) break;
              machdep_Sleep(10);
              iVar10 = machdep_ReadReg(2);
              if (iVar10 << 0x1d < 0) break;
              machdep_Sleep(10);
              iVar10 = machdep_ReadReg(2);
              if (iVar10 << 0x1d < 0) break;
              machdep_Sleep(10);
              iVar10 = machdep_ReadReg(2);
              if (iVar10 << 0x1d < 0) break;
              machdep_Sleep(10);
              iVar10 = machdep_ReadReg(2);
              if (iVar10 << 0x1d < 0) break;
              machdep_Sleep(10);
              iVar10 = machdep_ReadReg(2);
              if (iVar10 << 0x1d < 0) break;
              machdep_Sleep(10);
              iVar10 = machdep_ReadReg(2);
              if (iVar10 << 0x1d < 0) break;
              iVar5 = iVar5 + -10;
              if (iVar5 == 0) {
                return 0xfffffffb;
              }
            }
          }
        }
      }
      else {
        iVar5 = *(int *)(param_2 + 0x24);
        iVar10 = *(int *)(param_2 + 0x28);
        if (iVar5 == 0) {
          bVar4 = 0x11;
          bVar17 = 0x99;
          bVar1 = 0x88;
          bVar16 = 0;
        }
        else {
          bVar4 = 0x55;
          bVar17 = 0xdd;
          bVar1 = 0xcc;
          bVar16 = 0x44;
        }
        if (iVar10 == 0) {
          bVar17 = bVar4;
          bVar1 = bVar16;
        }
        iVar24 = *(int *)(param_2 + 0xc);
        bVar29 = iVar24 != 1;
        bVar28 = iVar24 != 4;
        if ((bVar29 && bVar28) && (1 < iVar24 - 5U)) {
          bVar17 = bVar1;
        }
        if (iVar5 == 0) {
          bVar18 = 0x90;
          bVar7 = 0x92;
          bVar11 = 0x12;
          bVar2 = 0x91;
          bVar25 = 0x93;
          bVar15 = 0x11;
          bVar21 = 0x94;
          bVar20 = 0x13;
          bVar23 = 0x96;
          bVar19 = 0x16;
          bVar3 = 0x17;
          bVar8 = 0x95;
          bVar16 = 0x97;
          bVar4 = 0x15;
          bVar1 = 0x14;
          bVar26 = 0x10;
        }
        else {
          bVar18 = 0x98;
          bVar7 = 0x9a;
          bVar11 = 0x1a;
          bVar2 = 0x99;
          bVar25 = 0x9b;
          bVar15 = 0x19;
          bVar21 = 0x9c;
          bVar20 = 0x1b;
          bVar23 = 0x9e;
          bVar19 = 0x1e;
          bVar3 = 0x1f;
          bVar8 = 0x9d;
          bVar16 = 0x9f;
          bVar4 = 0x1d;
          bVar1 = 0x1c;
          bVar26 = 0x18;
        }
        if (iVar10 == 0) {
          bVar3 = bVar20;
          bVar19 = bVar11;
          bVar4 = bVar15;
          bVar1 = bVar26;
          bVar16 = bVar25;
          bVar23 = bVar7;
          bVar8 = bVar2;
          bVar21 = bVar18;
        }
        uVar14 = *(uint *)(param_2 + 8) & 1;
        if (uVar14 != 0) {
          bVar19 = bVar3;
          bVar1 = bVar4;
          bVar23 = bVar16;
          bVar21 = bVar8;
        }
        uVar9 = *(uint *)(param_2 + 8) & 2;
        if (uVar9 != 0) {
          bVar1 = bVar19;
          bVar21 = bVar23;
        }
        if ((bVar29 && bVar28) && (1 < iVar24 - 5U)) {
          bVar21 = bVar1;
        }
        if (iVar5 == 0) {
          bVar26 = 0x94;
          bVar18 = 0x90;
          bVar7 = 0x92;
          bVar11 = 0x96;
          bVar2 = 0x12;
          bVar25 = 0x91;
          bVar15 = 0x16;
          bVar20 = 0x93;
          bVar19 = 0x13;
          bVar8 = 0x95;
          bVar3 = 0x11;
          bVar23 = 0x97;
          bVar16 = 0x17;
          bVar4 = 0x15;
          bVar1 = 0x14;
          bVar13 = 0x10;
        }
        else {
          bVar26 = 0x9c;
          bVar18 = 0x98;
          bVar7 = 0x9a;
          bVar11 = 0x9e;
          bVar2 = 0x1a;
          bVar25 = 0x99;
          bVar15 = 0x1e;
          bVar20 = 0x9b;
          bVar19 = 0x1b;
          bVar8 = 0x9d;
          bVar3 = 0x19;
          bVar23 = 0x9f;
          bVar16 = 0x1f;
          bVar4 = 0x1d;
          bVar1 = 0x1c;
          bVar13 = 0x18;
        }
        if (iVar10 != 0) {
          bVar25 = bVar8;
          bVar18 = bVar26;
          bVar20 = bVar23;
          bVar7 = bVar11;
          bVar3 = bVar4;
          bVar13 = bVar1;
          bVar19 = bVar16;
          bVar2 = bVar15;
        }
        if (uVar14 != 0) {
          bVar18 = bVar25;
          bVar7 = bVar20;
          bVar13 = bVar3;
          bVar2 = bVar19;
        }
        if (uVar9 != 0) {
          bVar18 = bVar7;
          bVar13 = bVar2;
        }
        if ((bVar29 && bVar28) && (1 < iVar24 - 5U)) {
          bVar18 = bVar13;
        }
        machdep_WriteReg(1,'f');
        bVar1 = machdep_ReadReg(2);
        machdep_WriteReg(2,bVar1 & 0xef);
        machdep_WriteReg(1,0x80);
        iVar5 = machdep_ReadReg(2);
        if (-1 < iVar5 << 0x1e) {
          iVar5 = 300;
          while( true ) {
            machdep_Sleep(10);
            iVar10 = machdep_ReadReg(2);
            if (iVar10 << 0x1e < 0) break;
            machdep_Sleep(10);
            iVar10 = machdep_ReadReg(2);
            if (iVar10 << 0x1e < 0) break;
            machdep_Sleep(10);
            iVar10 = machdep_ReadReg(2);
            if (iVar10 << 0x1e < 0) break;
            machdep_Sleep(10);
            iVar10 = machdep_ReadReg(2);
            if (iVar10 << 0x1e < 0) break;
            machdep_Sleep(10);
            iVar10 = machdep_ReadReg(2);
            if (iVar10 << 0x1e < 0) break;
            machdep_Sleep(10);
            iVar10 = machdep_ReadReg(2);
            if (iVar10 << 0x1e < 0) break;
            machdep_Sleep(10);
            iVar10 = machdep_ReadReg(2);
            if (iVar10 << 0x1e < 0) break;
            machdep_Sleep(10);
            iVar10 = machdep_ReadReg(2);
            if (iVar10 << 0x1e < 0) break;
            machdep_Sleep(10);
            iVar10 = machdep_ReadReg(2);
            if (iVar10 << 0x1e < 0) break;
            machdep_Sleep(10);
            iVar10 = machdep_ReadReg(2);
            if (iVar10 << 0x1e < 0) break;
            iVar5 = iVar5 + -10;
            if (iVar5 == 0) {
              return 0xfffffffb;
            }
          }
        }
        iVar5 = DAT_00069534;
        if (param_1 - 0x22 < 3) {
          bVar1 = *(byte *)(DAT_00069534 + 0x692ee);
          machdep_WriteReg(1,0xd1);
          machdep_WriteReg(2,bVar21 & bVar1);
          bVar1 = *(byte *)(iVar5 + 0x692ef);
          machdep_WriteReg(1,0xd2);
          machdep_WriteReg(2,bVar18 & bVar1);
        }
        else {
          bVar1 = *(byte *)(DAT_00069540 + 0x69413);
          machdep_WriteReg(1,'l');
          machdep_WriteReg(2,bVar17 & bVar1);
        }
        iVar5 = DAT_00069538;
        puVar22 = (uchar *)(DAT_00069538 + 0x69318);
        machdep_WriteReg(1,'y');
        machdep_WriteReg(2,*puVar22);
        machdep_WriteReg(1,'z');
        machdep_WriteReg(2,*(uchar *)(iVar5 + 0x69319));
      }
    }
    if (param_1 == 0x20) {
      if (*(int *)(param_2 + 0x1c) == 0) {
        machdep_WriteReg(1,'j');
        machdep_ReadReg(2);
        machdep_WriteReg(2,'\0');
        machdep_WriteReg(1,'w');
        machdep_WriteReg(2,'\0');
        machdep_WriteReg(1,'f');
        bVar1 = machdep_ReadReg(2);
        machdep_WriteReg(2,bVar1 | 0x40);
      }
      else {
        iVar5 = *(int *)(param_2 + 0xc);
        if (*(int *)(param_2 + 0x24) == 0) {
          bVar1 = 8;
          bVar17 = 0;
        }
        else {
          bVar1 = 0xc;
          bVar17 = 4;
        }
        if (*(int *)(param_2 + 0x28) != 0) {
          bVar17 = bVar1;
        }
        bVar29 = iVar5 != 0;
        if (iVar5 != 1) {
          bVar29 = 1 < iVar5 - 4U;
        }
        if (!bVar29 || (iVar5 == 1 || iVar5 - 4U == 2)) {
          bVar17 = bVar17 | 1;
        }
        machdep_WriteReg(1,'f');
        bVar1 = machdep_ReadReg(2);
        iVar5 = DAT_00069528;
        machdep_WriteReg(2,bVar1 & 0xbf);
        bVar1 = *(byte *)(iVar5 + 0x6883f);
        machdep_WriteReg(1,'j');
        machdep_WriteReg(2,bVar17 & bVar1);
        machdep_WriteReg(1,'w');
        machdep_WriteReg(2,*(uchar *)(iVar5 + 0x6883d));
      }
    }
    if (uVar12 != 0) {
      if (*(int *)(param_2 + 0x20) == 0) {
        if (param_1 - 0x22 < 3) {
          uVar6 = 0xd0;
        }
        else {
          uVar6 = 'k';
        }
        machdep_WriteReg(1,uVar6);
        machdep_ReadReg(2);
        machdep_WriteReg(2,'\0');
        machdep_WriteReg(1,'x');
        machdep_WriteReg(2,'\0');
        machdep_WriteReg(1,'f');
        bVar1 = machdep_ReadReg(2);
        machdep_WriteReg(2,bVar1 | 0x20);
        machdep_WriteReg(1,'f');
        iVar5 = machdep_ReadReg(2);
        if (-1 < iVar5 << 0x1f) {
          machdep_WriteReg(1,0x80);
          iVar5 = machdep_ReadReg(2);
          if (-1 < iVar5 << 0x1b) {
            iVar5 = 300;
            while( true ) {
              machdep_Sleep(10);
              iVar10 = machdep_ReadReg(2);
              if (iVar10 << 0x1b < 0) break;
              machdep_Sleep(10);
              iVar10 = machdep_ReadReg(2);
              if (iVar10 << 0x1b < 0) break;
              machdep_Sleep(10);
              iVar10 = machdep_ReadReg(2);
              if (iVar10 << 0x1b < 0) break;
              machdep_Sleep(10);
              iVar10 = machdep_ReadReg(2);
              if (iVar10 << 0x1b < 0) break;
              machdep_Sleep(10);
              iVar10 = machdep_ReadReg(2);
              if (iVar10 << 0x1b < 0) break;
              machdep_Sleep(10);
              iVar10 = machdep_ReadReg(2);
              if (iVar10 << 0x1b < 0) break;
              machdep_Sleep(10);
              iVar10 = machdep_ReadReg(2);
              if (iVar10 << 0x1b < 0) break;
              machdep_Sleep(10);
              iVar10 = machdep_ReadReg(2);
              if (iVar10 << 0x1b < 0) break;
              machdep_Sleep(10);
              iVar10 = machdep_ReadReg(2);
              if (iVar10 << 0x1b < 0) break;
              machdep_Sleep(10);
              iVar10 = machdep_ReadReg(2);
              if (iVar10 << 0x1b < 0) break;
              iVar5 = iVar5 + -10;
              if (iVar5 == 0) {
                return 0xfffffffb;
              }
            }
          }
        }
      }
      else {
        if (*(int *)(param_2 + 0x24) == 0) {
          bVar4 = 9;
          bVar17 = 1;
          bVar1 = 8;
          bVar16 = 0;
        }
        else {
          bVar4 = 0xd;
          bVar17 = 5;
          bVar1 = 0xc;
          bVar16 = 4;
        }
        if (*(int *)(param_2 + 0x28) == 0) {
          bVar4 = bVar17;
          bVar1 = bVar16;
        }
        iVar5 = *(int *)(param_2 + 0xc);
        if ((iVar5 != 1 && iVar5 != 4) && (1 < iVar5 - 5U)) {
          bVar4 = bVar1;
        }
        if (*(int *)(param_2 + 0x24) == 0) {
          bVar18 = 1;
          bVar7 = 0x80;
          bVar11 = 0x82;
          bVar2 = 0x84;
          bVar25 = 2;
          bVar17 = 0x81;
          bVar15 = 0x86;
          bVar1 = 0x83;
          bVar16 = 3;
          bVar20 = 6;
          bVar19 = 5;
          bVar8 = 0x85;
          bVar3 = 0x87;
          bVar21 = 7;
          bVar23 = 4;
          bVar26 = 0;
        }
        else {
          bVar18 = 9;
          bVar7 = 0x88;
          bVar11 = 0x8a;
          bVar2 = 0x8c;
          bVar25 = 10;
          bVar17 = 0x89;
          bVar15 = 0x8e;
          bVar1 = 0x8b;
          bVar16 = 0xb;
          bVar20 = 0xe;
          bVar19 = 0xd;
          bVar8 = 0x8d;
          bVar3 = 0x8f;
          bVar21 = 0xf;
          bVar23 = 0xc;
          bVar26 = 8;
        }
        if (*(int *)(param_2 + 0x28) != 0) {
          bVar1 = bVar3;
          bVar11 = bVar15;
          bVar18 = bVar19;
          bVar26 = bVar23;
          bVar16 = bVar21;
          bVar25 = bVar20;
          bVar17 = bVar8;
          bVar7 = bVar2;
        }
        if ((*(uint *)(param_2 + 8) & 1) == 0) {
          bVar1 = bVar11;
          bVar18 = bVar26;
          bVar16 = bVar25;
          bVar17 = bVar7;
        }
        if ((int)(*(uint *)(param_2 + 8) << 0x1e) < 0) {
          bVar17 = bVar1;
          bVar18 = bVar16;
        }
        if ((iVar5 != 1 && iVar5 != 4) && (1 < iVar5 - 5U)) {
          bVar17 = bVar18;
        }
        machdep_WriteReg(1,'f');
        bVar1 = machdep_ReadReg(2);
        machdep_WriteReg(2,bVar1 & 0xdf);
        machdep_WriteReg(1,0x80);
        iVar5 = machdep_ReadReg(2);
        if (-1 < iVar5 << 0x1c) {
          iVar5 = 300;
          while( true ) {
            machdep_Sleep(10);
            iVar10 = machdep_ReadReg(2);
            if (iVar10 << 0x1c < 0) break;
            machdep_Sleep(10);
            iVar10 = machdep_ReadReg(2);
            if (iVar10 << 0x1c < 0) break;
            machdep_Sleep(10);
            iVar10 = machdep_ReadReg(2);
            if (iVar10 << 0x1c < 0) break;
            machdep_Sleep(10);
            iVar10 = machdep_ReadReg(2);
            if (iVar10 << 0x1c < 0) break;
            machdep_Sleep(10);
            iVar10 = machdep_ReadReg(2);
            if (iVar10 << 0x1c < 0) break;
            machdep_Sleep(10);
            iVar10 = machdep_ReadReg(2);
            if (iVar10 << 0x1c < 0) break;
            machdep_Sleep(10);
            iVar10 = machdep_ReadReg(2);
            if (iVar10 << 0x1c < 0) break;
            machdep_Sleep(10);
            iVar10 = machdep_ReadReg(2);
            if (iVar10 << 0x1c < 0) break;
            machdep_Sleep(10);
            iVar10 = machdep_ReadReg(2);
            if (iVar10 << 0x1c < 0) break;
            machdep_Sleep(10);
            iVar10 = machdep_ReadReg(2);
            if (iVar10 << 0x1c < 0) break;
            iVar5 = iVar5 + -10;
            if (iVar5 == 0) {
              return 0xfffffffb;
            }
          }
        }
        if (param_1 - 0x22 < 3) {
          bVar1 = *(byte *)(DAT_00069544 + 0x694ad);
          machdep_WriteReg(1,0xd0);
          machdep_WriteReg(2,bVar17 & bVar1);
        }
        else {
          bVar1 = *(byte *)(DAT_0006954c + 0x6951c);
          machdep_WriteReg(1,'k');
          machdep_WriteReg(2,bVar4 & bVar1);
        }
        machdep_WriteReg(1,'x');
        machdep_WriteReg(2,*(uchar *)(DAT_00069548 + 0x694c2));
      }
    }
  }
  else if (param_1 != 0x21) {
    machdep_WriteReg(1,'f');
    iVar5 = machdep_ReadReg(2);
    if (iVar5 << 0x1f < 0) {
      machdep_WriteReg(2,(byte)iVar5 & 0xfe);
      machdep_WriteReg(1,0x80);
      iVar5 = machdep_ReadReg(2);
      if (-1 < iVar5 << 0x1f) {
        iVar5 = 1000;
        while( true ) {
          machdep_Sleep(3);
          uVar14 = machdep_ReadReg(2);
          if ((uVar14 & 1) != 0) break;
          machdep_Sleep(3);
          uVar14 = machdep_ReadReg(2);
          if ((uVar14 & 1) != 0) break;
          machdep_Sleep(3);
          uVar14 = machdep_ReadReg(2);
          if ((uVar14 & 1) != 0) break;
          machdep_Sleep(3);
          uVar14 = machdep_ReadReg(2);
          if ((uVar14 & 1) != 0) break;
          machdep_Sleep(3);
          uVar14 = machdep_ReadReg(2);
          if ((uVar14 & 1) != 0) break;
          machdep_Sleep(3);
          uVar14 = machdep_ReadReg(2);
          if ((uVar14 & 1) != 0) break;
          machdep_Sleep(3);
          uVar14 = machdep_ReadReg(2);
          if ((uVar14 & 1) != 0) break;
          machdep_Sleep(3);
          iVar10 = machdep_ReadReg(2);
          if (iVar10 << 0x1f < 0) break;
          iVar5 = iVar5 + -8;
          if (iVar5 == 0) {
            return 0xfffffffb;
          }
        }
      }
    }
    goto LAB_000683c4;
  }
  iVar5 = DAT_00068730;
  uVar14 = param_1 - 0x22;
  if (uVar14 < 3) {
    uVar9 = *(uint *)(param_2 + 8);
    if ((uVar9 & 8) == 0) {
      machdep_WriteReg(1,0xcc);
      machdep_ReadReg(2);
      machdep_WriteReg(2,'\0');
      machdep_WriteReg(1,0xc3);
      bVar1 = machdep_ReadReg(2);
      machdep_WriteReg(2,bVar1 & 0x80);
      machdep_WriteReg(1,0xb4);
      bVar1 = machdep_ReadReg(2);
      machdep_WriteReg(2,bVar1 | 8);
    }
    else {
      if (*(int *)(param_2 + 0x24) == 0) {
        bVar1 = 4;
        bVar17 = 0;
      }
      else {
        bVar1 = 0xc;
        bVar17 = 8;
      }
      if (*(int *)(param_2 + 0x28) != 0) {
        bVar17 = bVar1;
      }
      if ((int)(uVar9 << 0x1f) < 0) {
        bVar17 = bVar17 | 1;
      }
      if ((int)(uVar9 << 0x1e) < 0) {
        bVar17 = bVar17 | 2;
      }
      if ((int)(uVar9 << 0x1b) < 0) {
        bVar17 = bVar17 | 0x10;
      }
      if ((int)(uVar9 << 0x1a) < 0) {
        bVar17 = bVar17 | 0x20;
      }
      iVar10 = *(int *)(param_2 + 0xc);
      if ((int)(uVar9 << 0x19) < 0) {
        bVar17 = bVar17 | 0x40;
      }
      bVar29 = iVar10 != 0;
      if (iVar10 != 1) {
        bVar29 = 1 < iVar10 - 4U;
      }
      if (!bVar29 || (iVar10 == 1 || iVar10 - 4U == 2)) {
        bVar17 = bVar17 | 0x80;
      }
      machdep_WriteReg(1,0xb4);
      bVar1 = machdep_ReadReg(2);
      machdep_WriteReg(2,bVar1 & 0xf7);
      bVar1 = *(byte *)(iVar5 + 0x67cd9);
      machdep_WriteReg(1,0xcc);
      machdep_WriteReg(2,bVar17 & bVar1);
      machdep_WriteReg(1,0xc3);
      machdep_WriteReg(2,*(uchar *)(iVar5 + 0x67cd5));
    }
  }
  iVar5 = DAT_00068734;
  if (uVar14 < 3) {
    uVar9 = *(uint *)(param_2 + 8);
    if ((uVar9 & 0x800) == 0) {
      machdep_WriteReg(1,0xce);
      machdep_ReadReg(2);
      machdep_WriteReg(2,'\0');
      machdep_WriteReg(1,0xc4);
      machdep_WriteReg(2,'\0');
      machdep_WriteReg(1,0xb5);
      bVar1 = machdep_ReadReg(2);
      machdep_WriteReg(2,bVar1 | 8);
    }
    else {
      if (*(int *)(param_2 + 0x24) == 0) {
        bVar1 = 4;
        bVar17 = 0;
      }
      else {
        bVar1 = 0xc;
        bVar17 = 8;
      }
      if (*(int *)(param_2 + 0x28) != 0) {
        bVar17 = bVar1;
      }
      if ((int)(uVar9 << 0x1f) < 0) {
        bVar17 = bVar17 | 1;
      }
      if ((int)(uVar9 << 0x1e) < 0) {
        bVar17 = bVar17 | 2;
      }
      iVar10 = *(int *)(param_2 + 0xc);
      if ((int)(uVar9 << 0x1b) < 0) {
        bVar17 = bVar17 | 0x10;
      }
      if ((int)(uVar9 << 0x1a) < 0) {
        bVar17 = bVar17 | 0x20;
      }
      if ((int)(uVar9 << 0x19) < 0) {
        bVar17 = bVar17 | 0x40;
      }
      bVar29 = iVar10 != 0;
      if (iVar10 != 1) {
        bVar29 = 1 < iVar10 - 4U;
      }
      if (!bVar29 || (iVar10 == 1 || iVar10 - 4U == 2)) {
        bVar17 = bVar17 | 0x80;
      }
      machdep_WriteReg(1,0xb5);
      bVar1 = machdep_ReadReg(2);
      machdep_WriteReg(2,bVar1 & 0xf7);
      bVar1 = *(byte *)(iVar5 + 0x67da4);
      machdep_WriteReg(1,0xce);
      machdep_WriteReg(2,bVar17 & bVar1);
      machdep_WriteReg(1,0xc4);
      machdep_WriteReg(2,*(uchar *)(iVar5 + 0x67da0));
    }
  }
  iVar5 = DAT_00068738;
  if (uVar14 < 3) {
    uVar9 = *(uint *)(param_2 + 8);
    if ((uVar9 & 0x80) == 0) {
      machdep_WriteReg(1,0xd5);
      machdep_ReadReg(2);
      machdep_WriteReg(2,'\0');
      machdep_WriteReg(1,0xc2);
      machdep_WriteReg(2,'\0');
      machdep_WriteReg(1,0xb4);
      bVar1 = machdep_ReadReg(2);
      machdep_WriteReg(2,bVar1 | 0x80);
      machdep_WriteReg(1,0xb5);
      bVar1 = machdep_ReadReg(2);
      machdep_WriteReg(2,bVar1 | 1);
    }
    else {
      if (*(int *)(param_2 + 0x24) == 0) {
        bVar1 = 0x14;
        bVar17 = 0x10;
      }
      else {
        bVar1 = 0x1c;
        bVar17 = 0x18;
      }
      if (*(int *)(param_2 + 0x28) != 0) {
        bVar17 = bVar1;
      }
      if ((int)(uVar9 << 0x1f) < 0) {
        bVar17 = bVar17 | 1;
      }
      iVar10 = *(int *)(param_2 + 0xc);
      if ((int)(uVar9 << 0x1e) < 0) {
        bVar17 = bVar17 | 2;
      }
      bVar29 = iVar10 != 0;
      if (iVar10 != 1) {
        bVar29 = 1 < iVar10 - 4U;
      }
      if (!bVar29 || (iVar10 == 1 || iVar10 - 4U == 2)) {
        bVar17 = bVar17 | 0x80;
      }
      machdep_WriteReg(1,0xb4);
      bVar1 = machdep_ReadReg(2);
      machdep_WriteReg(2,bVar1 & 0x7f);
      machdep_Wait(10000);
      machdep_WriteReg(1,0xb5);
      bVar1 = machdep_ReadReg(2);
      machdep_WriteReg(2,bVar1 & 0xfe);
      bVar1 = *(byte *)(iVar5 + 0x67e27);
      machdep_WriteReg(1,0xd5);
      machdep_WriteReg(2,bVar17 & bVar1);
      machdep_WriteReg(1,0xc2);
      machdep_WriteReg(2,*(uchar *)(iVar5 + 0x67e20));
    }
  }
  iVar5 = DAT_0006873c;
  if (uVar14 < 3) {
    uVar9 = *(uint *)(param_2 + 8);
    if ((uVar9 & 4) == 0) {
      machdep_WriteReg(1,200);
      machdep_ReadReg(2);
      machdep_WriteReg(2,'\0');
      machdep_WriteReg(1,0xbd);
      machdep_WriteReg(2,'\0');
      machdep_WriteReg(1,0xb4);
      bVar1 = machdep_ReadReg(2);
      machdep_WriteReg(2,bVar1 | 4);
    }
    else {
      if (*(int *)(param_2 + 0x24) == 0) {
        bVar1 = 4;
        bVar17 = 0;
      }
      else {
        bVar1 = 0xc;
        bVar17 = 8;
      }
      if (*(int *)(param_2 + 0x28) != 0) {
        bVar17 = bVar1;
      }
      if ((int)(uVar9 << 0x1f) < 0) {
        bVar17 = bVar17 | 1;
      }
      if ((int)(uVar9 << 0x1e) < 0) {
        bVar17 = bVar17 | 2;
      }
      if ((int)(uVar9 << 0x1b) < 0) {
        bVar17 = bVar17 | 0x10;
      }
      if ((int)(uVar9 << 0x1a) < 0) {
        bVar17 = bVar17 | 0x20;
      }
      if ((int)(uVar9 << 0x19) < 0) {
        bVar17 = bVar17 | 0x40;
      }
      machdep_WriteReg(1,0xb4);
      bVar1 = machdep_ReadReg(2);
      machdep_WriteReg(2,bVar1 & 0xfb);
      bVar1 = *(byte *)(iVar5 + 0x67ef9);
      machdep_WriteReg(1,200);
      machdep_WriteReg(2,bVar17 & bVar1);
      machdep_WriteReg(1,0xbd);
      machdep_WriteReg(2,*(uchar *)(iVar5 + 0x67ef3));
    }
  }
  iVar5 = DAT_00068740;
  if (uVar14 < 3) {
    uVar9 = *(uint *)(param_2 + 8);
    if ((uVar9 & 0x400) == 0) {
      machdep_WriteReg(1,0xca);
      machdep_ReadReg(2);
      machdep_WriteReg(2,'\0');
      machdep_WriteReg(1,0xbe);
      machdep_WriteReg(2,'\0');
      machdep_WriteReg(1,0xb5);
      bVar1 = machdep_ReadReg(2);
      machdep_WriteReg(2,bVar1 | 4);
    }
    else {
      if (*(int *)(param_2 + 0x24) == 0) {
        bVar1 = 4;
        bVar17 = 0;
      }
      else {
        bVar1 = 0xc;
        bVar17 = 8;
      }
      if (*(int *)(param_2 + 0x28) != 0) {
        bVar17 = bVar1;
      }
      if ((int)(uVar9 << 0x1f) < 0) {
        bVar17 = bVar17 | 1;
      }
      if ((int)(uVar9 << 0x1e) < 0) {
        bVar17 = bVar17 | 2;
      }
      if ((int)(uVar9 << 0x1b) < 0) {
        bVar17 = bVar17 | 0x10;
      }
      if ((int)(uVar9 << 0x1a) < 0) {
        bVar17 = bVar17 | 0x20;
      }
      if ((int)(uVar9 << 0x19) < 0) {
        bVar17 = bVar17 | 0x40;
      }
      machdep_WriteReg(1,0xb5);
      bVar1 = machdep_ReadReg(2);
      machdep_WriteReg(2,bVar1 & 0xfb);
      bVar1 = *(byte *)(iVar5 + 0x67f9c);
      machdep_WriteReg(1,0xca);
      machdep_WriteReg(2,bVar17 & bVar1);
      machdep_WriteReg(1,0xbe);
      machdep_WriteReg(2,*(uchar *)(iVar5 + 0x67f96));
    }
  }
  iVar5 = DAT_00068744;
  if (uVar14 < 3) {
    uVar9 = *(uint *)(param_2 + 8);
    if ((uVar9 & 0x200) == 0) {
      machdep_WriteReg(1,0xd6);
      machdep_ReadReg(2);
      machdep_WriteReg(2,'\0');
      machdep_WriteReg(1,0xc1);
      machdep_WriteReg(2,'\0');
      machdep_WriteReg(1,0xb5);
      bVar1 = machdep_ReadReg(2);
      machdep_WriteReg(2,bVar1 | 2);
    }
    else {
      if ((uVar9 & 0x10) == 0) {
        bVar1 = 0;
        bVar17 = 0x20;
      }
      else {
        bVar1 = 0x10;
        bVar17 = 0x30;
      }
      if ((uVar9 & 0x20) == 0) {
        bVar17 = bVar1;
      }
      if ((int)(uVar9 << 0x19) < 0) {
        bVar17 = bVar17 | 0x40;
      }
      machdep_WriteReg(1,0xb5);
      bVar1 = machdep_ReadReg(2);
      machdep_WriteReg(2,bVar1 & 0xfd);
      bVar1 = *(byte *)(iVar5 + 0x68020);
      machdep_WriteReg(1,0xd6);
      machdep_WriteReg(2,bVar17 & bVar1);
      machdep_WriteReg(1,0xc1);
      machdep_WriteReg(2,*(uchar *)(iVar5 + 0x68017));
    }
  }
  if (uVar12 != 0) {
    if (*(int *)(param_2 + 0x24) == 0) {
      if (uVar14 < 3) {
        uVar6 = 0xbf;
      }
      else {
        uVar6 = 't';
      }
      machdep_WriteReg(1,uVar6);
      machdep_WriteReg(2,'\0');
      machdep_WriteReg(1,'g');
      bVar1 = machdep_ReadReg(2);
      machdep_WriteReg(2,bVar1 | 0x80);
      if (*(int *)(param_2 + 0x28) != 0) {
        machdep_WriteReg(1,'g');
        bVar1 = machdep_ReadReg(2);
        machdep_WriteReg(2,bVar1 & 0xbf);
        machdep_Sleep(0x1e);
        if (uVar14 < 3) {
LAB_00069702:
          iVar5 = DAT_00069a00;
          machdep_WriteReg(1,0xc0);
          machdep_WriteReg(2,*(uchar *)(iVar5 + 0x6971e));
        }
        else {
LAB_000696c2:
          iVar5 = DAT_000699fc;
          machdep_WriteReg(1,'u');
          machdep_WriteReg(2,*(uchar *)(iVar5 + 0x696d2));
        }
        goto LAB_000680aa;
      }
      if (2 < uVar14) goto LAB_00069652;
LAB_00068080:
      machdep_WriteReg(1,0xc0);
      machdep_WriteReg(2,'\0');
    }
    else {
      machdep_WriteReg(1,'g');
      bVar1 = machdep_ReadReg(2);
      machdep_WriteReg(2,bVar1 & 0x7f);
      machdep_Sleep(0x1e);
      if (uVar14 < 3) {
        machdep_WriteReg(1,0xbf);
        machdep_WriteReg(2,*(uchar *)(DAT_00069a04 + 0x69777));
        if (*(int *)(param_2 + 0x28) != 0) {
          machdep_WriteReg(1,'g');
          bVar1 = machdep_ReadReg(2);
          machdep_WriteReg(2,bVar1 & 0xbf);
          machdep_Sleep(0x1e);
          goto LAB_00069702;
        }
        goto LAB_00068080;
      }
      machdep_WriteReg(1,'t');
      machdep_WriteReg(2,*(uchar *)(DAT_000699f8 + 0x6969d));
      if (*(int *)(param_2 + 0x28) != 0) {
        machdep_WriteReg(1,'g');
        bVar1 = machdep_ReadReg(2);
        machdep_WriteReg(2,bVar1 & 0xbf);
        machdep_Sleep(0x1e);
        goto LAB_000696c2;
      }
LAB_00069652:
      machdep_WriteReg(1,'u');
      machdep_WriteReg(2,'\0');
    }
    machdep_WriteReg(1,'g');
    bVar1 = machdep_ReadReg(2);
    machdep_WriteReg(2,bVar1 | 0x40);
  }
LAB_000680aa:
  iVar5 = DAT_00068748;
  if (uVar14 < 3) {
    if ((*(uint *)(param_2 + 8) & 1) == 0) {
      machdep_WriteReg(1,0xb9);
      bVar1 = machdep_ReadReg(2);
      machdep_WriteReg(2,bVar1 & 0x80);
      machdep_WriteReg(1,0xba);
      machdep_WriteReg(2,'\0');
      machdep_WriteReg(1,0xb4);
      bVar1 = machdep_ReadReg(2);
      machdep_WriteReg(2,bVar1 | 1);
    }
    else {
      machdep_WriteReg(1,0xb4);
      bVar1 = machdep_ReadReg(2);
      machdep_WriteReg(2,bVar1 & 0xfe);
      machdep_Sleep(0x1e);
      machdep_WriteReg(1,0xb9);
      machdep_WriteReg(2,*(uchar *)(iVar5 + 0x680e5));
      machdep_WriteReg(1,0xba);
      machdep_WriteReg(2,*(uchar *)(iVar5 + 0x680e6));
    }
  }
  iVar5 = DAT_0006874c;
  if (uVar14 < 3) {
    if ((*(uint *)(param_2 + 8) & 2) == 0) {
      machdep_WriteReg(1,0xbb);
      machdep_WriteReg(2,'\0');
      machdep_WriteReg(1,0xbc);
      machdep_WriteReg(2,'\0');
      machdep_WriteReg(1,0xb4);
      bVar1 = machdep_ReadReg(2);
      machdep_WriteReg(2,bVar1 | 2);
    }
    else {
      machdep_WriteReg(1,0xb4);
      bVar1 = machdep_ReadReg(2);
      machdep_WriteReg(2,bVar1 & 0xfd);
      machdep_Sleep(0x1e);
      machdep_WriteReg(1,0xbb);
      machdep_WriteReg(2,*(uchar *)(iVar5 + 0x6813b));
      machdep_WriteReg(1,0xbc);
      machdep_WriteReg(2,*(uchar *)(iVar5 + 0x6813c));
    }
  }
  iVar5 = DAT_00068750;
  if (uVar14 < 3) {
    if ((*(uint *)(param_2 + 8) & 0x10) == 0) {
      machdep_WriteReg(1,0xb6);
      machdep_WriteReg(2,'\0');
      FUN_00066b24(0xb4,0x10);
    }
    else {
      FUN_00066afc(0xb4,0x10);
      machdep_Sleep(0x1e);
      machdep_WriteReg(1,0xb6);
      machdep_WriteReg(2,*(uchar *)(iVar5 + 0x68188));
    }
  }
  if (uVar14 < 3) {
    if ((*(uint *)(param_2 + 8) & 0x20) == 0) {
      machdep_WriteReg(1,0xb7);
      machdep_WriteReg(2,'\0');
      FUN_00066b24(0xb4,0x20);
    }
    else {
      FUN_00066afc(0xb4,0x20);
      machdep_Sleep(0x1e);
      machdep_WriteReg(1,0xb7);
      machdep_WriteReg(2,*(uchar *)(DAT_00068754 + 0x681cf));
    }
  }
  if (uVar14 < 3) {
    if ((*(uint *)(param_2 + 8) & 0x40) == 0) {
      machdep_WriteReg(1,0xb8);
      machdep_WriteReg(2,'\0');
      FUN_00066b24(0xb4,0x40);
    }
    else {
      FUN_00066afc(0xb4,0x40);
      machdep_Sleep(0x1e);
      machdep_WriteReg(1,0xb8);
      machdep_WriteReg(2,*(uchar *)(DAT_00068758 + 0x68208));
    }
LAB_000681f8:
    if ((*(int *)(param_2 + 0xc) - 4U < 3) || (*(int *)(param_2 + 0xc) == 1)) {
      FUN_00066afc(0x66,8);
      iVar10 = DAT_00069a0c;
      iVar5 = DAT_00069a08;
      if (uVar14 < 3) {
        machdep_WriteReg(1,0xc5);
        machdep_WriteReg(2,*(uchar *)(iVar5 + 0x697ff));
        machdep_WriteReg(1,0xc6);
        machdep_WriteReg(2,*(uchar *)(iVar5 + 0x69800));
      }
      else {
        machdep_WriteReg(1,'r');
        machdep_WriteReg(2,*(uchar *)(iVar10 + 0x6999b));
        machdep_WriteReg(1,'s');
        machdep_WriteReg(2,*(uchar *)(iVar10 + 0x6999c));
      }
    }
    else {
      if (uVar14 < 3) {
        machdep_WriteReg(1,0xc5);
        machdep_WriteReg(2,'\0');
        machdep_WriteReg(1,0xc6);
        machdep_WriteReg(2,'\0');
      }
      else {
        machdep_WriteReg(1,'r');
        machdep_WriteReg(2,'\0');
        machdep_WriteReg(1,'s');
        machdep_WriteReg(2,'\0');
      }
      FUN_00066b24(0x66,8);
    }
    if (*(uint *)param_2 < 2) {
      machdep_WriteReg(1,'f');
      uVar12 = machdep_ReadReg(2);
      machdep_WriteReg(1,'g');
      uVar9 = machdep_ReadReg(2);
      if (uVar14 < 3) {
        machdep_WriteReg(1,0xb4);
        iVar5 = machdep_ReadReg(2);
        machdep_WriteReg(1,0xb5);
        uVar14 = machdep_ReadReg(2);
        if (((((uVar9 & 0xc6) == 0xc6) && ((uVar12 & 0x3e) == 0x3e)) && (iVar5 == 0xff)) &&
           ((uVar14 & 0xf) == 0xf)) goto LAB_000698e4;
      }
      else if (((uVar9 & 0xc6) == 0xc6) && ((uVar12 & 0x7e) == 0x7e)) {
LAB_000698e4:
        FUN_00066b24(0x66,1);
        machdep_Sleep(10);
      }
    }
  }
  else if (param_1 != 0x21) goto LAB_000681f8;
  iVar5 = *(int *)(param_2 + 0xc);
  if (iVar5 == 1) {
    uVar12 = *(uint *)(param_2 + 4);
    if (uVar12 == 3) goto LAB_000682b4;
  }
  else {
    if (((iVar5 == 0) || (iVar5 - 3U < 2)) || (iVar5 == 6)) {
      FUN_00066afc(0x30,0x40);
      iVar5 = *(int *)(param_2 + 0xc);
    }
    if ((iVar5 - 4U < 2) || (iVar5 == 0)) {
      FUN_00066b24(100,8);
      uVar12 = *(uint *)(param_2 + 4);
    }
    else {
      uVar12 = *(uint *)(param_2 + 4);
    }
  }
  if ((-1 < (int)(uVar12 << 0x1f)) && (param_1 - 0x23 < 2)) {
    FUN_00066b24(0xe7,4);
    FUN_00066afc(0xe6,1);
    FUN_00066b24(100,0x20);
    uVar12 = *(uint *)(param_2 + 4);
  }
  if (((uVar12 & 2) == 0) && (param_1 == 0x23)) {
    machdep_WriteReg(0x11,'\x13');
    machdep_WriteReg(0x12,'\0');
    machdep_WriteReg(0x11,'\x0f');
    machdep_WriteReg(0x12,'\0');
    FUN_00066b24(100,0x40);
  }
  iVar5 = *(int *)(param_2 + 0xc);
  if ((((iVar5 == 0) || (iVar5 - 3U < 2)) || (iVar5 == 6)) && (param_1 - 0x23 < 2)) {
    FUN_00066b24(100,0x10);
    iVar5 = *(int *)(param_2 + 0xc);
  }
  if (((iVar5 == 0) && (*(int *)(param_2 + 4) == 0)) &&
     (FUN_00066b24(100,4), (*(uint *)param_2 & 0xfffffffd) != 1)) {
    machdep_Wait(0x515e);
    FUN_00066b24(100,2);
    FUN_00066b24(0x66,0x80);
    FUN_00066b24(100,1);
  }
LAB_000682b4:
  if ((param_1 == 0x20) || (uVar12 = *(uint *)(param_2 + 0x10), -1 < (int)(uVar12 << 0x1e))) {
    FUN_00066b24(0x65,2);
    uVar12 = *(uint *)(param_2 + 0x10);
  }
  if ((uVar12 & 1) == 0) {
    FUN_00066b24(0x65,1);
    return 0;
  }
  return 0;
}

