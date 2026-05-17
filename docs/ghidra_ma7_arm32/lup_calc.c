/* lup_calc @ 000f44b4 8596B */


/* WARNING: Type propagation algorithm not settling */
/* YAMAHA::lup_calc(unsigned char, unsigned char) */

undefined4 YAMAHA::lup_calc(uchar param_1,uchar param_2)

{
  undefined1 *puVar1;
  byte *pbVar2;
  char cVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  undefined1 uVar15;
  undefined2 uVar16;
  undefined2 uVar17;
  undefined2 uVar18;
  undefined4 uVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  undefined4 *puVar23;
  undefined4 uVar24;
  undefined2 *puVar25;
  byte *pbVar26;
  undefined1 *puVar27;
  byte *pbVar28;
  undefined4 uVar29;
  int iVar30;
  undefined4 uVar31;
  uint uVar32;
  undefined4 uVar33;
  int iVar34;
  undefined4 uVar35;
  int *piVar36;
  undefined4 uVar37;
  undefined1 uVar38;
  
  iVar22 = DAT_000f50e4 + 0xf44c6;
  if (param_2 < 0xf9) {
    uVar38 = true;
  }
  else {
    uVar38 = param_2 != 0xf9;
    if (param_1 == '\v') {
      piVar36 = *(int **)(iVar22 + DAT_000f50ec);
      cVar3 = (char)piVar36[2];
      if (cVar3 == '\0') {
        pbVar28 = *(byte **)(iVar22 + DAT_000f50f0);
        pbVar26 = pbVar28 + 2;
        bVar5 = *pbVar26;
        bVar4 = pbVar28[1];
        *(undefined2 *)((int)piVar36 + (uint)*pbVar28 * 2 + 0x26) = 0;
        *(undefined2 *)((int)piVar36 + (uint)bVar4 * 2 + 0x26) = 0;
        *(undefined2 *)((int)piVar36 + (uint)bVar5 * 2 + 0x26) = 0;
        do {
          bVar4 = pbVar26[2];
          bVar5 = pbVar26[3];
          bVar6 = pbVar26[4];
          bVar7 = pbVar26[5];
          *(undefined2 *)((int)piVar36 + (uint)pbVar26[1] * 2 + 0x26) = 0;
          *(undefined2 *)((int)piVar36 + (uint)bVar4 * 2 + 0x26) = 0;
          *(undefined2 *)((int)piVar36 + (uint)bVar5 * 2 + 0x26) = 0;
          bVar13 = pbVar26[6];
          *(undefined2 *)((int)piVar36 + (uint)bVar6 * 2 + 0x26) = 0;
          bVar4 = pbVar26[7];
          bVar5 = pbVar26[8];
          bVar6 = pbVar26[9];
          bVar8 = pbVar26[10];
          bVar9 = pbVar26[0xb];
          pbVar26 = pbVar26 + 0xc;
          bVar12 = *pbVar26;
          *(undefined2 *)((int)piVar36 + (uint)bVar7 * 2 + 0x26) = 0;
          *(undefined2 *)((int)piVar36 + (uint)bVar13 * 2 + 0x26) = 0;
          *(undefined2 *)((int)piVar36 + (uint)bVar4 * 2 + 0x26) = 0;
          *(undefined2 *)((int)piVar36 + (uint)bVar5 * 2 + 0x26) = 0;
          *(undefined2 *)((int)piVar36 + (uint)bVar6 * 2 + 0x26) = 0;
          *(undefined2 *)((int)piVar36 + (uint)bVar8 * 2 + 0x26) = 0;
          *(undefined2 *)((int)piVar36 + (uint)bVar9 * 2 + 0x26) = 0;
          *(undefined2 *)((int)piVar36 + (uint)bVar12 * 2 + 0x26) = 0;
        } while (pbVar26 != pbVar28 + 0x56);
        iVar20 = *piVar36;
        iVar34 = 1;
        pbVar26 = *(byte **)(iVar22 + DAT_000f50fc);
        puVar25 = (undefined2 *)
                  ((uint)*(byte *)(*(int *)(iVar22 + DAT_000f50f4) + iVar20) * 0x34 +
                  *(int *)(iVar22 + DAT_000f50f8));
        puVar27 = *(undefined1 **)(iVar22 + DAT_000f5100);
        bVar4 = *pbVar26;
        uVar16 = *puVar25;
        *(undefined1 *)((int)piVar36 + bVar4 + 0x226) = *puVar27;
        *(undefined2 *)((int)piVar36 + (uint)bVar4 * 2 + 0x266) = uVar16;
        do {
          bVar4 = pbVar26[iVar34];
          bVar5 = pbVar26[iVar34 + 1];
          iVar21 = iVar34 + 4;
          bVar6 = pbVar26[iVar34 + 2];
          uVar10 = puVar27[iVar34 + 2];
          uVar11 = puVar27[iVar34 + 1];
          bVar7 = pbVar26[iVar34 + 3];
          uVar15 = puVar27[iVar34 + 3];
          puVar1 = puVar27 + iVar34;
          iVar34 = iVar34 + 5;
          *(undefined1 *)((int)piVar36 + bVar4 + 0x226) = *puVar1;
          bVar8 = pbVar26[iVar21];
          *(undefined1 *)((int)piVar36 + bVar5 + 0x226) = uVar11;
          uVar11 = puVar27[iVar21];
          uVar16 = puVar25[1];
          *(undefined1 *)((int)piVar36 + bVar6 + 0x226) = uVar10;
          uVar17 = puVar25[2];
          *(undefined2 *)((int)piVar36 + (uint)bVar4 * 2 + 0x266) = uVar16;
          uVar16 = puVar25[3];
          *(undefined2 *)((int)piVar36 + (uint)bVar5 * 2 + 0x266) = uVar17;
          uVar17 = puVar25[4];
          puVar25 = puVar25 + 5;
          uVar18 = *puVar25;
          *(undefined2 *)((int)piVar36 + (uint)bVar6 * 2 + 0x266) = uVar16;
          *(undefined1 *)((int)piVar36 + bVar7 + 0x226) = uVar15;
          *(undefined2 *)((int)piVar36 + (uint)bVar7 * 2 + 0x266) = uVar17;
          *(undefined2 *)((int)piVar36 + (uint)bVar8 * 2 + 0x266) = uVar18;
          *(undefined1 *)((int)piVar36 + bVar8 + 0x226) = uVar11;
          iVar21 = DAT_000f5104;
        } while (iVar34 != 0x1a);
joined_r0x000f4dc0:
        if ((param_2 & 1) != 0) {
          puVar23 = (undefined4 *)(*(int *)(iVar22 + iVar21) + iVar20 * 0x20);
          uVar29 = puVar23[1];
          uVar19 = puVar23[2];
          uVar24 = puVar23[3];
          *(undefined4 *)((int)piVar36 + 0x2e6) = *puVar23;
          *(undefined4 *)((int)piVar36 + 0x2ea) = uVar29;
          *(undefined4 *)((int)piVar36 + 0x2ee) = uVar19;
          *(undefined4 *)((int)piVar36 + 0x2f2) = uVar24;
          uVar19 = puVar23[5];
          uVar29 = puVar23[6];
          uVar24 = puVar23[7];
          *(undefined4 *)((int)piVar36 + 0x2f6) = puVar23[4];
          *(undefined4 *)((int)piVar36 + 0x2fa) = uVar19;
          *(undefined4 *)((int)piVar36 + 0x2fe) = uVar29;
          *(undefined4 *)((int)piVar36 + 0x302) = uVar24;
        }
      }
      else if (cVar3 == '\x01') {
        pbVar28 = *(byte **)(iVar22 + DAT_000f5d0c);
        pbVar26 = pbVar28 + 2;
        bVar5 = *pbVar26;
        bVar4 = pbVar28[1];
        *(undefined2 *)((int)piVar36 + (*pbVar28 + 0x10) * 2 + 6) = 0;
        *(undefined2 *)((int)piVar36 + (bVar4 + 0x10) * 2 + 6) = 0;
        *(undefined2 *)((int)piVar36 + (bVar5 + 0x10) * 2 + 6) = 0;
        do {
          bVar4 = pbVar26[3];
          bVar8 = pbVar26[2];
          bVar13 = pbVar26[4];
          bVar5 = pbVar26[7];
          bVar6 = pbVar26[5];
          bVar7 = pbVar26[8];
          *(undefined2 *)((int)piVar36 + (pbVar26[1] + 0x10) * 2 + 6) = 0;
          *(undefined2 *)((int)piVar36 + (bVar8 + 0x10) * 2 + 6) = 0;
          *(undefined2 *)((int)piVar36 + (bVar4 + 0x10) * 2 + 6) = 0;
          bVar4 = pbVar26[6];
          bVar8 = pbVar26[9];
          bVar9 = pbVar26[10];
          bVar12 = pbVar26[0xb];
          pbVar26 = pbVar26 + 0xc;
          bVar14 = *pbVar26;
          *(undefined2 *)((int)piVar36 + (bVar13 + 0x10) * 2 + 6) = 0;
          *(undefined2 *)((int)piVar36 + (bVar6 + 0x10) * 2 + 6) = 0;
          *(undefined2 *)((int)piVar36 + (bVar4 + 0x10) * 2 + 6) = 0;
          *(undefined2 *)((int)piVar36 + (bVar5 + 0x10) * 2 + 6) = 0;
          *(undefined2 *)((int)piVar36 + (bVar7 + 0x10) * 2 + 6) = 0;
          *(undefined2 *)((int)piVar36 + (bVar8 + 0x10) * 2 + 6) = 0;
          *(undefined2 *)((int)piVar36 + (bVar9 + 0x10) * 2 + 6) = 0;
          *(undefined2 *)((int)piVar36 + (bVar12 + 0x10) * 2 + 6) = 0;
          *(undefined2 *)((int)piVar36 + (bVar14 + 0x10) * 2 + 6) = 0;
        } while (pbVar26 != pbVar28 + 0x56);
        iVar34 = *piVar36;
        pbVar26 = *(byte **)(iVar22 + DAT_000f5d14);
        bVar4 = *pbVar26;
        iVar21 = (uint)*(byte *)(*(int *)(iVar22 + DAT_000f5d10) + iVar34) * 0xe;
        bVar5 = pbVar26[1];
        iVar20 = iVar21 + *(int *)(iVar22 + DAT_000f5d18);
        bVar6 = pbVar26[2];
        bVar7 = pbVar26[3];
        bVar8 = pbVar26[4];
        *(undefined2 *)((int)piVar36 + (uint)bVar4 * 2 + 0x266) =
             *(undefined2 *)(*(int *)(iVar22 + DAT_000f5d18) + iVar21);
        *(undefined1 *)((int)piVar36 + bVar4 + 0x226) = 2;
        uVar18 = *(undefined2 *)(iVar20 + 2);
        *(undefined1 *)((int)piVar36 + bVar5 + 0x226) = 2;
        *(undefined1 *)((int)piVar36 + bVar6 + 0x226) = 2;
        uVar16 = *(undefined2 *)(iVar20 + 4);
        uVar17 = *(undefined2 *)(iVar20 + 6);
        *(undefined2 *)((int)piVar36 + (uint)bVar5 * 2 + 0x266) = uVar18;
        bVar5 = pbVar26[5];
        bVar4 = pbVar26[6];
        *(undefined2 *)((int)piVar36 + (uint)bVar6 * 2 + 0x266) = uVar16;
        *(undefined1 *)((int)piVar36 + bVar7 + 0x226) = 2;
        *(undefined2 *)((int)piVar36 + (uint)bVar7 * 2 + 0x266) = uVar17;
        uVar16 = *(undefined2 *)(iVar20 + 8);
        uVar17 = *(undefined2 *)(iVar20 + 10);
        uVar18 = *(undefined2 *)(iVar20 + 0xc);
        *(undefined1 *)((int)piVar36 + bVar8 + 0x226) = 2;
        *(undefined2 *)((int)piVar36 + (uint)bVar8 * 2 + 0x266) = uVar16;
        *(undefined1 *)((int)piVar36 + bVar5 + 0x226) = 2;
        *(undefined1 *)((int)piVar36 + bVar4 + 0x226) = 2;
        *(undefined2 *)((int)piVar36 + (uint)bVar5 * 2 + 0x266) = uVar17;
        *(undefined2 *)((int)piVar36 + (uint)bVar4 * 2 + 0x266) = uVar18;
        if ((param_2 & 1) != 0) {
          puVar23 = (undefined4 *)(*(int *)(iVar22 + DAT_000f5d1c) + iVar34 * 0x20);
          uVar29 = puVar23[1];
          uVar24 = puVar23[2];
          uVar19 = puVar23[3];
          *(undefined4 *)((int)piVar36 + 0x2e6) = *puVar23;
          *(undefined4 *)((int)piVar36 + 0x2ea) = uVar29;
          *(undefined4 *)((int)piVar36 + 0x2ee) = uVar24;
          *(undefined4 *)((int)piVar36 + 0x2f2) = uVar19;
          uVar29 = puVar23[5];
          uVar19 = puVar23[6];
          uVar24 = puVar23[7];
          *(undefined4 *)((int)piVar36 + 0x2f6) = puVar23[4];
          *(undefined4 *)((int)piVar36 + 0x2fa) = uVar29;
          *(undefined4 *)((int)piVar36 + 0x2fe) = uVar19;
          *(undefined4 *)((int)piVar36 + 0x302) = uVar24;
        }
      }
      else if (cVar3 == '\x02') {
        pbVar28 = *(byte **)(iVar22 + DAT_000f50f0);
        pbVar26 = pbVar28 + 2;
        bVar5 = *pbVar26;
        bVar4 = pbVar28[1];
        *(undefined2 *)((int)piVar36 + (*pbVar28 + 0x10) * 2 + 6) = 0;
        *(undefined2 *)((int)piVar36 + (bVar4 + 0x10) * 2 + 6) = 0;
        *(undefined2 *)((int)piVar36 + (bVar5 + 0x10) * 2 + 6) = 0;
        do {
          bVar4 = pbVar26[2];
          bVar5 = pbVar26[3];
          bVar6 = pbVar26[4];
          bVar7 = pbVar26[5];
          bVar8 = pbVar26[7];
          bVar9 = pbVar26[8];
          *(undefined2 *)((int)piVar36 + (pbVar26[1] + 0x10) * 2 + 6) = 0;
          *(undefined2 *)((int)piVar36 + (bVar4 + 0x10) * 2 + 6) = 0;
          *(undefined2 *)((int)piVar36 + (bVar5 + 0x10) * 2 + 6) = 0;
          bVar4 = pbVar26[6];
          bVar5 = pbVar26[9];
          bVar13 = pbVar26[10];
          bVar12 = pbVar26[0xb];
          pbVar26 = pbVar26 + 0xc;
          bVar14 = *pbVar26;
          *(undefined2 *)((int)piVar36 + (bVar6 + 0x10) * 2 + 6) = 0;
          *(undefined2 *)((int)piVar36 + (bVar7 + 0x10) * 2 + 6) = 0;
          *(undefined2 *)((int)piVar36 + (bVar4 + 0x10) * 2 + 6) = 0;
          *(undefined2 *)((int)piVar36 + (bVar8 + 0x10) * 2 + 6) = 0;
          *(undefined2 *)((int)piVar36 + (bVar9 + 0x10) * 2 + 6) = 0;
          *(undefined2 *)((int)piVar36 + (bVar5 + 0x10) * 2 + 6) = 0;
          *(undefined2 *)((int)piVar36 + (bVar13 + 0x10) * 2 + 6) = 0;
          *(undefined2 *)((int)piVar36 + (bVar12 + 0x10) * 2 + 6) = 0;
          *(undefined2 *)((int)piVar36 + (bVar14 + 0x10) * 2 + 6) = 0;
        } while (pbVar26 != pbVar28 + 0x56);
        iVar20 = piVar36[1];
        iVar34 = 1;
        pbVar26 = *(byte **)(iVar22 + DAT_000f50fc);
        puVar25 = (undefined2 *)
                  ((uint)*(byte *)(*(int *)(iVar22 + DAT_000f5124) + iVar20) * 0x34 +
                  *(int *)(iVar22 + DAT_000f50f8));
        puVar27 = *(undefined1 **)(iVar22 + DAT_000f5100);
        bVar4 = *pbVar26;
        uVar16 = *puVar25;
        *(undefined1 *)((int)piVar36 + bVar4 + 0x226) = *puVar27;
        *(undefined2 *)((int)piVar36 + (uint)bVar4 * 2 + 0x266) = uVar16;
        do {
          bVar6 = pbVar26[iVar34];
          bVar4 = pbVar26[iVar34 + 1];
          iVar21 = iVar34 + 4;
          bVar7 = pbVar26[iVar34 + 2];
          uVar15 = puVar27[iVar34 + 2];
          uVar10 = puVar27[iVar34 + 1];
          bVar5 = pbVar26[iVar34 + 3];
          uVar11 = puVar27[iVar34 + 3];
          puVar1 = puVar27 + iVar34;
          iVar34 = iVar34 + 5;
          *(undefined1 *)((int)piVar36 + bVar6 + 0x226) = *puVar1;
          bVar8 = pbVar26[iVar21];
          *(undefined1 *)((int)piVar36 + bVar4 + 0x226) = uVar10;
          uVar10 = puVar27[iVar21];
          uVar16 = puVar25[1];
          *(undefined1 *)((int)piVar36 + bVar7 + 0x226) = uVar15;
          uVar17 = puVar25[2];
          *(undefined2 *)((int)piVar36 + (uint)bVar6 * 2 + 0x266) = uVar16;
          uVar16 = puVar25[3];
          *(undefined2 *)((int)piVar36 + (uint)bVar4 * 2 + 0x266) = uVar17;
          uVar17 = puVar25[4];
          puVar25 = puVar25 + 5;
          uVar18 = *puVar25;
          *(undefined2 *)((int)piVar36 + (uint)bVar7 * 2 + 0x266) = uVar16;
          *(undefined1 *)((int)piVar36 + bVar5 + 0x226) = uVar11;
          *(undefined2 *)((int)piVar36 + (uint)bVar5 * 2 + 0x266) = uVar17;
          *(undefined2 *)((int)piVar36 + (uint)bVar8 * 2 + 0x266) = uVar18;
          *(undefined1 *)((int)piVar36 + bVar8 + 0x226) = uVar10;
          iVar21 = DAT_000f5128;
        } while (iVar34 != 0x1a);
        goto joined_r0x000f4dc0;
      }
    }
    else {
      if (param_1 != '\x02') {
        if (param_1 == '\x0e') {
          iVar20 = *(int *)(iVar22 + DAT_000f50ec);
          if ((*(char *)(iVar20 + 0x10) == '\0') && ((param_2 & 1) != 0)) {
            puVar23 = (undefined4 *)
                      (*(int *)(iVar22 + DAT_000f5108) + *(int *)(iVar20 + 0x14) * 0x20);
            uVar29 = puVar23[1];
            uVar24 = puVar23[2];
            uVar19 = puVar23[3];
            *(undefined4 *)(iVar20 + 0x326) = *puVar23;
            *(undefined4 *)(iVar20 + 0x32e) = uVar24;
            *(undefined4 *)(iVar20 + 0x332) = uVar19;
            *(undefined4 *)(iVar20 + 0x32a) = uVar29;
            uVar24 = puVar23[5];
            uVar29 = puVar23[6];
            uVar19 = puVar23[7];
            *(undefined4 *)(iVar20 + 0x336) = puVar23[4];
            *(undefined4 *)(iVar20 + 0x33a) = uVar24;
            *(undefined4 *)(iVar20 + 0x33e) = uVar29;
            *(undefined4 *)(iVar20 + 0x342) = uVar19;
            lup_comp(0xfd,'\x01');
          }
        }
        else if ((param_2 & 1) != 0) {
          puVar23 = *(undefined4 **)(iVar22 + DAT_000f50e8);
          iVar20 = *(int *)(iVar22 + DAT_000f50ec);
          uVar37 = puVar23[1];
          uVar35 = puVar23[2];
          uVar33 = puVar23[3];
          uVar31 = puVar23[4];
          uVar29 = puVar23[5];
          uVar19 = puVar23[6];
          uVar24 = puVar23[7];
          *(undefined4 *)(iVar20 + 0x346) = *puVar23;
          *(undefined4 *)(iVar20 + 0x34a) = uVar37;
          *(undefined4 *)(iVar20 + 0x34e) = uVar35;
          *(undefined4 *)(iVar20 + 0x352) = uVar33;
          *(undefined4 *)(iVar20 + 0x356) = uVar31;
          *(undefined4 *)(iVar20 + 0x35a) = uVar29;
          *(undefined4 *)(iVar20 + 0x35e) = uVar19;
          *(undefined4 *)(iVar20 + 0x362) = uVar24;
        }
        goto LAB_000f452e;
      }
      iVar20 = *(int *)(iVar22 + DAT_000f50ec);
      cVar3 = *(char *)(iVar20 + 9);
      if (cVar3 == '\0') {
        iVar34 = *(int *)(iVar22 + DAT_000f510c);
        pbVar26 = (byte *)(iVar34 + -1);
        do {
          bVar4 = pbVar26[2];
          bVar5 = pbVar26[3];
          pbVar28 = pbVar26 + 1;
          bVar6 = pbVar26[4];
          bVar7 = pbVar26[5];
          bVar8 = pbVar26[6];
          bVar9 = pbVar26[7];
          pbVar26 = pbVar26 + 8;
          bVar13 = *pbVar26;
          *(undefined2 *)(iVar20 + (uint)*pbVar28 * 2 + 0x26) = 0;
          *(undefined2 *)(iVar20 + (uint)bVar4 * 2 + 0x26) = 0;
          *(undefined2 *)(iVar20 + (uint)bVar5 * 2 + 0x26) = 0;
          *(undefined2 *)(iVar20 + (uint)bVar6 * 2 + 0x26) = 0;
          *(undefined2 *)(iVar20 + (uint)bVar7 * 2 + 0x26) = 0;
          *(undefined2 *)(iVar20 + (uint)bVar8 * 2 + 0x26) = 0;
          *(undefined2 *)(iVar20 + (uint)bVar9 * 2 + 0x26) = 0;
          *(undefined2 *)(iVar20 + (uint)bVar13 * 2 + 0x26) = 0;
        } while (pbVar26 != (byte *)(iVar34 + 0x5f));
        iVar21 = *(int *)(iVar20 + 0xc);
        pbVar26 = *(byte **)(iVar22 + DAT_000f5114);
        iVar30 = (uint)*(byte *)(*(int *)(iVar22 + DAT_000f5110) + iVar21) * 0x22;
        puVar27 = *(undefined1 **)(iVar22 + DAT_000f511c);
        bVar4 = *pbVar26;
        iVar34 = iVar30 + *(int *)(iVar22 + DAT_000f5118);
        bVar5 = pbVar26[1];
        bVar7 = pbVar26[2];
        *(undefined2 *)(iVar20 + (uint)bVar4 * 2 + 0x266) =
             *(undefined2 *)(*(int *)(iVar22 + DAT_000f5118) + iVar30);
        bVar8 = pbVar26[3];
        bVar6 = pbVar26[4];
        *(undefined1 *)((uint)bVar4 + iVar20 + 0x226) = *puVar27;
        bVar4 = pbVar26[5];
        *(undefined2 *)(iVar20 + (uint)bVar5 * 2 + 0x266) = *(undefined2 *)(iVar34 + 2);
        *(undefined1 *)((uint)bVar5 + iVar20 + 0x226) = puVar27[1];
        *(undefined2 *)(iVar20 + (uint)bVar7 * 2 + 0x266) = *(undefined2 *)(iVar34 + 4);
        *(undefined1 *)((uint)bVar7 + iVar20 + 0x226) = puVar27[2];
        uVar10 = puVar27[3];
        *(undefined2 *)(iVar20 + (uint)bVar8 * 2 + 0x266) = *(undefined2 *)(iVar34 + 6);
        uVar16 = *(undefined2 *)(iVar34 + 8);
        *(undefined1 *)((uint)bVar8 + iVar20 + 0x226) = uVar10;
        uVar11 = puVar27[4];
        *(undefined2 *)(iVar20 + (uint)bVar6 * 2 + 0x266) = uVar16;
        uVar10 = puVar27[5];
        *(undefined1 *)((uint)bVar6 + iVar20 + 0x226) = uVar11;
        bVar8 = pbVar26[6];
        *(undefined1 *)(iVar20 + (uint)bVar4 + 0x226) = uVar10;
        bVar9 = pbVar26[7];
        bVar13 = pbVar26[8];
        *(undefined2 *)(iVar20 + (uint)bVar4 * 2 + 0x266) = *(undefined2 *)(iVar34 + 10);
        bVar4 = pbVar26[10];
        bVar5 = pbVar26[9];
        *(undefined2 *)(iVar20 + (uint)bVar8 * 2 + 0x266) = *(undefined2 *)(iVar34 + 0xc);
        bVar6 = pbVar26[0xb];
        bVar7 = pbVar26[0xc];
        *(undefined1 *)((uint)bVar8 + iVar20 + 0x226) = puVar27[6];
        *(undefined2 *)(iVar20 + (uint)bVar9 * 2 + 0x266) = *(undefined2 *)(iVar34 + 0xe);
        *(undefined1 *)((uint)bVar9 + iVar20 + 0x226) = puVar27[7];
        *(undefined2 *)(iVar20 + (uint)bVar13 * 2 + 0x266) = *(undefined2 *)(iVar34 + 0x10);
        *(undefined1 *)((uint)bVar13 + iVar20 + 0x226) = puVar27[8];
        *(undefined2 *)(iVar20 + (uint)bVar5 * 2 + 0x266) = *(undefined2 *)(iVar34 + 0x12);
        *(undefined1 *)((uint)bVar5 + iVar20 + 0x226) = puVar27[9];
        uVar10 = puVar27[10];
        *(undefined2 *)(iVar20 + (uint)bVar4 * 2 + 0x266) = *(undefined2 *)(iVar34 + 0x14);
        uVar11 = puVar27[0xb];
        uVar17 = *(undefined2 *)(iVar34 + 0x16);
        *(undefined1 *)((uint)bVar4 + iVar20 + 0x226) = uVar10;
        *(undefined1 *)((uint)bVar6 + iVar20 + 0x226) = uVar11;
        uVar16 = *(undefined2 *)(iVar34 + 0x18);
        *(undefined2 *)(iVar20 + (uint)bVar6 * 2 + 0x266) = uVar17;
        bVar4 = pbVar26[0xd];
        uVar11 = puVar27[0xc];
        *(undefined2 *)(iVar20 + (uint)bVar7 * 2 + 0x266) = uVar16;
        uVar10 = puVar27[0xd];
        *(undefined1 *)(iVar20 + (uint)bVar7 + 0x226) = uVar11;
        bVar7 = pbVar26[0xe];
        uVar16 = *(undefined2 *)(iVar34 + 0x1a);
        *(undefined1 *)((uint)bVar4 + iVar20 + 0x226) = uVar10;
        uVar17 = *(undefined2 *)(iVar34 + 0x1c);
        uVar10 = puVar27[0xe];
        bVar5 = pbVar26[0xf];
        bVar6 = pbVar26[0x10];
        *(undefined2 *)(iVar20 + (uint)bVar4 * 2 + 0x266) = uVar16;
        *(undefined1 *)((uint)bVar7 + iVar20 + 0x226) = uVar10;
        *(undefined2 *)(iVar20 + (uint)bVar7 * 2 + 0x266) = uVar17;
        uVar11 = puVar27[0xf];
        uVar16 = *(undefined2 *)(iVar34 + 0x20);
        uVar10 = puVar27[0x10];
        *(undefined2 *)(iVar20 + (uint)bVar5 * 2 + 0x266) = *(undefined2 *)(iVar34 + 0x1e);
        *(undefined1 *)((uint)bVar5 + iVar20 + 0x226) = uVar11;
        *(undefined2 *)(iVar20 + (uint)bVar6 * 2 + 0x266) = uVar16;
        *(undefined1 *)((uint)bVar6 + iVar20 + 0x226) = uVar10;
        if ((param_2 & 1) != 0) {
          iVar34 = *(int *)(iVar22 + DAT_000f5120);
          goto LAB_000f4b7a;
        }
      }
      else if (cVar3 == '\x01') {
        iVar34 = *(int *)(iVar22 + DAT_000f5cf4);
        pbVar26 = (byte *)(iVar34 + -1);
        do {
          pbVar28 = pbVar26 + 1;
          bVar8 = pbVar26[2];
          bVar9 = pbVar26[3];
          bVar4 = pbVar26[4];
          bVar5 = pbVar26[5];
          bVar6 = pbVar26[6];
          bVar7 = pbVar26[7];
          pbVar26 = pbVar26 + 8;
          bVar13 = *pbVar26;
          *(undefined2 *)(iVar20 + (*pbVar28 + 0x10) * 2 + 6) = 0;
          *(undefined2 *)(iVar20 + (bVar8 + 0x10) * 2 + 6) = 0;
          *(undefined2 *)(iVar20 + (bVar9 + 0x10) * 2 + 6) = 0;
          *(undefined2 *)(iVar20 + (bVar4 + 0x10) * 2 + 6) = 0;
          *(undefined2 *)(iVar20 + (bVar5 + 0x10) * 2 + 6) = 0;
          *(undefined2 *)(iVar20 + (bVar6 + 0x10) * 2 + 6) = 0;
          *(undefined2 *)(iVar20 + (bVar7 + 0x10) * 2 + 6) = 0;
          *(undefined2 *)(iVar20 + (bVar13 + 0x10) * 2 + 6) = 0;
        } while (pbVar26 != (byte *)(iVar34 + 0x5f));
        iVar21 = *(int *)(iVar20 + 0xc);
        pbVar26 = *(byte **)(iVar22 + DAT_000f5cfc);
        bVar8 = *pbVar26;
        iVar30 = (uint)*(byte *)(*(int *)(iVar22 + DAT_000f5cf8) + iVar21) * 0x22;
        bVar4 = pbVar26[2];
        puVar27 = *(undefined1 **)(iVar22 + DAT_000f5d04);
        iVar34 = iVar30 + *(int *)(iVar22 + DAT_000f5d00);
        bVar5 = pbVar26[1];
        bVar6 = pbVar26[3];
        *(undefined2 *)(iVar20 + (uint)bVar8 * 2 + 0x266) =
             *(undefined2 *)(*(int *)(iVar22 + DAT_000f5d00) + iVar30);
        bVar9 = pbVar26[4];
        bVar7 = pbVar26[5];
        *(undefined1 *)((uint)bVar8 + iVar20 + 0x226) = *puVar27;
        *(undefined2 *)(iVar20 + (uint)bVar5 * 2 + 0x266) = *(undefined2 *)(iVar34 + 2);
        *(undefined1 *)(iVar20 + (uint)bVar5 + 0x226) = puVar27[1];
        *(undefined2 *)(iVar20 + (uint)bVar4 * 2 + 0x266) = *(undefined2 *)(iVar34 + 4);
        *(undefined1 *)(iVar20 + (uint)bVar4 + 0x226) = puVar27[2];
        uVar10 = puVar27[3];
        *(undefined2 *)(iVar20 + (uint)bVar6 * 2 + 0x266) = *(undefined2 *)(iVar34 + 6);
        uVar16 = *(undefined2 *)(iVar34 + 8);
        *(undefined1 *)((uint)bVar6 + iVar20 + 0x226) = uVar10;
        uVar10 = puVar27[4];
        *(undefined2 *)(iVar20 + (uint)bVar9 * 2 + 0x266) = uVar16;
        uVar11 = puVar27[5];
        *(undefined1 *)((uint)bVar9 + iVar20 + 0x226) = uVar10;
        uVar16 = *(undefined2 *)(iVar34 + 10);
        *(undefined1 *)(iVar20 + (uint)bVar7 + 0x226) = uVar11;
        bVar8 = pbVar26[6];
        *(undefined2 *)(iVar20 + (uint)bVar7 * 2 + 0x266) = uVar16;
        bVar4 = pbVar26[8];
        bVar5 = pbVar26[7];
        *(undefined2 *)(iVar20 + (uint)bVar8 * 2 + 0x266) = *(undefined2 *)(iVar34 + 0xc);
        bVar6 = pbVar26[9];
        *(undefined1 *)((uint)bVar8 + iVar20 + 0x226) = puVar27[6];
        bVar7 = pbVar26[10];
        bVar9 = pbVar26[0xb];
        *(undefined2 *)(iVar20 + (uint)bVar5 * 2 + 0x266) = *(undefined2 *)(iVar34 + 0xe);
        bVar8 = pbVar26[0xc];
        *(undefined1 *)((uint)bVar5 + iVar20 + 0x226) = puVar27[7];
        uVar10 = puVar27[8];
        *(undefined2 *)(iVar20 + (uint)bVar4 * 2 + 0x266) = *(undefined2 *)(iVar34 + 0x10);
        uVar16 = *(undefined2 *)(iVar34 + 0x12);
        *(undefined1 *)(iVar20 + (uint)bVar4 + 0x226) = uVar10;
        *(undefined2 *)(iVar20 + (uint)bVar6 * 2 + 0x266) = uVar16;
        *(undefined1 *)((uint)bVar6 + iVar20 + 0x226) = puVar27[9];
        uVar11 = puVar27[10];
        uVar10 = puVar27[0xb];
        *(undefined2 *)(iVar20 + (uint)bVar7 * 2 + 0x266) = *(undefined2 *)(iVar34 + 0x14);
        uVar16 = *(undefined2 *)(iVar34 + 0x16);
        *(undefined1 *)((uint)bVar7 + iVar20 + 0x226) = uVar11;
        uVar11 = puVar27[0xc];
        *(undefined1 *)((uint)bVar9 + iVar20 + 0x226) = uVar10;
        *(undefined2 *)(iVar20 + (uint)bVar9 * 2 + 0x266) = uVar16;
        *(undefined1 *)(iVar20 + (uint)bVar8 + 0x226) = uVar11;
        bVar7 = pbVar26[0xd];
        bVar4 = pbVar26[0xe];
        *(undefined2 *)(iVar20 + (uint)bVar8 * 2 + 0x266) = *(undefined2 *)(iVar34 + 0x18);
        uVar16 = *(undefined2 *)(iVar34 + 0x1a);
        bVar5 = pbVar26[0xf];
        *(undefined1 *)((uint)bVar7 + iVar20 + 0x226) = puVar27[0xd];
        uVar10 = puVar27[0xe];
        bVar6 = pbVar26[0x10];
        *(undefined2 *)(iVar20 + (uint)bVar7 * 2 + 0x266) = uVar16;
        *(undefined1 *)((uint)bVar4 + iVar20 + 0x226) = uVar10;
        uVar16 = *(undefined2 *)(iVar34 + 0x1e);
        uVar10 = puVar27[0xf];
        uVar17 = *(undefined2 *)(iVar34 + 0x20);
        uVar11 = puVar27[0x10];
        *(undefined2 *)(iVar20 + (uint)bVar4 * 2 + 0x266) = *(undefined2 *)(iVar34 + 0x1c);
        *(undefined1 *)((uint)bVar5 + iVar20 + 0x226) = uVar10;
        *(undefined2 *)(iVar20 + (uint)bVar5 * 2 + 0x266) = uVar16;
        *(undefined1 *)((uint)bVar6 + iVar20 + 0x226) = uVar11;
        *(undefined2 *)(iVar20 + (uint)bVar6 * 2 + 0x266) = uVar17;
        if ((param_2 & 1) != 0) {
          iVar34 = *(int *)(iVar22 + DAT_000f5d08);
          goto LAB_000f4b7a;
        }
      }
      else {
        if (cVar3 == '\x02') {
          iVar34 = *(int *)(iVar22 + DAT_000f5cf4);
          pbVar26 = (byte *)(iVar34 + -1);
          do {
            bVar8 = pbVar26[2];
            bVar4 = pbVar26[3];
            bVar9 = pbVar26[5];
            bVar5 = pbVar26[4];
            bVar6 = pbVar26[6];
            *(undefined2 *)(iVar20 + (pbVar26[1] + 0x10) * 2 + 6) = 0;
            bVar7 = pbVar26[7];
            pbVar26 = pbVar26 + 8;
            bVar13 = *pbVar26;
            *(undefined2 *)(iVar20 + (bVar8 + 0x10) * 2 + 6) = 0;
            *(undefined2 *)(iVar20 + (bVar4 + 0x10) * 2 + 6) = 0;
            *(undefined2 *)(iVar20 + (bVar5 + 0x10) * 2 + 6) = 0;
            *(undefined2 *)(iVar20 + (bVar9 + 0x10) * 2 + 6) = 0;
            *(undefined2 *)(iVar20 + (bVar6 + 0x10) * 2 + 6) = 0;
            *(undefined2 *)(iVar20 + (bVar7 + 0x10) * 2 + 6) = 0;
            *(undefined2 *)(iVar20 + (bVar13 + 0x10) * 2 + 6) = 0;
          } while (pbVar26 != (byte *)(iVar34 + 0x5f));
          pbVar26 = *(byte **)(iVar22 + DAT_000f5cfc);
          bVar4 = *pbVar26;
          bVar5 = pbVar26[1];
          bVar6 = pbVar26[2];
          bVar7 = pbVar26[6];
          *(undefined2 *)(iVar20 + (bVar4 + 0x130) * 2 + 6) = 0;
          bVar8 = pbVar26[3];
          bVar9 = pbVar26[4];
          *(undefined2 *)(iVar20 + (bVar5 + 0x130) * 2 + 6) = 0;
          *(undefined2 *)(iVar20 + (bVar6 + 0x130) * 2 + 6) = 0;
          bVar13 = pbVar26[5];
          *(undefined2 *)(iVar20 + (bVar8 + 0x130) * 2 + 6) = 0;
          *(undefined2 *)(iVar20 + (bVar9 + 0x130) * 2 + 6) = 0;
          *(undefined1 *)((uint)bVar4 + iVar20 + 0x226) = 0;
          bVar4 = pbVar26[7];
          *(undefined1 *)((uint)bVar5 + iVar20 + 0x226) = 0;
          bVar5 = pbVar26[8];
          *(undefined1 *)((uint)bVar6 + iVar20 + 0x226) = 0;
          bVar6 = pbVar26[9];
          *(undefined1 *)((uint)bVar8 + iVar20 + 0x226) = 0;
          bVar8 = pbVar26[10];
          *(undefined1 *)((uint)bVar9 + iVar20 + 0x226) = 0;
          *(undefined2 *)(iVar20 + (bVar13 + 0x130) * 2 + 6) = 0;
          *(undefined1 *)((uint)bVar13 + iVar20 + 0x226) = 0;
          *(undefined2 *)(iVar20 + (bVar7 + 0x130) * 2 + 6) = 0;
          *(undefined2 *)(iVar20 + (bVar4 + 0x130) * 2 + 6) = 0;
          *(undefined1 *)((uint)bVar7 + iVar20 + 0x226) = 0;
          *(undefined1 *)(iVar20 + (uint)bVar4 + 0x226) = 0;
          *(undefined1 *)((uint)bVar5 + iVar20 + 0x226) = 0;
          bVar4 = pbVar26[0xb];
          *(undefined2 *)(iVar20 + (bVar5 + 0x130) * 2 + 6) = 0;
          *(undefined2 *)(iVar20 + (bVar6 + 0x130) * 2 + 6) = 0;
          *(undefined1 *)((uint)bVar6 + iVar20 + 0x226) = 0;
          bVar5 = pbVar26[0xc];
          bVar6 = pbVar26[0xd];
          *(undefined1 *)((uint)bVar8 + iVar20 + 0x226) = 0;
          *(undefined2 *)(iVar20 + (bVar8 + 0x130) * 2 + 6) = 0;
          bVar7 = pbVar26[0xe];
          bVar8 = pbVar26[0xf];
          bVar9 = pbVar26[0x10];
          *(undefined2 *)(iVar20 + (bVar4 + 0x130) * 2 + 6) = 0;
          *(undefined1 *)((uint)bVar4 + iVar20 + 0x226) = 0;
          *(undefined1 *)((uint)bVar5 + iVar20 + 0x226) = 0;
          *(undefined2 *)(iVar20 + (bVar5 + 0x130) * 2 + 6) = 0;
          *(undefined2 *)(iVar20 + (bVar6 + 0x130) * 2 + 6) = 0;
          *(undefined1 *)(iVar20 + (uint)bVar6 + 0x226) = 0;
          *(undefined2 *)(iVar20 + (bVar7 + 0x130) * 2 + 6) = 0;
          *(undefined1 *)(iVar20 + (uint)bVar7 + 0x226) = 0;
          *(undefined2 *)(iVar20 + (bVar8 + 0x130) * 2 + 6) = 0;
          *(undefined1 *)((uint)bVar8 + iVar20 + 0x226) = 0;
          *(undefined2 *)(iVar20 + (bVar9 + 0x130) * 2 + 6) = 0;
          *(undefined1 *)((uint)bVar9 + iVar20 + 0x226) = 0;
          iVar34 = DAT_000f5d20;
        }
        else if (cVar3 == '\x03') {
          iVar34 = *(int *)(iVar22 + DAT_000f5cf4);
          pbVar26 = (byte *)(iVar34 + -1);
          do {
            bVar8 = pbVar26[2];
            bVar4 = pbVar26[3];
            bVar9 = pbVar26[5];
            bVar5 = pbVar26[4];
            bVar6 = pbVar26[6];
            *(undefined2 *)(iVar20 + (pbVar26[1] + 0x10) * 2 + 6) = 0;
            bVar7 = pbVar26[7];
            pbVar26 = pbVar26 + 8;
            bVar13 = *pbVar26;
            *(undefined2 *)(iVar20 + (bVar8 + 0x10) * 2 + 6) = 0;
            *(undefined2 *)(iVar20 + (bVar4 + 0x10) * 2 + 6) = 0;
            *(undefined2 *)(iVar20 + (bVar5 + 0x10) * 2 + 6) = 0;
            *(undefined2 *)(iVar20 + (bVar9 + 0x10) * 2 + 6) = 0;
            *(undefined2 *)(iVar20 + (bVar6 + 0x10) * 2 + 6) = 0;
            *(undefined2 *)(iVar20 + (bVar7 + 0x10) * 2 + 6) = 0;
            *(undefined2 *)(iVar20 + (bVar13 + 0x10) * 2 + 6) = 0;
          } while (pbVar26 != (byte *)(iVar34 + 0x5f));
          pbVar26 = *(byte **)(iVar22 + DAT_000f5cfc);
          bVar4 = *pbVar26;
          bVar5 = pbVar26[1];
          bVar6 = pbVar26[2];
          bVar7 = pbVar26[6];
          *(undefined2 *)(iVar20 + (bVar4 + 0x130) * 2 + 6) = 0;
          bVar8 = pbVar26[3];
          bVar9 = pbVar26[4];
          *(undefined2 *)(iVar20 + (bVar5 + 0x130) * 2 + 6) = 0;
          *(undefined2 *)(iVar20 + (bVar6 + 0x130) * 2 + 6) = 0;
          bVar13 = pbVar26[5];
          *(undefined2 *)(iVar20 + (bVar8 + 0x130) * 2 + 6) = 0;
          *(undefined2 *)(iVar20 + (bVar9 + 0x130) * 2 + 6) = 0;
          *(undefined1 *)((uint)bVar4 + iVar20 + 0x226) = 0;
          bVar4 = pbVar26[7];
          *(undefined1 *)((uint)bVar5 + iVar20 + 0x226) = 0;
          bVar5 = pbVar26[8];
          *(undefined1 *)((uint)bVar6 + iVar20 + 0x226) = 0;
          bVar6 = pbVar26[9];
          *(undefined1 *)((uint)bVar8 + iVar20 + 0x226) = 0;
          bVar8 = pbVar26[10];
          *(undefined1 *)((uint)bVar9 + iVar20 + 0x226) = 0;
          *(undefined2 *)(iVar20 + (bVar13 + 0x130) * 2 + 6) = 0;
          *(undefined1 *)((uint)bVar13 + iVar20 + 0x226) = 0;
          *(undefined2 *)(iVar20 + (bVar7 + 0x130) * 2 + 6) = 0;
          *(undefined2 *)(iVar20 + (bVar4 + 0x130) * 2 + 6) = 0;
          *(undefined1 *)((uint)bVar7 + iVar20 + 0x226) = 0;
          *(undefined1 *)(iVar20 + (uint)bVar4 + 0x226) = 0;
          *(undefined1 *)((uint)bVar5 + iVar20 + 0x226) = 0;
          bVar4 = pbVar26[0xb];
          *(undefined2 *)(iVar20 + (bVar5 + 0x130) * 2 + 6) = 0;
          *(undefined2 *)(iVar20 + (bVar6 + 0x130) * 2 + 6) = 0;
          *(undefined1 *)((uint)bVar6 + iVar20 + 0x226) = 0;
          bVar5 = pbVar26[0xc];
          bVar6 = pbVar26[0xd];
          *(undefined1 *)((uint)bVar8 + iVar20 + 0x226) = 0;
          *(undefined2 *)(iVar20 + (bVar8 + 0x130) * 2 + 6) = 0;
          bVar7 = pbVar26[0xe];
          bVar8 = pbVar26[0xf];
          bVar9 = pbVar26[0x10];
          *(undefined2 *)(iVar20 + (bVar4 + 0x130) * 2 + 6) = 0;
          *(undefined1 *)((uint)bVar4 + iVar20 + 0x226) = 0;
          *(undefined1 *)((uint)bVar5 + iVar20 + 0x226) = 0;
          *(undefined2 *)(iVar20 + (bVar5 + 0x130) * 2 + 6) = 0;
          *(undefined2 *)(iVar20 + (bVar6 + 0x130) * 2 + 6) = 0;
          *(undefined1 *)(iVar20 + (uint)bVar6 + 0x226) = 0;
          *(undefined2 *)(iVar20 + (bVar7 + 0x130) * 2 + 6) = 0;
          *(undefined1 *)(iVar20 + (uint)bVar7 + 0x226) = 0;
          *(undefined2 *)(iVar20 + (bVar8 + 0x130) * 2 + 6) = 0;
          *(undefined1 *)((uint)bVar8 + iVar20 + 0x226) = 0;
          *(undefined2 *)(iVar20 + (bVar9 + 0x130) * 2 + 6) = 0;
          *(undefined1 *)((uint)bVar9 + iVar20 + 0x226) = 0;
          iVar34 = DAT_000f5d24;
        }
        else if (cVar3 == '\x04') {
          iVar34 = *(int *)(iVar22 + DAT_000f5cf4);
          pbVar26 = (byte *)(iVar34 + -1);
          do {
            bVar4 = pbVar26[2];
            bVar5 = pbVar26[3];
            bVar6 = pbVar26[4];
            bVar7 = pbVar26[5];
            *(undefined2 *)(iVar20 + (pbVar26[1] + 0x10) * 2 + 6) = 0;
            bVar8 = pbVar26[6];
            bVar9 = pbVar26[7];
            pbVar26 = pbVar26 + 8;
            bVar13 = *pbVar26;
            *(undefined2 *)(iVar20 + (bVar4 + 0x10) * 2 + 6) = 0;
            *(undefined2 *)(iVar20 + (bVar5 + 0x10) * 2 + 6) = 0;
            *(undefined2 *)(iVar20 + (bVar6 + 0x10) * 2 + 6) = 0;
            *(undefined2 *)(iVar20 + (bVar7 + 0x10) * 2 + 6) = 0;
            *(undefined2 *)(iVar20 + (bVar8 + 0x10) * 2 + 6) = 0;
            *(undefined2 *)(iVar20 + (bVar9 + 0x10) * 2 + 6) = 0;
            *(undefined2 *)(iVar20 + (bVar13 + 0x10) * 2 + 6) = 0;
          } while (pbVar26 != (byte *)(iVar34 + 0x5f));
          pbVar26 = *(byte **)(iVar22 + DAT_000f5cfc);
          bVar4 = *pbVar26;
          bVar5 = pbVar26[1];
          bVar6 = pbVar26[2];
          bVar7 = pbVar26[6];
          *(undefined2 *)(iVar20 + (bVar4 + 0x130) * 2 + 6) = 0;
          bVar8 = pbVar26[3];
          bVar9 = pbVar26[4];
          *(undefined2 *)(iVar20 + (bVar5 + 0x130) * 2 + 6) = 0;
          *(undefined2 *)(iVar20 + (bVar6 + 0x130) * 2 + 6) = 0;
          bVar13 = pbVar26[5];
          *(undefined2 *)(iVar20 + (bVar8 + 0x130) * 2 + 6) = 0;
          *(undefined2 *)(iVar20 + (bVar9 + 0x130) * 2 + 6) = 0;
          *(undefined1 *)((uint)bVar4 + iVar20 + 0x226) = 0;
          bVar4 = pbVar26[7];
          *(undefined1 *)((uint)bVar5 + iVar20 + 0x226) = 0;
          bVar5 = pbVar26[8];
          *(undefined1 *)((uint)bVar6 + iVar20 + 0x226) = 0;
          bVar6 = pbVar26[9];
          *(undefined1 *)((uint)bVar8 + iVar20 + 0x226) = 0;
          bVar8 = pbVar26[10];
          *(undefined1 *)((uint)bVar9 + iVar20 + 0x226) = 0;
          *(undefined2 *)(iVar20 + (bVar13 + 0x130) * 2 + 6) = 0;
          *(undefined1 *)((uint)bVar13 + iVar20 + 0x226) = 0;
          *(undefined2 *)(iVar20 + (bVar7 + 0x130) * 2 + 6) = 0;
          *(undefined2 *)(iVar20 + (bVar4 + 0x130) * 2 + 6) = 0;
          *(undefined1 *)((uint)bVar7 + iVar20 + 0x226) = 0;
          *(undefined1 *)(iVar20 + (uint)bVar4 + 0x226) = 0;
          *(undefined1 *)((uint)bVar5 + iVar20 + 0x226) = 0;
          bVar4 = pbVar26[0xb];
          *(undefined2 *)(iVar20 + (bVar5 + 0x130) * 2 + 6) = 0;
          *(undefined2 *)(iVar20 + (bVar6 + 0x130) * 2 + 6) = 0;
          *(undefined1 *)((uint)bVar6 + iVar20 + 0x226) = 0;
          bVar5 = pbVar26[0xc];
          bVar6 = pbVar26[0xd];
          *(undefined1 *)((uint)bVar8 + iVar20 + 0x226) = 0;
          *(undefined2 *)(iVar20 + (bVar8 + 0x130) * 2 + 6) = 0;
          bVar7 = pbVar26[0xe];
          bVar8 = pbVar26[0xf];
          bVar9 = pbVar26[0x10];
          *(undefined2 *)(iVar20 + (bVar4 + 0x130) * 2 + 6) = 0;
          *(undefined1 *)((uint)bVar4 + iVar20 + 0x226) = 0;
          *(undefined1 *)((uint)bVar5 + iVar20 + 0x226) = 0;
          *(undefined2 *)(iVar20 + (bVar5 + 0x130) * 2 + 6) = 0;
          *(undefined2 *)(iVar20 + (bVar6 + 0x130) * 2 + 6) = 0;
          *(undefined1 *)(iVar20 + (uint)bVar6 + 0x226) = 0;
          *(undefined2 *)(iVar20 + (bVar7 + 0x130) * 2 + 6) = 0;
          *(undefined1 *)(iVar20 + (uint)bVar7 + 0x226) = 0;
          *(undefined2 *)(iVar20 + (bVar8 + 0x130) * 2 + 6) = 0;
          *(undefined1 *)((uint)bVar8 + iVar20 + 0x226) = 0;
          *(undefined2 *)(iVar20 + (bVar9 + 0x130) * 2 + 6) = 0;
          *(undefined1 *)((uint)bVar9 + iVar20 + 0x226) = 0;
          iVar34 = DAT_000f5d28;
        }
        else {
          if (cVar3 == '\x05') {
            iVar34 = *(int *)(iVar22 + DAT_000f671c);
            pbVar26 = (byte *)(iVar34 + -1);
            do {
              pbVar28 = pbVar26 + 1;
              bVar4 = pbVar26[4];
              bVar8 = pbVar26[2];
              bVar9 = pbVar26[3];
              bVar5 = pbVar26[5];
              bVar6 = pbVar26[6];
              bVar7 = pbVar26[7];
              pbVar26 = pbVar26 + 8;
              bVar13 = *pbVar26;
              *(undefined2 *)(iVar20 + (*pbVar28 + 0x10) * 2 + 6) = 0;
              *(undefined2 *)(iVar20 + (bVar8 + 0x10) * 2 + 6) = 0;
              *(undefined2 *)(iVar20 + (bVar9 + 0x10) * 2 + 6) = 0;
              *(undefined2 *)(iVar20 + (bVar4 + 0x10) * 2 + 6) = 0;
              *(undefined2 *)(iVar20 + (bVar5 + 0x10) * 2 + 6) = 0;
              *(undefined2 *)(iVar20 + (bVar6 + 0x10) * 2 + 6) = 0;
              *(undefined2 *)(iVar20 + (bVar7 + 0x10) * 2 + 6) = 0;
              *(undefined2 *)(iVar20 + (bVar13 + 0x10) * 2 + 6) = 0;
            } while (pbVar26 != (byte *)(iVar34 + 0x5f));
            iVar21 = *(int *)(iVar20 + 0xc);
            pbVar26 = *(byte **)(iVar22 + DAT_000f6724);
            bVar4 = *pbVar26;
            iVar30 = (uint)*(byte *)(*(int *)(iVar22 + DAT_000f6720) + iVar21) * 0x22;
            bVar5 = pbVar26[2];
            puVar27 = *(undefined1 **)(iVar22 + DAT_000f672c);
            iVar34 = iVar30 + *(int *)(iVar22 + DAT_000f6728);
            bVar6 = pbVar26[1];
            bVar8 = pbVar26[3];
            *(undefined2 *)(iVar20 + (uint)bVar4 * 2 + 0x266) =
                 *(undefined2 *)(*(int *)(iVar22 + DAT_000f6728) + iVar30);
            bVar7 = pbVar26[5];
            *(undefined1 *)((uint)bVar4 + iVar20 + 0x226) = *puVar27;
            uVar10 = puVar27[1];
            *(undefined2 *)(iVar20 + (uint)bVar6 * 2 + 0x266) = *(undefined2 *)(iVar34 + 2);
            bVar9 = pbVar26[4];
            *(undefined1 *)((uint)bVar6 + iVar20 + 0x226) = uVar10;
            *(undefined2 *)(iVar20 + (uint)bVar5 * 2 + 0x266) = *(undefined2 *)(iVar34 + 4);
            *(undefined1 *)((uint)bVar5 + iVar20 + 0x226) = puVar27[2];
            uVar10 = puVar27[3];
            *(undefined2 *)(iVar20 + (uint)bVar8 * 2 + 0x266) = *(undefined2 *)(iVar34 + 6);
            *(undefined1 *)((uint)bVar8 + iVar20 + 0x226) = uVar10;
            uVar10 = puVar27[4];
            bVar4 = pbVar26[7];
            *(undefined2 *)(iVar20 + (uint)bVar9 * 2 + 0x266) = *(undefined2 *)(iVar34 + 8);
            *(undefined1 *)((uint)bVar9 + iVar20 + 0x226) = uVar10;
            bVar8 = pbVar26[6];
            bVar5 = pbVar26[8];
            *(undefined1 *)(iVar20 + (uint)bVar7 + 0x226) = puVar27[5];
            bVar6 = pbVar26[9];
            *(undefined2 *)(iVar20 + (uint)bVar7 * 2 + 0x266) = *(undefined2 *)(iVar34 + 10);
            bVar9 = pbVar26[10];
            bVar13 = pbVar26[0xb];
            *(undefined2 *)(iVar20 + (uint)bVar8 * 2 + 0x266) = *(undefined2 *)(iVar34 + 0xc);
            bVar7 = pbVar26[0xc];
            *(undefined1 *)(iVar20 + (uint)bVar8 + 0x226) = puVar27[6];
            *(undefined2 *)(iVar20 + (uint)bVar4 * 2 + 0x266) = *(undefined2 *)(iVar34 + 0xe);
            *(undefined1 *)((uint)bVar4 + iVar20 + 0x226) = puVar27[7];
            *(undefined2 *)(iVar20 + (uint)bVar5 * 2 + 0x266) = *(undefined2 *)(iVar34 + 0x10);
            *(undefined1 *)((uint)bVar5 + iVar20 + 0x226) = puVar27[8];
            uVar10 = puVar27[10];
            *(undefined2 *)(iVar20 + (uint)bVar6 * 2 + 0x266) = *(undefined2 *)(iVar34 + 0x12);
            uVar16 = *(undefined2 *)(iVar34 + 0x14);
            *(undefined1 *)((uint)bVar6 + iVar20 + 0x226) = puVar27[9];
            *(undefined1 *)((uint)bVar9 + iVar20 + 0x226) = uVar10;
            uVar17 = *(undefined2 *)(iVar34 + 0x16);
            *(undefined1 *)((uint)bVar13 + iVar20 + 0x226) = puVar27[0xb];
            *(undefined2 *)(iVar20 + (uint)bVar9 * 2 + 0x266) = uVar16;
            *(undefined2 *)(iVar20 + (uint)bVar13 * 2 + 0x266) = uVar17;
            bVar4 = pbVar26[0xd];
            uVar16 = *(undefined2 *)(iVar34 + 0x1a);
            *(undefined1 *)(iVar20 + (uint)bVar7 + 0x226) = puVar27[0xc];
            bVar5 = pbVar26[0xe];
            bVar6 = pbVar26[0xf];
            *(undefined2 *)(iVar20 + (uint)bVar7 * 2 + 0x266) = *(undefined2 *)(iVar34 + 0x18);
            uVar10 = puVar27[0xd];
            bVar7 = pbVar26[0x10];
            *(undefined2 *)(iVar20 + (uint)bVar4 * 2 + 0x266) = uVar16;
            uVar16 = *(undefined2 *)(iVar34 + 0x1c);
            *(undefined1 *)((uint)bVar4 + iVar20 + 0x226) = uVar10;
            uVar10 = puVar27[0xe];
            *(undefined2 *)(iVar20 + (uint)bVar5 * 2 + 0x266) = uVar16;
            uVar16 = *(undefined2 *)(iVar34 + 0x1e);
            *(undefined1 *)((uint)bVar5 + iVar20 + 0x226) = uVar10;
            uVar17 = *(undefined2 *)(iVar34 + 0x20);
            uVar10 = puVar27[0xf];
            uVar11 = puVar27[0x10];
            *(undefined2 *)(iVar20 + (uint)bVar6 * 2 + 0x266) = uVar16;
            *(undefined1 *)((uint)bVar6 + iVar20 + 0x226) = uVar10;
            *(undefined2 *)(iVar20 + (uint)bVar7 * 2 + 0x266) = uVar17;
            *(undefined1 *)((uint)bVar7 + iVar20 + 0x226) = uVar11;
            if ((param_2 & 1) != 0) {
              puVar23 = (undefined4 *)(*(int *)(iVar22 + DAT_000f6730) + iVar21 * 0x20);
              uVar24 = puVar23[1];
              uVar29 = puVar23[2];
              uVar19 = puVar23[3];
              *(undefined4 *)(iVar20 + 0x306) = *puVar23;
              *(undefined4 *)(iVar20 + 0x30a) = uVar24;
              *(undefined4 *)(iVar20 + 0x30e) = uVar29;
              *(undefined4 *)(iVar20 + 0x312) = uVar19;
              uVar29 = puVar23[5];
              uVar19 = puVar23[6];
              uVar24 = puVar23[7];
              *(undefined4 *)(iVar20 + 0x316) = puVar23[4];
              *(undefined4 *)(iVar20 + 0x31a) = uVar29;
              *(undefined4 *)(iVar20 + 0x31e) = uVar19;
              *(undefined4 *)(iVar20 + 0x322) = uVar24;
            }
            goto LAB_000f4bae;
          }
          if (cVar3 == '\x06') {
            iVar34 = *(int *)(iVar22 + DAT_000f671c);
            pbVar26 = (byte *)(iVar34 + -1);
            do {
              bVar4 = pbVar26[5];
              bVar9 = pbVar26[2];
              bVar5 = pbVar26[3];
              bVar6 = pbVar26[4];
              *(undefined2 *)(iVar20 + (pbVar26[1] + 0x10) * 2 + 6) = 0;
              bVar7 = pbVar26[6];
              bVar8 = pbVar26[7];
              pbVar26 = pbVar26 + 8;
              bVar13 = *pbVar26;
              *(undefined2 *)(iVar20 + (bVar9 + 0x10) * 2 + 6) = 0;
              *(undefined2 *)(iVar20 + (bVar5 + 0x10) * 2 + 6) = 0;
              *(undefined2 *)(iVar20 + (bVar6 + 0x10) * 2 + 6) = 0;
              *(undefined2 *)(iVar20 + (bVar4 + 0x10) * 2 + 6) = 0;
              *(undefined2 *)(iVar20 + (bVar7 + 0x10) * 2 + 6) = 0;
              *(undefined2 *)(iVar20 + (bVar8 + 0x10) * 2 + 6) = 0;
              *(undefined2 *)(iVar20 + (bVar13 + 0x10) * 2 + 6) = 0;
            } while (pbVar26 != (byte *)(iVar34 + 0x5f));
            pbVar26 = *(byte **)(iVar22 + DAT_000f6724);
            bVar4 = *pbVar26;
            bVar5 = pbVar26[1];
            bVar6 = pbVar26[2];
            bVar7 = pbVar26[6];
            *(undefined2 *)(iVar20 + (bVar4 + 0x130) * 2 + 6) = 0;
            bVar8 = pbVar26[3];
            bVar9 = pbVar26[4];
            *(undefined2 *)(iVar20 + (bVar5 + 0x130) * 2 + 6) = 0;
            *(undefined2 *)(iVar20 + (bVar6 + 0x130) * 2 + 6) = 0;
            bVar13 = pbVar26[5];
            *(undefined2 *)(iVar20 + (bVar8 + 0x130) * 2 + 6) = 0;
            *(undefined2 *)(iVar20 + (bVar9 + 0x130) * 2 + 6) = 0;
            *(undefined1 *)((uint)bVar4 + iVar20 + 0x226) = 0;
            bVar4 = pbVar26[7];
            *(undefined1 *)((uint)bVar5 + iVar20 + 0x226) = 0;
            bVar5 = pbVar26[8];
            *(undefined1 *)((uint)bVar6 + iVar20 + 0x226) = 0;
            bVar6 = pbVar26[9];
            *(undefined1 *)((uint)bVar8 + iVar20 + 0x226) = 0;
            bVar8 = pbVar26[10];
            *(undefined1 *)((uint)bVar9 + iVar20 + 0x226) = 0;
            *(undefined2 *)(iVar20 + (bVar13 + 0x130) * 2 + 6) = 0;
            *(undefined1 *)((uint)bVar13 + iVar20 + 0x226) = 0;
            *(undefined2 *)(iVar20 + (bVar7 + 0x130) * 2 + 6) = 0;
            *(undefined2 *)(iVar20 + (bVar4 + 0x130) * 2 + 6) = 0;
            *(undefined1 *)((uint)bVar7 + iVar20 + 0x226) = 0;
            *(undefined1 *)(iVar20 + (uint)bVar4 + 0x226) = 0;
            *(undefined1 *)((uint)bVar5 + iVar20 + 0x226) = 0;
            bVar4 = pbVar26[0xb];
            *(undefined2 *)(iVar20 + (bVar5 + 0x130) * 2 + 6) = 0;
            *(undefined2 *)(iVar20 + (bVar6 + 0x130) * 2 + 6) = 0;
            *(undefined1 *)((uint)bVar6 + iVar20 + 0x226) = 0;
            bVar5 = pbVar26[0xc];
            bVar6 = pbVar26[0xd];
            *(undefined1 *)((uint)bVar8 + iVar20 + 0x226) = 0;
            *(undefined2 *)(iVar20 + (bVar8 + 0x130) * 2 + 6) = 0;
            bVar7 = pbVar26[0xe];
            bVar8 = pbVar26[0xf];
            bVar9 = pbVar26[0x10];
            *(undefined2 *)(iVar20 + (bVar4 + 0x130) * 2 + 6) = 0;
            *(undefined1 *)((uint)bVar4 + iVar20 + 0x226) = 0;
            *(undefined1 *)((uint)bVar5 + iVar20 + 0x226) = 0;
            *(undefined2 *)(iVar20 + (bVar5 + 0x130) * 2 + 6) = 0;
            *(undefined2 *)(iVar20 + (bVar6 + 0x130) * 2 + 6) = 0;
            *(undefined1 *)(iVar20 + (uint)bVar6 + 0x226) = 0;
            *(undefined2 *)(iVar20 + (bVar7 + 0x130) * 2 + 6) = 0;
            *(undefined1 *)(iVar20 + (uint)bVar7 + 0x226) = 0;
            *(undefined2 *)(iVar20 + (bVar8 + 0x130) * 2 + 6) = 0;
            *(undefined1 *)((uint)bVar8 + iVar20 + 0x226) = 0;
            *(undefined2 *)(iVar20 + (bVar9 + 0x130) * 2 + 6) = 0;
            *(undefined1 *)((uint)bVar9 + iVar20 + 0x226) = 0;
            iVar34 = DAT_000f6734;
          }
          else {
            if (cVar3 != '\a') {
              if (cVar3 == '\b') {
                iVar34 = *(int *)(iVar22 + DAT_000f671c);
                pbVar26 = (byte *)(iVar34 + -1);
                do {
                  pbVar28 = pbVar26 + 1;
                  bVar4 = pbVar26[4];
                  bVar8 = pbVar26[2];
                  bVar9 = pbVar26[3];
                  bVar5 = pbVar26[5];
                  bVar6 = pbVar26[6];
                  bVar7 = pbVar26[7];
                  pbVar26 = pbVar26 + 8;
                  bVar13 = *pbVar26;
                  *(undefined2 *)(iVar20 + (*pbVar28 + 0x10) * 2 + 6) = 0;
                  *(undefined2 *)(iVar20 + (bVar8 + 0x10) * 2 + 6) = 0;
                  *(undefined2 *)(iVar20 + (bVar9 + 0x10) * 2 + 6) = 0;
                  *(undefined2 *)(iVar20 + (bVar4 + 0x10) * 2 + 6) = 0;
                  *(undefined2 *)(iVar20 + (bVar5 + 0x10) * 2 + 6) = 0;
                  *(undefined2 *)(iVar20 + (bVar6 + 0x10) * 2 + 6) = 0;
                  *(undefined2 *)(iVar20 + (bVar7 + 0x10) * 2 + 6) = 0;
                  *(undefined2 *)(iVar20 + (bVar13 + 0x10) * 2 + 6) = 0;
                } while (pbVar26 != (byte *)(iVar34 + 0x5f));
                pbVar28 = *(byte **)(iVar22 + DAT_000f673c);
                pbVar26 = pbVar28 + 2;
                bVar5 = *pbVar26;
                bVar4 = pbVar28[1];
                *(undefined2 *)(iVar20 + (*pbVar28 + 0x10) * 2 + 6) = 0;
                *(undefined2 *)(iVar20 + (bVar4 + 0x10) * 2 + 6) = 0;
                *(undefined2 *)(iVar20 + (bVar5 + 0x10) * 2 + 6) = 0;
                do {
                  pbVar2 = pbVar26 + 1;
                  bVar8 = pbVar26[2];
                  bVar4 = pbVar26[3];
                  bVar5 = pbVar26[4];
                  bVar6 = pbVar26[5];
                  bVar7 = pbVar26[6];
                  pbVar26 = pbVar26 + 7;
                  bVar9 = *pbVar26;
                  *(undefined2 *)(iVar20 + (*pbVar2 + 0x10) * 2 + 6) = 0;
                  *(undefined2 *)(iVar20 + (bVar8 + 0x10) * 2 + 6) = 0;
                  *(undefined2 *)(iVar20 + (bVar4 + 0x10) * 2 + 6) = 0;
                  *(undefined2 *)(iVar20 + (bVar5 + 0x10) * 2 + 6) = 0;
                  *(undefined2 *)(iVar20 + (bVar6 + 0x10) * 2 + 6) = 0;
                  *(undefined2 *)(iVar20 + (bVar7 + 0x10) * 2 + 6) = 0;
                  *(undefined2 *)(iVar20 + (bVar9 + 0x10) * 2 + 6) = 0;
                } while (pbVar26 != pbVar28 + 0x56);
                pbVar26 = *(byte **)(iVar22 + DAT_000f6724);
                bVar4 = *pbVar26;
                bVar5 = pbVar26[1];
                bVar6 = pbVar26[2];
                bVar7 = pbVar26[6];
                *(undefined2 *)(iVar20 + (bVar4 + 0x130) * 2 + 6) = 0;
                bVar8 = pbVar26[3];
                bVar9 = pbVar26[4];
                *(undefined2 *)(iVar20 + (bVar5 + 0x130) * 2 + 6) = 0;
                *(undefined2 *)(iVar20 + (bVar6 + 0x130) * 2 + 6) = 0;
                bVar13 = pbVar26[5];
                *(undefined2 *)(iVar20 + (bVar8 + 0x130) * 2 + 6) = 0;
                *(undefined2 *)(iVar20 + (bVar9 + 0x130) * 2 + 6) = 0;
                *(undefined1 *)((uint)bVar4 + iVar20 + 0x226) = 0;
                bVar4 = pbVar26[7];
                *(undefined1 *)((uint)bVar5 + iVar20 + 0x226) = 0;
                bVar5 = pbVar26[8];
                *(undefined1 *)((uint)bVar6 + iVar20 + 0x226) = 0;
                *(undefined2 *)(iVar20 + (bVar13 + 0x130) * 2 + 6) = 0;
                bVar6 = pbVar26[9];
                *(undefined1 *)((uint)bVar8 + iVar20 + 0x226) = 0;
                bVar8 = pbVar26[10];
                *(undefined1 *)((uint)bVar9 + iVar20 + 0x226) = 0;
                *(undefined1 *)((uint)bVar13 + iVar20 + 0x226) = 0;
                *(undefined2 *)(iVar20 + (bVar7 + 0x130) * 2 + 6) = 0;
                *(undefined2 *)(iVar20 + (bVar4 + 0x130) * 2 + 6) = 0;
                *(undefined1 *)((uint)bVar7 + iVar20 + 0x226) = 0;
                *(undefined1 *)(iVar20 + (uint)bVar4 + 0x226) = 0;
                *(undefined1 *)((uint)bVar5 + iVar20 + 0x226) = 0;
                bVar4 = pbVar26[0xb];
                *(undefined2 *)(iVar20 + (bVar5 + 0x130) * 2 + 6) = 0;
                *(undefined2 *)(iVar20 + (bVar6 + 0x130) * 2 + 6) = 0;
                *(undefined1 *)((uint)bVar6 + iVar20 + 0x226) = 0;
                bVar5 = pbVar26[0xc];
                bVar6 = pbVar26[0xd];
                *(undefined1 *)((uint)bVar8 + iVar20 + 0x226) = 0;
                *(undefined2 *)(iVar20 + (bVar8 + 0x130) * 2 + 6) = 0;
                bVar7 = pbVar26[0xe];
                bVar8 = pbVar26[0xf];
                bVar9 = pbVar26[0x10];
                *(undefined2 *)(iVar20 + (bVar4 + 0x130) * 2 + 6) = 0;
                *(undefined1 *)((uint)bVar4 + iVar20 + 0x226) = 0;
                *(undefined1 *)((uint)bVar5 + iVar20 + 0x226) = 0;
                *(undefined2 *)(iVar20 + (bVar5 + 0x130) * 2 + 6) = 0;
                *(undefined2 *)(iVar20 + (bVar6 + 0x130) * 2 + 6) = 0;
                *(undefined1 *)(iVar20 + (uint)bVar6 + 0x226) = 0;
                *(undefined2 *)(iVar20 + (bVar7 + 0x130) * 2 + 6) = 0;
                *(undefined1 *)(iVar20 + (uint)bVar7 + 0x226) = 0;
                *(undefined2 *)(iVar20 + (bVar8 + 0x130) * 2 + 6) = 0;
                *(undefined1 *)((uint)bVar8 + iVar20 + 0x226) = 0;
                *(undefined2 *)(iVar20 + (bVar9 + 0x130) * 2 + 6) = 0;
                *(undefined1 *)((uint)bVar9 + iVar20 + 0x226) = 0;
                if ((param_2 & 1) != 0) {
                  puVar23 = (undefined4 *)
                            (*(int *)(iVar22 + DAT_000f6740) + *(int *)(iVar20 + 0xc) * 0x20);
                  uVar29 = puVar23[1];
                  uVar24 = puVar23[2];
                  uVar19 = puVar23[3];
                  *(undefined4 *)(iVar20 + 0x306) = *puVar23;
                  *(undefined4 *)(iVar20 + 0x30a) = uVar29;
                  *(undefined4 *)(iVar20 + 0x30e) = uVar24;
                  *(undefined4 *)(iVar20 + 0x312) = uVar19;
                  uVar19 = puVar23[5];
                  uVar29 = puVar23[6];
                  uVar24 = puVar23[7];
                  *(undefined4 *)(iVar20 + 0x316) = puVar23[4];
                  *(undefined4 *)(iVar20 + 0x31a) = uVar19;
                  *(undefined4 *)(iVar20 + 0x31e) = uVar29;
                  *(undefined4 *)(iVar20 + 0x322) = uVar24;
                }
              }
              else if (cVar3 == '\t') {
                iVar34 = *(int *)(iVar22 + DAT_000f510c);
                pbVar26 = (byte *)(iVar34 + -1);
                do {
                  pbVar28 = pbVar26 + 1;
                  bVar8 = pbVar26[2];
                  bVar9 = pbVar26[3];
                  bVar4 = pbVar26[4];
                  bVar5 = pbVar26[5];
                  bVar6 = pbVar26[6];
                  bVar7 = pbVar26[7];
                  pbVar26 = pbVar26 + 8;
                  bVar13 = *pbVar26;
                  *(undefined2 *)(iVar20 + (*pbVar28 + 0x10) * 2 + 6) = 0;
                  *(undefined2 *)(iVar20 + (bVar8 + 0x10) * 2 + 6) = 0;
                  *(undefined2 *)(iVar20 + (bVar9 + 0x10) * 2 + 6) = 0;
                  *(undefined2 *)(iVar20 + (bVar4 + 0x10) * 2 + 6) = 0;
                  *(undefined2 *)(iVar20 + (bVar5 + 0x10) * 2 + 6) = 0;
                  *(undefined2 *)(iVar20 + (bVar6 + 0x10) * 2 + 6) = 0;
                  *(undefined2 *)(iVar20 + (bVar7 + 0x10) * 2 + 6) = 0;
                  *(undefined2 *)(iVar20 + (bVar13 + 0x10) * 2 + 6) = 0;
                } while (pbVar26 != (byte *)(iVar34 + 0x5f));
                pbVar28 = *(byte **)(iVar22 + DAT_000f50f0);
                pbVar26 = pbVar28 + 2;
                bVar5 = *pbVar26;
                bVar4 = pbVar28[1];
                *(undefined2 *)(iVar20 + (*pbVar28 + 0x10) * 2 + 6) = 0;
                *(undefined2 *)(iVar20 + (bVar4 + 0x10) * 2 + 6) = 0;
                *(undefined2 *)(iVar20 + (bVar5 + 0x10) * 2 + 6) = 0;
                do {
                  pbVar2 = pbVar26 + 1;
                  bVar8 = pbVar26[2];
                  bVar4 = pbVar26[3];
                  bVar5 = pbVar26[4];
                  bVar6 = pbVar26[5];
                  bVar7 = pbVar26[6];
                  pbVar26 = pbVar26 + 7;
                  bVar9 = *pbVar26;
                  *(undefined2 *)(iVar20 + (*pbVar2 + 0x10) * 2 + 6) = 0;
                  *(undefined2 *)(iVar20 + (bVar8 + 0x10) * 2 + 6) = 0;
                  *(undefined2 *)(iVar20 + (bVar4 + 0x10) * 2 + 6) = 0;
                  *(undefined2 *)(iVar20 + (bVar5 + 0x10) * 2 + 6) = 0;
                  *(undefined2 *)(iVar20 + (bVar6 + 0x10) * 2 + 6) = 0;
                  *(undefined2 *)(iVar20 + (bVar7 + 0x10) * 2 + 6) = 0;
                  *(undefined2 *)(iVar20 + (bVar9 + 0x10) * 2 + 6) = 0;
                } while (pbVar26 != pbVar28 + 0x56);
                pbVar26 = *(byte **)(iVar22 + DAT_000f5114);
                bVar4 = *pbVar26;
                bVar5 = pbVar26[1];
                bVar6 = pbVar26[2];
                bVar7 = pbVar26[6];
                *(undefined2 *)(iVar20 + (bVar4 + 0x130) * 2 + 6) = 0;
                bVar8 = pbVar26[3];
                bVar9 = pbVar26[4];
                *(undefined2 *)(iVar20 + (bVar5 + 0x130) * 2 + 6) = 0;
                *(undefined2 *)(iVar20 + (bVar6 + 0x130) * 2 + 6) = 0;
                bVar13 = pbVar26[5];
                *(undefined2 *)(iVar20 + (bVar8 + 0x130) * 2 + 6) = 0;
                *(undefined2 *)(iVar20 + (bVar9 + 0x130) * 2 + 6) = 0;
                *(undefined1 *)((uint)bVar4 + iVar20 + 0x226) = 0;
                bVar4 = pbVar26[7];
                *(undefined1 *)((uint)bVar5 + iVar20 + 0x226) = 0;
                bVar5 = pbVar26[8];
                *(undefined1 *)((uint)bVar6 + iVar20 + 0x226) = 0;
                *(undefined2 *)(iVar20 + (bVar13 + 0x130) * 2 + 6) = 0;
                bVar6 = pbVar26[9];
                *(undefined1 *)((uint)bVar8 + iVar20 + 0x226) = 0;
                bVar8 = pbVar26[10];
                *(undefined1 *)((uint)bVar9 + iVar20 + 0x226) = 0;
                *(undefined1 *)((uint)bVar13 + iVar20 + 0x226) = 0;
                *(undefined2 *)(iVar20 + (bVar7 + 0x130) * 2 + 6) = 0;
                *(undefined2 *)(iVar20 + (bVar4 + 0x130) * 2 + 6) = 0;
                *(undefined1 *)((uint)bVar7 + iVar20 + 0x226) = 0;
                *(undefined1 *)(iVar20 + (uint)bVar4 + 0x226) = 0;
                *(undefined1 *)((uint)bVar5 + iVar20 + 0x226) = 0;
                bVar4 = pbVar26[0xb];
                *(undefined2 *)(iVar20 + (bVar5 + 0x130) * 2 + 6) = 0;
                *(undefined2 *)(iVar20 + (bVar6 + 0x130) * 2 + 6) = 0;
                *(undefined1 *)((uint)bVar6 + iVar20 + 0x226) = 0;
                bVar5 = pbVar26[0xc];
                bVar6 = pbVar26[0xd];
                *(undefined1 *)((uint)bVar8 + iVar20 + 0x226) = 0;
                *(undefined2 *)(iVar20 + (bVar8 + 0x130) * 2 + 6) = 0;
                bVar7 = pbVar26[0xe];
                bVar8 = pbVar26[0xf];
                bVar9 = pbVar26[0x10];
                *(undefined2 *)(iVar20 + (bVar4 + 0x130) * 2 + 6) = 0;
                *(undefined1 *)((uint)bVar4 + iVar20 + 0x226) = 0;
                *(undefined1 *)((uint)bVar5 + iVar20 + 0x226) = 0;
                *(undefined2 *)(iVar20 + (bVar5 + 0x130) * 2 + 6) = 0;
                *(undefined2 *)(iVar20 + (bVar6 + 0x130) * 2 + 6) = 0;
                *(undefined1 *)(iVar20 + (uint)bVar6 + 0x226) = 0;
                *(undefined2 *)(iVar20 + (bVar7 + 0x130) * 2 + 6) = 0;
                *(undefined1 *)(iVar20 + (uint)bVar7 + 0x226) = 0;
                *(undefined2 *)(iVar20 + (bVar8 + 0x130) * 2 + 6) = 0;
                *(undefined1 *)((uint)bVar8 + iVar20 + 0x226) = 0;
                *(undefined2 *)(iVar20 + (bVar9 + 0x130) * 2 + 6) = 0;
                *(undefined1 *)((uint)bVar9 + iVar20 + 0x226) = 0;
                if ((param_2 & 1) != 0) {
                  memset((void *)(iVar20 + 0x306),0,0x20);
                }
              }
              goto LAB_000f452e;
            }
            iVar34 = *(int *)(iVar22 + DAT_000f671c);
            pbVar26 = (byte *)(iVar34 + -1);
            do {
              bVar4 = pbVar26[3];
              bVar5 = pbVar26[4];
              bVar9 = pbVar26[2];
              bVar6 = pbVar26[5];
              *(undefined2 *)(iVar20 + (pbVar26[1] + 0x10) * 2 + 6) = 0;
              bVar7 = pbVar26[6];
              bVar8 = pbVar26[7];
              pbVar26 = pbVar26 + 8;
              bVar13 = *pbVar26;
              *(undefined2 *)(iVar20 + (bVar9 + 0x10) * 2 + 6) = 0;
              *(undefined2 *)(iVar20 + (bVar4 + 0x10) * 2 + 6) = 0;
              *(undefined2 *)(iVar20 + (bVar5 + 0x10) * 2 + 6) = 0;
              *(undefined2 *)(iVar20 + (bVar6 + 0x10) * 2 + 6) = 0;
              *(undefined2 *)(iVar20 + (bVar7 + 0x10) * 2 + 6) = 0;
              *(undefined2 *)(iVar20 + (bVar8 + 0x10) * 2 + 6) = 0;
              *(undefined2 *)(iVar20 + (bVar13 + 0x10) * 2 + 6) = 0;
            } while (pbVar26 != (byte *)(iVar34 + 0x5f));
            pbVar26 = *(byte **)(iVar22 + DAT_000f6724);
            bVar4 = *pbVar26;
            bVar5 = pbVar26[1];
            bVar6 = pbVar26[2];
            bVar7 = pbVar26[6];
            *(undefined2 *)(iVar20 + (bVar4 + 0x130) * 2 + 6) = 0;
            bVar8 = pbVar26[3];
            bVar9 = pbVar26[4];
            *(undefined2 *)(iVar20 + (bVar5 + 0x130) * 2 + 6) = 0;
            *(undefined2 *)(iVar20 + (bVar6 + 0x130) * 2 + 6) = 0;
            bVar13 = pbVar26[5];
            *(undefined2 *)(iVar20 + (bVar8 + 0x130) * 2 + 6) = 0;
            *(undefined2 *)(iVar20 + (bVar9 + 0x130) * 2 + 6) = 0;
            *(undefined1 *)((uint)bVar4 + iVar20 + 0x226) = 0;
            bVar4 = pbVar26[7];
            *(undefined1 *)((uint)bVar5 + iVar20 + 0x226) = 0;
            bVar5 = pbVar26[8];
            *(undefined1 *)((uint)bVar6 + iVar20 + 0x226) = 0;
            *(undefined2 *)(iVar20 + (bVar13 + 0x130) * 2 + 6) = 0;
            bVar6 = pbVar26[9];
            *(undefined1 *)((uint)bVar8 + iVar20 + 0x226) = 0;
            bVar8 = pbVar26[10];
            *(undefined1 *)((uint)bVar9 + iVar20 + 0x226) = 0;
            *(undefined1 *)((uint)bVar13 + iVar20 + 0x226) = 0;
            *(undefined2 *)(iVar20 + (bVar7 + 0x130) * 2 + 6) = 0;
            *(undefined2 *)(iVar20 + (bVar4 + 0x130) * 2 + 6) = 0;
            *(undefined1 *)((uint)bVar7 + iVar20 + 0x226) = 0;
            *(undefined1 *)(iVar20 + (uint)bVar4 + 0x226) = 0;
            *(undefined1 *)((uint)bVar5 + iVar20 + 0x226) = 0;
            bVar4 = pbVar26[0xb];
            *(undefined2 *)(iVar20 + (bVar5 + 0x130) * 2 + 6) = 0;
            *(undefined2 *)(iVar20 + (bVar6 + 0x130) * 2 + 6) = 0;
            *(undefined1 *)((uint)bVar6 + iVar20 + 0x226) = 0;
            bVar5 = pbVar26[0xc];
            bVar6 = pbVar26[0xd];
            *(undefined1 *)((uint)bVar8 + iVar20 + 0x226) = 0;
            *(undefined2 *)(iVar20 + (bVar8 + 0x130) * 2 + 6) = 0;
            bVar7 = pbVar26[0xe];
            bVar8 = pbVar26[0xf];
            bVar9 = pbVar26[0x10];
            *(undefined2 *)(iVar20 + (bVar4 + 0x130) * 2 + 6) = 0;
            *(undefined1 *)((uint)bVar4 + iVar20 + 0x226) = 0;
            *(undefined1 *)((uint)bVar5 + iVar20 + 0x226) = 0;
            *(undefined2 *)(iVar20 + (bVar5 + 0x130) * 2 + 6) = 0;
            *(undefined2 *)(iVar20 + (bVar6 + 0x130) * 2 + 6) = 0;
            *(undefined1 *)(iVar20 + (uint)bVar6 + 0x226) = 0;
            *(undefined2 *)(iVar20 + (bVar7 + 0x130) * 2 + 6) = 0;
            *(undefined1 *)(iVar20 + (uint)bVar7 + 0x226) = 0;
            *(undefined2 *)(iVar20 + (bVar8 + 0x130) * 2 + 6) = 0;
            *(undefined1 *)((uint)bVar8 + iVar20 + 0x226) = 0;
            *(undefined2 *)(iVar20 + (bVar9 + 0x130) * 2 + 6) = 0;
            *(undefined1 *)((uint)bVar9 + iVar20 + 0x226) = 0;
            iVar34 = DAT_000f6738;
          }
        }
        if ((param_2 & 1) != 0) {
          iVar21 = *(int *)(iVar20 + 0xc);
          iVar34 = *(int *)(iVar22 + iVar34);
LAB_000f4b7a:
          puVar23 = (undefined4 *)(iVar34 + iVar21 * 0x20);
          uVar29 = puVar23[1];
          uVar24 = puVar23[2];
          uVar19 = puVar23[3];
          *(undefined4 *)(iVar20 + 0x306) = *puVar23;
          *(undefined4 *)(iVar20 + 0x30a) = uVar29;
          *(undefined4 *)(iVar20 + 0x30e) = uVar24;
          *(undefined4 *)(iVar20 + 0x312) = uVar19;
          uVar29 = puVar23[5];
          uVar24 = puVar23[6];
          uVar19 = puVar23[7];
          *(undefined4 *)(iVar20 + 0x316) = puVar23[4];
          *(undefined4 *)(iVar20 + 0x31a) = uVar29;
          *(undefined4 *)(iVar20 + 0x31e) = uVar24;
          *(undefined4 *)(iVar20 + 0x322) = uVar19;
        }
      }
LAB_000f4bae:
      if ((int)((uint)*(ushort *)(iVar20 + 0x358) << 0x1f) < 0) {
        *(undefined2 *)(iVar20 + 0x318) = 0x7f;
      }
    }
LAB_000f452e:
    if (param_2 == 0xfb) {
      return 0;
    }
    param_2 = 0xff;
  }
  if (param_1 == '\v') {
    piVar36 = *(int **)(iVar22 + DAT_000f50ec);
    cVar3 = (char)piVar36[2];
    if (cVar3 == '\0') {
      if (*piVar36 - 1U < 0xb) {
                    /* WARNING: Could not recover jumptable at 0x000f4870. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar19 = (*(code *)((int)&switchD_000f4870::switchdataD_000f4874 +
                           (&switchD_000f4870::switchdataD_000f4874)[*piVar36 - 1U]))();
        return uVar19;
      }
    }
    else if (cVar3 == '\x01') {
      if (*piVar36 - 1U < 4) {
        lup_xkara(param_2);
      }
    }
    else if ((cVar3 == '\x02') && ((uint)piVar36[1] < 0x1d)) {
      uVar32 = 1 << (piVar36[1] & 0xffU);
      if ((uVar32 & 0x1c40220c) == 0) {
        if ((uVar32 & 0x3bfddf3) != 0) {
          lup_rreverb(param_2);
        }
      }
      else {
        lup_rrsm(param_2);
      }
    }
    goto switchD_000f4870_default;
  }
  if (param_1 == '\x02') {
    iVar22 = *(int *)(iVar22 + DAT_000f50ec);
    cVar3 = *(char *)(iVar22 + 9);
    if (cVar3 == '\0') {
      uVar32 = *(int *)(iVar22 + 0xc) - 1;
      if (uVar32 < 0xe) {
                    /* WARNING: Could not recover jumptable at 0x000f462c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar19 = (*(code *)(&switchD_000f462c::switchdataD_000f4630 +
                           (&switchD_000f462c::switchdataD_000f4630)[uVar32]))();
        return uVar19;
      }
      goto switchD_000f4870_default;
    }
    if (cVar3 == '\x01') {
      if (*(int *)(iVar22 + 0xc) - 1U < 4) {
                    /* WARNING: Could not recover jumptable at 0x000f539c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar19 = (*(code *)(&switchD_000f539c::switchdataD_000f53a0 +
                           (uint)*(byte *)(*(int *)(iVar22 + 0xc) + 0xf539f) * 2))();
        return uVar19;
      }
      goto switchD_000f4870_default;
    }
    if (cVar3 == '\x02') {
      if (*(int *)(iVar22 + 0xc) == 1) {
        lup_vphasr(param_2);
      }
      goto switchD_000f4870_default;
    }
    if (cVar3 == '\x03') {
      if (*(int *)(iVar22 + 0xc) - 1U < 4) {
                    /* WARNING: Could not recover jumptable at 0x000f53e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar19 = (*(code *)(&switchD_000f53e8::switchdataD_000f53ec +
                           (uint)*(byte *)(*(int *)(iVar22 + 0xc) + 0xf53eb) * 2))();
        return uVar19;
      }
      goto switchD_000f4870_default;
    }
    if (cVar3 == '\x04') {
      if (*(int *)(iVar22 + 0xc) == 1) {
        lup_vwah(param_2);
      }
      else if (*(int *)(iVar22 + 0xc) == 2) {
        lup_vvcan(param_2);
      }
      goto switchD_000f4870_default;
    }
    if (cVar3 == '\x05') {
      if (*(int *)(iVar22 + 0xc) == 1) {
        lup_vpit(param_2);
      }
      else if (*(int *)(iVar22 + 0xc) == 2) {
        lup_vens(param_2);
      }
      goto switchD_000f4870_default;
    }
    if (cVar3 == '\x06') {
      if (*(int *)(iVar22 + 0xc) == 1) {
        lup_comp(param_2,'\x02');
      }
      goto switchD_000f4870_default;
    }
    if (cVar3 == '\a') {
      if (*(int *)(iVar22 + 0xc) == 1) {
        lup_vkvc(param_2);
      }
      goto switchD_000f4870_default;
    }
    if (cVar3 == '\b') {
      if (*(int *)(iVar22 + 0xc) == 1) {
        lup_dbex(param_2);
      }
      goto switchD_000f4870_default;
    }
    if (cVar3 == '\t') goto switchD_000f4870_default;
  }
  else if ((param_1 == '\x0e') && (*(char *)(*(int *)(iVar22 + DAT_000f50ec) + 0x10) == '\0')) {
    if (*(int *)(*(int *)(iVar22 + DAT_000f50ec) + 0x14) == 0) {
      lup_comp(param_2,'\x01');
    }
    goto switchD_000f4870_default;
  }
  lup_tconnect(param_2);
switchD_000f4870_default:
  lchk_cho_type();
  if (param_2 == 0xff) {
    uVar19 = LSendBlock(param_1,uVar38);
    return uVar19;
  }
  return 0;
}

