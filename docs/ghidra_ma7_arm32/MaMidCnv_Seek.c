/* MaMidCnv_Seek @ 000a9ddc 2588B */


/* YAMAHA::MaMidCnv_Seek(_MACNV_SEQ_INFO*, unsigned int, _MACNV_SEEK_INFO*) */

undefined4 YAMAHA::MaMidCnv_Seek(_MACNV_SEQ_INFO *param_1,uint param_2,_MACNV_SEEK_INFO *param_3)

{
  byte *pbVar1;
  uint uVar2;
  undefined4 uVar3;
  byte bVar4;
  uint uVar5;
  byte *pbVar6;
  int iVar7;
  int iVar8;
  undefined1 *puVar9;
  int iVar10;
  int iVar11;
  char cVar12;
  int iVar13;
  uint uVar14;
  _MACNV_SEEK_INFO *p_Var15;
  int iVar16;
  int iVar17;
  int iVar18;
  char *pcVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  
  if (((param_1 != (_MACNV_SEQ_INFO *)0x0) &&
      (pcVar19 = *(char **)(param_1 + 4), pcVar19 != (char *)0x0)) &&
     (param_3 != (_MACNV_SEEK_INFO *)0x0)) {
    if (*pcVar19 != '\x01') {
      return 0xffffffff;
    }
    if (((int)param_2 <= *(int *)(pcVar19 + 0x34) >> 10) &&
       ((int)param_2 <= *(int *)(pcVar19 + 0x38) >> 10)) {
      bVar4 = 0;
      pcVar19[0x71c] = '\0';
      pcVar19[0x71d] = '\0';
      pcVar19[0xb13] = '\0';
      pcVar19[0xb09] = '\x7f';
      pcVar19[0xb08] = 'L';
      pcVar19[0xb0a] = '@';
      pcVar19[0xb0c] = '\0';
      pcVar19[0xb0d] = ' ';
      cVar12 = '\x01';
      do {
        iVar8 = (uint)bVar4 * 0x10;
        if (bVar4 == 9) {
          pcVar19[0x5aa] = '\0';
          pcVar19[0x5ab] = 'x';
          pcVar19[0x5a8] = '\0';
          pcVar19[0x5a9] = 'x';
          pcVar19[0x5ac] = '\0';
          pcVar19[0x5ad] = 'd';
          pcVar19[0x5ae] = '\x7f';
          pcVar19[0x5b2] = '\x7f';
          pcVar19[0x5b3] = '\x7f';
          pcVar19[0x5b4] = '\0';
          pcVar19[0x5b5] = ' ';
          pcVar19[0x5b6] = '\x02';
        }
        else {
          (pcVar19 + iVar8 + 0x51a)[0] = '\0';
          (pcVar19 + iVar8 + 0x51a)[1] = 'y';
          (pcVar19 + iVar8 + 0x518)[0] = '\0';
          (pcVar19 + iVar8 + 0x518)[1] = 'y';
          pcVar19[iVar8 + 0x51c] = '\0';
          pcVar19[iVar8 + 0x51d] = 'd';
          pcVar19[iVar8 + 0x51e] = '\x7f';
          (pcVar19 + iVar8 + 0x522)[0] = '\x7f';
          (pcVar19 + iVar8 + 0x522)[1] = '\x7f';
          (pcVar19 + iVar8 + 0x524)[0] = '\0';
          (pcVar19 + iVar8 + 0x524)[1] = ' ';
          pcVar19[iVar8 + 0x526] = '\x02';
          if (cVar12 == '\x10') goto code_r0x000a9ea4;
        }
        cVar12 = cVar12 + '\x01';
        bVar4 = bVar4 + 1;
      } while( true );
    }
  }
  return 0xfffffffe;
code_r0x000a9ea4:
  *param_3 = (_MACNV_SEEK_INFO)0x7f;
  *(undefined2 *)(param_3 + 2) = 0x2000;
  param_3[4] = (_MACNV_SEEK_INFO)0x40;
  param_3[5] = (_MACNV_SEEK_INFO)0x4c;
  uVar5 = 0;
  p_Var15 = param_3;
  do {
    uVar2 = uVar5 + 1;
    if ((uVar5 & 0xff) == 9) {
      param_3[0xf4] = (_MACNV_SEEK_INFO)0x80;
    }
    else {
      p_Var15[10] = (_MACNV_SEEK_INFO)0x0;
    }
    p_Var15 = p_Var15 + 0x1a;
    param_3[uVar5 * 0x1a + 0xd] = (_MACNV_SEEK_INFO)0x64;
    *(undefined2 *)(param_3 + uVar5 * 0x1a + 0x1c) = 0x2000;
    param_3[uVar5 * 0x1a + 0xb] = (_MACNV_SEEK_INFO)0x0;
    param_3[uVar5 * 0x1a + 0xc] = (_MACNV_SEEK_INFO)0x0;
    param_3[uVar5 * 0x1a + 0x18] = (_MACNV_SEEK_INFO)0x40;
    param_3[uVar5 * 0x1a + 0xf] = (_MACNV_SEEK_INFO)0x7f;
    param_3[uVar5 * 0x1a + 0x10] = (_MACNV_SEEK_INFO)0x0;
    param_3[uVar5 * 0x1a + 0x11] = (_MACNV_SEEK_INFO)0x2;
    param_3[uVar5 * 0x1a + 0x12] = (_MACNV_SEEK_INFO)0x1;
    param_3[uVar5 * 0x1a + 0x13] = (_MACNV_SEEK_INFO)0x40;
    *(undefined2 *)(param_3 + uVar5 * 0x1a + 0x1e) = 0x2000;
    param_3[uVar5 * 0x1a + 0x14] = (_MACNV_SEEK_INFO)0x40;
    param_3[uVar5 * 0x1a + 0x15] = (_MACNV_SEEK_INFO)0x40;
    param_3[uVar5 * 0x1a + 0x16] = (_MACNV_SEEK_INFO)0x7f;
    param_3[uVar5 * 0x1a + 0x17] = (_MACNV_SEEK_INFO)0x28;
    param_3[uVar5 * 0x1a + 0x19] = (_MACNV_SEEK_INFO)0x0;
    *(undefined2 *)(param_3 + uVar5 * 0x1a + 0x20) = 0x40;
    param_3[uVar5 * 0x1a + 8] = (_MACNV_SEEK_INFO)0x0;
    param_3[uVar5 * 0x1a + 9] = (_MACNV_SEEK_INFO)0x0;
    uVar5 = uVar2;
  } while (uVar2 != 0x10);
  iVar13 = *(int *)(param_1 + 4);
  iVar8 = param_2 << 10;
  iVar21 = iVar13 + 0x10;
  *(undefined4 *)(iVar13 + 0x40) = 0;
  *(undefined4 *)(iVar13 + 0x44) = 0;
  *(undefined4 *)(iVar13 + 0x48) = 0;
  uVar3 = __divsi3(0x7d000,*(undefined2 *)(iVar13 + 0x10));
  *(undefined4 *)(iVar13 + 0x54) = uVar3;
  FUN_000a7d78(iVar21);
  uVar5 = 0;
  *(undefined1 *)(iVar13 + 0xb0a) = 0x40;
  *(undefined2 *)(iVar13 + 0xb0c) = 0x2000;
  cVar12 = '\x01';
  *(undefined1 *)(iVar13 + 0xb13) = 0;
  *(undefined1 *)(iVar13 + 0xb09) = 0x7f;
  *(undefined1 *)(iVar13 + 0xb08) = 0x4c;
  do {
    iVar7 = (uVar5 & 0xff) * 0x10 + 0x518;
    iVar22 = iVar13 + iVar7;
    if ((uVar5 & 0xff) == 9) {
      *(undefined2 *)(iVar22 + 2) = 0x7800;
      *(undefined2 *)(iVar13 + 0x5a8) = 0x7800;
      *(undefined1 *)(iVar22 + 4) = 0;
      *(undefined1 *)(iVar22 + 5) = 100;
      *(undefined1 *)(iVar22 + 6) = 0x7f;
      *(undefined2 *)(iVar22 + 10) = 0x7f7f;
      *(undefined2 *)(iVar22 + 0xc) = 0x2000;
      *(undefined1 *)(iVar22 + 0xe) = 2;
    }
    else {
      *(undefined2 *)(iVar22 + 2) = 0x7900;
      *(undefined2 *)(iVar13 + iVar7) = 0x7900;
      *(undefined1 *)(iVar22 + 4) = 0;
      *(undefined1 *)(iVar22 + 5) = 100;
      *(undefined1 *)(iVar22 + 6) = 0x7f;
      *(undefined2 *)(iVar22 + 10) = 0x7f7f;
      *(undefined2 *)(iVar22 + 0xc) = 0x2000;
      *(undefined1 *)(iVar22 + 0xe) = 2;
      if (cVar12 == '\x10') break;
    }
    cVar12 = cVar12 + '\x01';
    uVar5 = uVar5 + 1;
  } while( true );
  if ((*(char *)(iVar13 + 0x26) == '\x01') && (*(uint *)(iVar13 + 0x68) < *(uint *)(iVar13 + 0x28)))
  {
    do {
      if (*(char *)(iVar13 + 0x24) == '\x01') {
        uVar5 = 0;
      }
      else {
        iVar7 = *(int *)(*(int *)(iVar13 + 0x2dc) + 4);
        if (*(int *)(iVar13 + 0x2e4) == iVar7) break;
        uVar5 = (uint)*(byte *)(iVar7 + 8);
      }
      iVar20 = iVar21 + uVar5 * 0x14;
      *(undefined4 *)(iVar13 + 0x40) = *(undefined4 *)(iVar20 + 0x5c);
      iVar22 = *(int *)(iVar20 + 0x58);
      iVar16 = *(int *)(iVar20 + 0x54);
      iVar7 = iVar22 + 1;
      *(int *)(iVar20 + 0x58) = iVar7;
      puVar9 = (undefined1 *)(iVar16 + iVar22);
      bVar4 = *(byte *)(iVar16 + iVar22);
      uVar2 = (uint)bVar4;
      if (uVar2 < 0xf0) {
        if ((bVar4 & 0x80) == 0) {
          uVar2 = (uint)*(byte *)(iVar20 + 0x4c);
          *(int *)(iVar20 + 0x58) = iVar22;
        }
        else {
          *(byte *)(iVar20 + 0x4c) = bVar4;
          puVar9 = (undefined1 *)(iVar16 + iVar7);
          iVar7 = iVar22 + 2;
        }
        iVar7 = FUN_000a6e30(iVar13,param_3,uVar2 >> 4,uVar2 & 0xf,*puVar9,
                             *(undefined1 *)(iVar16 + iVar7));
        *(int *)(iVar20 + 0x58) = iVar7 + *(int *)(iVar20 + 0x58);
        goto switchD_000aa582_caseD_f4;
      }
      switch(uVar2) {
      case 0xf0:
        iVar7 = -iVar16 + 2;
        uVar2 = 0;
        do {
          pbVar6 = puVar9 + iVar7;
          *(byte **)(iVar20 + 0x58) = pbVar6;
          bVar4 = puVar9[1];
          uVar2 = (bVar4 & 0x7f) + uVar2 * 0x80;
          if ((bVar4 & 0x80) == 0) break;
          pbVar6 = puVar9 + 1 + iVar7;
          *(byte **)(iVar20 + 0x58) = pbVar6;
          uVar14 = (uint)(byte)puVar9[2];
          uVar2 = (uVar14 & 0x7f) + uVar2 * 0x80;
          if (-1 < (int)(uVar14 << 0x18)) break;
          pbVar6 = puVar9 + 2 + iVar7;
          *(byte **)(iVar20 + 0x58) = pbVar6;
          uVar2 = ((byte)puVar9[3] & 0x7f) + uVar2 * 0x80;
          if (-1 < (int)((uint)(byte)puVar9[3] << 0x18)) break;
          pbVar6 = puVar9 + -iVar16 + 5;
          *(byte **)(iVar20 + 0x58) = pbVar6;
          pbVar1 = puVar9 + 4;
          uVar2 = (*pbVar1 & 0x7f) + uVar2 * 0x80;
          puVar9 = puVar9 + 4;
        } while ((int)((uint)*pbVar1 << 0x18) < 0);
        if (3 < uVar2 - 1) {
          FUN_000a7c34(iVar13,pbVar6 + iVar16);
          pbVar6 = *(byte **)(iVar20 + 0x58);
        }
        goto LAB_000aa6be;
      case 0xf1:
      case 0xf3:
        *(int *)(iVar20 + 0x58) = iVar22 + 2;
        break;
      case 0xf2:
        *(int *)(iVar20 + 0x58) = iVar22 + 3;
        break;
      case 0xf7:
        iVar7 = -iVar16 + 2;
        uVar2 = 0;
        do {
          pbVar6 = puVar9 + iVar7;
          *(byte **)(iVar20 + 0x58) = pbVar6;
          bVar4 = puVar9[1];
          uVar2 = (bVar4 & 0x7f) + uVar2 * 0x80;
          if ((bVar4 & 0x80) == 0) break;
          pbVar6 = puVar9 + 1 + iVar7;
          *(byte **)(iVar20 + 0x58) = pbVar6;
          uVar14 = (uint)(byte)puVar9[2];
          uVar2 = (uVar14 & 0x7f) + uVar2 * 0x80;
          if (-1 < (int)(uVar14 << 0x18)) break;
          pbVar6 = puVar9 + 2 + iVar7;
          *(byte **)(iVar20 + 0x58) = pbVar6;
          uVar2 = ((byte)puVar9[3] & 0x7f) + uVar2 * 0x80;
          if (-1 < (int)((uint)(byte)puVar9[3] << 0x18)) break;
          pbVar6 = puVar9 + -iVar16 + 5;
          *(byte **)(iVar20 + 0x58) = pbVar6;
          pbVar1 = puVar9 + 4;
          uVar2 = (*pbVar1 & 0x7f) + uVar2 * 0x80;
          puVar9 = puVar9 + 4;
        } while ((int)((uint)*pbVar1 << 0x18) < 0);
        if (3 < uVar2) {
          FUN_000a7c34(iVar13,pbVar6 + iVar16,uVar2);
          pbVar6 = *(byte **)(iVar20 + 0x58);
        }
LAB_000aa6be:
        *(byte **)(iVar20 + 0x58) = pbVar6 + uVar2;
        break;
      case 0xff:
        *(int *)(iVar20 + 0x58) = iVar22 + 2;
        cVar12 = *(char *)(iVar16 + iVar7);
        iVar17 = 0;
        iVar7 = iVar22 + 2;
        do {
          iVar18 = iVar7 + 1;
          *(int *)(iVar20 + 0x58) = iVar18;
          bVar4 = *(byte *)(iVar16 + iVar18 + -1);
          iVar17 = (bVar4 & 0x7f) + iVar17 * 0x80;
          iVar22 = iVar7;
          if ((bVar4 & 0x80) == 0) break;
          iVar10 = iVar7 + 2;
          *(int *)(iVar20 + 0x58) = iVar10;
          bVar4 = *(byte *)(iVar16 + iVar10 + -1);
          iVar17 = (bVar4 & 0x7f) + iVar17 * 0x80;
          iVar22 = iVar18;
          iVar18 = iVar10;
          if ((bVar4 & 0x80) == 0) break;
          iVar18 = iVar7 + 3;
          *(int *)(iVar20 + 0x58) = iVar18;
          bVar4 = *(byte *)(iVar16 + iVar18 + -1);
          iVar17 = (bVar4 & 0x7f) + iVar17 * 0x80;
          iVar22 = iVar10;
          if ((bVar4 & 0x80) == 0) break;
          iVar18 = iVar7 + 4;
          iVar22 = iVar7 + 3;
          *(int *)(iVar20 + 0x58) = iVar18;
          uVar2 = (uint)*(byte *)(iVar16 + iVar18 + -1);
          iVar17 = (uVar2 & 0x7f) + iVar17 * 0x80;
          iVar7 = iVar18;
        } while ((int)(uVar2 << 0x18) < 0);
        if (cVar12 == 'Q') {
          if (iVar17 - 3U < 2) {
            iVar7 = __udivsi3((((uint)*(byte *)(iVar16 + iVar22 + 3) +
                                (uint)*(byte *)(iVar16 + iVar18) * 0x10000 +
                               (uint)*(byte *)(iVar16 + iVar22 + 2) * 0x100) * 0x100) / 0x7d,
                              *(undefined2 *)(iVar13 + 0x10));
            *(uint *)(iVar13 + 0x54) = iVar7 + 1U >> 1;
            iVar18 = *(int *)(iVar20 + 0x58);
          }
        }
        else if ((cVar12 != '\x7f') && (cVar12 == '/')) {
          *(uint *)(iVar13 + 0x58) = *(uint *)(iVar13 + 0x58) & ~(1 << uVar5);
          iVar18 = *(int *)(iVar20 + 0x58);
        }
        *(int *)(iVar20 + 0x58) = iVar18 + iVar17;
      }
switchD_000aa582_caseD_f4:
      FUN_000a6010(iVar21,uVar5);
    } while (*(uint *)(iVar13 + 0x68) < *(uint *)(iVar13 + 0x28));
  }
  iVar7 = *(int *)(iVar13 + 0x44);
  if (iVar7 < iVar8) {
    iVar22 = 0;
    do {
      if (*(char *)(iVar13 + 0x24) == '\x01') {
        uVar5 = 0;
      }
      else {
        iVar16 = *(int *)(*(int *)(iVar13 + 0x2dc) + 4);
        if (*(int *)(iVar13 + 0x2e4) == iVar16) break;
        uVar5 = (uint)*(byte *)(iVar16 + 8);
      }
      iVar20 = iVar21 + uVar5 * 0x14;
      iVar16 = *(int *)(iVar13 + 0x54) * (*(int *)(iVar20 + 0x5c) - *(int *)(iVar13 + 0x40)) + iVar7
      ;
      iVar22 = iVar7;
      iVar7 = iVar8;
      if (iVar8 <= iVar16) break;
      *(int *)(iVar13 + 0x44) = iVar16;
      *(undefined4 *)(iVar13 + 0x40) = *(undefined4 *)(iVar20 + 0x5c);
      iVar16 = *(int *)(iVar20 + 0x58);
      iVar17 = *(int *)(iVar20 + 0x54);
      iVar7 = iVar16 + 1;
      *(int *)(iVar20 + 0x58) = iVar7;
      puVar9 = (undefined1 *)(iVar17 + iVar16);
      bVar4 = *(byte *)(iVar17 + iVar16);
      uVar2 = (uint)bVar4;
      if (uVar2 < 0xf0) {
        if ((bVar4 & 0x80) == 0) {
          uVar2 = (uint)*(byte *)(iVar20 + 0x4c);
          *(int *)(iVar20 + 0x58) = iVar16;
        }
        else {
          *(byte *)(iVar20 + 0x4c) = bVar4;
          puVar9 = (undefined1 *)(iVar17 + iVar7);
          iVar7 = iVar16 + 2;
        }
        iVar7 = FUN_000a6e30(iVar13,param_3,uVar2 >> 4,uVar2 & 0xf,*puVar9,
                             *(undefined1 *)(iVar17 + iVar7));
        *(int *)(iVar20 + 0x58) = iVar7 + *(int *)(iVar20 + 0x58);
        goto switchD_000aa0d2_caseD_f4;
      }
      switch(uVar2) {
      case 0xf0:
        iVar7 = -iVar17 + 2;
        uVar2 = 0;
        do {
          pbVar6 = puVar9 + iVar7;
          *(byte **)(iVar20 + 0x58) = pbVar6;
          uVar14 = (uint)(byte)puVar9[1];
          uVar2 = (uVar14 & 0x7f) + uVar2 * 0x80;
          if (-1 < (int)(uVar14 << 0x18)) break;
          pbVar6 = puVar9 + 1 + iVar7;
          *(byte **)(iVar20 + 0x58) = pbVar6;
          uVar14 = (uint)(byte)puVar9[2];
          uVar2 = (uVar14 & 0x7f) + uVar2 * 0x80;
          if (-1 < (int)(uVar14 << 0x18)) break;
          pbVar6 = puVar9 + 2 + iVar7;
          *(byte **)(iVar20 + 0x58) = pbVar6;
          uVar2 = ((byte)puVar9[3] & 0x7f) + uVar2 * 0x80;
          if (-1 < (int)((uint)(byte)puVar9[3] << 0x18)) break;
          pbVar6 = puVar9 + -iVar17 + 5;
          *(byte **)(iVar20 + 0x58) = pbVar6;
          pbVar1 = puVar9 + 4;
          uVar2 = (*pbVar1 & 0x7f) + uVar2 * 0x80;
          puVar9 = puVar9 + 4;
        } while ((int)((uint)*pbVar1 << 0x18) < 0);
        if (3 < uVar2 - 1) {
          FUN_000a7c34(iVar13,pbVar6 + iVar17);
          pbVar6 = *(byte **)(iVar20 + 0x58);
        }
        goto LAB_000aa2ac;
      case 0xf1:
      case 0xf3:
        *(int *)(iVar20 + 0x58) = iVar16 + 2;
        break;
      case 0xf2:
        *(int *)(iVar20 + 0x58) = iVar16 + 3;
        break;
      case 0xf7:
        iVar7 = -iVar17 + 2;
        uVar2 = 0;
        do {
          pbVar6 = puVar9 + iVar7;
          *(byte **)(iVar20 + 0x58) = pbVar6;
          uVar14 = (uint)(byte)puVar9[1];
          uVar2 = (uVar14 & 0x7f) + uVar2 * 0x80;
          if (-1 < (int)(uVar14 << 0x18)) break;
          pbVar6 = puVar9 + 1 + iVar7;
          *(byte **)(iVar20 + 0x58) = pbVar6;
          uVar14 = (uint)(byte)puVar9[2];
          uVar2 = (uVar14 & 0x7f) + uVar2 * 0x80;
          if (-1 < (int)(uVar14 << 0x18)) break;
          pbVar6 = puVar9 + 2 + iVar7;
          *(byte **)(iVar20 + 0x58) = pbVar6;
          uVar2 = ((byte)puVar9[3] & 0x7f) + uVar2 * 0x80;
          if (-1 < (int)((uint)(byte)puVar9[3] << 0x18)) break;
          pbVar6 = puVar9 + -iVar17 + 5;
          *(byte **)(iVar20 + 0x58) = pbVar6;
          pbVar1 = puVar9 + 4;
          uVar2 = (*pbVar1 & 0x7f) + uVar2 * 0x80;
          puVar9 = puVar9 + 4;
        } while ((int)((uint)*pbVar1 << 0x18) < 0);
        if (3 < uVar2) {
          FUN_000a7c34(iVar13,pbVar6 + iVar17,uVar2);
          pbVar6 = *(byte **)(iVar20 + 0x58);
        }
LAB_000aa2ac:
        *(byte **)(iVar20 + 0x58) = pbVar6 + uVar2;
        break;
      case 0xff:
        *(int *)(iVar20 + 0x58) = iVar16 + 2;
        cVar12 = *(char *)(iVar17 + iVar7);
        iVar18 = 0;
        iVar7 = iVar16 + 2;
        do {
          iVar10 = iVar7 + 1;
          *(int *)(iVar20 + 0x58) = iVar10;
          uVar2 = (uint)*(byte *)(iVar17 + iVar10 + -1);
          iVar18 = (uVar2 & 0x7f) + iVar18 * 0x80;
          iVar16 = iVar7;
          if (-1 < (int)(uVar2 << 0x18)) break;
          iVar11 = iVar7 + 2;
          *(int *)(iVar20 + 0x58) = iVar11;
          uVar2 = (uint)*(byte *)(iVar17 + iVar11 + -1);
          iVar18 = (uVar2 & 0x7f) + iVar18 * 0x80;
          iVar16 = iVar10;
          iVar10 = iVar11;
          if (-1 < (int)(uVar2 << 0x18)) break;
          iVar10 = iVar7 + 3;
          *(int *)(iVar20 + 0x58) = iVar10;
          uVar2 = (uint)*(byte *)(iVar17 + iVar10 + -1);
          iVar18 = (uVar2 & 0x7f) + iVar18 * 0x80;
          iVar16 = iVar11;
          if (-1 < (int)(uVar2 << 0x18)) break;
          iVar10 = iVar7 + 4;
          iVar16 = iVar7 + 3;
          *(int *)(iVar20 + 0x58) = iVar10;
          uVar2 = (uint)*(byte *)(iVar17 + iVar10 + -1);
          iVar18 = (uVar2 & 0x7f) + iVar18 * 0x80;
          iVar7 = iVar10;
        } while ((int)(uVar2 << 0x18) < 0);
        if (cVar12 == 'Q') {
          if (iVar18 - 3U < 2) {
            iVar7 = __udivsi3((((uint)*(byte *)(iVar16 + iVar17 + 3) +
                                (uint)*(byte *)(iVar17 + iVar10) * 0x10000 +
                               (uint)*(byte *)(iVar16 + iVar17 + 2) * 0x100) * 0x100) / 0x7d,
                              *(undefined2 *)(iVar13 + 0x10));
            *(uint *)(iVar13 + 0x54) = iVar7 + 1U >> 1;
            iVar10 = *(int *)(iVar20 + 0x58);
          }
        }
        else if ((cVar12 != '\x7f') && (cVar12 == '/')) {
          *(uint *)(iVar13 + 0x58) = *(uint *)(iVar13 + 0x58) & ~(1 << uVar5);
          *(int *)(iVar20 + 0x58) = *(int *)(iVar20 + 0x58) + iVar18;
          break;
        }
        *(int *)(iVar20 + 0x58) = iVar10 + iVar18;
      }
switchD_000aa0d2_caseD_f4:
      FUN_000a6010(iVar21,uVar5);
      iVar7 = *(int *)(iVar13 + 0x44);
    } while (iVar7 < iVar8);
  }
  else {
    iVar22 = 0;
  }
  *(int *)(iVar13 + 0x3c) = iVar7;
  *(int *)(iVar13 + 0x44) = iVar22;
  *(int *)(iVar13 + 0x48) = iVar7;
  *param_3 = *(_MACNV_SEEK_INFO *)(pcVar19 + 0xb09);
  param_3[4] = *(_MACNV_SEEK_INFO *)(pcVar19 + 0xb0a);
  *(undefined2 *)(param_3 + 2) = *(undefined2 *)(pcVar19 + 0xb0c);
  param_3[5] = *(_MACNV_SEEK_INFO *)(pcVar19 + 0xb08);
  param_3[0x1a] = *(_MACNV_SEEK_INFO *)(pcVar19 + 0x51f);
  param_3[8] = *(_MACNV_SEEK_INFO *)(pcVar19 + 0x520);
  param_3[9] = *(_MACNV_SEEK_INFO *)(pcVar19 + 0x521);
  param_3[0x34] = *(_MACNV_SEEK_INFO *)(pcVar19 + 0x52f);
  param_3[0x22] = *(_MACNV_SEEK_INFO *)(pcVar19 + 0x530);
  param_3[0x23] = *(_MACNV_SEEK_INFO *)(pcVar19 + 0x531);
  param_3[0x4e] = *(_MACNV_SEEK_INFO *)(pcVar19 + 0x53f);
  param_3[0x3c] = *(_MACNV_SEEK_INFO *)(pcVar19 + 0x540);
  param_3[0x3d] = *(_MACNV_SEEK_INFO *)(pcVar19 + 0x541);
  param_3[0x68] = *(_MACNV_SEEK_INFO *)(pcVar19 + 0x54f);
  param_3[0x56] = *(_MACNV_SEEK_INFO *)(pcVar19 + 0x550);
  param_3[0x57] = *(_MACNV_SEEK_INFO *)(pcVar19 + 0x551);
  param_3[0x82] = *(_MACNV_SEEK_INFO *)(pcVar19 + 0x55f);
  param_3[0x70] = *(_MACNV_SEEK_INFO *)(pcVar19 + 0x560);
  param_3[0x71] = *(_MACNV_SEEK_INFO *)(pcVar19 + 0x561);
  param_3[0x9c] = *(_MACNV_SEEK_INFO *)(pcVar19 + 0x56f);
  param_3[0x8a] = *(_MACNV_SEEK_INFO *)(pcVar19 + 0x570);
  param_3[0x8b] = *(_MACNV_SEEK_INFO *)(pcVar19 + 0x571);
  param_3[0xb6] = *(_MACNV_SEEK_INFO *)(pcVar19 + 0x57f);
  param_3[0xa4] = *(_MACNV_SEEK_INFO *)(pcVar19 + 0x580);
  param_3[0xa5] = *(_MACNV_SEEK_INFO *)(pcVar19 + 0x581);
  param_3[0xd0] = *(_MACNV_SEEK_INFO *)(pcVar19 + 0x58f);
  param_3[0xbe] = *(_MACNV_SEEK_INFO *)(pcVar19 + 0x590);
  param_3[0xbf] = *(_MACNV_SEEK_INFO *)(pcVar19 + 0x591);
  param_3[0xea] = *(_MACNV_SEEK_INFO *)(pcVar19 + 0x59f);
  param_3[0xd8] = *(_MACNV_SEEK_INFO *)(pcVar19 + 0x5a0);
  param_3[0xd9] = *(_MACNV_SEEK_INFO *)(pcVar19 + 0x5a1);
  param_3[0x104] = *(_MACNV_SEEK_INFO *)(pcVar19 + 0x5af);
  param_3[0xf2] = *(_MACNV_SEEK_INFO *)(pcVar19 + 0x5b0);
  param_3[0xf3] = *(_MACNV_SEEK_INFO *)(pcVar19 + 0x5b1);
  param_3[0x11e] = *(_MACNV_SEEK_INFO *)(pcVar19 + 0x5bf);
  param_3[0x10c] = *(_MACNV_SEEK_INFO *)(pcVar19 + 0x5c0);
  param_3[0x10d] = *(_MACNV_SEEK_INFO *)(pcVar19 + 0x5c1);
  param_3[0x138] = *(_MACNV_SEEK_INFO *)(pcVar19 + 0x5cf);
  param_3[0x126] = *(_MACNV_SEEK_INFO *)(pcVar19 + 0x5d0);
  param_3[0x127] = *(_MACNV_SEEK_INFO *)(pcVar19 + 0x5d1);
  param_3[0x152] = *(_MACNV_SEEK_INFO *)(pcVar19 + 0x5df);
  param_3[0x140] = *(_MACNV_SEEK_INFO *)(pcVar19 + 0x5e0);
  param_3[0x141] = *(_MACNV_SEEK_INFO *)(pcVar19 + 0x5e1);
  param_3[0x16c] = *(_MACNV_SEEK_INFO *)(pcVar19 + 0x5ef);
  param_3[0x15a] = *(_MACNV_SEEK_INFO *)(pcVar19 + 0x5f0);
  param_3[0x15b] = *(_MACNV_SEEK_INFO *)(pcVar19 + 0x5f1);
  param_3[0x186] = *(_MACNV_SEEK_INFO *)(pcVar19 + 0x5ff);
  param_3[0x174] = *(_MACNV_SEEK_INFO *)(pcVar19 + 0x600);
  param_3[0x175] = *(_MACNV_SEEK_INFO *)(pcVar19 + 0x601);
  param_3[0x1a0] = *(_MACNV_SEEK_INFO *)(pcVar19 + 0x60f);
  param_3[0x18e] = *(_MACNV_SEEK_INFO *)(pcVar19 + 0x610);
  param_3[399] = *(_MACNV_SEEK_INFO *)(pcVar19 + 0x611);
  pcVar19[0xb0e] = '\0';
  pcVar19[1] = '\x01';
  return 0;
}

