/* MaCmd_ChannelVolume2 @ 0023a210 516B */


/* YAMAHA::MaCmd_ChannelVolume2(unsigned int, unsigned int, int, unsigned int, unsigned int,
   unsigned char*) */

ulong YAMAHA::MaCmd_ChannelVolume2
                (uint param_1,uint param_2,int param_3,uint param_4,uint param_5,uchar *param_6)

{
  int iVar1;
  byte bVar2;
  long lVar3;
  ulong uVar4;
  uint uVar5;
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
  ulong uVar17;
  ulong uVar18;
  
  if (3 < param_2) {
    uVar4 = MaCmd_Nop(param_3,0,param_6);
    return uVar4;
  }
  bVar2 = (byte)param_5;
  if (-1 < param_3) {
    lVar3 = (ulong)DAT_00763b70 * 0x1c;
    (&DAT_0074a418)[(ulong)param_4 * 0x1e + (ulong)param_1 * 0x65d0] = bVar2;
    (&DAT_00763b84)[lVar3] = (char)param_2 + '\x04';
    (&DAT_00763b83)[lVar3] = 0xf2;
    (&DAT_00763b85)[lVar3] = bVar2 & 0x7c | 0x81;
    *(undefined4 *)(&DAT_00763b74 + lVar3) = 3;
    uVar5 = DAT_00763b70 + 1;
    bVar2 = (byte)DAT_00763b70;
    if (0x7f < uVar5) {
      uVar5 = 0;
    }
    DAT_00763b70 = uVar5;
    if (param_3 < 0x80) {
      uVar6 = 0;
      uVar4 = 0xd;
      uVar7 = 0xc;
      uVar8 = 0xb;
      uVar9 = 10;
      uVar10 = 9;
      uVar11 = 8;
      uVar12 = 7;
      uVar13 = 6;
      uVar14 = 5;
      uVar15 = 4;
      uVar16 = 3;
      uVar17 = 2;
      uVar18 = 1;
    }
    else {
      iVar1 = param_3 >> 7;
      *param_6 = (byte)param_3 & 0x7f;
      uVar5 = 1;
      if (0x7f < iVar1) {
        uVar5 = 2;
        param_6[1] = (byte)iVar1 & 0x7f;
        iVar1 = param_3 >> 0xe;
      }
      param_3 = iVar1;
      uVar18 = (ulong)(uVar5 + 1);
      uVar17 = (ulong)(uVar5 + 2);
      uVar16 = (ulong)(uVar5 + 3);
      uVar15 = (ulong)(uVar5 + 4);
      uVar14 = (ulong)(uVar5 + 5);
      uVar13 = (ulong)(uVar5 + 6);
      uVar12 = (ulong)(uVar5 + 7);
      uVar11 = (ulong)(uVar5 + 8);
      uVar10 = (ulong)(uVar5 + 9);
      uVar9 = (ulong)(uVar5 + 10);
      uVar8 = (ulong)(uVar5 + 0xb);
      uVar7 = (ulong)(uVar5 + 0xc);
      uVar4 = (ulong)(uVar5 + 0xd);
      uVar6 = (ulong)uVar5;
    }
    param_6[uVar6] = (byte)param_3 | 0x80;
    param_6[uVar18] = 0xa7;
    param_6[uVar17] = 0x80;
    param_6[uVar16] = 0x80;
    param_6[uVar15] = 0xa7;
    param_6[uVar14] = 0x80;
    param_6[uVar13] = 0x80;
    param_6[uVar12] = 0xa7;
    param_6[uVar11] = 0x80;
    param_6[uVar10] = 0x80;
    param_6[uVar9] = 0xa2;
    param_6[uVar8] = '\x0e';
    param_6[uVar7] = bVar2 | 0x80;
    return uVar4;
  }
  (&DAT_0074a418)[(ulong)param_4 * 0x1e + (ulong)param_1 * 0x65d0] = bVar2;
  *param_6 = 0xf2;
  param_6[1] = (char)param_2 + '\x04';
  param_6[2] = bVar2 & 0x7c | 0x81;
  return 3;
}

