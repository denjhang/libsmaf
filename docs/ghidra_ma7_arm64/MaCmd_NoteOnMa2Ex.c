/* MaCmd_NoteOnMa2Ex @ 00233b20 944B */


/* YAMAHA::MaCmd_NoteOnMa2Ex(unsigned int, int, unsigned int, unsigned int, unsigned int, unsigned
   char*) */

void YAMAHA::MaCmd_NoteOnMa2Ex
               (uint param_1,int param_2,uint param_3,uint param_4,uint param_5,uchar *param_6)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  uint uVar6;
  ulong uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  uint uVar15;
  uint local_10;
  char local_a;
  long local_8;
  
  uVar1 = param_3 & 0xf;
  local_8 = *(long *)PTR___stack_chk_guard_00567868;
  uVar14 = (ulong)param_1;
  iVar3 = MaCmd_GetVoiceInfo(param_1,uVar1,0x40,(_MASNDVOICE *)&local_10);
  if ((iVar3 < 0) || (local_a != '\0')) {
    uVar14 = MaCmd_Nop(param_2,0,param_6);
    goto LAB_00233cf0;
  }
  uVar9 = param_4 >> 10 & 7;
  uVar10 = uVar9 << 10;
  uVar15 = (param_4 & 0x3ff) * 0x10911;
  uVar8 = uVar15 >> 0x10;
  if (0x3ff < uVar8) {
    uVar8 = uVar15 >> 0x11;
    uVar10 = 0x1c00;
    if (uVar9 != 7) {
      uVar10 = (uVar9 + 1 & 7) << 10;
    }
  }
  uVar11 = (ulong)uVar1;
  lVar12 = uVar11 * 0x1e + uVar14 * 0x65d0;
  (&DAT_0074a412)[lVar12] = (&DAT_0074a412)[lVar12] + '\x01';
  if (param_2 < 0) {
    if ((char)(&DAT_0074a414)[lVar12] < '\0') {
      *param_6 = 0x80;
      uVar7 = 6;
      uVar5 = 4;
      bVar2 = (&DAT_0074a413)[lVar12];
      param_6[2] = 0x8a;
      param_6[3] = 0x90;
      param_6[1] = bVar2 | 0x80;
      uVar15 = 6;
      uVar13 = 5;
      uVar9 = 4;
      goto LAB_00233e54;
    }
    uVar7 = 2;
    uVar5 = 0;
    uVar15 = 2;
    uVar13 = 1;
    uVar9 = 0;
  }
  else {
    iVar3 = param_2;
    if (param_2 < 0x80) {
      uVar5 = 1;
      uVar7 = 0;
      uVar9 = 1;
      uVar6 = 0;
    }
    else {
      lVar12 = 0;
      do {
        iVar4 = (int)lVar12;
        uVar6 = iVar4 + 1;
        bVar2 = (byte)iVar3;
        iVar3 = iVar3 >> 7;
        param_6[lVar12] = bVar2 & 0x7f;
        if (1 < uVar6) break;
        lVar12 = 1;
      } while (0x7f < iVar3);
      uVar9 = iVar4 + 2;
      uVar5 = (ulong)uVar9;
      uVar7 = (ulong)uVar6;
    }
    param_6[uVar7] = (byte)iVar3 | 0x80;
    lVar12 = uVar11 * 0x1e + uVar14 * 0x65d0;
    if ((char)(&DAT_0074a414)[lVar12] < '\0') {
      param_6[uVar5] = 0x80;
      param_6[uVar6 + 2] = (&DAT_0074a413)[lVar12] | 0x80;
      param_6[uVar6 + 3] = 0x80;
      uVar9 = uVar6 + 7;
      uVar5 = (ulong)uVar9;
      uVar15 = uVar6 + 9;
      uVar7 = (ulong)uVar15;
      param_6[uVar6 + 4] = 0x8a;
      param_6[uVar6 + 5] = 0x90;
      param_6[uVar6 + 6] = 0x80;
      uVar13 = (ulong)(uVar6 + 8);
LAB_00233e54:
      (&DAT_0074a412)[uVar11 * 0x1e + uVar14 * 0x65d0] = 1;
    }
    else {
      uVar15 = uVar9 + 2;
      uVar7 = (ulong)uVar15;
      uVar13 = (ulong)(uVar9 + 1);
    }
  }
  bVar2 = (char)uVar1 + (char)param_1 * '\b';
  param_6[uVar5] = 0x80;
  param_6[uVar13] = bVar2 | 0x80;
  if ((&DAT_0074a412)[uVar11 * 0x1e + uVar14 * 0x65d0] == '\x01') {
    uVar5 = uVar7;
    if (-1 < param_2) {
      uVar15 = uVar9 + 3;
      uVar5 = (ulong)uVar15;
      param_6[uVar7] = 0x80;
    }
    param_6[uVar5] = 0x81;
    param_6[uVar15 + 1] = (byte)(local_10 >> 0xf) & 3;
    param_6[uVar15 + 2] = (byte)(local_10 >> 8) & 0x7f;
    param_6[uVar15 + 3] = (byte)(local_10 >> 1) & 0x7f;
    param_6[uVar15 + 4] = '\0';
    param_6[uVar15 + 5] = '\0';
    lVar12 = uVar11 * 0x1e + uVar14 * 0x65d0;
    param_6[uVar15 + 6] = (byte)param_5 & 0x7c;
    param_6[uVar15 + 7] = (uchar)((uVar10 | uVar8) >> 7);
    param_6[uVar15 + 8] = (byte)uVar8 & 0x7f;
    uVar14 = (ulong)(uVar15 + 0xb);
    param_6[uVar15 + 9] = (&DAT_0074a41f)[lVar12];
    param_6[uVar15 + 10] = (&DAT_0074a411)[lVar12] | 0xc0;
    (&DAT_0074a413)[lVar12] = bVar2;
  }
  else {
    uVar14 = uVar7;
    if (-1 < param_2) {
      uVar15 = uVar9 + 3;
      uVar14 = (ulong)uVar15;
      param_6[uVar7] = 0x80;
    }
    param_6[uVar14] = 0x86;
    param_6[uVar15 + 1] = (byte)param_5 & 0x7c;
    param_6[uVar15 + 2] = (uchar)((uVar10 | uVar8) >> 7);
    uVar14 = (ulong)(uVar15 + 4);
    param_6[uVar15 + 3] = (byte)uVar8 | 0x80;
  }
LAB_00233cf0:
  if (local_8 == *(long *)PTR___stack_chk_guard_00567868) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar14);
}

