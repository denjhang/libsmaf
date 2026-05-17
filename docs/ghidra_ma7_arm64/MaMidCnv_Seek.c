/* MaMidCnv_Seek @ 001d76f4 9680B */


/* WARNING: Type propagation algorithm not settling */
/* YAMAHA::MaMidCnv_Seek(_MACNV_SEQ_INFO*, unsigned int, _MACNV_SEEK_INFO*) */

undefined8 YAMAHA::MaMidCnv_Seek(_MACNV_SEQ_INFO *param_1,uint param_2,_MACNV_SEEK_INFO *param_3)

{
  ushort *puVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  undefined1 *puVar8;
  long *plVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  ulong uVar14;
  uint uVar15;
  uint uVar16;
  long *plVar17;
  int *piVar18;
  char cVar19;
  _MACNV_SEEK_INFO *p_Var20;
  uint uVar21;
  uint uVar22;
  long lVar23;
  ulong uVar24;
  ulong uVar25;
  long lVar26;
  char *pcVar27;
  int iVar28;
  long *plVar29;
  uint uVar30;
  long lVar31;
  long *plVar32;
  
  if (((param_1 != (_MACNV_SEQ_INFO *)0x0) &&
      (pcVar27 = *(char **)(param_1 + 8), param_3 != (_MACNV_SEEK_INFO *)0x0)) &&
     (pcVar27 != (char *)0x0)) {
    if (*pcVar27 != '\x01') {
      return 0xffffffff;
    }
    if (((int)param_2 <= *(int *)(pcVar27 + 0x4c) >> 10) &&
       ((int)param_2 <= *(int *)(pcVar27 + 0x50) >> 10)) {
      pcVar27[0x8e0] = '\0';
      pcVar27[0x8e1] = '\0';
      p_Var20 = param_3 + 10;
      pcVar27[0xccc] = 'L';
      pcVar27[0xccd] = '\x7f';
      pcVar27[0xcce] = '@';
      pcVar27[0xcd0] = '\0';
      pcVar27[0xcd1] = ' ';
      pcVar27[0xcd7] = '\0';
      pcVar27[0x6da] = '\0';
      pcVar27[0x6db] = 'y';
      pcVar27[0x6d8] = '\0';
      pcVar27[0x6d9] = 'y';
      pcVar27[0x6dc] = '\0';
      pcVar27[0x6dd] = 'd';
      pcVar27[0x6de] = '\x7f';
      pcVar27[0x6e2] = '\x7f';
      pcVar27[0x6e3] = '\x7f';
      pcVar27[0x6e4] = '\0';
      pcVar27[0x6e5] = ' ';
      pcVar27[0x6e6] = '\x02';
      pcVar27[0x6ea] = '\0';
      pcVar27[0x6eb] = 'y';
      pcVar27[0x6e8] = '\0';
      pcVar27[0x6e9] = 'y';
      pcVar27[0x6ec] = '\0';
      pcVar27[0x6ed] = 'd';
      pcVar27[0x6ee] = '\x7f';
      pcVar27[0x6f2] = '\x7f';
      pcVar27[0x6f3] = '\x7f';
      pcVar27[0x6f4] = '\0';
      pcVar27[0x6f5] = ' ';
      pcVar27[0x6f6] = '\x02';
      pcVar27[0x6fa] = '\0';
      pcVar27[0x6fb] = 'y';
      pcVar27[0x6f8] = '\0';
      pcVar27[0x6f9] = 'y';
      pcVar27[0x6fc] = '\0';
      pcVar27[0x6fd] = 'd';
      pcVar27[0x6fe] = '\x7f';
      pcVar27[0x702] = '\x7f';
      pcVar27[0x703] = '\x7f';
      pcVar27[0x704] = '\0';
      pcVar27[0x705] = ' ';
      pcVar27[0x706] = '\x02';
      pcVar27[0x70a] = '\0';
      pcVar27[0x70b] = 'y';
      pcVar27[0x708] = '\0';
      pcVar27[0x709] = 'y';
      pcVar27[0x70c] = '\0';
      pcVar27[0x70d] = 'd';
      pcVar27[0x70e] = '\x7f';
      pcVar27[0x712] = '\x7f';
      pcVar27[0x713] = '\x7f';
      pcVar27[0x714] = '\0';
      pcVar27[0x715] = ' ';
      pcVar27[0x716] = '\x02';
      pcVar27[0x71a] = '\0';
      pcVar27[0x71b] = 'y';
      pcVar27[0x718] = '\0';
      pcVar27[0x719] = 'y';
      pcVar27[0x71c] = '\0';
      pcVar27[0x71d] = 'd';
      pcVar27[0x71e] = '\x7f';
      pcVar27[0x722] = '\x7f';
      pcVar27[0x723] = '\x7f';
      pcVar27[0x724] = '\0';
      pcVar27[0x725] = ' ';
      pcVar27[0x726] = '\x02';
      pcVar27[0x72a] = '\0';
      pcVar27[0x72b] = 'y';
      pcVar27[0x728] = '\0';
      pcVar27[0x729] = 'y';
      pcVar27[0x72c] = '\0';
      pcVar27[0x72d] = 'd';
      pcVar27[0x72e] = '\x7f';
      pcVar27[0x732] = '\x7f';
      pcVar27[0x733] = '\x7f';
      pcVar27[0x734] = '\0';
      pcVar27[0x735] = ' ';
      pcVar27[0x736] = '\x02';
      pcVar27[0x73a] = '\0';
      pcVar27[0x73b] = 'y';
      pcVar27[0x738] = '\0';
      pcVar27[0x739] = 'y';
      pcVar27[0x73c] = '\0';
      pcVar27[0x73d] = 'd';
      pcVar27[0x73e] = '\x7f';
      pcVar27[0x742] = '\x7f';
      pcVar27[0x743] = '\x7f';
      pcVar27[0x744] = '\0';
      pcVar27[0x745] = ' ';
      pcVar27[0x746] = '\x02';
      pcVar27[0x74a] = '\0';
      pcVar27[0x74b] = 'y';
      pcVar27[0x748] = '\0';
      pcVar27[0x749] = 'y';
      pcVar27[0x74c] = '\0';
      pcVar27[0x74d] = 'd';
      pcVar27[0x74e] = '\x7f';
      pcVar27[0x752] = '\x7f';
      pcVar27[0x753] = '\x7f';
      pcVar27[0x754] = '\0';
      pcVar27[0x755] = ' ';
      pcVar27[0x756] = '\x02';
      pcVar27[0x75a] = '\0';
      pcVar27[0x75b] = 'y';
      pcVar27[0x758] = '\0';
      pcVar27[0x759] = 'y';
      pcVar27[0x75c] = '\0';
      pcVar27[0x75d] = 'd';
      pcVar27[0x75e] = '\x7f';
      pcVar27[0x762] = '\x7f';
      pcVar27[0x763] = '\x7f';
      pcVar27[0x764] = '\0';
      pcVar27[0x765] = ' ';
      pcVar27[0x766] = '\x02';
      pcVar27[0x76a] = '\0';
      pcVar27[0x76b] = 'x';
      pcVar27[0x768] = '\0';
      pcVar27[0x769] = 'x';
      pcVar27[0x76c] = '\0';
      pcVar27[0x76d] = 'd';
      pcVar27[0x76e] = '\x7f';
      pcVar27[0x772] = '\x7f';
      pcVar27[0x773] = '\x7f';
      pcVar27[0x774] = '\0';
      pcVar27[0x775] = ' ';
      pcVar27[0x776] = '\x02';
      pcVar27[0x77a] = '\0';
      pcVar27[0x77b] = 'y';
      pcVar27[0x778] = '\0';
      pcVar27[0x779] = 'y';
      pcVar27[0x77c] = '\0';
      pcVar27[0x77d] = 'd';
      pcVar27[0x77e] = '\x7f';
      pcVar27[0x782] = '\x7f';
      pcVar27[0x783] = '\x7f';
      pcVar27[0x784] = '\0';
      pcVar27[0x785] = ' ';
      pcVar27[0x786] = '\x02';
      pcVar27[0x78a] = '\0';
      pcVar27[0x78b] = 'y';
      pcVar27[0x788] = '\0';
      pcVar27[0x789] = 'y';
      pcVar27[0x78c] = '\0';
      pcVar27[0x78d] = 'd';
      pcVar27[0x78e] = '\x7f';
      pcVar27[0x792] = '\x7f';
      pcVar27[0x793] = '\x7f';
      pcVar27[0x794] = '\0';
      pcVar27[0x795] = ' ';
      pcVar27[0x796] = '\x02';
      pcVar27[0x79a] = '\0';
      pcVar27[0x79b] = 'y';
      pcVar27[0x798] = '\0';
      pcVar27[0x799] = 'y';
      pcVar27[0x79c] = '\0';
      pcVar27[0x79d] = 'd';
      pcVar27[0x79e] = '\x7f';
      pcVar27[0x7a2] = '\x7f';
      pcVar27[0x7a3] = '\x7f';
      pcVar27[0x7a4] = '\0';
      pcVar27[0x7a5] = ' ';
      pcVar27[0x7a6] = '\x02';
      pcVar27[0x7aa] = '\0';
      pcVar27[0x7ab] = 'y';
      pcVar27[0x7a8] = '\0';
      pcVar27[0x7a9] = 'y';
      pcVar27[0x7ac] = '\0';
      pcVar27[0x7ad] = 'd';
      pcVar27[0x7ae] = '\x7f';
      pcVar27[0x7b2] = '\x7f';
      pcVar27[0x7b3] = '\x7f';
      pcVar27[0x7b4] = '\0';
      pcVar27[0x7b5] = ' ';
      pcVar27[0x7b6] = '\x02';
      pcVar27[0x7ba] = '\0';
      pcVar27[0x7bb] = 'y';
      pcVar27[0x7b8] = '\0';
      pcVar27[0x7b9] = 'y';
      pcVar27[0x7bc] = '\0';
      pcVar27[0x7bd] = 'd';
      pcVar27[0x7be] = '\x7f';
      pcVar27[0x7c2] = '\x7f';
      pcVar27[0x7c3] = '\x7f';
      pcVar27[0x7c4] = '\0';
      pcVar27[0x7c5] = ' ';
      pcVar27[0x7c6] = '\x02';
      pcVar27[0x7ca] = '\0';
      pcVar27[0x7cb] = 'y';
      pcVar27[0x7c8] = '\0';
      pcVar27[0x7c9] = 'y';
      pcVar27[0x7cc] = '\0';
      pcVar27[0x7cd] = 'd';
      pcVar27[0x7ce] = '\x7f';
      pcVar27[0x7d2] = '\x7f';
      pcVar27[0x7d3] = '\x7f';
      pcVar27[0x7d4] = '\0';
      pcVar27[0x7d5] = ' ';
      pcVar27[0x7d6] = '\x02';
      *param_3 = (_MACNV_SEEK_INFO)0x7f;
      param_3[4] = (_MACNV_SEEK_INFO)0x40;
      *(undefined2 *)(param_3 + 2) = 0x2000;
      param_3[5] = (_MACNV_SEEK_INFO)0x4c;
      iVar11 = 0;
      do {
        if (iVar11 == 9) {
          param_3[0xf4] = (_MACNV_SEEK_INFO)0x80;
        }
        else {
          *p_Var20 = (_MACNV_SEEK_INFO)0x0;
        }
        p_Var20 = p_Var20 + 0x1a;
        iVar7 = iVar11 + 1;
        param_3[(long)iVar11 * 0x1a + 0xb] = (_MACNV_SEEK_INFO)0x0;
        param_3[(long)iVar11 * 0x1a + 0xc] = (_MACNV_SEEK_INFO)0x0;
        param_3[(long)iVar11 * 0x1a + 0xd] = (_MACNV_SEEK_INFO)0x64;
        param_3[(long)iVar11 * 0x1a + 0x18] = (_MACNV_SEEK_INFO)0x40;
        param_3[(long)iVar11 * 0x1a + 0xf] = (_MACNV_SEEK_INFO)0x7f;
        param_3[(long)iVar11 * 0x1a + 0x10] = (_MACNV_SEEK_INFO)0x0;
        *(undefined2 *)(param_3 + (long)iVar11 * 0x1a + 0x1c) = 0x2000;
        param_3[(long)iVar11 * 0x1a + 0x11] = (_MACNV_SEEK_INFO)0x2;
        param_3[(long)iVar11 * 0x1a + 0x12] = (_MACNV_SEEK_INFO)0x1;
        param_3[(long)iVar11 * 0x1a + 0x13] = (_MACNV_SEEK_INFO)0x40;
        *(undefined2 *)(param_3 + (long)iVar11 * 0x1a + 0x1e) = 0x2000;
        param_3[(long)iVar11 * 0x1a + 0x14] = (_MACNV_SEEK_INFO)0x40;
        param_3[(long)iVar11 * 0x1a + 0x15] = (_MACNV_SEEK_INFO)0x40;
        param_3[(long)iVar11 * 0x1a + 0x16] = (_MACNV_SEEK_INFO)0x7f;
        param_3[(long)iVar11 * 0x1a + 0x17] = (_MACNV_SEEK_INFO)0x28;
        param_3[(long)iVar11 * 0x1a + 0x19] = (_MACNV_SEEK_INFO)0x0;
        *(undefined2 *)(param_3 + (long)iVar11 * 0x1a + 0x20) = 0x40;
        param_3[(long)iVar11 * 0x1a + 8] = (_MACNV_SEEK_INFO)0x0;
        param_3[(long)iVar11 * 0x1a + 9] = (_MACNV_SEEK_INFO)0x0;
        iVar11 = iVar7;
      } while (iVar7 != 0x10);
      lVar26 = *(long *)(param_1 + 8);
      iVar11 = param_2 * 0x400;
      puVar1 = (ushort *)(lVar26 + 0x18);
      bVar4 = *(byte *)(lVar26 + 0x3c);
      uVar22 = (uint)bVar4;
      *(undefined4 *)(lVar26 + 0x58) = 0;
      uVar30 = 0;
      if (*(ushort *)(lVar26 + 0x18) != 0) {
        uVar30 = 0x7d000 / *(ushort *)(lVar26 + 0x18);
      }
      *(undefined4 *)(lVar26 + 0x5c) = 0;
      *(undefined4 *)(lVar26 + 0x60) = 0;
      *(uint *)(lVar26 + 0x6c) = uVar30;
      *(undefined4 *)(lVar26 + 0x70) = 0;
      uVar30 = (uint)bVar4;
      if (bVar4 != 0) {
        bVar4 = bVar4 - 1 & 3;
        *(undefined1 *)(lVar26 + 0x78) = 0;
        *(undefined4 *)(lVar26 + 0x88) = 0;
        *(undefined4 *)(lVar26 + 0x8c) = 0;
        if (*(int *)(lVar26 + 0x7c) != 0) {
          *(uint *)(lVar26 + 0x70) = *(uint *)(lVar26 + 0x70) | 1;
        }
        uVar14 = 1;
        puVar8 = (undefined1 *)(lVar26 + 0x90);
        if (uVar30 != 1) {
          if (bVar4 != 0) {
            if (bVar4 != 1) {
              if (bVar4 != 2) {
                *puVar8 = 0;
                *(undefined4 *)(lVar26 + 0xa0) = 0;
                *(undefined4 *)(lVar26 + 0xa4) = 0;
                if (*(int *)(lVar26 + 0x94) != 0) {
                  *(uint *)(lVar26 + 0x70) = *(uint *)(lVar26 + 0x70) | 2;
                }
                uVar14 = 2;
                puVar8 = (undefined1 *)(lVar26 + 0xa8);
              }
              *puVar8 = 0;
              *(undefined4 *)(puVar8 + 0x10) = 0;
              *(undefined4 *)(puVar8 + 0x14) = 0;
              if (*(int *)(puVar8 + 4) != 0) {
                *(uint *)(lVar26 + 0x70) = *(uint *)(lVar26 + 0x70) | (uint)(1L << uVar14);
              }
              uVar14 = (ulong)((int)uVar14 + 1);
              puVar8 = puVar8 + 0x18;
            }
            *puVar8 = 0;
            *(undefined4 *)(puVar8 + 0x10) = 0;
            *(undefined4 *)(puVar8 + 0x14) = 0;
            if (*(int *)(puVar8 + 4) != 0) {
              *(uint *)(lVar26 + 0x70) = *(uint *)(lVar26 + 0x70) | (uint)(1L << uVar14);
            }
            uVar21 = (int)uVar14 + 1;
            uVar14 = (ulong)uVar21;
            puVar8 = puVar8 + 0x18;
            if (uVar30 == uVar21) goto LAB_001d7be4;
          }
          do {
            *puVar8 = 0;
            *(undefined4 *)(puVar8 + 0x10) = 0;
            *(undefined4 *)(puVar8 + 0x14) = 0;
            if (*(int *)(puVar8 + 4) != 0) {
              *(uint *)(lVar26 + 0x70) = *(uint *)(lVar26 + 0x70) | (uint)(1L << (uVar14 & 0x3f));
            }
            puVar8[0x18] = 0;
            iVar7 = (int)uVar14;
            *(undefined4 *)(puVar8 + 0x28) = 0;
            *(undefined4 *)(puVar8 + 0x2c) = 0;
            if (*(int *)(puVar8 + 0x1c) != 0) {
              *(uint *)(lVar26 + 0x70) =
                   *(uint *)(lVar26 + 0x70) | (uint)(1L << ((ulong)(iVar7 + 1) & 0x3f));
            }
            puVar8[0x30] = 0;
            *(undefined4 *)(puVar8 + 0x40) = 0;
            *(undefined4 *)(puVar8 + 0x44) = 0;
            if (*(int *)(puVar8 + 0x34) != 0) {
              *(uint *)(lVar26 + 0x70) =
                   *(uint *)(lVar26 + 0x70) | (uint)(1L << ((ulong)(iVar7 + 2) & 0x3f));
            }
            puVar8[0x48] = 0;
            *(undefined4 *)(puVar8 + 0x58) = 0;
            *(undefined4 *)(puVar8 + 0x5c) = 0;
            if (*(int *)(puVar8 + 0x4c) != 0) {
              *(uint *)(lVar26 + 0x70) =
                   *(uint *)(lVar26 + 0x70) | (uint)(1L << ((ulong)(iVar7 + 3) & 0x3f));
            }
            uVar14 = (ulong)(iVar7 + 4U);
            puVar8 = puVar8 + 0x60;
          } while (uVar30 != iVar7 + 4U);
        }
      }
LAB_001d7be4:
      lVar23 = lVar26 + 0x3a8;
      *(long *)(lVar26 + 0x3b0) = lVar26 + 0x3c0;
      *(long *)(lVar26 + 0x3c8) = lVar26 + 0x3d8;
      *(long *)(lVar26 + 0x3d8) = lVar26 + 0x3c0;
      *(long *)(lVar26 + 0x3e0) = lVar26 + 0x3f0;
      *(long *)(lVar26 + 0x3f0) = lVar26 + 0x3d8;
      *(long *)(lVar26 + 0x3f8) = lVar26 + 0x408;
      *(long *)(lVar26 + 0x408) = lVar26 + 0x3f0;
      *(long *)(lVar26 + 0x410) = lVar26 + 0x420;
      *(long *)(lVar26 + 0x420) = lVar26 + 0x408;
      *(long *)(lVar26 + 0x438) = lVar26 + 0x420;
      *(long *)(lVar26 + 0x3a8) = lVar26 + 0x390;
      *(undefined1 *)(lVar26 + 0x3b8) = 0xff;
      *(undefined4 *)(lVar26 + 0x3bc) = 0xffffffff;
      *(long *)(lVar26 + 0x3c0) = lVar23;
      *(undefined1 *)(lVar26 + 0x3d0) = 0xff;
      *(undefined4 *)(lVar26 + 0x3d4) = 0xffffffff;
      *(undefined1 *)(lVar26 + 1000) = 0xff;
      *(undefined4 *)(lVar26 + 0x3ec) = 0xffffffff;
      *(undefined1 *)(lVar26 + 0x400) = 0xff;
      *(undefined4 *)(lVar26 + 0x404) = 0xffffffff;
      *(undefined1 *)(lVar26 + 0x418) = 0xff;
      piVar18 = (int *)(lVar26 + 0x8c);
      *(undefined4 *)(lVar26 + 0x41c) = 0xffffffff;
      uVar14 = 0;
      *(long *)(lVar26 + 0x428) = lVar26 + 0x438;
      *(undefined1 *)(lVar26 + 0x430) = 0xff;
      *(undefined4 *)(lVar26 + 0x434) = 0xffffffff;
      *(long *)(lVar26 + 0x440) = lVar26 + 0x450;
      *(undefined1 *)(lVar26 + 0x448) = 0xff;
      *(undefined4 *)(lVar26 + 0x44c) = 0xffffffff;
      *(long *)(lVar26 + 0x450) = lVar26 + 0x438;
      *(long *)(lVar26 + 0x458) = lVar26 + 0x468;
      *(undefined1 *)(lVar26 + 0x460) = 0xff;
      *(undefined4 *)(lVar26 + 0x464) = 0xffffffff;
      *(long *)(lVar26 + 0x468) = lVar26 + 0x450;
      *(long *)(lVar26 + 0x470) = lVar26 + 0x480;
      *(undefined1 *)(lVar26 + 0x478) = 0xff;
      *(undefined4 *)(lVar26 + 0x47c) = 0xffffffff;
      *(long *)(lVar26 + 0x480) = lVar26 + 0x468;
      *(long *)(lVar26 + 0x488) = lVar26 + 0x498;
      *(undefined1 *)(lVar26 + 0x490) = 0xff;
      *(undefined4 *)(lVar26 + 0x494) = 0xffffffff;
      *(long *)(lVar26 + 0x498) = lVar26 + 0x480;
      *(long *)(lVar26 + 0x4a0) = lVar26 + 0x4b0;
      *(undefined1 *)(lVar26 + 0x4a8) = 0xff;
      *(undefined4 *)(lVar26 + 0x4ac) = 0xffffffff;
      *(long *)(lVar26 + 0x4b0) = lVar26 + 0x498;
      *(long *)(lVar26 + 0x4b8) = lVar26 + 0x4c8;
      *(undefined1 *)(lVar26 + 0x4c0) = 0xff;
      *(undefined4 *)(lVar26 + 0x4c4) = 0xffffffff;
      *(long *)(lVar26 + 0x4c8) = lVar26 + 0x4b0;
      *(long *)(lVar26 + 0x4d0) = lVar26 + 0x4e0;
      *(undefined1 *)(lVar26 + 0x4d8) = 0xff;
      *(undefined4 *)(lVar26 + 0x4dc) = 0xffffffff;
      *(long *)(lVar26 + 0x4e0) = lVar26 + 0x4c8;
      *(long *)(lVar26 + 0x4e8) = lVar26 + 0x4f8;
      *(undefined1 *)(lVar26 + 0x4f0) = 0xff;
      *(undefined4 *)(lVar26 + 0x4f4) = 0xffffffff;
      *(long *)(lVar26 + 0x4f8) = lVar26 + 0x4e0;
      *(long *)(lVar26 + 0x500) = lVar26 + 0x510;
      *(undefined1 *)(lVar26 + 0x508) = 0xff;
      *(undefined4 *)(lVar26 + 0x50c) = 0xffffffff;
      *(long *)(lVar26 + 0x510) = lVar26 + 0x4f8;
      *(long *)(lVar26 + 0x518) = lVar26 + 0x528;
      *(undefined1 *)(lVar26 + 0x520) = 0xff;
      *(undefined4 *)(lVar26 + 0x524) = 0xffffffff;
      *(long *)(lVar26 + 0x528) = lVar26 + 0x510;
      *(long *)(lVar26 + 0x530) = lVar26 + 0x540;
      *(undefined1 *)(lVar26 + 0x538) = 0xff;
      *(undefined4 *)(lVar26 + 0x53c) = 0xffffffff;
      *(long *)(lVar26 + 0x540) = lVar26 + 0x528;
      *(long *)(lVar26 + 0x548) = lVar26 + 0x558;
      *(undefined1 *)(lVar26 + 0x550) = 0xff;
      *(undefined4 *)(lVar26 + 0x554) = 0xffffffff;
      *(long *)(lVar26 + 0x558) = lVar26 + 0x540;
      *(long *)(lVar26 + 0x560) = lVar26 + 0x570;
      *(undefined1 *)(lVar26 + 0x568) = 0xff;
      *(undefined4 *)(lVar26 + 0x56c) = 0xffffffff;
      *(long *)(lVar26 + 0x570) = lVar26 + 0x558;
      *(long *)(lVar26 + 0x578) = lVar26 + 0x588;
      *(undefined1 *)(lVar26 + 0x580) = 0xff;
      *(undefined4 *)(lVar26 + 0x584) = 0xffffffff;
      *(long *)(lVar26 + 0x588) = lVar26 + 0x570;
      *(long *)(lVar26 + 0x590) = lVar26 + 0x5a0;
      *(undefined1 *)(lVar26 + 0x598) = 0xff;
      *(undefined4 *)(lVar26 + 0x59c) = 0xffffffff;
      *(long *)(lVar26 + 0x5a0) = lVar26 + 0x588;
      *(long *)(lVar26 + 0x5a8) = lVar26 + 0x5b8;
      *(undefined1 *)(lVar26 + 0x5b0) = 0xff;
      *(undefined4 *)(lVar26 + 0x5b4) = 0xffffffff;
      *(long *)(lVar26 + 0x5b8) = lVar26 + 0x5a0;
      *(long *)(lVar26 + 0x5c0) = lVar26 + 0x5d0;
      *(undefined1 *)(lVar26 + 0x5c8) = 0xff;
      *(undefined4 *)(lVar26 + 0x5cc) = 0xffffffff;
      *(long *)(lVar26 + 0x5d0) = lVar26 + 0x5b8;
      *(long *)(lVar26 + 0x5d8) = lVar26 + 0x5e8;
      *(undefined1 *)(lVar26 + 0x5e0) = 0xff;
      *(undefined4 *)(lVar26 + 0x5e4) = 0xffffffff;
      *(long *)(lVar26 + 0x5e8) = lVar26 + 0x5d0;
      *(long *)(lVar26 + 0x5f0) = lVar26 + 0x600;
      *(undefined1 *)(lVar26 + 0x5f8) = 0xff;
      *(undefined4 *)(lVar26 + 0x5fc) = 0xffffffff;
      *(long *)(lVar26 + 0x600) = lVar26 + 0x5e8;
      *(long *)(lVar26 + 0x608) = lVar26 + 0x618;
      *(undefined1 *)(lVar26 + 0x610) = 0xff;
      *(undefined4 *)(lVar26 + 0x614) = 0xffffffff;
      *(long *)(lVar26 + 0x618) = lVar26 + 0x600;
      *(long *)(lVar26 + 0x620) = lVar26 + 0x630;
      *(undefined1 *)(lVar26 + 0x628) = 0xff;
      *(undefined4 *)(lVar26 + 0x62c) = 0xffffffff;
      *(long *)(lVar26 + 0x630) = lVar26 + 0x618;
      *(long *)(lVar26 + 0x638) = lVar26 + 0x648;
      *(undefined1 *)(lVar26 + 0x640) = 0xff;
      *(undefined4 *)(lVar26 + 0x644) = 0xffffffff;
      *(long *)(lVar26 + 0x648) = lVar26 + 0x630;
      *(long *)(lVar26 + 0x650) = lVar26 + 0x660;
      *(undefined1 *)(lVar26 + 0x658) = 0xff;
      *(undefined4 *)(lVar26 + 0x65c) = 0xffffffff;
      *(long *)(lVar26 + 0x660) = lVar26 + 0x648;
      *(long *)(lVar26 + 0x668) = lVar26 + 0x678;
      *(undefined1 *)(lVar26 + 0x670) = 0xff;
      *(undefined4 *)(lVar26 + 0x674) = 0xffffffff;
      *(long *)(lVar26 + 0x678) = lVar26 + 0x660;
      *(long *)(lVar26 + 0x680) = lVar26 + 0x690;
      *(undefined1 *)(lVar26 + 0x688) = 0xff;
      *(undefined4 *)(lVar26 + 0x68c) = 0xffffffff;
      *(long *)(lVar26 + 0x690) = lVar26 + 0x678;
      *(long *)(lVar26 + 0x698) = lVar26 + 0x6a8;
      *(undefined1 *)(lVar26 + 0x6a0) = 0xff;
      *(undefined4 *)(lVar26 + 0x6a4) = 0xffffffff;
      *(long *)(lVar26 + 0x6a8) = lVar26 + 0x690;
      *(long *)(lVar26 + 0x6b0) = lVar26 + 0x6c0;
      *(undefined1 *)(lVar26 + 0x6b8) = 0xff;
      *(undefined4 *)(lVar26 + 0x6bc) = 0xffffffff;
      *(undefined8 *)(lVar26 + 0x390) = 0;
      *(long *)(lVar26 + 0x398) = lVar23;
      *(long *)(lVar26 + 0x6c0) = lVar26 + 0x6a8;
      *(undefined8 *)(lVar26 + 0x6c8) = 0;
      *(long *)(lVar26 + 0x378) = lVar26 + 0x390;
      *(long *)(lVar26 + 0x380) = lVar23;
      *(long *)(lVar26 + 0x388) = lVar26 + 0x6c0;
      if (uVar30 != 0) {
        do {
          uVar30 = *(uint *)(lVar26 + 0x70);
          uVar21 = (uint)uVar14;
          if ((uVar30 >> (ulong)(uVar21 & 0x1f) & 1) != 0) {
            uVar13 = piVar18[-1];
            uVar12 = 0;
            uVar3 = piVar18[-4];
            uVar2 = uVar3 - uVar13 & 3;
            uVar16 = uVar13;
            if (uVar2 == 0) goto LAB_001d7f80;
            if (uVar13 < uVar3) {
              uVar16 = uVar13 + 1;
              piVar18[-1] = uVar16;
              bVar4 = *(byte *)(*(long *)(piVar18 + -3) + (ulong)uVar13);
              uVar12 = bVar4 & 0x7f;
              if (0x7f < bVar4) {
                if (uVar2 != 1) {
                  uVar15 = uVar16;
                  if (uVar2 != 2) {
                    uVar15 = uVar13 + 2;
                    piVar18[-1] = uVar15;
                    bVar4 = *(byte *)(*(long *)(piVar18 + -3) + (ulong)uVar16);
                    uVar12 = (bVar4 & 0x7f) + uVar12 * 0x80;
                    if (bVar4 < 0x80) goto LAB_001d8000;
                  }
                  uVar16 = uVar15 + 1;
                  piVar18[-1] = uVar16;
                  uVar12 = (*(byte *)(*(long *)(piVar18 + -3) + (ulong)uVar15) & 0x7f) +
                           uVar12 * 0x80;
                  if (*(byte *)(*(long *)(piVar18 + -3) + (ulong)uVar15) < 0x80) goto LAB_001d8000;
                }
LAB_001d7f80:
                do {
                  if (uVar3 <= uVar16) goto LAB_001d878c;
                  lVar23 = *(long *)(piVar18 + -3);
                  piVar18[-1] = uVar16 + 1;
                  uVar12 = (*(byte *)(lVar23 + (ulong)uVar16) & 0x7f) + uVar12 * 0x80;
                  if (*(byte *)(lVar23 + (ulong)uVar16) < 0x80) break;
                  piVar18[-1] = uVar16 + 2;
                  bVar4 = *(byte *)(lVar23 + (ulong)(uVar16 + 1));
                  uVar12 = (bVar4 & 0x7f) + uVar12 * 0x80;
                  if (bVar4 < 0x80) break;
                  piVar18[-1] = uVar16 + 3;
                  bVar4 = *(byte *)(lVar23 + (ulong)(uVar16 + 2));
                  uVar12 = (bVar4 & 0x7f) + uVar12 * 0x80;
                  if (bVar4 < 0x80) break;
                  uVar2 = uVar16 + 3;
                  uVar16 = uVar16 + 4;
                  piVar18[-1] = uVar16;
                  bVar4 = *(byte *)(lVar23 + (ulong)uVar2);
                  uVar12 = (bVar4 & 0x7f) + uVar12 * 0x80;
                } while (0x7f < bVar4);
              }
LAB_001d8000:
              *piVar18 = *piVar18 + uVar12;
              if (uVar22 == 1) break;
            }
            else {
LAB_001d878c:
              uVar30 = uVar30 & ((uint)(1L << (uVar14 & 0x3f)) ^ 0xffffffff);
              *(uint *)(lVar26 + 0x70) = uVar30;
              if (uVar22 == 1) break;
              if ((uVar30 >> (ulong)(uVar21 & 0x1f) & 1) == 0) goto LAB_001d80c8;
            }
            lVar23 = *(long *)(lVar26 + 0x380);
            plVar9 = *(long **)(lVar23 + 8);
            if (plVar9 != *(long **)(lVar26 + 0x388)) {
              *(long *)(lVar23 + 8) = plVar9[1];
              *(long *)plVar9[1] = lVar23;
              *(char *)(plVar9 + 2) = (char)uVar14;
              lVar23 = *(long *)(lVar26 + 0x378);
              iVar7 = *piVar18;
              *plVar9 = lVar23;
              plVar9[1] = *(long *)(lVar23 + 8);
              uVar30 = uVar21 + iVar7 * 0x20;
              plVar29 = *(long **)(lVar26 + 0x380);
              **(long **)(lVar23 + 8) = (long)plVar9;
              *(long **)(lVar23 + 8) = plVar9;
              lVar23 = *plVar9;
              *(long *)(lVar23 + 8) = plVar9[1];
              plVar32 = (long *)plVar9[1];
              *plVar32 = lVar23;
              *(uint *)((long)plVar9 + 0x14) = uVar30;
              plVar17 = plVar29;
              if ((plVar29 != plVar32) &&
                 (plVar17 = plVar32, *(uint *)((long)plVar32 + 0x14) < uVar30)) {
                do {
                  plVar32 = (long *)plVar32[1];
                  plVar17 = plVar29;
                  if (plVar29 == plVar32) break;
                  plVar17 = plVar32;
                } while (*(uint *)((long)plVar32 + 0x14) < uVar30);
                lVar23 = *plVar17;
              }
              *(long **)(lVar23 + 8) = plVar9;
              *plVar9 = lVar23;
              *plVar17 = (long)plVar9;
              plVar9[1] = (long)plVar17;
              uVar22 = (uint)*(byte *)(lVar26 + 0x3c);
            }
          }
LAB_001d80c8:
          uVar14 = (ulong)(uVar21 + 1);
          piVar18 = piVar18 + 6;
        } while ((int)(uVar21 + 1) < (int)uVar22);
      }
      *(undefined1 *)(lVar26 + 0xccc) = 0x4c;
      *(undefined1 *)(lVar26 + 0xccd) = 0x7f;
      *(undefined2 *)(lVar26 + 0xcd0) = 0x2000;
      *(undefined1 *)(lVar26 + 0xcce) = 0x40;
      *(undefined1 *)(lVar26 + 0xcd7) = 0;
      *(undefined2 *)(lVar26 + 0x6da) = 0x7900;
      *(undefined2 *)(lVar26 + 0x6d8) = 0x7900;
      *(undefined1 *)(lVar26 + 0x6dc) = 0;
      *(undefined1 *)(lVar26 + 0x6dd) = 100;
      *(undefined1 *)(lVar26 + 0x6de) = 0x7f;
      *(undefined2 *)(lVar26 + 0x6e2) = 0x7f7f;
      *(undefined2 *)(lVar26 + 0x6e4) = 0x2000;
      *(undefined1 *)(lVar26 + 0x6e6) = 2;
      *(undefined2 *)(lVar26 + 0x6ea) = 0x7900;
      *(undefined2 *)(lVar26 + 0x6e8) = 0x7900;
      *(undefined1 *)(lVar26 + 0x6ec) = 0;
      *(undefined1 *)(lVar26 + 0x6ed) = 100;
      *(undefined1 *)(lVar26 + 0x6ee) = 0x7f;
      *(undefined2 *)(lVar26 + 0x6f2) = 0x7f7f;
      *(undefined2 *)(lVar26 + 0x6f4) = 0x2000;
      *(undefined1 *)(lVar26 + 0x6f6) = 2;
      *(undefined2 *)(lVar26 + 0x6fa) = 0x7900;
      *(undefined2 *)(lVar26 + 0x6f8) = 0x7900;
      *(undefined1 *)(lVar26 + 0x6fc) = 0;
      *(undefined1 *)(lVar26 + 0x6fd) = 100;
      *(undefined1 *)(lVar26 + 0x6fe) = 0x7f;
      *(undefined2 *)(lVar26 + 0x702) = 0x7f7f;
      *(undefined2 *)(lVar26 + 0x704) = 0x2000;
      *(undefined1 *)(lVar26 + 0x706) = 2;
      *(undefined2 *)(lVar26 + 0x70a) = 0x7900;
      *(undefined2 *)(lVar26 + 0x708) = 0x7900;
      *(undefined1 *)(lVar26 + 0x70c) = 0;
      *(undefined1 *)(lVar26 + 0x70d) = 100;
      *(undefined1 *)(lVar26 + 0x70e) = 0x7f;
      *(undefined2 *)(lVar26 + 0x712) = 0x7f7f;
      *(undefined2 *)(lVar26 + 0x714) = 0x2000;
      *(undefined1 *)(lVar26 + 0x716) = 2;
      *(undefined2 *)(lVar26 + 0x71a) = 0x7900;
      *(undefined2 *)(lVar26 + 0x718) = 0x7900;
      *(undefined1 *)(lVar26 + 0x71c) = 0;
      *(undefined1 *)(lVar26 + 0x71d) = 100;
      *(undefined1 *)(lVar26 + 0x71e) = 0x7f;
      *(undefined2 *)(lVar26 + 0x722) = 0x7f7f;
      *(undefined2 *)(lVar26 + 0x724) = 0x2000;
      *(undefined1 *)(lVar26 + 0x726) = 2;
      *(undefined2 *)(lVar26 + 0x72a) = 0x7900;
      *(undefined2 *)(lVar26 + 0x728) = 0x7900;
      *(undefined1 *)(lVar26 + 0x72c) = 0;
      *(undefined1 *)(lVar26 + 0x72d) = 100;
      *(undefined1 *)(lVar26 + 0x72e) = 0x7f;
      *(undefined2 *)(lVar26 + 0x732) = 0x7f7f;
      *(undefined2 *)(lVar26 + 0x734) = 0x2000;
      *(undefined1 *)(lVar26 + 0x736) = 2;
      *(undefined2 *)(lVar26 + 0x73a) = 0x7900;
      *(undefined2 *)(lVar26 + 0x738) = 0x7900;
      *(undefined1 *)(lVar26 + 0x73c) = 0;
      *(undefined1 *)(lVar26 + 0x73d) = 100;
      *(undefined1 *)(lVar26 + 0x73e) = 0x7f;
      *(undefined2 *)(lVar26 + 0x742) = 0x7f7f;
      *(undefined2 *)(lVar26 + 0x744) = 0x2000;
      *(undefined1 *)(lVar26 + 0x746) = 2;
      *(undefined2 *)(lVar26 + 0x74a) = 0x7900;
      *(undefined2 *)(lVar26 + 0x748) = 0x7900;
      *(undefined1 *)(lVar26 + 0x74c) = 0;
      *(undefined1 *)(lVar26 + 0x74d) = 100;
      *(undefined1 *)(lVar26 + 0x74e) = 0x7f;
      *(undefined2 *)(lVar26 + 0x752) = 0x7f7f;
      *(undefined2 *)(lVar26 + 0x754) = 0x2000;
      *(undefined1 *)(lVar26 + 0x756) = 2;
      *(undefined2 *)(lVar26 + 0x75a) = 0x7900;
      *(undefined2 *)(lVar26 + 0x758) = 0x7900;
      *(undefined1 *)(lVar26 + 0x75c) = 0;
      *(undefined1 *)(lVar26 + 0x75d) = 100;
      *(undefined1 *)(lVar26 + 0x75e) = 0x7f;
      *(undefined2 *)(lVar26 + 0x762) = 0x7f7f;
      *(undefined2 *)(lVar26 + 0x764) = 0x2000;
      *(undefined1 *)(lVar26 + 0x766) = 2;
      *(undefined2 *)(lVar26 + 0x76a) = 0x7800;
      *(undefined2 *)(lVar26 + 0x768) = 0x7800;
      *(undefined1 *)(lVar26 + 0x76c) = 0;
      *(undefined1 *)(lVar26 + 0x76d) = 100;
      *(undefined1 *)(lVar26 + 0x76e) = 0x7f;
      *(undefined2 *)(lVar26 + 0x772) = 0x7f7f;
      *(undefined2 *)(lVar26 + 0x774) = 0x2000;
      *(undefined1 *)(lVar26 + 0x776) = 2;
      *(undefined2 *)(lVar26 + 0x77a) = 0x7900;
      *(undefined2 *)(lVar26 + 0x778) = 0x7900;
      *(undefined1 *)(lVar26 + 0x77c) = 0;
      *(undefined1 *)(lVar26 + 0x77d) = 100;
      *(undefined1 *)(lVar26 + 0x77e) = 0x7f;
      *(undefined2 *)(lVar26 + 0x782) = 0x7f7f;
      *(undefined2 *)(lVar26 + 0x784) = 0x2000;
      *(undefined1 *)(lVar26 + 0x786) = 2;
      *(undefined2 *)(lVar26 + 0x78a) = 0x7900;
      *(undefined2 *)(lVar26 + 0x788) = 0x7900;
      *(undefined1 *)(lVar26 + 0x78c) = 0;
      *(undefined1 *)(lVar26 + 0x78d) = 100;
      *(undefined1 *)(lVar26 + 0x78e) = 0x7f;
      *(undefined2 *)(lVar26 + 0x792) = 0x7f7f;
      *(undefined2 *)(lVar26 + 0x794) = 0x2000;
      *(undefined1 *)(lVar26 + 0x796) = 2;
      *(undefined2 *)(lVar26 + 0x79a) = 0x7900;
      *(undefined2 *)(lVar26 + 0x798) = 0x7900;
      *(undefined1 *)(lVar26 + 0x79c) = 0;
      *(undefined1 *)(lVar26 + 0x79d) = 100;
      *(undefined1 *)(lVar26 + 0x79e) = 0x7f;
      *(undefined2 *)(lVar26 + 0x7a2) = 0x7f7f;
      *(undefined2 *)(lVar26 + 0x7a4) = 0x2000;
      *(undefined1 *)(lVar26 + 0x7a6) = 2;
      *(undefined2 *)(lVar26 + 0x7aa) = 0x7900;
      *(undefined2 *)(lVar26 + 0x7a8) = 0x7900;
      *(undefined1 *)(lVar26 + 0x7ac) = 0;
      *(undefined1 *)(lVar26 + 0x7ad) = 100;
      *(undefined1 *)(lVar26 + 0x7ae) = 0x7f;
      *(undefined2 *)(lVar26 + 0x7b2) = 0x7f7f;
      *(undefined2 *)(lVar26 + 0x7b4) = 0x2000;
      *(undefined1 *)(lVar26 + 0x7b6) = 2;
      *(undefined2 *)(lVar26 + 0x7ba) = 0x7900;
      *(undefined2 *)(lVar26 + 0x7b8) = 0x7900;
      *(undefined1 *)(lVar26 + 0x7bc) = 0;
      *(undefined1 *)(lVar26 + 0x7bd) = 100;
      *(undefined1 *)(lVar26 + 0x7be) = 0x7f;
      *(undefined2 *)(lVar26 + 0x7c2) = 0x7f7f;
      *(undefined2 *)(lVar26 + 0x7c4) = 0x2000;
      *(undefined1 *)(lVar26 + 0x7c6) = 2;
      *(undefined2 *)(lVar26 + 0x7ca) = 0x7900;
      *(undefined2 *)(lVar26 + 0x7c8) = 0x7900;
      *(undefined1 *)(lVar26 + 0x7cc) = 0;
      *(undefined1 *)(lVar26 + 0x7cd) = 100;
      *(undefined1 *)(lVar26 + 0x7ce) = 0x7f;
      *(undefined2 *)(lVar26 + 0x7d2) = 0x7f7f;
      *(undefined2 *)(lVar26 + 0x7d4) = 0x2000;
      *(undefined1 *)(lVar26 + 0x7d6) = 2;
      if (*(char *)(lVar26 + 0x3e) == '\x01') {
LAB_001d8d7c:
        uVar30 = *(uint *)(lVar26 + 0x88);
        if (uVar30 < *(uint *)(lVar26 + 0x40)) {
          cVar19 = *(char *)(lVar26 + 0x3c);
          if (cVar19 == '\x01') {
            uVar14 = 0;
          }
          else {
            lVar23 = *(long *)(*(long *)(lVar26 + 0x378) + 8);
            if (*(long *)(lVar26 + 0x388) == lVar23) goto LAB_001d8320;
            uVar14 = (ulong)*(byte *)(lVar23 + 0x10);
            uVar30 = *(uint *)(puVar1 + uVar14 * 0xc + 0x38);
          }
          uVar25 = (ulong)uVar30;
          uVar22 = uVar30 + 1;
          uVar24 = (ulong)uVar22;
          *(undefined4 *)(lVar26 + 0x58) = *(undefined4 *)(puVar1 + uVar14 * 0xc + 0x3a);
          *(uint *)(puVar1 + uVar14 * 0xc + 0x38) = uVar22;
          bVar4 = *(byte *)(*(long *)(puVar1 + uVar14 * 0xc + 0x34) + uVar25);
          if (bVar4 < 0xf0) {
            if ((char)bVar4 < '\0') {
              *(byte *)(puVar1 + uVar14 * 0xc + 0x30) = bVar4;
              uVar24 = (ulong)(*(uint *)(puVar1 + uVar14 * 0xc + 0x38) + 1);
              uVar25 = (ulong)*(uint *)(puVar1 + uVar14 * 0xc + 0x38);
            }
            else {
              bVar4 = (byte)puVar1[uVar14 * 0xc + 0x30];
              *(uint *)(puVar1 + uVar14 * 0xc + 0x38) = uVar30;
            }
            iVar7 = FUN_001d1ad8(lVar26,param_3,bVar4 >> 4,bVar4 & 0xf,
                                 *(undefined1 *)(*(long *)(puVar1 + uVar14 * 0xc + 0x34) + uVar25),
                                 *(undefined1 *)(*(long *)(puVar1 + uVar14 * 0xc + 0x34) + uVar24));
            *(int *)(puVar1 + uVar14 * 0xc + 0x38) = iVar7 + *(int *)(puVar1 + uVar14 * 0xc + 0x38);
            cVar19 = *(char *)(lVar26 + 0x3c);
            uVar30 = *(uint *)(lVar26 + 0x70);
            goto LAB_001d8e38;
          }
          switch(bVar4) {
          case 0xf0:
            uVar30 = 0;
            lVar23 = *(long *)(puVar1 + uVar14 * 0xc + 0x34);
            do {
              iVar7 = (int)uVar24;
              uVar22 = iVar7 + 1;
              *(uint *)(puVar1 + uVar14 * 0xc + 0x38) = uVar22;
              uVar30 = (*(byte *)(lVar23 + uVar24) & 0x7f) + uVar30 * 0x80;
              uVar21 = uVar22;
              if (-1 < (char)*(byte *)(lVar23 + uVar24)) break;
              uVar21 = iVar7 + 2;
              *(uint *)(puVar1 + uVar14 * 0xc + 0x38) = uVar21;
              uVar30 = (*(byte *)(lVar23 + (ulong)uVar22) & 0x7f) + uVar30 * 0x80;
              if (-1 < (char)*(byte *)(lVar23 + (ulong)uVar22)) break;
              uVar21 = iVar7 + 3;
              *(uint *)(puVar1 + uVar14 * 0xc + 0x38) = uVar21;
              bVar4 = *(byte *)(lVar23 + (ulong)(iVar7 + 2));
              uVar30 = (bVar4 & 0x7f) + uVar30 * 0x80;
              if (-1 < (char)bVar4) break;
              uVar21 = iVar7 + 4;
              *(uint *)(puVar1 + uVar14 * 0xc + 0x38) = uVar21;
              uVar24 = (ulong)uVar21;
              bVar4 = *(byte *)(lVar23 + (ulong)(iVar7 + 3));
              uVar30 = (bVar4 & 0x7f) + uVar30 * 0x80;
            } while ((char)bVar4 < '\0');
            uVar22 = uVar30 - 1;
            if (3 < uVar22) {
              lVar23 = *(long *)(puVar1 + uVar14 * 0xc + 0x34) + (ulong)uVar21;
              cVar5 = *(char *)(*(long *)(puVar1 + uVar14 * 0xc + 0x34) + (ulong)uVar21);
              if (cVar5 == '~') {
                if ((*(char *)(lVar23 + 1) == '\x7f') && (*(char *)(lVar23 + 2) == '\t')) {
                  cVar5 = *(char *)(lVar23 + 3);
joined_r0x001d9994:
                  if (((byte)(cVar5 - 1U) < 3) && (uVar22 == 4)) {
                    *(undefined1 *)(lVar26 + 0xccc) = 0x4c;
                    *(undefined1 *)(lVar26 + 0xccd) = 0x7f;
                    *(undefined1 *)(lVar26 + 0xcce) = 0x40;
                    *(undefined2 *)(lVar26 + 0xcd0) = 0x2000;
                    *(undefined1 *)(lVar26 + 0xcd7) = 0;
                    *(undefined2 *)(lVar26 + 0x6d8) = 0x7900;
                    *(undefined2 *)(lVar26 + 0x6da) = 0x7900;
                    *(undefined1 *)(lVar26 + 0x6dc) = 0;
                    *(undefined1 *)(lVar26 + 0x6dd) = 100;
                    *(undefined1 *)(lVar26 + 0x6de) = 0x7f;
                    *(undefined2 *)(lVar26 + 0x6e2) = 0x7f7f;
                    *(undefined2 *)(lVar26 + 0x6e4) = 0x2000;
                    *(undefined1 *)(lVar26 + 0x6e6) = 2;
                    *(undefined2 *)(lVar26 + 0x6e8) = 0x7900;
                    *(undefined2 *)(lVar26 + 0x6ea) = 0x7900;
                    *(undefined1 *)(lVar26 + 0x6ec) = 0;
                    *(undefined1 *)(lVar26 + 0x6ed) = 100;
                    *(undefined1 *)(lVar26 + 0x6ee) = 0x7f;
                    *(undefined2 *)(lVar26 + 0x6f2) = 0x7f7f;
                    *(undefined2 *)(lVar26 + 0x6f4) = 0x2000;
                    *(undefined1 *)(lVar26 + 0x6f6) = 2;
                    *(undefined2 *)(lVar26 + 0x6f8) = 0x7900;
                    *(undefined2 *)(lVar26 + 0x6fa) = 0x7900;
                    *(undefined1 *)(lVar26 + 0x6fc) = 0;
                    *(undefined1 *)(lVar26 + 0x6fd) = 100;
                    *(undefined1 *)(lVar26 + 0x6fe) = 0x7f;
                    *(undefined2 *)(lVar26 + 0x702) = 0x7f7f;
                    *(undefined2 *)(lVar26 + 0x704) = 0x2000;
                    *(undefined1 *)(lVar26 + 0x706) = 2;
                    *(undefined2 *)(lVar26 + 0x708) = 0x7900;
                    *(undefined2 *)(lVar26 + 0x70a) = 0x7900;
                    *(undefined1 *)(lVar26 + 0x70c) = 0;
                    *(undefined1 *)(lVar26 + 0x70d) = 100;
                    *(undefined1 *)(lVar26 + 0x70e) = 0x7f;
                    *(undefined2 *)(lVar26 + 0x712) = 0x7f7f;
                    *(undefined2 *)(lVar26 + 0x714) = 0x2000;
                    *(undefined1 *)(lVar26 + 0x716) = 2;
                    *(undefined2 *)(lVar26 + 0x718) = 0x7900;
                    *(undefined2 *)(lVar26 + 0x71a) = 0x7900;
                    *(undefined1 *)(lVar26 + 0x71c) = 0;
                    *(undefined1 *)(lVar26 + 0x71d) = 100;
                    *(undefined1 *)(lVar26 + 0x71e) = 0x7f;
                    *(undefined2 *)(lVar26 + 0x722) = 0x7f7f;
                    *(undefined2 *)(lVar26 + 0x724) = 0x2000;
                    *(undefined1 *)(lVar26 + 0x726) = 2;
                    *(undefined2 *)(lVar26 + 0x728) = 0x7900;
                    *(undefined2 *)(lVar26 + 0x72a) = 0x7900;
                    *(undefined1 *)(lVar26 + 0x72c) = 0;
                    *(undefined1 *)(lVar26 + 0x72d) = 100;
                    *(undefined1 *)(lVar26 + 0x72e) = 0x7f;
                    *(undefined2 *)(lVar26 + 0x732) = 0x7f7f;
                    *(undefined2 *)(lVar26 + 0x734) = 0x2000;
                    *(undefined1 *)(lVar26 + 0x736) = 2;
                    *(undefined2 *)(lVar26 + 0x738) = 0x7900;
                    *(undefined2 *)(lVar26 + 0x73a) = 0x7900;
                    *(undefined1 *)(lVar26 + 0x73c) = 0;
                    *(undefined1 *)(lVar26 + 0x73d) = 100;
                    *(undefined1 *)(lVar26 + 0x73e) = 0x7f;
                    *(undefined2 *)(lVar26 + 0x742) = 0x7f7f;
                    *(undefined2 *)(lVar26 + 0x744) = 0x2000;
                    *(undefined1 *)(lVar26 + 0x746) = 2;
                    *(undefined2 *)(lVar26 + 0x748) = 0x7900;
                    *(undefined2 *)(lVar26 + 0x74a) = 0x7900;
                    *(undefined1 *)(lVar26 + 0x74c) = 0;
                    *(undefined1 *)(lVar26 + 0x74d) = 100;
                    *(undefined1 *)(lVar26 + 0x74e) = 0x7f;
                    *(undefined2 *)(lVar26 + 0x752) = 0x7f7f;
                    *(undefined2 *)(lVar26 + 0x754) = 0x2000;
                    *(undefined1 *)(lVar26 + 0x756) = 2;
                    *(undefined2 *)(lVar26 + 0x758) = 0x7900;
                    *(undefined2 *)(lVar26 + 0x75a) = 0x7900;
                    *(undefined1 *)(lVar26 + 0x75c) = 0;
                    *(undefined1 *)(lVar26 + 0x75d) = 100;
                    *(undefined1 *)(lVar26 + 0x75e) = 0x7f;
                    *(undefined2 *)(lVar26 + 0x762) = 0x7f7f;
                    *(undefined2 *)(lVar26 + 0x764) = 0x2000;
                    *(undefined1 *)(lVar26 + 0x766) = 2;
                    *(undefined2 *)(lVar26 + 0x768) = 0x7800;
                    *(undefined2 *)(lVar26 + 0x76a) = 0x7800;
                    *(undefined1 *)(lVar26 + 0x76c) = 0;
                    *(undefined1 *)(lVar26 + 0x76d) = 100;
                    *(undefined1 *)(lVar26 + 0x76e) = 0x7f;
                    *(undefined2 *)(lVar26 + 0x772) = 0x7f7f;
                    *(undefined2 *)(lVar26 + 0x774) = 0x2000;
                    *(undefined1 *)(lVar26 + 0x776) = 2;
                    *(undefined2 *)(lVar26 + 0x778) = 0x7900;
                    *(undefined2 *)(lVar26 + 0x77a) = 0x7900;
                    *(undefined1 *)(lVar26 + 0x77c) = 0;
                    *(undefined1 *)(lVar26 + 0x77d) = 100;
                    *(undefined1 *)(lVar26 + 0x77e) = 0x7f;
                    *(undefined2 *)(lVar26 + 0x782) = 0x7f7f;
                    *(undefined2 *)(lVar26 + 0x784) = 0x2000;
                    *(undefined1 *)(lVar26 + 0x786) = 2;
                    *(undefined2 *)(lVar26 + 0x788) = 0x7900;
                    *(undefined2 *)(lVar26 + 0x78a) = 0x7900;
                    *(undefined1 *)(lVar26 + 0x78c) = 0;
                    *(undefined1 *)(lVar26 + 0x78d) = 100;
                    *(undefined1 *)(lVar26 + 0x78e) = 0x7f;
                    *(undefined2 *)(lVar26 + 0x792) = 0x7f7f;
                    *(undefined2 *)(lVar26 + 0x794) = 0x2000;
                    *(undefined1 *)(lVar26 + 0x796) = 2;
                    *(undefined2 *)(lVar26 + 0x798) = 0x7900;
                    *(undefined2 *)(lVar26 + 0x79a) = 0x7900;
                    *(undefined1 *)(lVar26 + 0x79c) = 0;
                    *(undefined1 *)(lVar26 + 0x79d) = 100;
                    *(undefined1 *)(lVar26 + 0x79e) = 0x7f;
                    *(undefined2 *)(lVar26 + 0x7a2) = 0x7f7f;
                    *(undefined2 *)(lVar26 + 0x7a4) = 0x2000;
                    *(undefined1 *)(lVar26 + 0x7a6) = 2;
                    *(undefined2 *)(lVar26 + 0x7a8) = 0x7900;
                    *(undefined2 *)(lVar26 + 0x7aa) = 0x7900;
                    *(undefined1 *)(lVar26 + 0x7ac) = 0;
                    *(undefined1 *)(lVar26 + 0x7ad) = 100;
                    *(undefined1 *)(lVar26 + 0x7ae) = 0x7f;
                    *(undefined2 *)(lVar26 + 0x7b2) = 0x7f7f;
                    *(undefined2 *)(lVar26 + 0x7b4) = 0x2000;
                    *(undefined1 *)(lVar26 + 0x7b6) = 2;
                    *(undefined2 *)(lVar26 + 0x7b8) = 0x7900;
                    *(undefined2 *)(lVar26 + 0x7ba) = 0x7900;
                    *(undefined1 *)(lVar26 + 0x7bc) = 0;
                    *(undefined1 *)(lVar26 + 0x7bd) = 100;
                    *(undefined1 *)(lVar26 + 0x7be) = 0x7f;
                    *(undefined2 *)(lVar26 + 0x7c2) = 0x7f7f;
                    *(undefined2 *)(lVar26 + 0x7c4) = 0x2000;
                    *(undefined1 *)(lVar26 + 0x7c6) = 2;
                    *(undefined2 *)(lVar26 + 0x7c8) = 0x7900;
                    *(undefined2 *)(lVar26 + 0x7ca) = 0x7900;
                    *(undefined1 *)(lVar26 + 0x7cc) = 0;
                    *(undefined1 *)(lVar26 + 0x7cd) = 100;
                    *(undefined1 *)(lVar26 + 0x7ce) = 0x7f;
                    *(undefined2 *)(lVar26 + 0x7d2) = 0x7f7f;
                    *(undefined2 *)(lVar26 + 0x7d4) = 0x2000;
                    *(undefined1 *)(lVar26 + 0x7d6) = 2;
                  }
                }
              }
              else if (cVar5 == '\x7f') {
                if (*(char *)(lVar23 + 1) == '\x7f') {
                  cVar5 = *(char *)(lVar23 + 2);
joined_r0x001d995c:
                  if ((cVar5 == '\x04') && (uVar22 == 6)) {
                    cVar5 = *(char *)(lVar23 + 3);
                    if (cVar5 == '\x03') {
                      *(ushort *)(lVar26 + 0xcd0) =
                           (*(byte *)(lVar23 + 6) & 0x7f) + (*(byte *)(lVar23 + 5) & 0x7f) * 0x80;
                    }
                    else if (cVar5 == '\x04') {
                      *(byte *)(lVar26 + 0xcce) = *(byte *)(lVar23 + 5) & 0x7f;
                    }
                    else if (cVar5 == '\x01') {
                      *(byte *)(lVar26 + 0xccd) = *(byte *)(lVar23 + 5) & 0x7f;
                    }
                  }
                }
              }
              else if (((cVar5 == 'C') && (*(char *)(lVar23 + 1) == 'y')) &&
                      (*(char *)(lVar23 + 2) == '\x06')) {
                cVar5 = *(char *)(lVar23 + 3);
joined_r0x001d9938:
                if (((cVar5 == '\x7f') && (uVar22 == 6)) && (*(char *)(lVar23 + 4) == '\0')) {
                  *(byte *)(lVar26 + 0xccc) = *(byte *)(lVar23 + 5) & 0x7f;
                }
              }
            }
            goto LAB_001d9340;
          case 0xf1:
          case 0xf3:
            *(uint *)(puVar1 + uVar14 * 0xc + 0x38) = uVar30 + 2;
            uVar30 = *(uint *)(lVar26 + 0x70);
            break;
          case 0xf2:
            *(uint *)(puVar1 + uVar14 * 0xc + 0x38) = uVar30 + 3;
            uVar30 = *(uint *)(lVar26 + 0x70);
            goto LAB_001d902c;
          default:
            uVar30 = *(uint *)(lVar26 + 0x70);
LAB_001d902c:
            uVar22 = uVar30 >> (ulong)((uint)uVar14 & 0x1f);
            goto joined_r0x001d9034;
          case 0xf7:
            uVar30 = 0;
            lVar23 = *(long *)(puVar1 + uVar14 * 0xc + 0x34);
            do {
              iVar7 = (int)uVar24;
              uVar22 = iVar7 + 1;
              *(uint *)(puVar1 + uVar14 * 0xc + 0x38) = uVar22;
              uVar30 = (*(byte *)(lVar23 + uVar24) & 0x7f) + uVar30 * 0x80;
              uVar21 = uVar22;
              if (-1 < (char)*(byte *)(lVar23 + uVar24)) break;
              uVar21 = iVar7 + 2;
              *(uint *)(puVar1 + uVar14 * 0xc + 0x38) = uVar21;
              uVar30 = (*(byte *)(lVar23 + (ulong)uVar22) & 0x7f) + uVar30 * 0x80;
              if (-1 < (char)*(byte *)(lVar23 + (ulong)uVar22)) break;
              uVar21 = iVar7 + 3;
              *(uint *)(puVar1 + uVar14 * 0xc + 0x38) = uVar21;
              bVar4 = *(byte *)(lVar23 + (ulong)(iVar7 + 2));
              uVar30 = (bVar4 & 0x7f) + uVar30 * 0x80;
              if (-1 < (char)bVar4) break;
              uVar21 = iVar7 + 4;
              *(uint *)(puVar1 + uVar14 * 0xc + 0x38) = uVar21;
              uVar24 = (ulong)uVar21;
              bVar4 = *(byte *)(lVar23 + (ulong)(iVar7 + 3));
              uVar30 = (bVar4 & 0x7f) + uVar30 * 0x80;
            } while ((char)bVar4 < '\0');
            if (3 < uVar30) {
              lVar23 = *(long *)(puVar1 + uVar14 * 0xc + 0x34) + (ulong)uVar21;
              cVar5 = *(char *)(*(long *)(puVar1 + uVar14 * 0xc + 0x34) + (ulong)uVar21);
              uVar22 = uVar30;
              if (cVar5 == '~') {
                if ((*(char *)(lVar23 + 1) == '\x7f') && (*(char *)(lVar23 + 2) == '\t')) {
                  cVar5 = *(char *)(lVar23 + 3);
                  goto joined_r0x001d9994;
                }
              }
              else if (cVar5 == '\x7f') {
                if (*(char *)(lVar23 + 1) == '\x7f') {
                  cVar5 = *(char *)(lVar23 + 2);
                  goto joined_r0x001d995c;
                }
              }
              else if (((cVar5 == 'C') && (*(char *)(lVar23 + 1) == 'y')) &&
                      (*(char *)(lVar23 + 2) == '\x06')) {
                cVar5 = *(char *)(lVar23 + 3);
                goto joined_r0x001d9938;
              }
            }
LAB_001d9340:
            *(uint *)(puVar1 + uVar14 * 0xc + 0x38) = uVar21 + uVar30;
            uVar30 = *(uint *)(lVar26 + 0x70);
            break;
          case 0xff:
            uVar30 = uVar30 + 2;
            iVar7 = 0;
            lVar23 = *(long *)(puVar1 + uVar14 * 0xc + 0x34);
            *(uint *)(puVar1 + uVar14 * 0xc + 0x38) = uVar30;
            cVar5 = *(char *)(lVar23 + (ulong)uVar22);
            do {
              uVar22 = uVar30 + 1;
              *(uint *)(puVar1 + uVar14 * 0xc + 0x38) = uVar22;
              iVar7 = (*(byte *)(lVar23 + (ulong)uVar30) & 0x7f) + iVar7 * 0x80;
              uVar21 = uVar22;
              if (-1 < (char)*(byte *)(lVar23 + (ulong)uVar30)) break;
              *(uint *)(puVar1 + uVar14 * 0xc + 0x38) = uVar30 + 2;
              iVar7 = (*(byte *)(lVar23 + (ulong)uVar22) & 0x7f) + iVar7 * 0x80;
              uVar21 = uVar30 + 2;
              if (-1 < (char)*(byte *)(lVar23 + (ulong)uVar22)) break;
              *(uint *)(puVar1 + uVar14 * 0xc + 0x38) = uVar30 + 3;
              uVar22 = uVar30 + 3;
              bVar4 = *(byte *)(lVar23 + (ulong)(uVar30 + 2));
              iVar7 = (bVar4 & 0x7f) + iVar7 * 0x80;
              uVar21 = uVar30 + 3;
              if (-1 < (char)bVar4) break;
              uVar30 = uVar30 + 4;
              *(uint *)(puVar1 + uVar14 * 0xc + 0x38) = uVar30;
              bVar4 = *(byte *)(lVar23 + (ulong)uVar22);
              iVar7 = (bVar4 & 0x7f) + iVar7 * 0x80;
              uVar21 = uVar30;
            } while ((char)bVar4 < '\0');
            if (cVar5 == 'Q') {
              if (1 < iVar7 - 3U) goto LAB_001d98ec;
              lVar23 = *(long *)(puVar1 + uVar14 * 0xc + 0x34);
              uVar30 = *(uint *)(lVar26 + 0x70);
              uVar22 = 0;
              if (*puVar1 != 0) {
                uVar22 = ((((uint)*(byte *)(lVar23 + (ulong)(uVar21 + 2)) +
                            (uint)*(byte *)(lVar23 + (ulong)uVar21) * 0x10000 +
                           (uint)*(byte *)(lVar23 + (ulong)(uVar21 + 1)) * 0x100) * 0x100) / 0x7d) /
                         (uint)*puVar1;
              }
              *(uint *)(lVar26 + 0x6c) = uVar22 + 1 >> 1;
            }
            else if (cVar5 == '\x7f') {
LAB_001d98ec:
              uVar30 = *(uint *)(lVar26 + 0x70);
            }
            else {
              uVar30 = *(uint *)(lVar26 + 0x70);
              if (cVar5 == '/') {
                uVar30 = uVar30 & ((uint)(1L << (uVar14 & 0x3f)) ^ 0xffffffff);
                *(uint *)(lVar26 + 0x70) = uVar30;
              }
            }
            *(uint *)(puVar1 + uVar14 * 0xc + 0x38) = uVar21 + iVar7;
          }
LAB_001d8e38:
          uVar22 = uVar30 >> (ulong)((uint)uVar14 & 0x1f);
joined_r0x001d9034:
          if (cVar19 != '\x01') {
            if ((uVar22 & 1) == 0) {
              plVar17 = *(long **)(lVar26 + 0x388);
              plVar9 = *(long **)(*(long *)(lVar26 + 0x378) + 8);
              lVar31 = *plVar9;
              lVar23 = plVar9[1];
            }
            else {
              uVar21 = 0;
              uVar12 = *(uint *)(puVar1 + uVar14 * 0xc + 0x38);
              uVar2 = *(uint *)(puVar1 + uVar14 * 0xc + 0x32);
              uVar16 = uVar2 - uVar12 & 3;
              uVar22 = uVar12;
              if (uVar16 == 0) goto LAB_001d8ef8;
              if (uVar12 < uVar2) {
                uVar22 = uVar12 + 1;
                *(uint *)(puVar1 + uVar14 * 0xc + 0x38) = uVar22;
                uVar21 = *(byte *)(*(long *)(puVar1 + uVar14 * 0xc + 0x34) + (ulong)uVar12) & 0x7f;
                if (0x7f < *(byte *)(*(long *)(puVar1 + uVar14 * 0xc + 0x34) + (ulong)uVar12)) {
                  if (uVar16 != 1) {
                    uVar13 = uVar22;
                    if (uVar16 != 2) {
                      uVar13 = uVar12 + 2;
                      *(uint *)(puVar1 + uVar14 * 0xc + 0x38) = uVar13;
                      uVar21 = (*(byte *)(*(long *)(puVar1 + uVar14 * 0xc + 0x34) + (ulong)uVar22) &
                               0x7f) + uVar21 * 0x80;
                      if (*(byte *)(*(long *)(puVar1 + uVar14 * 0xc + 0x34) + (ulong)uVar22) < 0x80)
                      goto LAB_001d8f88;
                    }
                    uVar22 = uVar13 + 1;
                    *(uint *)(puVar1 + uVar14 * 0xc + 0x38) = uVar22;
                    uVar21 = (*(byte *)(*(long *)(puVar1 + uVar14 * 0xc + 0x34) + (ulong)uVar13) &
                             0x7f) + uVar21 * 0x80;
                    if (*(byte *)(*(long *)(puVar1 + uVar14 * 0xc + 0x34) + (ulong)uVar13) < 0x80)
                    goto LAB_001d8f88;
                  }
LAB_001d8ef8:
                  do {
                    if (uVar2 <= uVar22) goto LAB_001d948c;
                    *(uint *)(puVar1 + uVar14 * 0xc + 0x38) = uVar22 + 1;
                    uVar21 = (*(byte *)(*(long *)(puVar1 + uVar14 * 0xc + 0x34) + (ulong)uVar22) &
                             0x7f) + uVar21 * 0x80;
                    if (*(byte *)(*(long *)(puVar1 + uVar14 * 0xc + 0x34) + (ulong)uVar22) < 0x80)
                    break;
                    *(uint *)(puVar1 + uVar14 * 0xc + 0x38) = uVar22 + 2;
                    bVar4 = *(byte *)(*(long *)(puVar1 + uVar14 * 0xc + 0x34) + (ulong)(uVar22 + 1))
                    ;
                    uVar21 = (bVar4 & 0x7f) + uVar21 * 0x80;
                    if (bVar4 < 0x80) break;
                    *(uint *)(puVar1 + uVar14 * 0xc + 0x38) = uVar22 + 3;
                    bVar4 = *(byte *)(*(long *)(puVar1 + uVar14 * 0xc + 0x34) + (ulong)(uVar22 + 2))
                    ;
                    uVar21 = (bVar4 & 0x7f) + uVar21 * 0x80;
                    if (bVar4 < 0x80) break;
                    uVar16 = uVar22 + 3;
                    uVar22 = uVar22 + 4;
                    *(uint *)(puVar1 + uVar14 * 0xc + 0x38) = uVar22;
                    bVar4 = *(byte *)(*(long *)(puVar1 + uVar14 * 0xc + 0x34) + (ulong)uVar16);
                    uVar21 = (bVar4 & 0x7f) + uVar21 * 0x80;
                  } while (0x7f < bVar4);
                }
LAB_001d8f88:
                *(uint *)(puVar1 + uVar14 * 0xc + 0x3a) =
                     *(int *)(puVar1 + uVar14 * 0xc + 0x3a) + uVar21;
                plVar17 = *(long **)(lVar26 + 0x380);
                plVar32 = *(long **)(*(long *)(lVar26 + 0x378) + 8);
                lVar23 = *plVar32;
                *(long *)(lVar23 + 8) = plVar32[1];
                plVar29 = (long *)plVar32[1];
                *plVar29 = lVar23;
                uVar30 = (uint)*(byte *)(plVar32 + 2) +
                         *(int *)(puVar1 + (ulong)*(byte *)(plVar32 + 2) * 0xc + 0x3a) * 0x20;
                *(uint *)((long)plVar32 + 0x14) = uVar30;
                plVar9 = plVar17;
                if ((plVar17 != plVar29) &&
                   (plVar9 = plVar29, *(uint *)((long)plVar29 + 0x14) < uVar30)) {
                  do {
                    plVar29 = (long *)plVar29[1];
                    plVar9 = plVar17;
                    if (plVar17 == plVar29) break;
                    plVar9 = plVar29;
                  } while (*(uint *)((long)plVar29 + 0x14) < uVar30);
                  lVar23 = *plVar9;
                }
                *(long **)(lVar23 + 8) = plVar32;
                *plVar32 = lVar23;
                *plVar9 = (long)plVar32;
                plVar32[1] = (long)plVar9;
                goto LAB_001d8d7c;
              }
LAB_001d948c:
              plVar17 = *(long **)(lVar26 + 0x388);
              plVar9 = *(long **)(*(long *)(lVar26 + 0x378) + 8);
              lVar31 = *plVar9;
              lVar23 = plVar9[1];
              *(uint *)(lVar26 + 0x70) = uVar30 & ((uint)(1L << (uVar14 & 0x3f)) ^ 0xffffffff);
            }
            *(long *)(lVar31 + 8) = lVar23;
            *(long *)plVar9[1] = lVar31;
            lVar23 = *plVar17;
            *(long **)(lVar23 + 8) = plVar9;
            *plVar9 = lVar23;
            *plVar17 = (long)plVar9;
            plVar9[1] = (long)plVar17;
            goto LAB_001d8d7c;
          }
          if ((uVar22 & 1) != 0) {
            uVar21 = 0;
            uVar12 = *(uint *)(puVar1 + uVar14 * 0xc + 0x38);
            uVar2 = *(uint *)(puVar1 + uVar14 * 0xc + 0x32);
            uVar16 = uVar2 - uVar12 & 3;
            uVar22 = uVar12;
            if (uVar16 == 0) goto LAB_001d90ec;
            if (uVar12 < uVar2) {
              uVar22 = uVar12 + 1;
              *(uint *)(puVar1 + uVar14 * 0xc + 0x38) = uVar22;
              uVar21 = *(byte *)(*(long *)(puVar1 + uVar14 * 0xc + 0x34) + (ulong)uVar12) & 0x7f;
              if (0x7f < *(byte *)(*(long *)(puVar1 + uVar14 * 0xc + 0x34) + (ulong)uVar12)) {
                if (uVar16 != 1) {
                  uVar13 = uVar22;
                  if (uVar16 != 2) {
                    uVar13 = uVar12 + 2;
                    *(uint *)(puVar1 + uVar14 * 0xc + 0x38) = uVar13;
                    uVar21 = (*(byte *)(*(long *)(puVar1 + uVar14 * 0xc + 0x34) + (ulong)uVar22) &
                             0x7f) + uVar21 * 0x80;
                    if (*(byte *)(*(long *)(puVar1 + uVar14 * 0xc + 0x34) + (ulong)uVar22) < 0x80)
                    goto LAB_001d917c;
                  }
                  uVar22 = uVar13 + 1;
                  *(uint *)(puVar1 + uVar14 * 0xc + 0x38) = uVar22;
                  uVar21 = (*(byte *)(*(long *)(puVar1 + uVar14 * 0xc + 0x34) + (ulong)uVar13) &
                           0x7f) + uVar21 * 0x80;
                  if (*(byte *)(*(long *)(puVar1 + uVar14 * 0xc + 0x34) + (ulong)uVar13) < 0x80)
                  goto LAB_001d917c;
                }
LAB_001d90ec:
                do {
                  if (uVar2 <= uVar22) goto LAB_001d94e4;
                  *(uint *)(puVar1 + uVar14 * 0xc + 0x38) = uVar22 + 1;
                  uVar21 = (*(byte *)(*(long *)(puVar1 + uVar14 * 0xc + 0x34) + (ulong)uVar22) &
                           0x7f) + uVar21 * 0x80;
                  if (*(byte *)(*(long *)(puVar1 + uVar14 * 0xc + 0x34) + (ulong)uVar22) < 0x80)
                  break;
                  *(uint *)(puVar1 + uVar14 * 0xc + 0x38) = uVar22 + 2;
                  bVar4 = *(byte *)(*(long *)(puVar1 + uVar14 * 0xc + 0x34) + (ulong)(uVar22 + 1));
                  uVar21 = (bVar4 & 0x7f) + uVar21 * 0x80;
                  if (bVar4 < 0x80) break;
                  *(uint *)(puVar1 + uVar14 * 0xc + 0x38) = uVar22 + 3;
                  bVar4 = *(byte *)(*(long *)(puVar1 + uVar14 * 0xc + 0x34) + (ulong)(uVar22 + 2));
                  uVar21 = (bVar4 & 0x7f) + uVar21 * 0x80;
                  if (bVar4 < 0x80) break;
                  uVar16 = uVar22 + 3;
                  uVar22 = uVar22 + 4;
                  *(uint *)(puVar1 + uVar14 * 0xc + 0x38) = uVar22;
                  bVar4 = *(byte *)(*(long *)(puVar1 + uVar14 * 0xc + 0x34) + (ulong)uVar16);
                  uVar21 = (bVar4 & 0x7f) + uVar21 * 0x80;
                } while (0x7f < bVar4);
              }
LAB_001d917c:
              *(uint *)(puVar1 + uVar14 * 0xc + 0x3a) =
                   *(int *)(puVar1 + uVar14 * 0xc + 0x3a) + uVar21;
            }
            else {
LAB_001d94e4:
              *(uint *)(lVar26 + 0x70) = uVar30 & ((uint)(1L << (uVar14 & 0x3f)) ^ 0xffffffff);
            }
          }
          goto LAB_001d8d7c;
        }
      }
LAB_001d8320:
      iVar7 = *(int *)(lVar26 + 0x5c);
      iVar10 = 0;
      while (iVar28 = iVar7, iVar7 < iVar11) {
        cVar19 = *(char *)(lVar26 + 0x3c);
        if (cVar19 == '\x01') {
          uVar14 = 0;
        }
        else {
          lVar23 = *(long *)(*(long *)(lVar26 + 0x378) + 8);
          if (*(long *)(lVar26 + 0x388) == lVar23) break;
          uVar14 = (ulong)*(byte *)(lVar23 + 0x10);
        }
        uVar30 = (uint)uVar14;
        lVar23 = (long)(int)uVar30;
        iVar6 = iVar7 + (*(int *)(puVar1 + lVar23 * 0xc + 0x3a) - *(int *)(lVar26 + 0x58)) *
                        *(int *)(lVar26 + 0x6c);
        iVar28 = iVar11;
        iVar10 = iVar7;
        if (iVar11 <= iVar6) break;
        *(int *)(lVar26 + 0x58) = *(int *)(puVar1 + lVar23 * 0xc + 0x3a);
        *(int *)(lVar26 + 0x5c) = iVar6;
        uVar21 = *(uint *)(puVar1 + lVar23 * 0xc + 0x38);
        uVar22 = uVar21 + 1;
        *(uint *)(puVar1 + lVar23 * 0xc + 0x38) = uVar22;
        uVar24 = (ulong)uVar21;
        bVar4 = *(byte *)(*(long *)(puVar1 + lVar23 * 0xc + 0x34) + uVar24);
        if (bVar4 < 0xf0) {
          if ((char)bVar4 < '\0') {
            *(byte *)(puVar1 + lVar23 * 0xc + 0x30) = bVar4;
            uVar22 = *(uint *)(puVar1 + lVar23 * 0xc + 0x38) + 1;
            uVar24 = (ulong)*(uint *)(puVar1 + lVar23 * 0xc + 0x38);
          }
          else {
            bVar4 = (byte)puVar1[lVar23 * 0xc + 0x30];
            *(uint *)(puVar1 + lVar23 * 0xc + 0x38) = uVar21;
          }
          iVar7 = FUN_001d1ad8(lVar26,param_3,bVar4 >> 4,bVar4 & 0xf,
                               *(undefined1 *)(*(long *)(puVar1 + lVar23 * 0xc + 0x34) + uVar24),
                               *(undefined1 *)
                                (*(long *)(puVar1 + lVar23 * 0xc + 0x34) + (ulong)uVar22));
          *(int *)(puVar1 + lVar23 * 0xc + 0x38) = iVar7 + *(int *)(puVar1 + lVar23 * 0xc + 0x38);
          cVar19 = *(char *)(lVar26 + 0x3c);
          uVar22 = *(uint *)(lVar26 + 0x70);
          goto LAB_001d83f8;
        }
        switch(bVar4) {
        case 0xf0:
          uVar21 = 0;
          lVar31 = *(long *)(puVar1 + lVar23 * 0xc + 0x34);
          do {
            uVar16 = uVar22 + 1;
            *(uint *)(puVar1 + lVar23 * 0xc + 0x38) = uVar16;
            uVar21 = (*(byte *)(lVar31 + (ulong)uVar22) & 0x7f) + uVar21 * 0x80;
            uVar12 = uVar16;
            if (-1 < (char)*(byte *)(lVar31 + (ulong)uVar22)) break;
            *(uint *)(puVar1 + lVar23 * 0xc + 0x38) = uVar22 + 2;
            uVar21 = (*(byte *)(lVar31 + (ulong)uVar16) & 0x7f) + uVar21 * 0x80;
            uVar12 = uVar22 + 2;
            if (-1 < (char)*(byte *)(lVar31 + (ulong)uVar16)) break;
            *(uint *)(puVar1 + lVar23 * 0xc + 0x38) = uVar22 + 3;
            uVar16 = uVar22 + 3;
            bVar4 = *(byte *)(lVar31 + (ulong)(uVar22 + 2));
            uVar21 = (bVar4 & 0x7f) + uVar21 * 0x80;
            uVar12 = uVar22 + 3;
            if (-1 < (char)bVar4) break;
            uVar22 = uVar22 + 4;
            *(uint *)(puVar1 + lVar23 * 0xc + 0x38) = uVar22;
            bVar4 = *(byte *)(lVar31 + (ulong)uVar16);
            uVar21 = (bVar4 & 0x7f) + uVar21 * 0x80;
            uVar12 = uVar22;
          } while ((char)bVar4 < '\0');
          uVar22 = uVar21 - 1;
          if (3 < uVar22) {
            lVar31 = *(long *)(puVar1 + lVar23 * 0xc + 0x34) + (ulong)uVar12;
            cVar5 = *(char *)(*(long *)(puVar1 + lVar23 * 0xc + 0x34) + (ulong)uVar12);
            if (cVar5 == '~') {
              if ((*(char *)(lVar31 + 1) == '\x7f') && (*(char *)(lVar31 + 2) == '\t')) {
                cVar5 = *(char *)(lVar31 + 3);
joined_r0x001d9534:
                if (((byte)(cVar5 - 1U) < 3) && (uVar22 == 4)) {
                  *(undefined1 *)(lVar26 + 0xccd) = 0x7f;
                  *(undefined1 *)(lVar26 + 0xccc) = 0x4c;
                  *(undefined1 *)(lVar26 + 0xcce) = 0x40;
                  *(undefined2 *)(lVar26 + 0xcd0) = 0x2000;
                  *(undefined1 *)(lVar26 + 0xcd7) = 0;
                  *(undefined2 *)(lVar26 + 0x6d8) = 0x7900;
                  *(undefined2 *)(lVar26 + 0x6da) = 0x7900;
                  *(undefined1 *)(lVar26 + 0x6dc) = 0;
                  *(undefined1 *)(lVar26 + 0x6dd) = 100;
                  *(undefined1 *)(lVar26 + 0x6de) = 0x7f;
                  *(undefined2 *)(lVar26 + 0x6e2) = 0x7f7f;
                  *(undefined2 *)(lVar26 + 0x6e4) = 0x2000;
                  *(undefined1 *)(lVar26 + 0x6e6) = 2;
                  *(undefined2 *)(lVar26 + 0x6e8) = 0x7900;
                  *(undefined2 *)(lVar26 + 0x6ea) = 0x7900;
                  *(undefined1 *)(lVar26 + 0x6ec) = 0;
                  *(undefined1 *)(lVar26 + 0x6ed) = 100;
                  *(undefined1 *)(lVar26 + 0x6ee) = 0x7f;
                  *(undefined2 *)(lVar26 + 0x6f2) = 0x7f7f;
                  *(undefined2 *)(lVar26 + 0x6f4) = 0x2000;
                  *(undefined1 *)(lVar26 + 0x6f6) = 2;
                  *(undefined2 *)(lVar26 + 0x6f8) = 0x7900;
                  *(undefined2 *)(lVar26 + 0x6fa) = 0x7900;
                  *(undefined1 *)(lVar26 + 0x6fc) = 0;
                  *(undefined1 *)(lVar26 + 0x6fd) = 100;
                  *(undefined1 *)(lVar26 + 0x6fe) = 0x7f;
                  *(undefined2 *)(lVar26 + 0x702) = 0x7f7f;
                  *(undefined2 *)(lVar26 + 0x704) = 0x2000;
                  *(undefined1 *)(lVar26 + 0x706) = 2;
                  *(undefined2 *)(lVar26 + 0x708) = 0x7900;
                  *(undefined2 *)(lVar26 + 0x70a) = 0x7900;
                  *(undefined1 *)(lVar26 + 0x70c) = 0;
                  *(undefined1 *)(lVar26 + 0x70d) = 100;
                  *(undefined1 *)(lVar26 + 0x70e) = 0x7f;
                  *(undefined2 *)(lVar26 + 0x712) = 0x7f7f;
                  *(undefined2 *)(lVar26 + 0x714) = 0x2000;
                  *(undefined1 *)(lVar26 + 0x716) = 2;
                  *(undefined2 *)(lVar26 + 0x718) = 0x7900;
                  *(undefined2 *)(lVar26 + 0x71a) = 0x7900;
                  *(undefined1 *)(lVar26 + 0x71c) = 0;
                  *(undefined1 *)(lVar26 + 0x71d) = 100;
                  *(undefined1 *)(lVar26 + 0x71e) = 0x7f;
                  *(undefined2 *)(lVar26 + 0x722) = 0x7f7f;
                  *(undefined2 *)(lVar26 + 0x724) = 0x2000;
                  *(undefined1 *)(lVar26 + 0x726) = 2;
                  *(undefined2 *)(lVar26 + 0x728) = 0x7900;
                  *(undefined2 *)(lVar26 + 0x72a) = 0x7900;
                  *(undefined1 *)(lVar26 + 0x72c) = 0;
                  *(undefined1 *)(lVar26 + 0x72d) = 100;
                  *(undefined1 *)(lVar26 + 0x72e) = 0x7f;
                  *(undefined2 *)(lVar26 + 0x732) = 0x7f7f;
                  *(undefined2 *)(lVar26 + 0x734) = 0x2000;
                  *(undefined1 *)(lVar26 + 0x736) = 2;
                  *(undefined2 *)(lVar26 + 0x738) = 0x7900;
                  *(undefined2 *)(lVar26 + 0x73a) = 0x7900;
                  *(undefined1 *)(lVar26 + 0x73c) = 0;
                  *(undefined1 *)(lVar26 + 0x73d) = 100;
                  *(undefined1 *)(lVar26 + 0x73e) = 0x7f;
                  *(undefined2 *)(lVar26 + 0x742) = 0x7f7f;
                  *(undefined2 *)(lVar26 + 0x744) = 0x2000;
                  *(undefined1 *)(lVar26 + 0x746) = 2;
                  *(undefined2 *)(lVar26 + 0x748) = 0x7900;
                  *(undefined2 *)(lVar26 + 0x74a) = 0x7900;
                  *(undefined1 *)(lVar26 + 0x74c) = 0;
                  *(undefined1 *)(lVar26 + 0x74d) = 100;
                  *(undefined1 *)(lVar26 + 0x74e) = 0x7f;
                  *(undefined2 *)(lVar26 + 0x752) = 0x7f7f;
                  *(undefined2 *)(lVar26 + 0x754) = 0x2000;
                  *(undefined1 *)(lVar26 + 0x756) = 2;
                  *(undefined2 *)(lVar26 + 0x758) = 0x7900;
                  *(undefined2 *)(lVar26 + 0x75a) = 0x7900;
                  *(undefined1 *)(lVar26 + 0x75c) = 0;
                  *(undefined1 *)(lVar26 + 0x75d) = 100;
                  *(undefined1 *)(lVar26 + 0x75e) = 0x7f;
                  *(undefined2 *)(lVar26 + 0x762) = 0x7f7f;
                  *(undefined2 *)(lVar26 + 0x764) = 0x2000;
                  *(undefined1 *)(lVar26 + 0x766) = 2;
                  *(undefined2 *)(lVar26 + 0x768) = 0x7800;
                  *(undefined2 *)(lVar26 + 0x76a) = 0x7800;
                  *(undefined1 *)(lVar26 + 0x76c) = 0;
                  *(undefined1 *)(lVar26 + 0x76d) = 100;
                  *(undefined1 *)(lVar26 + 0x76e) = 0x7f;
                  *(undefined2 *)(lVar26 + 0x772) = 0x7f7f;
                  *(undefined2 *)(lVar26 + 0x774) = 0x2000;
                  *(undefined1 *)(lVar26 + 0x776) = 2;
                  *(undefined2 *)(lVar26 + 0x778) = 0x7900;
                  *(undefined2 *)(lVar26 + 0x77a) = 0x7900;
                  *(undefined1 *)(lVar26 + 0x77c) = 0;
                  *(undefined1 *)(lVar26 + 0x77d) = 100;
                  *(undefined1 *)(lVar26 + 0x77e) = 0x7f;
                  *(undefined2 *)(lVar26 + 0x782) = 0x7f7f;
                  *(undefined2 *)(lVar26 + 0x784) = 0x2000;
                  *(undefined1 *)(lVar26 + 0x786) = 2;
                  *(undefined2 *)(lVar26 + 0x788) = 0x7900;
                  *(undefined2 *)(lVar26 + 0x78a) = 0x7900;
                  *(undefined1 *)(lVar26 + 0x78c) = 0;
                  *(undefined1 *)(lVar26 + 0x78d) = 100;
                  *(undefined1 *)(lVar26 + 0x78e) = 0x7f;
                  *(undefined2 *)(lVar26 + 0x792) = 0x7f7f;
                  *(undefined2 *)(lVar26 + 0x794) = 0x2000;
                  *(undefined1 *)(lVar26 + 0x796) = 2;
                  *(undefined2 *)(lVar26 + 0x798) = 0x7900;
                  *(undefined2 *)(lVar26 + 0x79a) = 0x7900;
                  *(undefined1 *)(lVar26 + 0x79c) = 0;
                  *(undefined1 *)(lVar26 + 0x79d) = 100;
                  *(undefined1 *)(lVar26 + 0x79e) = 0x7f;
                  *(undefined2 *)(lVar26 + 0x7a2) = 0x7f7f;
                  *(undefined2 *)(lVar26 + 0x7a4) = 0x2000;
                  *(undefined1 *)(lVar26 + 0x7a6) = 2;
                  *(undefined2 *)(lVar26 + 0x7a8) = 0x7900;
                  *(undefined2 *)(lVar26 + 0x7aa) = 0x7900;
                  *(undefined1 *)(lVar26 + 0x7ac) = 0;
                  *(undefined1 *)(lVar26 + 0x7ad) = 100;
                  *(undefined1 *)(lVar26 + 0x7ae) = 0x7f;
                  *(undefined2 *)(lVar26 + 0x7b2) = 0x7f7f;
                  *(undefined2 *)(lVar26 + 0x7b4) = 0x2000;
                  *(undefined1 *)(lVar26 + 0x7b6) = 2;
                  *(undefined2 *)(lVar26 + 0x7b8) = 0x7900;
                  *(undefined2 *)(lVar26 + 0x7ba) = 0x7900;
                  *(undefined1 *)(lVar26 + 0x7bc) = 0;
                  *(undefined1 *)(lVar26 + 0x7bd) = 100;
                  *(undefined1 *)(lVar26 + 0x7be) = 0x7f;
                  *(undefined2 *)(lVar26 + 0x7c2) = 0x7f7f;
                  *(undefined2 *)(lVar26 + 0x7c4) = 0x2000;
                  *(undefined1 *)(lVar26 + 0x7c6) = 2;
                  *(undefined2 *)(lVar26 + 0x7c8) = 0x7900;
                  *(undefined2 *)(lVar26 + 0x7ca) = 0x7900;
                  *(undefined1 *)(lVar26 + 0x7cc) = 0;
                  *(undefined1 *)(lVar26 + 0x7cd) = 100;
                  *(undefined1 *)(lVar26 + 0x7ce) = 0x7f;
                  *(undefined2 *)(lVar26 + 0x7d2) = 0x7f7f;
                  *(undefined2 *)(lVar26 + 0x7d4) = 0x2000;
                  *(undefined1 *)(lVar26 + 0x7d6) = 2;
                  *(uint *)(puVar1 + lVar23 * 0xc + 0x38) = uVar12 + uVar21;
                  uVar22 = *(uint *)(lVar26 + 0x70);
                  break;
                }
              }
            }
            else if (cVar5 == '\x7f') {
              if (*(char *)(lVar31 + 1) == '\x7f') {
                cVar5 = *(char *)(lVar31 + 2);
joined_r0x001d9820:
                if ((cVar5 == '\x04') && (uVar22 == 6)) {
                  cVar5 = *(char *)(lVar31 + 3);
                  if (cVar5 == '\x03') {
                    *(ushort *)(lVar26 + 0xcd0) =
                         (*(byte *)(lVar31 + 6) & 0x7f) + (*(byte *)(lVar31 + 5) & 0x7f) * 0x80;
                  }
                  else if (cVar5 == '\x04') {
                    *(byte *)(lVar26 + 0xcce) = *(byte *)(lVar31 + 5) & 0x7f;
                  }
                  else if (cVar5 == '\x01') {
                    *(byte *)(lVar26 + 0xccd) = *(byte *)(lVar31 + 5) & 0x7f;
                  }
                }
              }
            }
            else if (((cVar5 == 'C') && (*(char *)(lVar31 + 1) == 'y')) &&
                    (*(char *)(lVar31 + 2) == '\x06')) {
              cVar5 = *(char *)(lVar31 + 3);
joined_r0x001d8ae8:
              if (((cVar5 == '\x7f') && (uVar22 == 6)) && (*(char *)(lVar31 + 4) == '\0')) {
                *(byte *)(lVar26 + 0xccc) = *(byte *)(lVar31 + 5) & 0x7f;
              }
            }
          }
          goto LAB_001d8afc;
        case 0xf1:
        case 0xf3:
          *(uint *)(puVar1 + lVar23 * 0xc + 0x38) = uVar21 + 2;
          uVar22 = *(uint *)(lVar26 + 0x70);
          break;
        case 0xf2:
          *(uint *)(puVar1 + lVar23 * 0xc + 0x38) = uVar21 + 3;
          uVar22 = *(uint *)(lVar26 + 0x70);
          goto LAB_001d87bc;
        default:
          uVar22 = *(uint *)(lVar26 + 0x70);
LAB_001d87bc:
          uVar30 = uVar22 >> (ulong)(uVar30 & 0x1f);
          goto joined_r0x001d87c4;
        case 0xf7:
          uVar21 = 0;
          lVar31 = *(long *)(puVar1 + lVar23 * 0xc + 0x34);
          do {
            uVar16 = uVar22 + 1;
            *(uint *)(puVar1 + lVar23 * 0xc + 0x38) = uVar16;
            uVar21 = (*(byte *)(lVar31 + (ulong)uVar22) & 0x7f) + uVar21 * 0x80;
            uVar12 = uVar16;
            if (-1 < (char)*(byte *)(lVar31 + (ulong)uVar22)) break;
            *(uint *)(puVar1 + lVar23 * 0xc + 0x38) = uVar22 + 2;
            uVar21 = (*(byte *)(lVar31 + (ulong)uVar16) & 0x7f) + uVar21 * 0x80;
            uVar12 = uVar22 + 2;
            if (-1 < (char)*(byte *)(lVar31 + (ulong)uVar16)) break;
            *(uint *)(puVar1 + lVar23 * 0xc + 0x38) = uVar22 + 3;
            uVar16 = uVar22 + 3;
            bVar4 = *(byte *)(lVar31 + (ulong)(uVar22 + 2));
            uVar21 = (bVar4 & 0x7f) + uVar21 * 0x80;
            uVar12 = uVar22 + 3;
            if (-1 < (char)bVar4) break;
            uVar22 = uVar22 + 4;
            *(uint *)(puVar1 + lVar23 * 0xc + 0x38) = uVar22;
            bVar4 = *(byte *)(lVar31 + (ulong)uVar16);
            uVar21 = (bVar4 & 0x7f) + uVar21 * 0x80;
            uVar12 = uVar22;
          } while ((char)bVar4 < '\0');
          if (3 < uVar21) {
            lVar31 = *(long *)(puVar1 + lVar23 * 0xc + 0x34) + (ulong)uVar12;
            cVar5 = *(char *)(*(long *)(puVar1 + lVar23 * 0xc + 0x34) + (ulong)uVar12);
            uVar22 = uVar21;
            if (cVar5 == '~') {
              if ((*(char *)(lVar31 + 1) == '\x7f') && (*(char *)(lVar31 + 2) == '\t')) {
                cVar5 = *(char *)(lVar31 + 3);
                goto joined_r0x001d9534;
              }
            }
            else if (cVar5 == '\x7f') {
              if (*(char *)(lVar31 + 1) == '\x7f') {
                cVar5 = *(char *)(lVar31 + 2);
                goto joined_r0x001d9820;
              }
            }
            else if (((cVar5 == 'C') && (*(char *)(lVar31 + 1) == 'y')) &&
                    (*(char *)(lVar31 + 2) == '\x06')) {
              cVar5 = *(char *)(lVar31 + 3);
              goto joined_r0x001d8ae8;
            }
          }
LAB_001d8afc:
          *(uint *)(puVar1 + lVar23 * 0xc + 0x38) = uVar12 + uVar21;
          uVar22 = *(uint *)(lVar26 + 0x70);
          break;
        case 0xff:
          uVar21 = uVar21 + 2;
          iVar7 = 0;
          lVar31 = *(long *)(puVar1 + lVar23 * 0xc + 0x34);
          *(uint *)(puVar1 + lVar23 * 0xc + 0x38) = uVar21;
          cVar5 = *(char *)(lVar31 + (ulong)uVar22);
          do {
            uVar22 = uVar21 + 1;
            *(uint *)(puVar1 + lVar23 * 0xc + 0x38) = uVar22;
            iVar7 = (*(byte *)(lVar31 + (ulong)uVar21) & 0x7f) + iVar7 * 0x80;
            uVar16 = uVar22;
            if (-1 < (char)*(byte *)(lVar31 + (ulong)uVar21)) break;
            *(uint *)(puVar1 + lVar23 * 0xc + 0x38) = uVar21 + 2;
            iVar7 = (*(byte *)(lVar31 + (ulong)uVar22) & 0x7f) + iVar7 * 0x80;
            uVar16 = uVar21 + 2;
            if (-1 < (char)*(byte *)(lVar31 + (ulong)uVar22)) break;
            *(uint *)(puVar1 + lVar23 * 0xc + 0x38) = uVar21 + 3;
            uVar22 = uVar21 + 3;
            bVar4 = *(byte *)(lVar31 + (ulong)(uVar21 + 2));
            iVar7 = (bVar4 & 0x7f) + iVar7 * 0x80;
            uVar16 = uVar21 + 3;
            if (-1 < (char)bVar4) break;
            uVar21 = uVar21 + 4;
            *(uint *)(puVar1 + lVar23 * 0xc + 0x38) = uVar21;
            bVar4 = *(byte *)(lVar31 + (ulong)uVar22);
            iVar7 = (bVar4 & 0x7f) + iVar7 * 0x80;
            uVar16 = uVar21;
          } while ((char)bVar4 < '\0');
          if (cVar5 == 'Q') {
            if (1 < iVar7 - 3U) goto LAB_001d8d40;
            lVar31 = *(long *)(puVar1 + lVar23 * 0xc + 0x34);
            uVar22 = *(uint *)(lVar26 + 0x70);
            uVar21 = 0;
            if (*puVar1 != 0) {
              uVar21 = ((((uint)*(byte *)(lVar31 + (ulong)(uVar16 + 2)) +
                          (uint)*(byte *)(lVar31 + (ulong)uVar16) * 0x10000 +
                         (uint)*(byte *)(lVar31 + (ulong)(uVar16 + 1)) * 0x100) * 0x100) / 0x7d) /
                       (uint)*puVar1;
            }
            *(uint *)(lVar26 + 0x6c) = uVar21 + 1 >> 1;
          }
          else if (cVar5 == '\x7f') {
LAB_001d8d40:
            uVar22 = *(uint *)(lVar26 + 0x70);
          }
          else {
            uVar22 = *(uint *)(lVar26 + 0x70);
            if (cVar5 == '/') {
              uVar22 = uVar22 & ((uint)(1L << (uVar14 & 0x3f)) ^ 0xffffffff);
              *(uint *)(lVar26 + 0x70) = uVar22;
            }
          }
          *(uint *)(puVar1 + lVar23 * 0xc + 0x38) = uVar16 + iVar7;
        }
LAB_001d83f8:
        uVar30 = uVar22 >> (ulong)(uVar30 & 0x1f);
joined_r0x001d87c4:
        if (cVar19 == '\x01') {
          if ((uVar30 & 1) != 0) {
            uVar21 = 0;
            uVar12 = *(uint *)(puVar1 + uVar14 * 0xc + 0x38);
            uVar2 = *(uint *)(puVar1 + uVar14 * 0xc + 0x32);
            uVar16 = uVar2 - uVar12 & 3;
            uVar30 = uVar12;
            if (uVar16 == 0) goto LAB_001d887c;
            if (uVar12 < uVar2) {
              uVar30 = uVar12 + 1;
              *(uint *)(puVar1 + uVar14 * 0xc + 0x38) = uVar30;
              uVar21 = *(byte *)(*(long *)(puVar1 + uVar14 * 0xc + 0x34) + (ulong)uVar12) & 0x7f;
              if (0x7f < *(byte *)(*(long *)(puVar1 + uVar14 * 0xc + 0x34) + (ulong)uVar12)) {
                if (uVar16 != 1) {
                  uVar13 = uVar30;
                  if (uVar16 != 2) {
                    uVar13 = uVar12 + 2;
                    *(uint *)(puVar1 + uVar14 * 0xc + 0x38) = uVar13;
                    uVar21 = (*(byte *)(*(long *)(puVar1 + uVar14 * 0xc + 0x34) + (ulong)uVar30) &
                             0x7f) + uVar21 * 0x80;
                    if (*(byte *)(*(long *)(puVar1 + uVar14 * 0xc + 0x34) + (ulong)uVar30) < 0x80)
                    goto LAB_001d890c;
                  }
                  uVar30 = uVar13 + 1;
                  *(uint *)(puVar1 + uVar14 * 0xc + 0x38) = uVar30;
                  uVar21 = (*(byte *)(*(long *)(puVar1 + uVar14 * 0xc + 0x34) + (ulong)uVar13) &
                           0x7f) + uVar21 * 0x80;
                  if (*(byte *)(*(long *)(puVar1 + uVar14 * 0xc + 0x34) + (ulong)uVar13) < 0x80)
                  goto LAB_001d890c;
                }
LAB_001d887c:
                do {
                  if (uVar2 <= uVar30) goto LAB_001d8cd4;
                  *(uint *)(puVar1 + uVar14 * 0xc + 0x38) = uVar30 + 1;
                  uVar21 = (*(byte *)(*(long *)(puVar1 + uVar14 * 0xc + 0x34) + (ulong)uVar30) &
                           0x7f) + uVar21 * 0x80;
                  if (*(byte *)(*(long *)(puVar1 + uVar14 * 0xc + 0x34) + (ulong)uVar30) < 0x80)
                  break;
                  *(uint *)(puVar1 + uVar14 * 0xc + 0x38) = uVar30 + 2;
                  bVar4 = *(byte *)(*(long *)(puVar1 + uVar14 * 0xc + 0x34) + (ulong)(uVar30 + 1));
                  uVar21 = (bVar4 & 0x7f) + uVar21 * 0x80;
                  if (bVar4 < 0x80) break;
                  *(uint *)(puVar1 + uVar14 * 0xc + 0x38) = uVar30 + 3;
                  bVar4 = *(byte *)(*(long *)(puVar1 + uVar14 * 0xc + 0x34) + (ulong)(uVar30 + 2));
                  uVar21 = (bVar4 & 0x7f) + uVar21 * 0x80;
                  if (bVar4 < 0x80) break;
                  uVar16 = uVar30 + 3;
                  uVar30 = uVar30 + 4;
                  *(uint *)(puVar1 + uVar14 * 0xc + 0x38) = uVar30;
                  bVar4 = *(byte *)(*(long *)(puVar1 + uVar14 * 0xc + 0x34) + (ulong)uVar16);
                  uVar21 = (bVar4 & 0x7f) + uVar21 * 0x80;
                } while (0x7f < bVar4);
              }
LAB_001d890c:
              *(uint *)(puVar1 + uVar14 * 0xc + 0x3a) =
                   *(int *)(puVar1 + uVar14 * 0xc + 0x3a) + uVar21;
            }
            else {
LAB_001d8cd4:
              *(uint *)(lVar26 + 0x70) = uVar22 & ((uint)(1L << (uVar14 & 0x3f)) ^ 0xffffffff);
            }
          }
        }
        else {
          if ((uVar30 & 1) == 0) {
            plVar17 = *(long **)(lVar26 + 0x388);
            plVar9 = *(long **)(*(long *)(lVar26 + 0x378) + 8);
            lVar31 = *plVar9;
            lVar23 = plVar9[1];
          }
          else {
            uVar21 = 0;
            uVar12 = *(uint *)(puVar1 + uVar14 * 0xc + 0x38);
            uVar2 = *(uint *)(puVar1 + uVar14 * 0xc + 0x32);
            uVar16 = uVar2 - uVar12 & 3;
            uVar30 = uVar12;
            if (uVar16 == 0) goto joined_r0x001d84bc;
            if (uVar12 < uVar2) {
              uVar30 = uVar12 + 1;
              *(uint *)(puVar1 + uVar14 * 0xc + 0x38) = uVar30;
              uVar21 = *(byte *)(*(long *)(puVar1 + uVar14 * 0xc + 0x34) + (ulong)uVar12) & 0x7f;
              if (*(byte *)(*(long *)(puVar1 + uVar14 * 0xc + 0x34) + (ulong)uVar12) < 0x80) {
LAB_001d8c34:
                *(uint *)(puVar1 + uVar14 * 0xc + 0x3a) =
                     *(int *)(puVar1 + uVar14 * 0xc + 0x3a) + uVar21;
                plVar17 = *(long **)(lVar26 + 0x380);
                plVar32 = *(long **)(*(long *)(lVar26 + 0x378) + 8);
                lVar23 = *plVar32;
                *(long *)(lVar23 + 8) = plVar32[1];
                plVar29 = (long *)plVar32[1];
                *plVar29 = lVar23;
                uVar30 = (uint)*(byte *)(plVar32 + 2) +
                         *(int *)(puVar1 + (ulong)*(byte *)(plVar32 + 2) * 0xc + 0x3a) * 0x20;
                *(uint *)((long)plVar32 + 0x14) = uVar30;
                plVar9 = plVar17;
                if ((plVar17 != plVar29) &&
                   (plVar9 = plVar29, *(uint *)((long)plVar29 + 0x14) < uVar30)) {
                  do {
                    plVar29 = (long *)plVar29[1];
                    plVar9 = plVar17;
                    if (plVar17 == plVar29) break;
                    plVar9 = plVar29;
                  } while (*(uint *)((long)plVar29 + 0x14) < uVar30);
                  lVar23 = *plVar9;
                }
                *(long **)(lVar23 + 8) = plVar32;
                *plVar32 = lVar23;
                *plVar9 = (long)plVar32;
                plVar32[1] = (long)plVar9;
                goto LAB_001d859c;
              }
              if (uVar16 != 1) {
                uVar13 = uVar30;
                if (uVar16 != 2) {
                  uVar13 = uVar12 + 2;
                  *(uint *)(puVar1 + uVar14 * 0xc + 0x38) = uVar13;
                  uVar21 = (*(byte *)(*(long *)(puVar1 + uVar14 * 0xc + 0x34) + (ulong)uVar30) &
                           0x7f) + uVar21 * 0x80;
                  if (*(byte *)(*(long *)(puVar1 + uVar14 * 0xc + 0x34) + (ulong)uVar30) < 0x80)
                  goto LAB_001d8c34;
                }
                uVar30 = uVar13 + 1;
                *(uint *)(puVar1 + uVar14 * 0xc + 0x38) = uVar30;
                uVar21 = (*(byte *)(*(long *)(puVar1 + uVar14 * 0xc + 0x34) + (ulong)uVar13) & 0x7f)
                         + uVar21 * 0x80;
                if (*(byte *)(*(long *)(puVar1 + uVar14 * 0xc + 0x34) + (ulong)uVar13) < 0x80)
                goto LAB_001d8c34;
              }
joined_r0x001d84bc:
              for (; uVar30 < uVar2; uVar30 = uVar30 + 4) {
                *(uint *)(puVar1 + uVar14 * 0xc + 0x38) = uVar30 + 1;
                uVar21 = (*(byte *)(*(long *)(puVar1 + uVar14 * 0xc + 0x34) + (ulong)uVar30) & 0x7f)
                         + uVar21 * 0x80;
                if (*(byte *)(*(long *)(puVar1 + uVar14 * 0xc + 0x34) + (ulong)uVar30) < 0x80)
                goto LAB_001d8c34;
                *(uint *)(puVar1 + uVar14 * 0xc + 0x38) = uVar30 + 2;
                bVar4 = *(byte *)(*(long *)(puVar1 + uVar14 * 0xc + 0x34) + (ulong)(uVar30 + 1));
                uVar21 = (bVar4 & 0x7f) + uVar21 * 0x80;
                if (bVar4 < 0x80) goto LAB_001d8c34;
                *(uint *)(puVar1 + uVar14 * 0xc + 0x38) = uVar30 + 3;
                bVar4 = *(byte *)(*(long *)(puVar1 + uVar14 * 0xc + 0x34) + (ulong)(uVar30 + 2));
                uVar21 = (bVar4 & 0x7f) + uVar21 * 0x80;
                if (bVar4 < 0x80) goto LAB_001d8c34;
                *(uint *)(puVar1 + uVar14 * 0xc + 0x38) = uVar30 + 4;
                bVar4 = *(byte *)(*(long *)(puVar1 + uVar14 * 0xc + 0x34) + (ulong)(uVar30 + 3));
                uVar21 = (bVar4 & 0x7f) + uVar21 * 0x80;
                if (bVar4 < 0x80) goto LAB_001d8c34;
              }
            }
            plVar17 = *(long **)(lVar26 + 0x388);
            plVar9 = *(long **)(*(long *)(lVar26 + 0x378) + 8);
            lVar31 = *plVar9;
            lVar23 = plVar9[1];
            *(uint *)(lVar26 + 0x70) = uVar22 & ((uint)(1L << (uVar14 & 0x3f)) ^ 0xffffffff);
          }
          *(long *)(lVar31 + 8) = lVar23;
          *(long *)plVar9[1] = lVar31;
          lVar23 = *plVar17;
          *(long **)(lVar23 + 8) = plVar9;
          *plVar9 = lVar23;
          *plVar17 = (long)plVar9;
          plVar9[1] = (long)plVar17;
        }
LAB_001d859c:
        iVar7 = *(int *)(lVar26 + 0x5c);
      }
      *(int *)(lVar26 + 0x5c) = iVar10;
      *(int *)(lVar26 + 0x54) = iVar28;
      *(int *)(lVar26 + 0x60) = iVar28;
      *param_3 = *(_MACNV_SEEK_INFO *)(pcVar27 + 0xccd);
      param_3[4] = *(_MACNV_SEEK_INFO *)(pcVar27 + 0xcce);
      *(undefined2 *)(param_3 + 2) = *(undefined2 *)(pcVar27 + 0xcd0);
      param_3[5] = *(_MACNV_SEEK_INFO *)(pcVar27 + 0xccc);
      param_3[0x1a] = *(_MACNV_SEEK_INFO *)(pcVar27 + 0x6df);
      param_3[8] = *(_MACNV_SEEK_INFO *)(pcVar27 + 0x6e0);
      param_3[9] = *(_MACNV_SEEK_INFO *)(pcVar27 + 0x6e1);
      param_3[0x34] = *(_MACNV_SEEK_INFO *)(pcVar27 + 0x6ef);
      param_3[0x22] = *(_MACNV_SEEK_INFO *)(pcVar27 + 0x6f0);
      param_3[0x23] = *(_MACNV_SEEK_INFO *)(pcVar27 + 0x6f1);
      param_3[0x4e] = *(_MACNV_SEEK_INFO *)(pcVar27 + 0x6ff);
      param_3[0x3c] = *(_MACNV_SEEK_INFO *)(pcVar27 + 0x700);
      param_3[0x3d] = *(_MACNV_SEEK_INFO *)(pcVar27 + 0x701);
      param_3[0x68] = *(_MACNV_SEEK_INFO *)(pcVar27 + 0x70f);
      param_3[0x56] = *(_MACNV_SEEK_INFO *)(pcVar27 + 0x710);
      param_3[0x57] = *(_MACNV_SEEK_INFO *)(pcVar27 + 0x711);
      param_3[0x82] = *(_MACNV_SEEK_INFO *)(pcVar27 + 0x71f);
      param_3[0x70] = *(_MACNV_SEEK_INFO *)(pcVar27 + 0x720);
      param_3[0x71] = *(_MACNV_SEEK_INFO *)(pcVar27 + 0x721);
      param_3[0x9c] = *(_MACNV_SEEK_INFO *)(pcVar27 + 0x72f);
      param_3[0x8a] = *(_MACNV_SEEK_INFO *)(pcVar27 + 0x730);
      param_3[0x8b] = *(_MACNV_SEEK_INFO *)(pcVar27 + 0x731);
      param_3[0xb6] = *(_MACNV_SEEK_INFO *)(pcVar27 + 0x73f);
      param_3[0xa4] = *(_MACNV_SEEK_INFO *)(pcVar27 + 0x740);
      param_3[0xa5] = *(_MACNV_SEEK_INFO *)(pcVar27 + 0x741);
      param_3[0xd0] = *(_MACNV_SEEK_INFO *)(pcVar27 + 0x74f);
      param_3[0xbe] = *(_MACNV_SEEK_INFO *)(pcVar27 + 0x750);
      param_3[0xbf] = *(_MACNV_SEEK_INFO *)(pcVar27 + 0x751);
      param_3[0xea] = *(_MACNV_SEEK_INFO *)(pcVar27 + 0x75f);
      param_3[0xd8] = *(_MACNV_SEEK_INFO *)(pcVar27 + 0x760);
      param_3[0xd9] = *(_MACNV_SEEK_INFO *)(pcVar27 + 0x761);
      param_3[0x104] = *(_MACNV_SEEK_INFO *)(pcVar27 + 0x76f);
      param_3[0xf2] = *(_MACNV_SEEK_INFO *)(pcVar27 + 0x770);
      param_3[0xf3] = *(_MACNV_SEEK_INFO *)(pcVar27 + 0x771);
      param_3[0x11e] = *(_MACNV_SEEK_INFO *)(pcVar27 + 0x77f);
      param_3[0x10c] = *(_MACNV_SEEK_INFO *)(pcVar27 + 0x780);
      param_3[0x10d] = *(_MACNV_SEEK_INFO *)(pcVar27 + 0x781);
      param_3[0x138] = *(_MACNV_SEEK_INFO *)(pcVar27 + 0x78f);
      param_3[0x126] = *(_MACNV_SEEK_INFO *)(pcVar27 + 0x790);
      param_3[0x127] = *(_MACNV_SEEK_INFO *)(pcVar27 + 0x791);
      param_3[0x152] = *(_MACNV_SEEK_INFO *)(pcVar27 + 0x79f);
      param_3[0x140] = *(_MACNV_SEEK_INFO *)(pcVar27 + 0x7a0);
      param_3[0x141] = *(_MACNV_SEEK_INFO *)(pcVar27 + 0x7a1);
      param_3[0x16c] = *(_MACNV_SEEK_INFO *)(pcVar27 + 0x7af);
      param_3[0x15a] = *(_MACNV_SEEK_INFO *)(pcVar27 + 0x7b0);
      param_3[0x15b] = *(_MACNV_SEEK_INFO *)(pcVar27 + 0x7b1);
      param_3[0x186] = *(_MACNV_SEEK_INFO *)(pcVar27 + 0x7bf);
      param_3[0x174] = *(_MACNV_SEEK_INFO *)(pcVar27 + 0x7c0);
      param_3[0x175] = *(_MACNV_SEEK_INFO *)(pcVar27 + 0x7c1);
      param_3[0x1a0] = *(_MACNV_SEEK_INFO *)(pcVar27 + 1999);
      param_3[0x18e] = *(_MACNV_SEEK_INFO *)(pcVar27 + 2000);
      param_3[399] = *(_MACNV_SEEK_INFO *)(pcVar27 + 0x7d1);
      pcVar27[0xcd2] = '\0';
      pcVar27[1] = '\x01';
      return 0;
    }
  }
  return 0xfffffffe;
}

