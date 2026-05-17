/* MaCmd_SetChannelVolume @ 0023a518 400B */


/* YAMAHA::MaCmd_SetChannelVolume(unsigned int, int, unsigned int, unsigned int, unsigned char*) */

int YAMAHA::MaCmd_SetChannelVolume
              (uint param_1,int param_2,uint param_3,uint param_4,uchar *param_5)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  
  if ((param_4 != 0xff) || (param_2 < 0)) {
    (&DAT_0074a419)[(ulong)param_3 * 0x1e + (ulong)param_1 * 0x65d0] = (byte)param_4 & 0x7f;
  }
  if ((0xf < param_3) || (-1 < param_2 && param_4 != 0xff)) {
    return 0;
  }
  lVar7 = (ulong)param_1 * 0x65d0;
  lVar5 = (ulong)param_3 * 0x1e + lVar7;
  uVar1 = (uint)(byte)(&DAT_0052ee00)[(byte)(&DAT_0074a417)[lVar5]] +
          (uint)(byte)(&DAT_0052ee00)[(byte)(&DAT_0074a419)[lVar5]] +
          (uint)(byte)(&DAT_0052ee00)[(byte)(&DAT_0074a41b)[lVar5]] +
          (uint)(byte)(&DAT_0052ee00)[(byte)(&DAT_0074a7d2)[lVar7]] +
          (uint)(byte)(&DAT_0052ee00)[(byte)(&DAT_0074a7d3)[lVar7]];
  uVar10 = (ulong)uVar1;
  if (0xc0 < uVar1) {
    uVar10 = 0xc0;
  }
  bVar2 = (&DAT_0052ee80)[uVar10];
  if (param_2 < 0) {
    iVar4 = 3;
    uVar10 = 2;
    uVar8 = 1;
    uVar9 = 0;
  }
  else {
    if (param_2 < 0x80) {
      iVar4 = 4;
      uVar10 = 3;
      uVar8 = 2;
      uVar9 = 1;
      uVar6 = 0;
    }
    else {
      lVar5 = 0;
      do {
        iVar4 = (int)lVar5;
        bVar3 = (byte)param_2;
        param_2 = param_2 >> 7;
        param_5[lVar5] = bVar3 & 0x7f;
        if (1 < iVar4 + 1U) break;
        lVar5 = 1;
      } while (0x7f < param_2);
      uVar9 = (ulong)(iVar4 + 2);
      uVar8 = (ulong)(iVar4 + 3);
      uVar10 = (ulong)(iVar4 + 4);
      uVar6 = (ulong)(iVar4 + 1U);
      iVar4 = iVar4 + 5;
    }
    param_5[uVar6] = (byte)param_2 | 0x80;
  }
  param_5[uVar9] = 0x8b;
  param_5[uVar8] = (char)param_3 + (char)(param_1 << 4);
  param_5[uVar10] = bVar2 & 0x7c | 0x81;
  return iVar4;
}

