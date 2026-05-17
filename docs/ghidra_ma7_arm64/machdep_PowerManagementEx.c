/* machdep_PowerManagementEx @ 00179e20 10132B */


/* WARNING: Type propagation algorithm not settling */
/* YAMAHA::machdep_PowerManagementEx(unsigned int, _MAMACHDEP_POWERS*) */

undefined8 YAMAHA::machdep_PowerManagementEx(uint param_1,_MAMACHDEP_POWERS *param_2)

{
  bool bVar1;
  int iVar2;
  bool bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  char cVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  ulong uVar11;
  uchar uVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  byte bVar26;
  byte bVar27;
  int iVar28;
  
  if (4 < param_1 - 0x20) {
    return 0xffffffff;
  }
  if ((((((param_2 == (_MAMACHDEP_POWERS *)0x0) || (3 < *(uint *)param_2)) ||
        ((*(uint *)(param_2 + 8) & 0xffff0100) != 0)) ||
       ((uVar8 = *(uint *)(param_2 + 0xc), 6 < uVar8 ||
        (uVar9 = *(uint *)(param_2 + 0x10), 3 < uVar9)))) || (2 < *(uint *)(param_2 + 0x14))) ||
     (((1 < *(uint *)(param_2 + 0x18) || (1 < *(uint *)(param_2 + 0x1c))) ||
      ((1 < *(uint *)(param_2 + 0x20) ||
       ((1 < *(uint *)(param_2 + 0x24) || (1 < *(uint *)(param_2 + 0x28))))))))) {
    return 0xfffffffe;
  }
  uVar10 = *(uint *)(param_2 + 4);
  if (param_1 == 0x23) {
    if (3 < uVar10) {
      return 0xfffffffe;
    }
LAB_0017a45c:
    bVar1 = uVar8 == 0;
    uVar8 = uVar10;
    if (bVar1) goto joined_r0x0017a460;
LAB_0017a464:
    machdep_WriteReg(1,'d');
    bVar4 = machdep_ReadReg(2);
    machdep_WriteReg(2,bVar4 & 0xfe);
    machdep_Sleep(2);
    machdep_WriteReg(1,'f');
    bVar4 = machdep_ReadReg(2);
    machdep_WriteReg(2,bVar4 & 0x7f);
    machdep_Sleep(2);
    machdep_WriteReg(1,'d');
    bVar4 = machdep_ReadReg(2);
    machdep_WriteReg(2,bVar4 & 0xfd);
    machdep_WriteReg(1,'d');
    bVar4 = machdep_ReadReg(2);
    machdep_WriteReg(2,bVar4 & 0xfb);
    if ((*(int *)(param_2 + 0xc) - 1U < 3) || (*(int *)(param_2 + 0xc) == 6)) {
      machdep_WriteReg(1,'d');
      bVar4 = machdep_ReadReg(2);
      machdep_WriteReg(2,bVar4 & 0xf7);
    }
    uVar8 = *(uint *)(param_2 + 4);
    if (((uVar8 & 1) != 0) && (param_1 - 0x23 < 2)) {
      machdep_WriteReg(1,'d');
      bVar4 = machdep_ReadReg(2);
      machdep_WriteReg(2,bVar4 & 0xdf);
      uVar8 = *(uint *)(param_2 + 4);
    }
    if (((uVar8 >> 1 & 1) != 0) && (param_1 == 0x23)) {
      machdep_WriteReg(1,'d');
      uVar8 = machdep_ReadReg(2);
      if ((uVar8 >> 6 & 1) != 0) {
        machdep_WriteReg(1,'d');
        bVar4 = machdep_ReadReg(2);
        machdep_WriteReg(2,bVar4 & 0xbf);
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
    if ((*(int *)(param_2 + 0xc) - 1U < 2) || (*(int *)(param_2 + 0xc) == 5)) {
      if (param_1 - 0x23 < 2) {
        machdep_WriteReg(1,'d');
        bVar4 = machdep_ReadReg(2);
        machdep_WriteReg(2,bVar4 & 0xef);
      }
      machdep_WriteReg(1,'0');
      bVar4 = machdep_ReadReg(2);
      machdep_WriteReg(2,bVar4 | 0x40);
      uVar9 = *(uint *)(param_2 + 0x10);
    }
    else {
      uVar9 = *(uint *)(param_2 + 0x10);
    }
  }
  else {
    if (param_1 == 0x24) {
      if (1 < uVar10) {
        return 0xfffffffe;
      }
      goto LAB_0017a45c;
    }
    if (uVar10 != 0) {
      return 0xfffffffe;
    }
joined_r0x0017a460:
    if (uVar8 != 0) goto LAB_0017a464;
  }
  if ((param_1 != 0x20) && ((uVar9 >> 1 & 1) != 0)) {
    machdep_WriteReg(1,'e');
    bVar4 = machdep_ReadReg(2);
    machdep_WriteReg(2,bVar4 & 0xfd);
    uVar9 = *(uint *)(param_2 + 0x10);
  }
  if ((uVar9 & 1) != 0) {
    machdep_WriteReg(1,'e');
    bVar4 = machdep_ReadReg(2);
    machdep_WriteReg(2,bVar4 & 0xfe);
  }
  if ((((*(int *)(param_2 + 8) == 0) && (*(int *)(param_2 + 0xc) == 0)) &&
      (*(int *)(param_2 + 0x14) == 0)) &&
     (((*(int *)(param_2 + 0x18) == 0 && (*(int *)(param_2 + 0x1c) == 0)) &&
      ((*(int *)(param_2 + 0x20) == 0 &&
       ((*(int *)(param_2 + 0x24) == 0 && (*(int *)(param_2 + 0x28) == 0)))))))) {
    uVar8 = 0xfffffffe;
    if (param_1 == 0x20) {
LAB_0017a550:
      bVar24 = 0;
      bVar27 = 0;
LAB_0017a558:
      if (uVar8 < 3) {
        machdep_WriteReg(1,0xd3);
        bVar4 = machdep_ReadReg(2);
        machdep_WriteReg(2,bVar4 & bVar27);
        machdep_WriteReg(1,0xd4);
        machdep_ReadReg(2);
        machdep_WriteReg(2,'\0');
      }
      else {
        machdep_WriteReg(1,'m');
        bVar4 = machdep_ReadReg(2);
        machdep_WriteReg(2,bVar4 & bVar24);
      }
      if (*(int *)(param_2 + 0x14) == 0) {
        machdep_WriteReg(1,'|');
        bVar4 = machdep_ReadReg(2);
        machdep_WriteReg(2,bVar4 & 0x80);
        if (*(int *)(param_2 + 0x14) == 0) {
          machdep_WriteReg(1,'f');
          bVar4 = machdep_ReadReg(2);
          machdep_WriteReg(2,bVar4 | 6);
        }
      }
      machdep_WriteReg(1,'g');
      bVar4 = machdep_ReadReg(2);
      machdep_WriteReg(2,bVar4 | 6);
      uVar8 = *(uint *)(param_2 + 0x14);
LAB_0017a5d4:
      if (uVar8 - 1 < 2) {
        bVar25 = 0;
        goto LAB_0017a320;
      }
LAB_0017a5e0:
      if (param_1 == 0x20) goto LAB_0017a5f8;
      if (0x1f < param_1) goto LAB_0017a5ec;
    }
    else if (0x1f < param_1) {
      uVar8 = param_1 - 0x22;
      if (uVar8 < 3) goto LAB_0017a550;
      goto LAB_0017a5e0;
    }
  }
  else {
    if (param_1 != 0x21) {
      machdep_WriteReg(1,'f');
      bVar4 = machdep_ReadReg(2);
      if ((bVar4 & 1) != 0) {
        iVar28 = 1000;
        machdep_WriteReg(2,bVar4 & 0xfe);
        machdep_WriteReg(1,0x80);
        uVar11 = machdep_ReadReg(2);
        if ((uVar11 & 1) == 0) {
          while( true ) {
            machdep_Sleep(3);
            uVar11 = machdep_ReadReg(2);
            if ((uVar11 & 1) != 0) break;
            machdep_Sleep(3);
            uVar11 = machdep_ReadReg(2);
            if ((uVar11 & 1) != 0) break;
            machdep_Sleep(3);
            uVar11 = machdep_ReadReg(2);
            if ((uVar11 & 1) != 0) break;
            machdep_Sleep(3);
            uVar11 = machdep_ReadReg(2);
            if ((uVar11 & 1) != 0) break;
            machdep_Sleep(3);
            uVar11 = machdep_ReadReg(2);
            if ((uVar11 & 1) != 0) break;
            machdep_Sleep(3);
            uVar11 = machdep_ReadReg(2);
            if ((uVar11 & 1) != 0) break;
            machdep_Sleep(3);
            uVar11 = machdep_ReadReg(2);
            if ((uVar11 & 1) != 0) break;
            machdep_Sleep(3);
            uVar11 = machdep_ReadReg(2);
            iVar28 = iVar28 + -8;
            if ((uVar11 & 1) != 0) break;
            if (iVar28 == 0) {
              return 0xfffffffb;
            }
          }
        }
      }
      if (param_1 != 0x20) {
        if (param_1 < 0x20) goto LAB_0017ab9c;
        if (2 < param_1 - 0x22) goto LAB_0017a5e0;
      }
      uVar8 = *(uint *)(param_2 + 0x14);
      if (uVar8 == 0) {
        uVar8 = param_1 - 0x22;
        goto LAB_0017a550;
      }
      iVar28 = *(int *)(param_2 + 0x24);
      bVar4 = 0x84;
      if (iVar28 == 0) {
        bVar4 = 0x80;
      }
      bVar6 = 0xc4;
      if (iVar28 == 0) {
        bVar6 = 0xc0;
      }
      bVar23 = 0x44;
      if (iVar28 == 0) {
        bVar23 = 0x40;
      }
      bVar17 = 0x85;
      if (iVar28 == 0) {
        bVar17 = 0x81;
      }
      bVar13 = 0xc5;
      if (iVar28 == 0) {
        bVar13 = 0xc1;
      }
      bVar14 = 0x45;
      if (iVar28 == 0) {
        bVar14 = 0x41;
      }
      bVar15 = 5;
      if (iVar28 == 0) {
        bVar15 = 1;
      }
      bVar16 = 0x8c;
      if (iVar28 == 0) {
        bVar16 = 0x88;
      }
      bVar18 = 0xcc;
      if (iVar28 == 0) {
        bVar18 = 200;
      }
      bVar19 = 0x4c;
      if (iVar28 == 0) {
        bVar19 = 0x48;
      }
      bVar26 = 0x8d;
      if (iVar28 == 0) {
        bVar26 = 0x89;
      }
      bVar21 = 0xcd;
      if (iVar28 == 0) {
        bVar21 = 0xc9;
      }
      bVar25 = 0x4d;
      if (iVar28 == 0) {
        bVar25 = 0x49;
      }
      iVar2 = *(int *)(param_2 + 0x28);
      bVar20 = 0xd;
      if (iVar28 == 0) {
        bVar20 = 9;
      }
      bVar22 = 0xc;
      if (iVar28 == 0) {
        bVar22 = 8;
      }
      bVar24 = 4;
      if (iVar28 == 0) {
        bVar24 = 0;
      }
      if (iVar2 != 0) {
        bVar13 = bVar21;
        bVar6 = bVar18;
        bVar17 = bVar26;
        bVar4 = bVar16;
        bVar14 = bVar25;
        bVar23 = bVar19;
        bVar15 = bVar20;
        bVar24 = bVar22;
      }
      bVar1 = *(int *)(param_2 + 0xc) - 4U < 3;
      bVar3 = *(int *)(param_2 + 0xc) == 1;
      if (bVar1 || bVar3) {
        bVar6 = bVar13;
        bVar4 = bVar17;
        bVar23 = bVar14;
        bVar24 = bVar15;
      }
      if (uVar8 == 1) {
        if (iVar28 != 0) {
          bVar4 = bVar6;
          bVar24 = bVar23;
        }
        if (iVar2 != 0) {
          bVar24 = bVar4;
        }
      }
      bVar4 = 0x88;
      if (iVar28 == 0) {
        bVar4 = 0x80;
      }
      bVar6 = 0x8a;
      if (iVar28 == 0) {
        bVar6 = 0x82;
      }
      bVar23 = 10;
      if (iVar28 == 0) {
        bVar23 = 2;
      }
      bVar17 = 0x89;
      if (iVar28 == 0) {
        bVar17 = 0x81;
      }
      bVar13 = 0x8b;
      if (iVar28 == 0) {
        bVar13 = 0x83;
      }
      bVar14 = 0xb;
      if (iVar28 == 0) {
        bVar14 = 3;
      }
      bVar15 = 9;
      if (iVar28 == 0) {
        bVar15 = 1;
      }
      bVar16 = 0x8c;
      if (iVar28 == 0) {
        bVar16 = 0x84;
      }
      bVar18 = 0x8e;
      if (iVar28 == 0) {
        bVar18 = 0x86;
      }
      bVar19 = 0xe;
      if (iVar28 == 0) {
        bVar19 = 6;
      }
      bVar26 = 0x8d;
      if (iVar28 == 0) {
        bVar26 = 0x85;
      }
      bVar21 = 0x8f;
      if (iVar28 == 0) {
        bVar21 = 0x87;
      }
      bVar25 = 0xf;
      if (iVar28 == 0) {
        bVar25 = 7;
      }
      bVar20 = 0xd;
      if (iVar28 == 0) {
        bVar20 = 5;
      }
      bVar22 = 0xc;
      if (iVar28 == 0) {
        bVar22 = 4;
      }
      bVar27 = 8;
      if (iVar28 == 0) {
        bVar27 = 0;
      }
      if (iVar2 != 0) {
        bVar13 = bVar21;
        bVar6 = bVar18;
        bVar17 = bVar26;
        bVar4 = bVar16;
        bVar14 = bVar25;
        bVar23 = bVar19;
        bVar15 = bVar20;
        bVar27 = bVar22;
      }
      uVar9 = *(uint *)(param_2 + 8);
      if ((uVar9 & 1) != 0) {
        bVar6 = bVar13;
        bVar4 = bVar17;
        bVar23 = bVar14;
        bVar27 = bVar15;
      }
      if ((uVar9 & 2) != 0) {
        bVar4 = bVar6;
        bVar27 = bVar23;
      }
      if (bVar1 || bVar3) {
        bVar27 = bVar4;
      }
      if (uVar8 != 1) {
        if ((uVar8 & 0xfffffffd) == 0) {
          uVar8 = param_1 - 0x22;
          goto LAB_0017a558;
        }
        goto LAB_0017a5d4;
      }
      bVar4 = 0x80;
      if (iVar28 != 0) {
        bVar4 = 0x88;
      }
      bVar6 = 0x82;
      if (iVar28 != 0) {
        bVar6 = 0x8a;
      }
      bVar23 = 2;
      if (iVar28 != 0) {
        bVar23 = 10;
      }
      bVar17 = 0x81;
      if (iVar28 != 0) {
        bVar17 = 0x89;
      }
      bVar13 = 0x83;
      if (iVar28 != 0) {
        bVar13 = 0x8b;
      }
      bVar14 = 3;
      if (iVar28 != 0) {
        bVar14 = 0xb;
      }
      bVar15 = 9;
      if (iVar28 == 0) {
        bVar15 = 1;
      }
      bVar16 = 0x84;
      if (iVar28 != 0) {
        bVar16 = 0x8c;
      }
      bVar18 = 0x86;
      if (iVar28 != 0) {
        bVar18 = 0x8e;
      }
      bVar19 = 6;
      if (iVar28 != 0) {
        bVar19 = 0xe;
      }
      bVar26 = 0x85;
      if (iVar28 != 0) {
        bVar26 = 0x8d;
      }
      bVar21 = 0x87;
      if (iVar28 != 0) {
        bVar21 = 0x8f;
      }
      bVar25 = 7;
      if (iVar28 != 0) {
        bVar25 = 0xf;
      }
      bVar20 = 5;
      if (iVar28 != 0) {
        bVar20 = 0xd;
      }
      bVar22 = 4;
      if (iVar28 != 0) {
        bVar22 = 0xc;
      }
      bVar5 = 0;
      if (iVar28 != 0) {
        bVar5 = 8;
      }
      if (iVar2 == 0) {
        bVar16 = bVar4;
        bVar26 = bVar17;
        bVar18 = bVar6;
        bVar21 = bVar13;
        bVar22 = bVar5;
        bVar20 = bVar15;
        bVar19 = bVar23;
        bVar25 = bVar14;
      }
      if ((uVar9 & 1) == 0) {
        bVar26 = bVar16;
        bVar21 = bVar18;
        bVar20 = bVar22;
        bVar25 = bVar19;
      }
      if ((uVar9 & 2) == 0) {
        bVar21 = bVar26;
        bVar25 = bVar20;
      }
      if (bVar1 || bVar3) {
        bVar25 = bVar21;
      }
LAB_0017a320:
      machdep_WriteReg(1,'~');
      bVar6 = machdep_ReadReg(2);
      bVar4 = bVar6 | 0x40;
      if (*(int *)(param_2 + 0x14) == 1) {
        bVar4 = bVar6 & 0xbf;
      }
      machdep_WriteReg(2,bVar4);
      machdep_WriteReg(1,'f');
      bVar4 = machdep_ReadReg(2);
      machdep_WriteReg(2,bVar4 & 0xfd);
      if (*(int *)(param_2 + 0x14) == 1) {
        machdep_WriteReg(1,'g');
        bVar4 = machdep_ReadReg(2);
        machdep_WriteReg(2,bVar4 & 0xfd);
      }
      machdep_Wait(10000);
      machdep_WriteReg(1,'f');
      bVar4 = machdep_ReadReg(2);
      machdep_WriteReg(2,bVar4 & 0xfb);
      if (*(int *)(param_2 + 0x14) == 1) {
        machdep_WriteReg(1,'g');
        bVar4 = machdep_ReadReg(2);
        machdep_WriteReg(2,bVar4 & 0xfb);
      }
      if (param_1 - 0x22 < 3) {
        bVar27 = bVar27 & DAT_0059a3b5;
        machdep_WriteReg(1,0xd3);
        machdep_WriteReg(2,bVar27);
        bVar25 = bVar25 & DAT_0059a3b6;
        machdep_WriteReg(1,0xd4);
        machdep_WriteReg(2,bVar25);
      }
      else {
        bVar24 = bVar24 & DAT_0059a3b4;
        machdep_WriteReg(1,'m');
        machdep_WriteReg(2,bVar24);
      }
      machdep_WriteReg(1,'|');
      machdep_WriteReg(2,DAT_0059a3aa);
      goto LAB_0017a5e0;
    }
LAB_0017a5ec:
    if (param_1 - 0x22 < 3) {
LAB_0017a5f8:
      if (*(int *)(param_2 + 0x18) == 0) {
        if (param_1 - 0x22 < 3) {
          machdep_WriteReg(1,0xd1);
          machdep_ReadReg(2);
          machdep_WriteReg(2,'\0');
          uVar12 = 0xd2;
        }
        else {
          uVar12 = 'l';
        }
        machdep_WriteReg(1,uVar12);
        machdep_ReadReg(2);
        machdep_WriteReg(2,'\0');
        machdep_WriteReg(1,'y');
        machdep_WriteReg(2,'\0');
        machdep_WriteReg(1,'z');
        machdep_WriteReg(2,'\0');
        machdep_WriteReg(1,'f');
        bVar4 = machdep_ReadReg(2);
        machdep_WriteReg(2,bVar4 | 0x10);
        machdep_WriteReg(1,'f');
        uVar11 = machdep_ReadReg(2);
        if ((uVar11 & 1) == 0) {
          iVar28 = 300;
          machdep_WriteReg(1,0x80);
          uVar8 = machdep_ReadReg(2);
          if ((uVar8 >> 2 & 1) == 0) {
            while( true ) {
              machdep_Sleep(10);
              uVar8 = machdep_ReadReg(2);
              if ((uVar8 >> 2 & 1) != 0) break;
              machdep_Sleep(10);
              uVar8 = machdep_ReadReg(2);
              if ((uVar8 >> 2 & 1) != 0) break;
              machdep_Sleep(10);
              uVar8 = machdep_ReadReg(2);
              if ((uVar8 >> 2 & 1) != 0) break;
              machdep_Sleep(10);
              uVar8 = machdep_ReadReg(2);
              if ((uVar8 >> 2 & 1) != 0) break;
              machdep_Sleep(10);
              uVar8 = machdep_ReadReg(2);
              if ((uVar8 >> 2 & 1) != 0) break;
              machdep_Sleep(10);
              uVar8 = machdep_ReadReg(2);
              iVar28 = iVar28 + -6;
              if ((uVar8 >> 2 & 1) != 0) break;
              if (iVar28 == 0) {
                return 0xfffffffb;
              }
            }
          }
        }
      }
      else {
        iVar28 = *(int *)(param_2 + 0x24);
        bVar4 = 0xdd;
        if (iVar28 == 0) {
          bVar4 = 0x99;
        }
        bVar23 = 0x11;
        bVar6 = 0x55;
        if (iVar28 == 0) {
          bVar6 = 0x11;
        }
        iVar2 = *(int *)(param_2 + 0x28);
        bVar17 = 0xcc;
        if (iVar28 == 0) {
          bVar17 = 0x88;
        }
        bVar13 = 0x44;
        if (iVar28 == 0) {
          bVar13 = 0;
        }
        if (iVar2 != 0) {
          bVar13 = bVar17;
          bVar6 = bVar4;
        }
        bVar1 = *(int *)(param_2 + 0xc) - 4U < 3;
        bVar3 = *(int *)(param_2 + 0xc) == 1;
        if (bVar1 || bVar3) {
          bVar13 = bVar6;
        }
        bVar4 = 0x90;
        if (iVar28 != 0) {
          bVar4 = 0x98;
        }
        bVar6 = 0x92;
        if (iVar28 != 0) {
          bVar6 = 0x9a;
        }
        bVar17 = 0x12;
        if (iVar28 != 0) {
          bVar17 = 0x1a;
        }
        bVar14 = 0x91;
        if (iVar28 != 0) {
          bVar14 = 0x99;
        }
        bVar15 = 0x93;
        if (iVar28 != 0) {
          bVar15 = 0x9b;
        }
        bVar16 = 0x13;
        if (iVar28 != 0) {
          bVar16 = 0x1b;
          bVar23 = 0x19;
        }
        bVar18 = 0x94;
        if (iVar28 != 0) {
          bVar18 = 0x9c;
        }
        bVar19 = 0x96;
        if (iVar28 != 0) {
          bVar19 = 0x9e;
        }
        bVar26 = 0x16;
        if (iVar28 != 0) {
          bVar26 = 0x1e;
        }
        bVar21 = 0x95;
        if (iVar28 != 0) {
          bVar21 = 0x9d;
        }
        bVar25 = 0x97;
        if (iVar28 != 0) {
          bVar25 = 0x9f;
        }
        bVar20 = 0x17;
        if (iVar28 != 0) {
          bVar20 = 0x1f;
        }
        bVar22 = 0x15;
        if (iVar28 != 0) {
          bVar22 = 0x1d;
        }
        bVar24 = 0x14;
        if (iVar28 != 0) {
          bVar24 = 0x1c;
        }
        bVar27 = 0x10;
        if (iVar28 != 0) {
          bVar27 = 0x18;
        }
        if (iVar2 != 0) {
          bVar4 = bVar18;
          bVar14 = bVar21;
          bVar6 = bVar19;
          bVar15 = bVar25;
          bVar16 = bVar20;
          bVar17 = bVar26;
          bVar23 = bVar22;
          bVar27 = bVar24;
        }
        uVar8 = *(uint *)(param_2 + 8);
        if ((uVar8 & 1) != 0) {
          bVar4 = bVar14;
          bVar6 = bVar15;
          bVar27 = bVar23;
          bVar17 = bVar16;
        }
        if ((uVar8 & 2) != 0) {
          bVar4 = bVar6;
          bVar27 = bVar17;
        }
        if (bVar1 || bVar3) {
          bVar27 = bVar4;
        }
        bVar4 = 0x92;
        if (iVar28 != 0) {
          bVar4 = 0x9a;
        }
        bVar6 = 0x90;
        if (iVar28 != 0) {
          bVar6 = 0x98;
        }
        bVar23 = 0x12;
        if (iVar28 != 0) {
          bVar23 = 0x1a;
        }
        bVar17 = 0x93;
        if (iVar28 != 0) {
          bVar17 = 0x9b;
        }
        bVar14 = 0x91;
        if (iVar28 != 0) {
          bVar14 = 0x99;
        }
        bVar15 = 0x13;
        if (iVar28 != 0) {
          bVar15 = 0x1b;
        }
        bVar16 = 0x11;
        if (iVar28 != 0) {
          bVar16 = 0x19;
        }
        bVar18 = 0x96;
        if (iVar28 != 0) {
          bVar18 = 0x9e;
        }
        bVar19 = 0x94;
        if (iVar28 != 0) {
          bVar19 = 0x9c;
        }
        bVar26 = 0x16;
        if (iVar28 != 0) {
          bVar26 = 0x1e;
        }
        bVar21 = 0x97;
        if (iVar28 != 0) {
          bVar21 = 0x9f;
        }
        bVar25 = 0x95;
        if (iVar28 != 0) {
          bVar25 = 0x9d;
        }
        bVar20 = 0x17;
        if (iVar28 != 0) {
          bVar20 = 0x1f;
        }
        bVar22 = 0x15;
        if (iVar28 != 0) {
          bVar22 = 0x1d;
        }
        bVar24 = 0x14;
        if (iVar28 != 0) {
          bVar24 = 0x1c;
        }
        bVar5 = 0x10;
        if (iVar28 != 0) {
          bVar5 = 0x18;
        }
        if (iVar2 == 0) {
          bVar21 = bVar17;
          bVar18 = bVar4;
          bVar25 = bVar14;
          bVar19 = bVar6;
          bVar24 = bVar5;
          bVar22 = bVar16;
          bVar26 = bVar23;
          bVar20 = bVar15;
        }
        if ((uVar8 & 1) == 0) {
          bVar21 = bVar18;
          bVar25 = bVar19;
          bVar20 = bVar26;
          bVar22 = bVar24;
        }
        if ((uVar8 & 2) == 0) {
          bVar21 = bVar25;
          bVar20 = bVar22;
        }
        iVar28 = 300;
        if (bVar1 || bVar3) {
          bVar20 = bVar21;
        }
        machdep_WriteReg(1,'f');
        bVar4 = machdep_ReadReg(2);
        machdep_WriteReg(2,bVar4 & 0xef);
        machdep_WriteReg(1,0x80);
        uVar8 = machdep_ReadReg(2);
        if ((uVar8 >> 1 & 1) == 0) {
          while( true ) {
            machdep_Sleep(10);
            uVar8 = machdep_ReadReg(2);
            if ((uVar8 >> 1 & 1) != 0) break;
            machdep_Sleep(10);
            uVar8 = machdep_ReadReg(2);
            if ((uVar8 >> 1 & 1) != 0) break;
            machdep_Sleep(10);
            uVar8 = machdep_ReadReg(2);
            if ((uVar8 >> 1 & 1) != 0) break;
            machdep_Sleep(10);
            uVar8 = machdep_ReadReg(2);
            if ((uVar8 >> 1 & 1) != 0) break;
            machdep_Sleep(10);
            uVar8 = machdep_ReadReg(2);
            if ((uVar8 >> 1 & 1) != 0) break;
            machdep_Sleep(10);
            uVar8 = machdep_ReadReg(2);
            iVar28 = iVar28 + -6;
            if ((uVar8 >> 1 & 1) != 0) break;
            if (iVar28 == 0) {
              return 0xfffffffb;
            }
          }
        }
        if (param_1 - 0x22 < 3) {
          bVar27 = bVar27 & DAT_0059a3b2;
          machdep_WriteReg(1,0xd1);
          machdep_WriteReg(2,bVar27);
          bVar20 = bVar20 & DAT_0059a3b3;
          machdep_WriteReg(1,0xd2);
          machdep_WriteReg(2,bVar20);
        }
        else {
          bVar13 = bVar13 & DAT_0059a3b1;
          machdep_WriteReg(1,'l');
          machdep_WriteReg(2,bVar13);
        }
        machdep_WriteReg(1,'y');
        machdep_WriteReg(2,DAT_0059a3a8);
        machdep_WriteReg(1,'z');
        machdep_WriteReg(2,DAT_0059a3a9);
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
        bVar4 = machdep_ReadReg(2);
        machdep_WriteReg(2,bVar4 | 0x40);
      }
      else {
        bVar4 = 8;
        if (*(int *)(param_2 + 0x24) != 0) {
          bVar4 = 0xc;
        }
        bVar6 = 0;
        if (*(int *)(param_2 + 0x24) != 0) {
          bVar6 = 4;
        }
        if (*(int *)(param_2 + 0x28) == 0) {
          bVar4 = bVar6;
        }
        if ((*(int *)(param_2 + 0xc) - 4U < 3) || (*(int *)(param_2 + 0xc) == 1)) {
          bVar4 = bVar4 | 1;
        }
        machdep_WriteReg(1,'f');
        bVar6 = machdep_ReadReg(2);
        machdep_WriteReg(2,bVar6 & 0xbf);
        bVar4 = bVar4 & DAT_0059a3af;
        machdep_WriteReg(1,'j');
        machdep_WriteReg(2,bVar4);
        machdep_WriteReg(1,'w');
        machdep_WriteReg(2,DAT_0059a3ad);
      }
      if (*(int *)(param_2 + 0x20) == 0) {
        uVar12 = 'k';
LAB_0017b744:
        machdep_WriteReg(1,uVar12);
        machdep_ReadReg(2);
        machdep_WriteReg(2,'\0');
        machdep_WriteReg(1,'x');
        machdep_WriteReg(2,'\0');
        machdep_WriteReg(1,'f');
        bVar4 = machdep_ReadReg(2);
        machdep_WriteReg(2,bVar4 | 0x20);
        machdep_WriteReg(1,'f');
        uVar11 = machdep_ReadReg(2);
        if ((uVar11 & 1) == 0) {
          iVar28 = 300;
          machdep_WriteReg(1,0x80);
          uVar8 = machdep_ReadReg(2);
          if ((uVar8 >> 4 & 1) == 0) {
            while( true ) {
              machdep_Sleep(10);
              uVar8 = machdep_ReadReg(2);
              if ((uVar8 >> 4 & 1) != 0) break;
              machdep_Sleep(10);
              uVar8 = machdep_ReadReg(2);
              if ((uVar8 >> 4 & 1) != 0) break;
              machdep_Sleep(10);
              uVar8 = machdep_ReadReg(2);
              if ((uVar8 >> 4 & 1) != 0) break;
              machdep_Sleep(10);
              uVar8 = machdep_ReadReg(2);
              if ((uVar8 >> 4 & 1) != 0) break;
              machdep_Sleep(10);
              uVar8 = machdep_ReadReg(2);
              if ((uVar8 >> 4 & 1) != 0) break;
              machdep_Sleep(10);
              uVar8 = machdep_ReadReg(2);
              iVar28 = iVar28 + -6;
              if ((uVar8 >> 4 & 1) != 0) break;
              if (iVar28 == 0) {
                return 0xfffffffb;
              }
            }
          }
        }
      }
      else {
LAB_0017b8a4:
        iVar28 = *(int *)(param_2 + 0x24);
        bVar6 = 9;
        bVar4 = 0xd;
        if (iVar28 == 0) {
          bVar4 = 9;
        }
        bVar23 = 5;
        bVar17 = 5;
        if (iVar28 == 0) {
          bVar17 = 1;
        }
        bVar13 = 0xc;
        if (iVar28 == 0) {
          bVar13 = 8;
        }
        iVar2 = *(int *)(param_2 + 0xc);
        bVar15 = 4;
        bVar14 = 4;
        if (iVar28 == 0) {
          bVar14 = 0;
        }
        if (*(int *)(param_2 + 0x28) != 0) {
          bVar14 = bVar13;
          bVar17 = bVar4;
        }
        bVar1 = iVar2 - 4U < 3;
        if (bVar1 || iVar2 == 1) {
          bVar14 = bVar17;
        }
        bVar4 = 0x82;
        if (iVar28 != 0) {
          bVar4 = 0x8a;
        }
        bVar17 = 0x80;
        if (iVar28 != 0) {
          bVar17 = 0x88;
        }
        bVar13 = 2;
        if (iVar28 != 0) {
          bVar13 = 10;
        }
        bVar16 = 0x83;
        if (iVar28 != 0) {
          bVar16 = 0x8b;
        }
        bVar18 = 0x81;
        if (iVar28 != 0) {
          bVar18 = 0x89;
        }
        bVar19 = 3;
        if (iVar28 == 0) {
          bVar6 = 1;
        }
        else {
          bVar19 = 0xb;
        }
        bVar26 = 0x86;
        if (iVar28 != 0) {
          bVar26 = 0x8e;
        }
        bVar21 = 0x84;
        if (iVar28 != 0) {
          bVar21 = 0x8c;
        }
        bVar25 = 6;
        if (iVar28 != 0) {
          bVar25 = 0xe;
        }
        bVar20 = 0x87;
        if (iVar28 != 0) {
          bVar20 = 0x8f;
        }
        bVar22 = 0x85;
        if (iVar28 != 0) {
          bVar22 = 0x8d;
        }
        bVar24 = 7;
        if (iVar28 != 0) {
          bVar24 = 0xf;
          bVar23 = 0xd;
          bVar15 = 0xc;
        }
        bVar27 = 0;
        if (iVar28 != 0) {
          bVar27 = 8;
        }
        if (*(int *)(param_2 + 0x28) == 0) {
          bVar26 = bVar4;
          bVar20 = bVar16;
          bVar21 = bVar17;
          bVar22 = bVar18;
          bVar23 = bVar6;
          bVar15 = bVar27;
          bVar24 = bVar19;
          bVar25 = bVar13;
        }
        if ((*(uint *)(param_2 + 8) & 1) != 0) {
          bVar26 = bVar20;
          bVar21 = bVar22;
          bVar25 = bVar24;
          bVar15 = bVar23;
        }
        if ((*(uint *)(param_2 + 8) & 2) == 0) {
          bVar26 = bVar21;
          bVar25 = bVar15;
        }
        if (bVar1 || iVar2 == 1) {
          bVar25 = bVar26;
        }
        iVar28 = 300;
        machdep_WriteReg(1,'f');
        bVar4 = machdep_ReadReg(2);
        machdep_WriteReg(2,bVar4 & 0xdf);
        machdep_WriteReg(1,0x80);
        uVar8 = machdep_ReadReg(2);
        if ((uVar8 >> 3 & 1) == 0) {
          while( true ) {
            machdep_Sleep(10);
            uVar8 = machdep_ReadReg(2);
            if ((uVar8 >> 3 & 1) != 0) break;
            machdep_Sleep(10);
            uVar8 = machdep_ReadReg(2);
            if ((uVar8 >> 3 & 1) != 0) break;
            machdep_Sleep(10);
            uVar8 = machdep_ReadReg(2);
            if ((uVar8 >> 3 & 1) != 0) break;
            machdep_Sleep(10);
            uVar8 = machdep_ReadReg(2);
            if ((uVar8 >> 3 & 1) != 0) break;
            machdep_Sleep(10);
            uVar8 = machdep_ReadReg(2);
            if ((uVar8 >> 3 & 1) != 0) break;
            machdep_Sleep(10);
            uVar8 = machdep_ReadReg(2);
            iVar28 = iVar28 + -6;
            if ((uVar8 >> 3 & 1) != 0) break;
            if (iVar28 == 0) {
              return 0xfffffffb;
            }
          }
        }
        if (param_1 - 0x22 < 3) {
          bVar25 = bVar25 & DAT_0059a3b9;
          machdep_WriteReg(1,0xd0);
          machdep_WriteReg(2,bVar25);
        }
        else {
          bVar14 = bVar14 & DAT_0059a3b0;
          machdep_WriteReg(1,'k');
          machdep_WriteReg(2,bVar14);
        }
        machdep_WriteReg(1,'x');
        machdep_WriteReg(2,DAT_0059a3ae);
      }
    }
    else if ((0x1f < param_1) && (param_1 - 0x22 < 3)) {
      if (*(int *)(param_2 + 0x20) != 0) goto LAB_0017b8a4;
      uVar12 = 0xd0;
      goto LAB_0017b744;
    }
  }
LAB_0017ab9c:
  uVar8 = param_1 - 0x22;
  if (uVar8 < 3) {
    uVar9 = *(uint *)(param_2 + 8);
    if ((uVar9 >> 3 & 1) == 0) {
      machdep_WriteReg(1,0xcc);
      machdep_ReadReg(2);
      machdep_WriteReg(2,(byte)uVar9 & 8);
      machdep_WriteReg(1,0xc3);
      bVar4 = machdep_ReadReg(2);
      machdep_WriteReg(2,bVar4 & 0x80);
      machdep_WriteReg(1,0xb4);
      bVar4 = machdep_ReadReg(2);
      machdep_WriteReg(2,bVar4 | 8);
    }
    else {
      bVar4 = 4;
      if (*(int *)(param_2 + 0x24) != 0) {
        bVar4 = 0xc;
      }
      bVar6 = 0;
      if (*(int *)(param_2 + 0x24) != 0) {
        bVar6 = 8;
      }
      if (*(int *)(param_2 + 0x28) == 0) {
        bVar4 = bVar6;
      }
      if ((uVar9 & 1) != 0) {
        bVar4 = bVar4 | 1;
      }
      if ((uVar9 >> 1 & 1) != 0) {
        bVar4 = bVar4 | 2;
      }
      if ((uVar9 >> 4 & 1) != 0) {
        bVar4 = bVar4 | 0x10;
      }
      if ((uVar9 >> 5 & 1) != 0) {
        bVar4 = bVar4 | 0x20;
      }
      if ((uVar9 >> 6 & 1) != 0) {
        bVar4 = bVar4 | 0x40;
      }
      if ((*(int *)(param_2 + 0xc) - 4U < 3) || (*(int *)(param_2 + 0xc) == 1)) {
        bVar4 = bVar4 | 0x80;
      }
      machdep_WriteReg(1,0xb4);
      bVar6 = machdep_ReadReg(2);
      machdep_WriteReg(2,bVar6 & 0xf7);
      bVar4 = bVar4 & DAT_0059a3c9;
      machdep_WriteReg(1,0xcc);
      machdep_WriteReg(2,bVar4);
      machdep_WriteReg(1,0xc3);
      machdep_WriteReg(2,DAT_0059a3c5);
    }
  }
  if (uVar8 < 3) {
    uVar9 = *(uint *)(param_2 + 8);
    if ((uVar9 >> 0xb & 1) == 0) {
      machdep_WriteReg(1,0xce);
      machdep_ReadReg(2);
      machdep_WriteReg(2,'\0');
      machdep_WriteReg(1,0xc4);
      machdep_WriteReg(2,'\0');
      machdep_WriteReg(1,0xb5);
      bVar4 = machdep_ReadReg(2);
      machdep_WriteReg(2,bVar4 | 8);
    }
    else {
      bVar4 = 4;
      if (*(int *)(param_2 + 0x24) != 0) {
        bVar4 = 0xc;
      }
      bVar6 = 0;
      if (*(int *)(param_2 + 0x24) != 0) {
        bVar6 = 8;
      }
      if (*(int *)(param_2 + 0x28) == 0) {
        bVar4 = bVar6;
      }
      if ((uVar9 & 1) != 0) {
        bVar4 = bVar4 | 1;
      }
      if ((uVar9 >> 1 & 1) != 0) {
        bVar4 = bVar4 | 2;
      }
      if ((uVar9 >> 4 & 1) != 0) {
        bVar4 = bVar4 | 0x10;
      }
      if ((uVar9 >> 5 & 1) != 0) {
        bVar4 = bVar4 | 0x20;
      }
      if ((uVar9 >> 6 & 1) != 0) {
        bVar4 = bVar4 | 0x40;
      }
      if ((*(int *)(param_2 + 0xc) - 4U < 3) || (*(int *)(param_2 + 0xc) == 1)) {
        bVar4 = bVar4 | 0x80;
      }
      machdep_WriteReg(1,0xb5);
      bVar6 = machdep_ReadReg(2);
      machdep_WriteReg(2,bVar6 & 0xf7);
      bVar4 = bVar4 & DAT_0059a3ca;
      machdep_WriteReg(1,0xce);
      machdep_WriteReg(2,bVar4);
      machdep_WriteReg(1,0xc4);
      machdep_WriteReg(2,DAT_0059a3c6);
    }
  }
  if (uVar8 < 3) {
    uVar9 = *(uint *)(param_2 + 8);
    bVar4 = (byte)uVar9 & 0x80;
    if ((uVar9 >> 7 & 1) == 0) {
      machdep_WriteReg(1,0xd5);
      machdep_ReadReg(2);
      machdep_WriteReg(2,bVar4);
      machdep_WriteReg(1,0xc2);
      machdep_WriteReg(2,bVar4);
      machdep_WriteReg(1,0xb4);
      bVar4 = machdep_ReadReg(2);
      machdep_WriteReg(2,bVar4 | 0x80);
      machdep_WriteReg(1,0xb5);
      bVar4 = machdep_ReadReg(2);
      machdep_WriteReg(2,bVar4 | 1);
    }
    else {
      bVar4 = 0x14;
      if (*(int *)(param_2 + 0x24) != 0) {
        bVar4 = 0x1c;
      }
      bVar6 = 0x10;
      if (*(int *)(param_2 + 0x24) != 0) {
        bVar6 = 0x18;
      }
      if (*(int *)(param_2 + 0x28) == 0) {
        bVar4 = bVar6;
      }
      if ((uVar9 & 1) != 0) {
        bVar4 = bVar4 | 1;
      }
      if ((uVar9 >> 1 & 1) != 0) {
        bVar4 = bVar4 | 2;
      }
      if ((*(int *)(param_2 + 0xc) - 4U < 3) || (*(int *)(param_2 + 0xc) == 1)) {
        bVar4 = bVar4 | 0x80;
      }
      machdep_WriteReg(1,0xb4);
      bVar6 = machdep_ReadReg(2);
      machdep_WriteReg(2,bVar6 & 0x7f);
      machdep_Wait(10000);
      machdep_WriteReg(1,0xb5);
      bVar6 = machdep_ReadReg(2);
      machdep_WriteReg(2,bVar6 & 0xfe);
      bVar4 = bVar4 & DAT_0059a3cb;
      machdep_WriteReg(1,0xd5);
      machdep_WriteReg(2,bVar4);
      machdep_WriteReg(1,0xc2);
      machdep_WriteReg(2,DAT_0059a3c4);
    }
  }
  if (uVar8 < 3) {
    uVar9 = *(uint *)(param_2 + 8);
    bVar4 = (byte)uVar9 & 4;
    if ((uVar9 >> 2 & 1) == 0) {
      machdep_WriteReg(1,200);
      machdep_ReadReg(2);
      machdep_WriteReg(2,bVar4);
      machdep_WriteReg(1,0xbd);
      machdep_WriteReg(2,bVar4);
      machdep_WriteReg(1,0xb4);
      bVar4 = machdep_ReadReg(2);
      machdep_WriteReg(2,bVar4 | 4);
    }
    else {
      bVar4 = 4;
      if (*(int *)(param_2 + 0x24) != 0) {
        bVar4 = 0xc;
      }
      bVar6 = 0;
      if (*(int *)(param_2 + 0x24) != 0) {
        bVar6 = 8;
      }
      if (*(int *)(param_2 + 0x28) == 0) {
        bVar4 = bVar6;
      }
      if ((uVar9 & 1) != 0) {
        bVar4 = bVar4 | 1;
      }
      if ((uVar9 >> 1 & 1) != 0) {
        bVar4 = bVar4 | 2;
      }
      if ((uVar9 >> 4 & 1) != 0) {
        bVar4 = bVar4 | 0x10;
      }
      if ((uVar9 >> 5 & 1) != 0) {
        bVar4 = bVar4 | 0x20;
      }
      if ((uVar9 >> 6 & 1) != 0) {
        bVar4 = bVar4 | 0x40;
      }
      machdep_WriteReg(1,0xb4);
      bVar6 = machdep_ReadReg(2);
      machdep_WriteReg(2,bVar6 & 0xfb);
      bVar4 = bVar4 & DAT_0059a3c7;
      machdep_WriteReg(1,200);
      machdep_WriteReg(2,bVar4);
      machdep_WriteReg(1,0xbd);
      machdep_WriteReg(2,DAT_0059a3c1);
    }
  }
  if (uVar8 < 3) {
    uVar9 = *(uint *)(param_2 + 8);
    if ((uVar9 >> 10 & 1) == 0) {
      machdep_WriteReg(1,0xca);
      machdep_ReadReg(2);
      machdep_WriteReg(2,'\0');
      machdep_WriteReg(1,0xbe);
      machdep_WriteReg(2,'\0');
      machdep_WriteReg(1,0xb5);
      bVar4 = machdep_ReadReg(2);
      machdep_WriteReg(2,bVar4 | 4);
    }
    else {
      bVar4 = 4;
      if (*(int *)(param_2 + 0x24) != 0) {
        bVar4 = 0xc;
      }
      bVar6 = 0;
      if (*(int *)(param_2 + 0x24) != 0) {
        bVar6 = 8;
      }
      if (*(int *)(param_2 + 0x28) == 0) {
        bVar4 = bVar6;
      }
      if ((uVar9 & 1) != 0) {
        bVar4 = bVar4 | 1;
      }
      if ((uVar9 >> 1 & 1) != 0) {
        bVar4 = bVar4 | 2;
      }
      if ((uVar9 >> 4 & 1) != 0) {
        bVar4 = bVar4 | 0x10;
      }
      if ((uVar9 >> 5 & 1) != 0) {
        bVar4 = bVar4 | 0x20;
      }
      if ((uVar9 >> 6 & 1) != 0) {
        bVar4 = bVar4 | 0x40;
      }
      machdep_WriteReg(1,0xb5);
      bVar6 = machdep_ReadReg(2);
      machdep_WriteReg(2,bVar6 & 0xfb);
      bVar4 = bVar4 & DAT_0059a3c8;
      machdep_WriteReg(1,0xca);
      machdep_WriteReg(2,bVar4);
      machdep_WriteReg(1,0xbe);
      machdep_WriteReg(2,DAT_0059a3c2);
    }
  }
  if (uVar8 < 3) {
    uVar9 = *(uint *)(param_2 + 8);
    if ((uVar9 >> 9 & 1) == 0) {
      machdep_WriteReg(1,0xd6);
      machdep_ReadReg(2);
      machdep_WriteReg(2,'\0');
      machdep_WriteReg(1,0xc1);
      machdep_WriteReg(2,'\0');
      machdep_WriteReg(1,0xb5);
      bVar4 = machdep_ReadReg(2);
      machdep_WriteReg(2,bVar4 | 2);
    }
    else {
      bVar4 = 0x20;
      if ((uVar9 & 0x10) != 0) {
        bVar4 = 0x30;
      }
      bVar6 = (byte)(uVar9 & 0x10);
      if ((uVar9 & 0x20) != 0) {
        bVar6 = bVar4;
      }
      if ((uVar9 >> 6 & 1) != 0) {
        bVar6 = bVar6 | 0x40;
      }
      machdep_WriteReg(1,0xb5);
      bVar4 = machdep_ReadReg(2);
      machdep_WriteReg(2,bVar4 & 0xfd);
      bVar6 = bVar6 & DAT_0059a3cc;
      machdep_WriteReg(1,0xd6);
      machdep_WriteReg(2,bVar6);
      machdep_WriteReg(1,0xc1);
      machdep_WriteReg(2,DAT_0059a3c3);
    }
  }
  if (param_1 == 0x20) {
LAB_0017b08c:
    if (*(int *)(param_2 + 0x24) == 0) {
      if (uVar8 < 3) {
        machdep_WriteReg(1,0xbf);
        machdep_WriteReg(2,'\0');
      }
      else {
        machdep_WriteReg(1,'t');
        machdep_WriteReg(2,'\0');
      }
      machdep_WriteReg(1,'g');
      bVar4 = machdep_ReadReg(2);
      machdep_WriteReg(2,bVar4 | 0x80);
    }
    else {
      machdep_WriteReg(1,'g');
      bVar4 = machdep_ReadReg(2);
      machdep_WriteReg(2,bVar4 & 0x7f);
      machdep_Sleep(0x1e);
      if (uVar8 < 3) {
        machdep_WriteReg(1,0xbf);
        machdep_WriteReg(2,DAT_0059a3b7);
      }
      else {
        machdep_WriteReg(1,'t');
        machdep_WriteReg(2,DAT_0059a3ab);
      }
    }
LAB_0017b0d8:
    if ((param_1 == 0x20) || ((0x1f < param_1 && (uVar8 < 3)))) {
      if (*(int *)(param_2 + 0x28) == 0) {
        if (uVar8 < 3) {
          machdep_WriteReg(1,0xc0);
          machdep_WriteReg(2,'\0');
        }
        else {
          machdep_WriteReg(1,'u');
          machdep_WriteReg(2,'\0');
        }
        machdep_WriteReg(1,'g');
        bVar4 = machdep_ReadReg(2);
        machdep_WriteReg(2,bVar4 | 0x40);
      }
      else {
        machdep_WriteReg(1,'g');
        bVar4 = machdep_ReadReg(2);
        machdep_WriteReg(2,bVar4 & 0xbf);
        machdep_Sleep(0x1e);
        if (uVar8 < 3) {
          machdep_WriteReg(1,0xc0);
          machdep_WriteReg(2,DAT_0059a3b8);
        }
        else {
          machdep_WriteReg(1,'u');
          machdep_WriteReg(2,DAT_0059a3ac);
        }
      }
    }
  }
  else if (0x1f < param_1) {
    if (uVar8 < 3) goto LAB_0017b08c;
    goto LAB_0017b0d8;
  }
  if (uVar8 < 3) {
    uVar9 = *(uint *)(param_2 + 8);
    if ((uVar9 & 1) == 0) {
      machdep_WriteReg(1,0xb9);
      bVar4 = machdep_ReadReg(2);
      machdep_WriteReg(2,bVar4 & 0x80);
      machdep_WriteReg(1,0xba);
      machdep_WriteReg(2,(byte)uVar9 & 1);
      machdep_WriteReg(1,0xb4);
      bVar4 = machdep_ReadReg(2);
      machdep_WriteReg(2,bVar4 | 1);
    }
    else {
      machdep_WriteReg(1,0xb4);
      bVar4 = machdep_ReadReg(2);
      machdep_WriteReg(2,bVar4 & 0xfe);
      machdep_Sleep(0x1e);
      machdep_WriteReg(1,0xb9);
      machdep_WriteReg(2,DAT_0059a3bd);
      machdep_WriteReg(1,0xba);
      machdep_WriteReg(2,DAT_0059a3be);
    }
  }
  if (uVar8 < 3) {
    bVar4 = (byte)*(uint *)(param_2 + 8) & 2;
    if ((*(uint *)(param_2 + 8) >> 1 & 1) == 0) {
      machdep_WriteReg(1,0xbb);
      machdep_WriteReg(2,bVar4);
      machdep_WriteReg(1,0xbc);
      machdep_WriteReg(2,bVar4);
      machdep_WriteReg(1,0xb4);
      bVar4 = machdep_ReadReg(2);
      machdep_WriteReg(2,bVar4 | 2);
    }
    else {
      machdep_WriteReg(1,0xb4);
      bVar4 = machdep_ReadReg(2);
      machdep_WriteReg(2,bVar4 & 0xfd);
      machdep_Sleep(0x1e);
      machdep_WriteReg(1,0xbb);
      machdep_WriteReg(2,DAT_0059a3bf);
      machdep_WriteReg(1,0xbc);
      machdep_WriteReg(2,DAT_0059a3c0);
    }
  }
  if (uVar8 < 3) {
    uVar9 = *(uint *)(param_2 + 8);
    if ((uVar9 >> 4 & 1) == 0) {
      machdep_WriteReg(1,0xb6);
      machdep_WriteReg(2,(byte)uVar9 & 0x10);
      FUN_00178b2c(0xb4,0x10);
    }
    else {
      FUN_00178ae4(0xb4,0x10);
      machdep_Sleep(0x1e);
      machdep_WriteReg(1,0xb6);
      machdep_WriteReg(2,DAT_0059a3ba);
    }
  }
  if (uVar8 < 3) {
    uVar9 = *(uint *)(param_2 + 8);
    if ((uVar9 >> 5 & 1) == 0) {
      machdep_WriteReg(1,0xb7);
      machdep_WriteReg(2,(byte)uVar9 & 0x20);
      FUN_00178b2c(0xb4,0x20);
    }
    else {
      FUN_00178ae4(0xb4,0x20);
      machdep_Sleep(0x1e);
      machdep_WriteReg(1,0xb7);
      machdep_WriteReg(2,DAT_0059a3bb);
    }
  }
  if (2 < uVar8) {
    if (param_1 != 0x21) goto LAB_0017b2f0;
    goto LAB_0017b35c;
  }
  uVar9 = *(uint *)(param_2 + 8);
  if ((uVar9 >> 6 & 1) == 0) {
    machdep_WriteReg(1,0xb8);
    machdep_WriteReg(2,(byte)uVar9 & 0x40);
    FUN_00178b2c(0xb4,0x40);
  }
  else {
    FUN_00178ae4(0xb4,0x40);
    machdep_Sleep(0x1e);
    machdep_WriteReg(1,0xb8);
    machdep_WriteReg(2,DAT_0059a3bc);
  }
LAB_0017b2f0:
  if ((*(int *)(param_2 + 0xc) - 4U < 3) || (*(int *)(param_2 + 0xc) == 1)) {
    FUN_00178ae4(0x66,8);
    if (2 < uVar8) {
      machdep_WriteReg(1,'r');
      machdep_WriteReg(2,DAT_0059a3cd);
      machdep_WriteReg(1,'s');
      machdep_WriteReg(2,DAT_0059a3ce);
      uVar8 = *(uint *)param_2;
      goto joined_r0x0017c438;
    }
    machdep_WriteReg(1,0xc5);
    machdep_WriteReg(2,DAT_0059a3cf);
    machdep_WriteReg(1,0xc6);
    machdep_WriteReg(2,DAT_0059a3d0);
    uVar8 = *(uint *)param_2;
joined_r0x0017c324:
    if (uVar8 < 2) {
      machdep_WriteReg(1,'f');
      uVar8 = machdep_ReadReg(2);
      machdep_WriteReg(1,'g');
      uVar9 = machdep_ReadReg(2);
      machdep_WriteReg(1,0xb4);
      cVar7 = machdep_ReadReg(2);
      machdep_WriteReg(1,0xb5);
      uVar10 = machdep_ReadReg(2);
      if (((((uVar9 & 0xc6) == 0xc6) && ((uVar8 & 0x3e) == 0x3e)) && (cVar7 == -1)) &&
         ((uVar10 & 0xf) == 0xf)) {
LAB_0017c3b8:
        FUN_00178b2c(0x66,1);
        machdep_Sleep(10);
      }
    }
  }
  else {
    if (uVar8 < 3) {
      machdep_WriteReg(1,0xc5);
      machdep_WriteReg(2,'\0');
      machdep_WriteReg(1,0xc6);
      machdep_WriteReg(2,'\0');
      FUN_00178b2c(0x66,8);
      uVar8 = *(uint *)param_2;
      goto joined_r0x0017c324;
    }
    machdep_WriteReg(1,'r');
    machdep_WriteReg(2,'\0');
    machdep_WriteReg(1,'s');
    machdep_WriteReg(2,'\0');
    FUN_00178b2c(0x66,8);
    uVar8 = *(uint *)param_2;
joined_r0x0017c438:
    if (uVar8 < 2) {
      machdep_WriteReg(1,'f');
      uVar8 = machdep_ReadReg(2);
      machdep_WriteReg(1,'g');
      uVar9 = machdep_ReadReg(2);
      if (((uVar9 & 0xc6) != 0xc6) || ((uVar8 & 0x7e) != 0x7e)) goto LAB_0017b35c;
      goto LAB_0017c3b8;
    }
  }
LAB_0017b35c:
  iVar28 = *(int *)(param_2 + 0xc);
  if (iVar28 == 1) {
    uVar8 = *(uint *)(param_2 + 4);
    if (uVar8 == 3) goto LAB_0017b3f4;
  }
  else {
    if ((iVar28 == 6 || iVar28 == 0) || (iVar28 - 3U < 2)) {
      FUN_00178ae4(0x30,0x40);
      iVar28 = *(int *)(param_2 + 0xc);
    }
    if ((iVar28 - 4U < 2) || (iVar28 == 0)) {
      FUN_00178b2c(100,8);
      uVar8 = *(uint *)(param_2 + 4);
    }
    else {
      uVar8 = *(uint *)(param_2 + 4);
    }
  }
  if (((uVar8 & 1) == 0) && (param_1 - 0x23 < 2)) {
    FUN_00178b2c(0xe7,4);
    FUN_00178ae4(0xe6,1);
    FUN_00178b2c(100,0x20);
  }
  if ((param_1 == 0x23) && ((*(uint *)(param_2 + 4) >> 1 & 1) == 0)) {
    machdep_WriteReg(0x11,'\x13');
    machdep_WriteReg(0x12,'\0');
    machdep_WriteReg(0x11,'\x0f');
    machdep_WriteReg(0x12,'\0');
    FUN_00178b2c(100,0x40);
  }
  iVar28 = *(int *)(param_2 + 0xc);
  if (((iVar28 == 6 || iVar28 == 0) || (iVar28 - 3U < 2)) && (param_1 - 0x23 < 2)) {
    FUN_00178b2c(100,0x10);
    iVar28 = *(int *)(param_2 + 0xc);
  }
  if (((iVar28 == 0) && (*(int *)(param_2 + 4) == 0)) &&
     (FUN_00178b2c(100,4), (*(uint *)param_2 & 0xfffffffd) != 1)) {
    machdep_Wait(0x515e);
    FUN_00178b2c(100,2);
    FUN_00178b2c(0x66,0xffffff80);
    FUN_00178b2c(100,1);
  }
LAB_0017b3f4:
  if ((param_1 == 0x20) || (uVar8 = *(uint *)(param_2 + 0x10), (uVar8 >> 1 & 1) == 0)) {
    FUN_00178b2c(0x65,2);
    uVar8 = *(uint *)(param_2 + 0x10);
  }
  if ((uVar8 & 1) == 0) {
    FUN_00178b2c(0x65,1);
    return 0;
  }
  return 0;
}

