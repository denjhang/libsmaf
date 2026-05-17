/* MaCmd_SeqInit @ 0023ab10 532B */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* YAMAHA::MaCmd_SeqInit(unsigned int, unsigned int, unsigned char*) */

void YAMAHA::MaCmd_SeqInit(uint param_1,uint param_2,uchar *param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  undefined8 uVar17;
  char cVar18;
  long lVar19;
  byte bVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  uchar uVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  char cVar31;
  char cVar32;
  uchar local_40;
  uchar uStack_3f;
  uchar uStack_3e;
  uchar uStack_3d;
  uchar uStack_3c;
  uchar uStack_3b;
  uchar uStack_3a;
  uchar uStack_39;
  uchar uStack_38;
  uchar uStack_37;
  uchar uStack_36;
  uchar uStack_35;
  uchar uStack_34;
  uchar uStack_33;
  uchar uStack_32;
  uchar uStack_31;
  uchar local_20;
  uchar uStack_1f;
  uchar uStack_1e;
  uchar uStack_1d;
  uchar uStack_1c;
  uchar uStack_1b;
  uchar uStack_1a;
  uchar uStack_19;
  uchar uStack_18;
  uchar uStack_17;
  uchar uStack_16;
  uchar uStack_15;
  uchar uStack_14;
  uchar uStack_13;
  uchar uStack_12;
  uchar uStack_11;
  
  lVar19 = *(long *)PTR___stack_chk_guard_00567868;
  if (param_2 < 5) {
    uVar27 = (&DAT_00532db0)[param_2];
    bVar20 = (&DAT_00532dc0)[param_2];
  }
  else {
    bVar20 = 0x70;
    uVar27 = 0xc3;
  }
  if (param_1 < 4) {
    lVar24 = (ulong)param_1 * 0x65d0;
    (&DAT_0074a410)[lVar24] = bVar20;
    (&DAT_0074a7d4)[lVar24] = 100;
    (&DAT_0074a42e)[lVar24] = bVar20;
    (&DAT_0074a44c)[lVar24] = bVar20;
    (&DAT_0074a46a)[lVar24] = bVar20;
    (&DAT_0074a488)[lVar24] = bVar20;
    (&DAT_0074a4a6)[lVar24] = bVar20;
    (&DAT_0074a4c4)[lVar24] = bVar20;
    (&DAT_0074a4e2)[lVar24] = bVar20;
    (&DAT_0074a500)[lVar24] = bVar20;
    (&DAT_0074a51e)[lVar24] = bVar20;
    (&DAT_0074a53c)[lVar24] = bVar20;
    (&DAT_0074a55a)[lVar24] = bVar20;
    (&DAT_0074a578)[lVar24] = bVar20;
    (&DAT_0074a596)[lVar24] = bVar20;
    (&DAT_0074a5b4)[lVar24] = bVar20;
    (&DAT_0074a5d2)[lVar24] = bVar20;
    (&DAT_0074a5f0)[lVar24] = bVar20;
    (&DAT_0074a60e)[lVar24] = bVar20;
    (&DAT_0074a62c)[lVar24] = bVar20;
    (&DAT_0074a64a)[lVar24] = bVar20;
    (&DAT_0074a668)[lVar24] = bVar20;
    (&DAT_0074a686)[lVar24] = bVar20;
    (&DAT_0074a6a4)[lVar24] = bVar20;
    (&DAT_0074a6c2)[lVar24] = bVar20;
    (&DAT_0074a6e0)[lVar24] = bVar20;
    (&DAT_0074a6fe)[lVar24] = bVar20;
    (&DAT_0074a71c)[lVar24] = bVar20;
    (&DAT_0074a73a)[lVar24] = bVar20;
    (&DAT_0074a758)[lVar24] = bVar20;
    (&DAT_0074a776)[lVar24] = bVar20;
    (&DAT_0074a794)[lVar24] = bVar20;
    (&DAT_0074a7b2)[lVar24] = bVar20;
    if (bVar20 != 0) {
      cVar18 = (char)(param_1 << 4);
      bVar20 = (byte)param_1 | bVar20;
      lVar26 = 0x40;
      cVar31 = (char)_DAT_0023ad30;
      uVar1 = (ulong)_DAT_0023ad30 >> 8;
      uVar5 = (ulong)_DAT_0023ad30 >> 0x10;
      uVar6 = (ulong)_DAT_0023ad30 >> 0x18;
      uVar7 = (ulong)_DAT_0023ad30 >> 0x20;
      uVar8 = (ulong)_DAT_0023ad30 >> 0x28;
      uVar9 = (ulong)_DAT_0023ad30 >> 0x30;
      uVar10 = (ulong)_DAT_0023ad30 >> 0x38;
      cVar32 = (char)_UNK_0023ad38;
      uVar2 = (ulong)_UNK_0023ad38 >> 8;
      uVar11 = (ulong)_UNK_0023ad38 >> 0x10;
      uVar12 = (ulong)_UNK_0023ad38 >> 0x18;
      uVar13 = (ulong)_UNK_0023ad38 >> 0x20;
      uVar14 = (ulong)_UNK_0023ad38 >> 0x28;
      uVar15 = (ulong)_UNK_0023ad38 >> 0x30;
      uVar16 = (ulong)_UNK_0023ad38 >> 0x38;
      uVar4 = CONCAT17(bVar20,CONCAT16(bVar20,CONCAT15(bVar20,CONCAT14(bVar20,CONCAT13(bVar20,
                                                  CONCAT12(bVar20,CONCAT11(bVar20,bVar20))))))) |
              0x8080808080808080;
      uVar3 = CONCAT17(bVar20,CONCAT16(bVar20,CONCAT15(bVar20,CONCAT14(bVar20,CONCAT13(bVar20,
                                                  CONCAT12(bVar20,CONCAT11(bVar20,bVar20))))))) |
              0x8080808080808080;
      (&DAT_0074a7d8)[lVar24] = 1;
      uVar17 = 0x49;
      lVar28 = 0x48;
      lVar29 = 0x47;
      lVar30 = 0x46;
      lVar24 = 0x45;
      lVar21 = 0x44;
      uVar2 = CONCAT17(cVar18 + (char)uVar16,
                       CONCAT16(cVar18 + (char)uVar15,
                                CONCAT15(cVar18 + (char)uVar14,
                                         CONCAT14(cVar18 + (char)uVar13,
                                                  CONCAT13(cVar18 + (char)uVar12,
                                                           CONCAT12(cVar18 + (char)uVar11,
                                                                    CONCAT11(cVar18 + (char)uVar2,
                                                                             cVar18 + cVar32)))))))
              | 0x8080808080808080;
      uVar1 = CONCAT17(cVar18 + (char)uVar10,
                       CONCAT16(cVar18 + (char)uVar9,
                                CONCAT15(cVar18 + (char)uVar8,
                                         CONCAT14(cVar18 + (char)uVar7,
                                                  CONCAT13(cVar18 + (char)uVar6,
                                                           CONCAT12(cVar18 + (char)uVar5,
                                                                    CONCAT11(cVar18 + (char)uVar1,
                                                                             cVar18 + cVar31)))))))
              | 0x8080808080808080;
      lVar22 = 0x43;
      lVar23 = 0x42;
      lVar25 = 0x41;
      local_40 = (uchar)uVar1;
      uStack_3f = (uchar)(uVar1 >> 8);
      uStack_3e = (uchar)(uVar1 >> 0x10);
      uStack_3d = (uchar)(uVar1 >> 0x18);
      uStack_3c = (uchar)(uVar1 >> 0x20);
      uStack_3b = (uchar)(uVar1 >> 0x28);
      uStack_3a = (uchar)(uVar1 >> 0x30);
      uStack_39 = (uchar)(uVar1 >> 0x38);
      uStack_38 = (uchar)uVar2;
      uStack_37 = (uchar)(uVar2 >> 8);
      uStack_36 = (uchar)(uVar2 >> 0x10);
      uStack_35 = (uchar)(uVar2 >> 0x18);
      uStack_34 = (uchar)(uVar2 >> 0x20);
      uStack_33 = (uchar)(uVar2 >> 0x28);
      uStack_32 = (uchar)(uVar2 >> 0x30);
      uStack_31 = (uchar)(uVar2 >> 0x38);
      local_20 = (uchar)uVar3;
      uStack_1f = (uchar)(uVar3 >> 8);
      uStack_1e = (uchar)(uVar3 >> 0x10);
      uStack_1d = (uchar)(uVar3 >> 0x18);
      uStack_1c = (uchar)(uVar3 >> 0x20);
      uStack_1b = (uchar)(uVar3 >> 0x28);
      uStack_1a = (uchar)(uVar3 >> 0x30);
      uStack_19 = (uchar)(uVar3 >> 0x38);
      uStack_18 = (uchar)uVar4;
      uStack_17 = (uchar)(uVar4 >> 8);
      uStack_16 = (uchar)(uVar4 >> 0x10);
      uStack_15 = (uchar)(uVar4 >> 0x18);
      uStack_14 = (uchar)(uVar4 >> 0x20);
      uStack_13 = (uchar)(uVar4 >> 0x28);
      uStack_12 = (uchar)(uVar4 >> 0x30);
      uStack_11 = (uchar)(uVar4 >> 0x38);
      *param_3 = 0x8b;
      param_3[1] = local_40;
      param_3[2] = 0x94;
      param_3[3] = local_20;
      param_3[4] = 0x8b;
      param_3[5] = uStack_3f;
      param_3[6] = 0x94;
      param_3[7] = uStack_1f;
      param_3[8] = 0x8b;
      param_3[9] = uStack_3e;
      param_3[10] = 0x94;
      param_3[0xb] = uStack_1e;
      param_3[0xc] = 0x8b;
      param_3[0xd] = uStack_3d;
      param_3[0xe] = 0x94;
      param_3[0xf] = uStack_1d;
      param_3[0x10] = 0x8b;
      param_3[0x11] = uStack_3c;
      param_3[0x12] = 0x94;
      param_3[0x13] = uStack_1c;
      param_3[0x14] = 0x8b;
      param_3[0x15] = uStack_3b;
      param_3[0x16] = 0x94;
      param_3[0x17] = uStack_1b;
      param_3[0x18] = 0x8b;
      param_3[0x19] = uStack_3a;
      param_3[0x1a] = 0x94;
      param_3[0x1b] = uStack_1a;
      param_3[0x1c] = 0x8b;
      param_3[0x1d] = uStack_39;
      param_3[0x1e] = 0x94;
      param_3[0x1f] = uStack_19;
      param_3[0x20] = 0x8b;
      param_3[0x21] = uStack_38;
      param_3[0x22] = 0x94;
      param_3[0x23] = uStack_18;
      param_3[0x24] = 0x8b;
      param_3[0x25] = uStack_37;
      param_3[0x26] = 0x94;
      param_3[0x27] = uStack_17;
      param_3[0x28] = 0x8b;
      param_3[0x29] = uStack_36;
      param_3[0x2a] = 0x94;
      param_3[0x2b] = uStack_16;
      param_3[0x2c] = 0x8b;
      param_3[0x2d] = uStack_35;
      param_3[0x2e] = 0x94;
      param_3[0x2f] = uStack_15;
      param_3[0x30] = 0x8b;
      param_3[0x31] = uStack_34;
      param_3[0x32] = 0x94;
      param_3[0x33] = uStack_14;
      param_3[0x34] = 0x8b;
      param_3[0x35] = uStack_33;
      param_3[0x36] = 0x94;
      param_3[0x37] = uStack_13;
      param_3[0x38] = 0x8b;
      param_3[0x39] = uStack_32;
      param_3[0x3a] = 0x94;
      param_3[0x3b] = uStack_12;
      param_3[0x3c] = 0x8b;
      param_3[0x3d] = uStack_31;
      param_3[0x3e] = 0x94;
      param_3[0x3f] = uStack_11;
      goto LAB_0023acc0;
    }
    (&DAT_0074a7d8)[lVar24] = 0;
  }
  lVar28 = 8;
  uVar17 = 9;
  lVar29 = 7;
  lVar30 = 6;
  lVar24 = 5;
  lVar21 = 4;
  lVar22 = 3;
  lVar23 = 2;
  lVar25 = 1;
  lVar26 = 0;
LAB_0023acc0:
  param_3[lVar26] = 0xf2;
  param_3[lVar25] = (byte)param_1;
  param_3[lVar23] = 'e';
  param_3[lVar22] = 'A';
  param_3[lVar21] = '\b';
  param_3[lVar24] = '\0';
  param_3[lVar30] = '\b';
  param_3[lVar29] = '\0';
  param_3[lVar28] = uVar27;
  if (lVar19 == *(long *)PTR___stack_chk_guard_00567868) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar17);
}

