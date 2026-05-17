/* MaCmd_ChannelVolume @ 00235054 332B */


/* YAMAHA::MaCmd_ChannelVolume(unsigned int, int, unsigned int, unsigned int, unsigned char*) */

ulong YAMAHA::MaCmd_ChannelVolume(uint param_1,int param_2,uint param_3,uint param_4,uchar *param_5)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  uint uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  
  uVar1 = param_3 & 0x1f;
  lVar7 = (ulong)param_1 * 0x65d0;
  lVar5 = (ulong)uVar1 * 0x1e + lVar7;
  (&DAT_0074a417)[lVar5] = (char)(param_4 & 0x7f);
  if (0xf < uVar1) {
    uVar11 = MaCmd_Nop(param_2,0,param_5);
    return uVar11;
  }
  uVar8 = (uint)(byte)(&DAT_0052ee00)[(byte)(&DAT_0074a41b)[lVar5]] +
          (uint)(byte)(&DAT_0052ee00)[(byte)(&DAT_0074a419)[lVar5]] +
          (uint)(byte)(&DAT_0052ee00)[(byte)(&DAT_0074a7d2)[lVar7]] +
          (uint)(byte)(&DAT_0052ee00)[(byte)(&DAT_0074a7d3)[lVar7]] +
          (uint)(byte)(&DAT_0052ee00)[(int)(param_4 & 0x7f)];
  uVar11 = (ulong)uVar8;
  if (0xc0 < uVar8) {
    uVar11 = 0xc0;
  }
  bVar2 = (&DAT_0052ee80)[uVar11];
  if (param_2 < 0) {
    uVar8 = 3;
    uVar11 = 2;
    uVar9 = 1;
    uVar10 = 0;
  }
  else {
    if (param_2 < 0x80) {
      uVar8 = 4;
      uVar11 = 3;
      uVar9 = 2;
      uVar10 = 1;
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
      uVar10 = (ulong)(iVar4 + 2);
      uVar9 = (ulong)(iVar4 + 3);
      uVar11 = (ulong)(iVar4 + 4);
      uVar6 = (ulong)(iVar4 + 1U);
      uVar8 = iVar4 + 5;
    }
    param_5[uVar6] = (byte)param_2 | 0x80;
  }
  param_5[uVar10] = 0x8b;
  param_5[uVar9] = (char)uVar1 + (char)param_1 * '\x10';
  param_5[uVar11] = bVar2 & 0x7c | 0x81;
  return (ulong)uVar8;
}

