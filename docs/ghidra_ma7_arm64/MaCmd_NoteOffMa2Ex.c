/* MaCmd_NoteOffMa2Ex @ 00234ba8 584B */


/* YAMAHA::MaCmd_NoteOffMa2Ex(unsigned int, int, unsigned int, unsigned int, unsigned char*) */

void YAMAHA::MaCmd_NoteOffMa2Ex(uint param_1,int param_2,uint param_3,uint param_4,uchar *param_5)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
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
  uint uVar16;
  ulong uVar17;
  ulong uVar18;
  uint uVar19;
  _MASNDVOICE a_Stack_10 [8];
  long local_8;
  
  local_8 = *(long *)PTR___stack_chk_guard_00567868;
  uVar18 = (ulong)param_1;
  iVar3 = MaCmd_GetVoiceInfo(param_1,param_3 & 0xf,0x40,a_Stack_10);
  if ((iVar3 < 0) ||
     (uVar6 = (ulong)(param_3 & 0xf),
     ((byte)(&DAT_0074a413)[uVar6 * 0x1e + uVar18 * 0x65d0] >> 6 & 1) != 0)) {
    uVar5 = MaCmd_Nop(param_2,0,param_5);
  }
  else {
    uVar2 = param_4 >> 10 & 7;
    uVar19 = (param_4 & 0x3ff) * 0x10911;
    uVar16 = uVar19 >> 0x10;
    if (uVar16 < 0x400) {
      uVar19 = uVar2 << 10;
    }
    else {
      uVar16 = uVar19 >> 0x11;
      uVar19 = 0x1c00;
      if (uVar2 != 7) {
        uVar19 = (uVar2 + 1 & 7) << 10;
      }
    }
    lVar4 = uVar6 * 0x1e + uVar18 * 0x65d0;
    (&DAT_0074a412)[lVar4] = 0;
    if (param_2 < 0) {
      *param_5 = 0x80;
      uVar5 = 7;
      bVar1 = (&DAT_0074a413)[lVar4];
      uVar9 = 6;
      param_5[2] = 0x8a;
      uVar8 = 5;
      param_5[3] = 0x80;
      param_5[1] = bVar1 | 0x80;
      uVar17 = 4;
    }
    else {
      if (param_2 < 0x80) {
        uVar5 = 10;
        uVar9 = 9;
        uVar8 = 8;
        uVar17 = 7;
        uVar7 = 5;
        uVar11 = 4;
        uVar12 = 1;
        uVar14 = 2;
        uVar15 = 0;
        uVar10 = 6;
        uVar13 = 3;
      }
      else {
        lVar4 = 0;
        do {
          iVar3 = (int)lVar4;
          bVar1 = (byte)param_2;
          param_2 = param_2 >> 7;
          param_5[lVar4] = bVar1 & 0x7f;
          if (1 < iVar3 + 1U) break;
          lVar4 = 1;
        } while (0x7f < param_2);
        uVar13 = (ulong)(iVar3 + 4);
        uVar10 = (ulong)(iVar3 + 7);
        uVar14 = (ulong)(iVar3 + 3);
        uVar12 = (ulong)(iVar3 + 2);
        uVar11 = (ulong)(iVar3 + 5);
        uVar7 = (ulong)(iVar3 + 6);
        uVar17 = (ulong)(iVar3 + 8);
        uVar8 = (ulong)(iVar3 + 9);
        uVar9 = (ulong)(iVar3 + 10);
        uVar15 = (ulong)(iVar3 + 1U);
        uVar5 = (ulong)(iVar3 + 0xb);
      }
      param_5[uVar15] = (byte)param_2 | 0x80;
      param_5[uVar12] = 0x80;
      param_5[uVar14] = (&DAT_0074a413)[uVar6 * 0x1e + uVar18 * 0x65d0] | 0x80;
      param_5[uVar13] = 0x80;
      param_5[uVar11] = 0x8a;
      param_5[uVar7] = 0x80;
      param_5[uVar10] = 0x80;
    }
    param_5[uVar17] = 0x87;
    param_5[uVar8] = (uchar)((uVar19 | uVar16) >> 7);
    param_5[uVar9] = (byte)uVar16 | 0x80;
  }
  if (local_8 == *(long *)PTR___stack_chk_guard_00567868) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}

