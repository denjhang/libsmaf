/* MaCmd_NoteOff @ 00233ed0 408B */


/* YAMAHA::MaCmd_NoteOff(unsigned int, int, unsigned int, unsigned int, unsigned char*) */

ulong YAMAHA::MaCmd_NoteOff(uint param_1,int param_2,uint param_3,uint param_4,uchar *param_5)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  ulong uVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  
  lVar9 = (ulong)param_1 * 0x65d0;
  if (((&DAT_0074a7d5)[lVar9] == '\x03') && ((uint)(byte)(&DAT_0074a7d9)[lVar9] == (param_3 & 0xf)))
  {
    lVar9 = (ulong)(byte)(&DAT_0074a7d9)[lVar9] * 0x1e + lVar9;
    cVar1 = (&DAT_0074a412)[lVar9];
    if ((cVar1 != '\0') && ((&DAT_0074a412)[lVar9] = cVar1 + -1, cVar1 != '\x01')) {
LAB_00233fb8:
      uVar4 = MaCmd_Nop(param_2,0,param_5);
      return uVar4;
    }
    uVar3 = (uint)(byte)(&DAT_0074a7da)[(ulong)param_1 * 0x65d0];
  }
  else {
    uVar3 = MaDva_ReleaseSlot(param_1,param_3 & 0xf,param_4 & 0x7f);
    if ((int)uVar3 < 0) {
      if (param_2 < 1) {
        return 0;
      }
      goto LAB_00233fb8;
    }
  }
  if (param_2 < 0) {
    *param_5 = 0x80;
    uVar11 = 3;
    uVar4 = 4;
    param_5[1] = (byte)uVar3 | 0x80;
    uVar12 = 2;
  }
  else {
    if (param_2 < 0x80) {
      uVar4 = 6;
      uVar11 = 5;
      uVar12 = 4;
      uVar10 = 1;
      uVar7 = 2;
      uVar8 = 0;
      uVar6 = 3;
    }
    else {
      lVar9 = 0;
      do {
        iVar5 = (int)lVar9;
        bVar2 = (byte)param_2;
        param_2 = param_2 >> 7;
        param_5[lVar9] = bVar2 & 0x7f;
        if (1 < iVar5 + 1U) break;
        lVar9 = 1;
      } while (0x7f < param_2);
      uVar6 = (ulong)(iVar5 + 4);
      uVar7 = (ulong)(iVar5 + 3);
      uVar10 = (ulong)(iVar5 + 2);
      uVar12 = (ulong)(iVar5 + 5);
      uVar11 = (ulong)(iVar5 + 6);
      uVar8 = (ulong)(iVar5 + 1U);
      uVar4 = (ulong)(iVar5 + 7);
    }
    param_5[uVar8] = (byte)param_2 | 0x80;
    param_5[uVar10] = 0x80;
    param_5[uVar7] = (byte)uVar3 | 0x80;
    param_5[uVar6] = 0x80;
  }
  param_5[uVar12] = 0x8a;
  param_5[uVar11] = 0x80;
  return uVar4;
}

