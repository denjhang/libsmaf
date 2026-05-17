/* MaCmd_NoteOnMa2 @ 002333f8 1832B */


/* YAMAHA::MaCmd_NoteOnMa2(unsigned int, int, unsigned int, unsigned int, unsigned int, unsigned
   char*) */

void YAMAHA::MaCmd_NoteOnMa2
               (uint param_1,int param_2,uint param_3,uint param_4,uint param_5,uchar *param_6)

{
  char cVar1;
  ushort uVar2;
  ushort uVar3;
  uint uVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  uint uVar14;
  byte bVar15;
  ulong uVar16;
  byte bVar17;
  uint uVar18;
  ulong uVar19;
  ulong uVar20;
  byte bVar21;
  ulong uVar22;
  ulong uVar23;
  uint local_10;
  ushort local_c;
  char local_a;
  long local_8;
  
  uVar14 = param_3 & 0xf;
  uVar18 = param_4 & 0x7f;
  bVar17 = (byte)param_5 & 0x7f;
  local_8 = *(long *)PTR___stack_chk_guard_00567868;
  uVar22 = (ulong)param_1;
  iVar6 = MaCmd_GetVoiceInfo(param_1,uVar14,uVar18,(_MASNDVOICE *)&local_10);
  if (iVar6 < 0) {
    uVar22 = MaCmd_Nop(param_2,0,param_6);
    goto LAB_00233664;
  }
  uVar10 = (ulong)uVar14;
  bVar11 = (char)uVar14 + (char)param_1 * '\b';
  lVar8 = uVar10 * 0x1e + uVar22 * 0x65d0;
  cVar1 = (&DAT_0074a412)[lVar8];
  (&DAT_0074a412)[lVar8] = cVar1 + '\x01';
  if ((iVar6 == 1) && ((char)(cVar1 + '\x01') != '\x01')) {
    bVar15 = (&DAT_0074a414)[lVar8];
    if ((char)bVar15 < '\0') goto LAB_002334b4;
    uVar2 = *(ushort *)(&DAT_0074a42c + lVar8);
  }
  else {
    bVar15 = (&DAT_0074a414)[uVar10 * 0x1e + uVar22 * 0x65d0];
LAB_002334b4:
    *(ushort *)(&DAT_0074a42c + uVar10 * 0x1e + uVar22 * 0x65d0) = local_c;
    uVar2 = local_c;
  }
  uVar14 = (uint)bVar15;
  if (local_a == '\0') {
    bVar13 = (&DAT_0074a415)[uVar10 * 0x1e + uVar22 * 0x65d0];
    if (uVar14 < 0x80) {
      if ((&DAT_0074a7d5)[uVar22 * 0x65d0] == '\x05') {
        uVar2 = *(ushort *)
                 (&DAT_0052f850 +
                 ((ulong)uVar18 + (ulong)(byte)(&DAT_00530050)[bVar13 + 0x80] * 0x80) * 2);
      }
      else {
        uVar2 = *(ushort *)
                 (&DAT_0052f850 +
                 ((ulong)uVar18 +
                 (ulong)(byte)(&DAT_00530050)[(uVar14 & 0xffffff80) + (uint)bVar13] * 0x80) * 2);
      }
    }
    else {
      uVar2 = *(ushort *)
               (&DAT_0052f850 +
               (((ulong)uVar2 & 0x7f) + (ulong)(byte)(&DAT_00530050)[bVar13 + 0x80] * 0x80) * 2);
    }
    uVar20 = (ulong)uVar2;
    bVar13 = (byte)uVar2;
    if ((char)bVar15 < '\0') {
      uVar3 = *(ushort *)(&DAT_00531250 + (long)(int)(local_c & 0x7f) * 2);
      uVar23 = (ulong)uVar3;
      if (-1 < param_2) {
        bVar12 = (byte)(uVar3 >> 7) & 0x3f;
        bVar15 = (byte)uVar3 & 0x7f;
        bVar21 = (byte)(uVar2 >> 7) & 0x3f;
        goto LAB_00233564;
      }
      *param_6 = 0x80;
      param_6[1] = (&DAT_0074a413)[uVar10 * 0x1e + uVar22 * 0x65d0] | 0x80;
LAB_002338b0:
      uVar19 = 6;
      uVar9 = 4;
      param_6[2] = 0x8a;
      uVar18 = 6;
      param_6[3] = 0x90;
      uVar16 = 5;
      uVar14 = 4;
      goto LAB_002338d4;
    }
    bVar21 = (byte)(uVar2 >> 7) & 0x3f;
LAB_00233548:
    uVar2 = *(ushort *)(&DAT_00531250 + (ulong)uVar18 * 2);
    uVar23 = (ulong)uVar2;
    if (-1 < param_2) {
      bVar12 = (byte)(uVar2 >> 7) & 0x3f;
      bVar15 = (byte)uVar2 & 0x7f;
      goto LAB_00233564;
    }
    uVar19 = 2;
    uVar9 = 0;
    bVar12 = (byte)(uVar2 >> 7) & 0x3f;
    bVar15 = (byte)uVar2 & 0x7f;
    uVar18 = 2;
    uVar16 = 1;
    uVar14 = 0;
  }
  else {
    if (-1 < param_2) {
      uVar20 = 0;
      if (0x17 < (byte)(&DAT_0052ee00)[bVar17]) {
        uVar4 = (byte)(&DAT_0052ee00)[bVar17] - 0x18;
        if (0xc0 < uVar4) {
          uVar4 = 0xc0;
        }
        uVar20 = (ulong)uVar4;
      }
      bVar17 = (&DAT_0052ee80)[uVar20];
    }
    bVar13 = (&DAT_0074a415)[uVar10 * 0x1e + uVar22 * 0x65d0];
    if (uVar14 < 0x80) {
      if ((&DAT_0074a7d5)[uVar22 * 0x65d0] == '\x05') {
        uVar14 = *(int *)(&DAT_00530150 +
                         ((ulong)uVar18 + (ulong)(byte)(&DAT_00530050)[bVar13 + 0x80] * 0x80) * 4) *
                 (int)(SUB168((ZEXT216(uVar2) * (undefined1  [16])0x10000) /
                              (undefined1  [16])0x5dc0,0) + 1U >> 1);
        goto joined_r0x00233950;
      }
      uVar14 = *(int *)(&DAT_00530150 +
                       ((ulong)uVar18 +
                       (ulong)(byte)(&DAT_00530050)[(uVar14 & 0xffffff80) + (uint)bVar13] * 0x80) *
                       4) *
               (int)(SUB168((ZEXT216(uVar2) * (undefined1  [16])0x10000) / (undefined1  [16])0x5dc0,
                            0) + 1U >> 1);
      if ((int)uVar14 < 0) goto LAB_00233954;
LAB_00233748:
      if (uVar14 < 0x4000001) {
        bVar13 = 1;
        bVar21 = 0;
        uVar20 = 1;
      }
      else {
        uVar14 = ((uint)((ulong)uVar14 + 0x8000 >> 0x10) >>
                  (ulong)(*(uint *)(&DAT_00531150 +
                                   ((ulong)((long)((ulong)uVar14 + 0x8000) >> 0x10) >> 10) * 4) &
                         0x1f) & 0x3ff) +
                 *(uint *)(&DAT_00531150 +
                          ((ulong)((long)((ulong)uVar14 + 0x8000) >> 0x10) >> 10) * 4) * 0x400;
        uVar20 = (ulong)uVar14;
        if (uVar14 == 0) {
          bVar13 = 1;
          uVar20 = 1;
          bVar21 = 0;
        }
        else {
          bVar21 = (byte)(uVar14 >> 7) & 0x3f;
          bVar13 = (byte)uVar14;
        }
      }
    }
    else {
      uVar14 = *(int *)(&DAT_00530240 +
                       (ulong)(byte)(&DAT_00530050)[(uVar14 & 0xffffff80) + (uint)bVar13] * 0x200) *
               (int)(SUB168((ZEXT216(uVar2) * (undefined1  [16])0x10000) / (undefined1  [16])0x5dc0,
                            0) + 1U >> 1);
joined_r0x00233950:
      if (-1 < (int)uVar14) goto LAB_00233748;
LAB_00233954:
      bVar13 = 0;
      bVar21 = 0x28;
      uVar20 = 0x1400;
    }
    bVar11 = bVar11 | 0x40;
    if (-1 < (char)bVar15) goto LAB_00233548;
    if (param_2 < 0) {
      *param_6 = 0x80;
      uVar23 = 0x3f0;
      param_6[1] = (&DAT_0074a413)[uVar22 * 0x65d0 + uVar10 * 0x1e] | 0x80;
      goto LAB_002338b0;
    }
    bVar15 = 0x70;
    bVar12 = 7;
    uVar23 = 0x3f0;
LAB_00233564:
    iVar6 = param_2;
    if (param_2 < 0x80) {
      uVar9 = 1;
      uVar19 = 0;
      uVar14 = 1;
      uVar18 = 0;
    }
    else {
      lVar8 = 0;
      do {
        iVar7 = (int)lVar8;
        uVar18 = iVar7 + 1;
        bVar5 = (byte)iVar6;
        iVar6 = iVar6 >> 7;
        param_6[lVar8] = bVar5 & 0x7f;
        if (1 < uVar18) break;
        lVar8 = 1;
      } while (0x7f < iVar6);
      uVar14 = iVar7 + 2;
      uVar9 = (ulong)uVar14;
      uVar19 = (ulong)uVar18;
    }
    param_6[uVar19] = (byte)iVar6 | 0x80;
    lVar8 = uVar10 * 0x1e + uVar22 * 0x65d0;
    if ((char)(&DAT_0074a414)[lVar8] < '\0') {
      param_6[uVar9] = 0x80;
      param_6[uVar18 + 2] = (&DAT_0074a413)[lVar8] | 0x80;
      param_6[uVar18 + 3] = 0x80;
      uVar18 = uVar14 + 8;
      uVar19 = (ulong)uVar18;
      param_6[uVar14 + 3] = 0x8a;
      param_6[uVar14 + 4] = 0x90;
      uVar16 = (ulong)(uVar14 + 7);
      uVar9 = (ulong)(uVar14 + 6);
      param_6[uVar14 + 5] = 0x80;
      uVar14 = uVar14 + 6;
LAB_002338d4:
      bVar12 = (byte)(uVar23 >> 7) & 0x3f;
      bVar15 = (byte)uVar23 & 0x7f;
      bVar21 = (byte)(uVar20 >> 7) & 0x3f;
      bVar13 = (byte)uVar20;
      (&DAT_0074a412)[uVar10 * 0x1e + uVar22 * 0x65d0] = 1;
    }
    else {
      uVar18 = uVar14 + 2;
      uVar19 = (ulong)uVar18;
      uVar16 = (ulong)(uVar14 + 1);
    }
  }
  param_6[uVar9] = 0x80;
  param_6[uVar16] = bVar11 | 0x80;
  if ((&DAT_0074a412)[uVar10 * 0x1e + uVar22 * 0x65d0] == '\x01') {
    uVar20 = uVar19;
    if (-1 < param_2) {
      uVar18 = uVar14 + 3;
      uVar20 = (ulong)uVar18;
      param_6[uVar19] = 0x80;
    }
    param_6[uVar20] = 0x81;
    param_6[uVar18 + 1] = (byte)(local_10 >> 0xf) & 3;
    param_6[uVar18 + 2] = (byte)(local_10 >> 8) & 0x7f;
    param_6[uVar18 + 3] = (byte)(local_10 >> 1) & 0x7f;
    param_6[uVar18 + 4] = bVar12;
    param_6[uVar18 + 5] = bVar15;
    lVar8 = uVar10 * 0x1e + uVar22 * 0x65d0;
    param_6[uVar18 + 6] = bVar17 & 0x7c;
    param_6[uVar18 + 7] = bVar21;
    param_6[uVar18 + 8] = bVar13 & 0x7f;
    uVar22 = (ulong)(uVar18 + 0xb);
    param_6[uVar18 + 9] = (&DAT_0074a41f)[lVar8];
    param_6[uVar18 + 10] = (&DAT_0074a411)[lVar8] | 0xc0;
    (&DAT_0074a413)[lVar8] = bVar11;
  }
  else {
    uVar22 = uVar19;
    if (-1 < param_2) {
      uVar18 = uVar14 + 3;
      uVar22 = (ulong)uVar18;
      param_6[uVar19] = 0x80;
    }
    param_6[uVar22] = 0x84;
    param_6[uVar18 + 1] = bVar12;
    param_6[uVar18 + 2] = bVar15;
    param_6[uVar18 + 3] = bVar17 & 0x7c;
    param_6[uVar18 + 4] = bVar21;
    uVar22 = (ulong)(uVar18 + 6);
    param_6[uVar18 + 5] = bVar13 | 0x80;
  }
LAB_00233664:
  if (local_8 != *(long *)PTR___stack_chk_guard_00567868) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar22);
  }
  return;
}

