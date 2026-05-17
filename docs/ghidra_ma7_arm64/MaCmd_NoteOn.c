/* MaCmd_NoteOn @ 00234068 2472B */


/* YAMAHA::MaCmd_NoteOn(unsigned int, int, unsigned int, unsigned int, unsigned int, unsigned char*)
    */

void YAMAHA::MaCmd_NoteOn
               (uint param_1,int param_2,uint param_3,uint param_4,uint param_5,uchar *param_6)

{
  char cVar1;
  ushort uVar2;
  bool bVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  uint uVar9;
  byte bVar10;
  byte bVar11;
  long lVar12;
  byte bVar13;
  byte bVar14;
  ulong uVar15;
  uint uVar16;
  ulong uVar17;
  int iVar18;
  uint uVar19;
  ulong uVar20;
  uint uVar21;
  byte bVar22;
  uint local_20;
  ushort local_1c;
  char local_1a;
  uint local_18;
  uint local_14;
  uint local_10;
  long local_8;
  
  bVar22 = (byte)param_5 & 0x7f;
  uVar21 = param_3 & 0xf;
  uVar15 = (ulong)uVar21;
  uVar17 = (ulong)param_1;
  uVar19 = param_4 & 0x7f;
  local_8 = *(long *)PTR___stack_chk_guard_00567868;
  iVar6 = MaCmd_GetVoiceInfo(param_1,uVar21,uVar19,(_MASNDVOICE *)&local_20);
  if (iVar6 < 0) {
    uVar15 = MaCmd_Nop(param_2,0,param_6);
    goto LAB_002343cc;
  }
  lVar8 = uVar17 * 0x65d0;
  lVar12 = uVar15 * 0x1e + lVar8;
  if ((char)(&DAT_0074a414)[lVar12] < '\0') {
    uVar16 = (uint)(byte)(&DAT_0074a7d5)[lVar8];
    if (uVar16 == 4) {
      uVar20 = MaDva_GetAlt3Slot(uVar19);
      if ((int)(uint)uVar20 < 0) {
        uVar20 = 0;
        uVar16 = (uint)(byte)(&DAT_0074a7d5)[lVar8];
        uVar9 = 2;
      }
      else {
        uVar20 = MaCmd_NoteOff(param_1,param_2,(uint)uVar20 & 0xf,
                               (uint)((uVar20 & 0xffffffff) >> 6) & 0x7f,param_6);
        uVar20 = uVar20 & 0xffffffff;
        uVar16 = (uint)(byte)(&DAT_0074a7d5)[lVar8];
        if (0 < param_2) {
          param_2 = 0;
        }
        uVar9 = 2;
      }
    }
    else {
      uVar20 = 0;
      uVar9 = 2;
    }
  }
  else {
    uVar20 = 0;
    uVar9 = (uint)(byte)(&DAT_0074a416)[lVar12];
    uVar16 = (uint)(byte)(&DAT_0074a7d5)[lVar8];
  }
  if (local_1a == '\0') {
    if (uVar16 != 3) {
LAB_0023414c:
      MaDva_GetFmSlot(param_1,uVar21,uVar19,uVar9,(_MADVA_GETSLOTINFO *)&local_18);
      local_10 = local_10 | 0x40;
      if (iVar6 != 1 || local_18 != 2) goto LAB_00234190;
LAB_0023478c:
      uVar2 = *(ushort *)(&DAT_0074a42c + uVar15 * 0x1e + uVar17 * 0x65d0);
    }
    else {
      if ((byte)(&DAT_0074a7d9)[uVar17 * 0x65d0] != uVar21) goto LAB_0023414c;
      lVar12 = uVar15 * 0x1e + uVar17 * 0x65d0;
      if ((char)(&DAT_0074a414)[lVar12] < '\0') {
        bVar3 = true;
        (&DAT_0074a412)[lVar12] = 0;
      }
      else {
        cVar1 = (&DAT_0074a412)[lVar12];
        if (cVar1 != '\0') {
          uVar16 = 2;
        }
        bVar3 = cVar1 == '\0' || iVar6 != 1;
        (&DAT_0074a412)[(ulong)(byte)(&DAT_0074a7d9)[uVar17 * 0x65d0] * 0x1e + uVar17 * 0x65d0] =
             cVar1 + '\x01';
      }
      local_14 = 0x1f;
      local_10 = 0x5f;
      (&DAT_0074a7da)[uVar17 * 0x65d0] = 0x1f;
      local_18 = uVar16;
      if (!bVar3) goto LAB_0023478c;
LAB_00234190:
      *(ushort *)(&DAT_0074a42c + uVar15 * 0x1e + uVar17 * 0x65d0) = local_1c;
      uVar2 = local_1c;
    }
    lVar12 = uVar15 * 0x1e + uVar17 * 0x65d0;
    if ((byte)(&DAT_0074a414)[lVar12] < 0x80) {
      bVar13 = (byte)(*(ushort *)
                       (&DAT_0052f850 +
                       ((ulong)uVar19 +
                       (ulong)(byte)(&DAT_00530050)
                                    [((byte)(&DAT_0074a414)[lVar12] & 0xffffff80) +
                                     (uint)(byte)(&DAT_0074a415)[lVar12]] * 0x80) * 2) >> 7) & 0x3f;
      bVar14 = (byte)*(ushort *)
                      (&DAT_0052f850 +
                      ((ulong)uVar19 +
                      (ulong)(byte)(&DAT_00530050)
                                   [((byte)(&DAT_0074a414)[lVar12] & 0xffffff80) +
                                    (uint)(byte)(&DAT_0074a415)[lVar12]] * 0x80) * 2);
    }
    else {
      bVar13 = (byte)(*(ushort *)
                       (&DAT_0052f850 +
                       (((ulong)uVar2 & 0x7f) +
                       (ulong)(byte)(&DAT_00530050)[(byte)(&DAT_0074a415)[lVar12] + 0x80] * 0x80) *
                       2) >> 7) & 0x3f;
      bVar14 = (byte)*(ushort *)
                      (&DAT_0052f850 +
                      (((ulong)uVar2 & 0x7f) +
                      (ulong)(byte)(&DAT_00530050)[(byte)(&DAT_0074a415)[lVar12] + 0x80] * 0x80) * 2
                      );
    }
  }
  else {
    if (uVar16 != 3) {
LAB_00234424:
      MaDva_GetWtSlot(param_1,uVar21,uVar19,uVar9,(_MADVA_GETSLOTINFO *)&local_18);
      local_14 = local_14 | 0x40;
      bVar3 = iVar6 != 1 || local_18 != 2;
    }
    else {
      if ((byte)(&DAT_0074a7d9)[uVar17 * 0x65d0] != uVar21) goto LAB_00234424;
      lVar12 = uVar15 * 0x1e + uVar17 * 0x65d0;
      if ((char)(&DAT_0074a414)[lVar12] < '\0') {
        bVar3 = true;
        (&DAT_0074a412)[lVar12] = 0;
      }
      else {
        cVar1 = (&DAT_0074a412)[lVar12];
        if (cVar1 != '\0') {
          uVar16 = 2;
        }
        bVar3 = cVar1 == '\0' || iVar6 != 1;
        (&DAT_0074a412)[(ulong)(byte)(&DAT_0074a7d9)[uVar17 * 0x65d0] * 0x1e + uVar17 * 0x65d0] =
             cVar1 + '\x01';
      }
      local_14 = 0x5f;
      local_10 = 0x1f;
      (&DAT_0074a7da)[uVar17 * 0x65d0] = 0x5f;
      local_18 = uVar16;
    }
    if ((&DAT_0074a7d7)[uVar17 * 0x65d0] == '\x01') {
      uVar21 = 0;
      if ((0x17 < (byte)(&DAT_0052ee00)[bVar22]) &&
         (uVar21 = (byte)(&DAT_0052ee00)[bVar22] - 0x18, 0xc0 < uVar21)) {
        uVar21 = 0xc0;
      }
      bVar22 = (&DAT_0052ee80)[uVar21];
      if (!bVar3) goto LAB_002346d8;
LAB_00234480:
      *(ushort *)(&DAT_0074a42c + uVar15 * 0x1e + uVar17 * 0x65d0) = local_1c;
      uVar2 = local_1c;
    }
    else {
      if (bVar3) goto LAB_00234480;
LAB_002346d8:
      uVar2 = *(ushort *)(&DAT_0074a42c + uVar15 * 0x1e + uVar17 * 0x65d0);
    }
    lVar12 = uVar15 * 0x1e + uVar17 * 0x65d0;
    bVar14 = (&DAT_0074a414)[lVar12];
    if (bVar14 < 0x80) {
      uVar21 = *(int *)(&DAT_00530150 +
                       ((ulong)uVar19 +
                       (ulong)(byte)(&DAT_00530050)
                                    [(bVar14 & 0xffffff80) + (uint)(byte)(&DAT_0074a415)[lVar12]] *
                       0x80) * 4) *
               (int)(SUB168((ZEXT216(uVar2) * (undefined1  [16])0x10000) / (undefined1  [16])0x5dc0,
                            0) + 1U >> 1);
      if ((int)uVar21 < 0) goto LAB_002348b8;
      if (uVar21 < 0x4000001) goto LAB_00234704;
      uVar21 = ((uint)((ulong)uVar21 + 0x8000 >> 0x10) >>
                (ulong)(*(uint *)(&DAT_00531150 +
                                 ((ulong)((long)((ulong)uVar21 + 0x8000) >> 0x10) >> 10) * 4) & 0x1f
                       ) & 0x3ff) +
               *(uint *)(&DAT_00531150 + ((ulong)((long)((ulong)uVar21 + 0x8000) >> 0x10) >> 10) * 4
                        ) * 0x400;
joined_r0x002348b0:
      bVar13 = 0;
      bVar14 = 1;
      if (uVar21 != 0) {
        bVar13 = (byte)(uVar21 >> 7) & 0x3f;
        bVar14 = (byte)uVar21;
      }
    }
    else {
      uVar21 = *(int *)(&DAT_00530240 +
                       (ulong)(byte)(&DAT_00530050)
                                    [(bVar14 & 0xffffff80) + (uint)(byte)(&DAT_0074a415)[lVar12]] *
                       0x200) *
               (int)(SUB168((ZEXT216(uVar2) * (undefined1  [16])0x10000) / (undefined1  [16])0x5dc0,
                            0) + 1U >> 1);
      if ((int)uVar21 < 0) {
LAB_002348b8:
        bVar14 = 0;
        bVar13 = 0x28;
      }
      else {
        if (0x4000000 < uVar21) {
          uVar21 = ((uint)((ulong)uVar21 + 0x8000 >> 0x10) >>
                    (ulong)(*(uint *)(&DAT_00531150 +
                                     ((ulong)((long)((ulong)uVar21 + 0x8000) >> 0x10) >> 10) * 4) &
                           0x1f) & 0x3ff) +
                   *(uint *)(&DAT_00531150 +
                            ((ulong)((long)((ulong)uVar21 + 0x8000) >> 0x10) >> 10) * 4) * 0x400;
          goto joined_r0x002348b0;
        }
LAB_00234704:
        bVar14 = 1;
        bVar13 = 0;
      }
    }
  }
  iVar6 = (int)uVar20;
  bVar5 = (byte)local_14;
  if ((char)(&DAT_0074a414)[uVar15 * 0x1e + uVar17 * 0x65d0] < '\0') {
    if (local_1a != '\0') {
      bVar11 = 0x70;
      bVar10 = 7;
      goto LAB_00234244;
    }
    bVar10 = (byte)(*(ushort *)(&DAT_00531250 + (long)(int)(local_1c & 0x7f) * 2) >> 7) & 0x3f;
    bVar11 = (byte)*(ushort *)(&DAT_00531250 + (long)(int)(local_1c & 0x7f) * 2) & 0x7f;
    if (param_2 < 0) goto LAB_00234594;
LAB_0023424c:
    if (param_2 < 0x80) {
      iVar18 = 1;
      uVar7 = 0;
    }
    else {
      lVar12 = 0;
      do {
        iVar18 = (int)lVar12;
        uVar21 = iVar18 + 1;
        bVar4 = (byte)param_2;
        param_2 = param_2 >> 7;
        param_6[lVar12 + uVar20] = bVar4 & 0x7f;
        if (1 < uVar21) break;
        lVar12 = 1;
      } while (0x7f < param_2);
      uVar7 = (ulong)uVar21;
      iVar18 = iVar18 + 2;
    }
    param_6[uVar7 + uVar20] = (byte)param_2 | 0x80;
    uVar16 = iVar6 + iVar18;
    if (local_18 == 1) {
      param_6[uVar16] = 0x80;
      uVar21 = uVar16 + 2;
      param_6[uVar16 + 1] = bVar5 | 0x80;
    }
    else {
      if (local_18 != 3) {
        param_6[uVar16] = 0x80;
        uVar21 = uVar16 + 3;
        param_6[uVar16 + 1] = bVar5 | 0x80;
        param_6[uVar16 + 2] = 0x80;
LAB_00234650:
        param_6[uVar21] = 0x84;
        param_6[uVar21 + 1] = bVar10;
        param_6[uVar21 + 2] = bVar11;
        param_6[uVar21 + 3] = bVar22 & 0x7c;
        param_6[uVar21 + 4] = bVar13;
        uVar15 = (ulong)(uVar21 + 6);
        param_6[uVar21 + 5] = bVar14 | 0x80;
        goto LAB_002343cc;
      }
      param_6[uVar16] = 0x80;
      param_6[uVar16 + 1] = (byte)local_10 | 0x80;
      param_6[uVar16 + 2] = 0x80;
      param_6[uVar16 + 3] = 0x8a;
      param_6[uVar16 + 4] = 0xa0;
      param_6[uVar16 + 5] = 0x80;
      uVar21 = uVar16 + 8;
      param_6[uVar16 + 6] = 0x80;
      param_6[uVar16 + 7] = bVar5 | 0x80;
      uVar16 = uVar16 + 6;
    }
    param_6[uVar21] = 0x80;
    param_6[uVar16 + 3] = 0x8a;
    param_6[uVar16 + 4] = 0x90;
    uVar19 = uVar16 + 6;
    param_6[uVar16 + 5] = 0x80;
  }
  else {
    bVar10 = (byte)(*(ushort *)(&DAT_00531250 + (ulong)uVar19 * 2) >> 7) & 0x3f;
    bVar11 = (byte)*(ushort *)(&DAT_00531250 + (ulong)uVar19 * 2) & 0x7f;
LAB_00234244:
    if (-1 < param_2) goto LAB_0023424c;
LAB_00234594:
    if (local_18 != 1) {
      if (local_18 == 3) {
        param_6[uVar20] = 0x80;
        param_6[iVar6 + 1] = (byte)local_10 | 0x80;
        param_6[iVar6 + 2] = 0x8a;
        param_6[iVar6 + 3] = 0xa0;
        param_6[iVar6 + 4] = 0x80;
        uVar21 = iVar6 + 6;
        param_6[iVar6 + 5] = bVar5 | 0x80;
        goto LAB_00234920;
      }
      param_6[uVar20] = 0x80;
      uVar21 = iVar6 + 2;
      param_6[iVar6 + 1] = bVar5 | 0x80;
      goto LAB_00234650;
    }
    param_6[uVar20] = 0x80;
    uVar21 = iVar6 + 2;
    param_6[iVar6 + 1] = bVar5 | 0x80;
LAB_00234920:
    param_6[uVar21] = 0x8a;
    uVar19 = uVar21 + 2;
    param_6[uVar21 + 1] = 0x90;
  }
  param_6[uVar19] = 0x81;
  param_6[uVar19 + 1] = (byte)(local_20 >> 0xf) & 3;
  param_6[uVar19 + 2] = (byte)(local_20 >> 8) & 0x7f;
  param_6[uVar19 + 3] = (byte)(local_20 >> 1) & 0x7f;
  param_6[uVar19 + 4] = bVar10;
  param_6[uVar19 + 5] = bVar11;
  lVar12 = uVar15 * 0x1e + uVar17 * 0x65d0;
  param_6[uVar19 + 6] = bVar22 & 0x7c;
  param_6[uVar19 + 7] = bVar13;
  param_6[uVar19 + 8] = bVar14 & 0x7f;
  uVar15 = (ulong)(uVar19 + 0xb);
  param_6[uVar19 + 9] = (&DAT_0074a41f)[lVar12];
  param_6[uVar19 + 10] = (&DAT_0074a411)[lVar12] | 0xc0;
LAB_002343cc:
  if (local_8 == *(long *)PTR___stack_chk_guard_00567868) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar15);
}

