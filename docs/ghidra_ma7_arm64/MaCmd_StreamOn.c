/* MaCmd_StreamOn @ 00231c40 872B */


/* YAMAHA::MaCmd_StreamOn(unsigned int, int, unsigned int, unsigned int, unsigned int, unsigned int,
   unsigned int, unsigned int, unsigned int, unsigned char*, unsigned int*) */

int YAMAHA::MaCmd_StreamOn
              (uint param_1,int param_2,uint param_3,uint param_4,uint param_5,uint param_6,
              uint param_7,uint param_8,uint param_9,uchar *param_10,uint *param_11)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  undefined1 uVar4;
  ulong uVar5;
  long lVar6;
  uint uVar7;
  uchar *puVar8;
  ulong uVar9;
  byte bVar10;
  ulong uVar11;
  int iVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  undefined4 *puVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  byte bVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  
  uVar5 = (ulong)param_1;
  lVar6 = uVar5 * 0x65d0;
  uVar2 = param_3 & 0x1f;
  uVar1 = (uint)(byte)(&DAT_0052ee00)[(byte)(&DAT_0074a7d3)[lVar6]] +
          (uint)(byte)(&DAT_0052ee00)[(byte)(&DAT_0074a7d2)[lVar6]] +
          (uint)(byte)(&DAT_0052ee00)[(ulong)param_5 & 0x7f];
  puVar16 = (undefined4 *)(ulong)uVar1;
  if ((&DAT_0074a7d7)[lVar6] == '\x01') {
    uVar7 = 0;
    if (uVar1 < 0x18) goto LAB_00231cb0;
    puVar16 = (undefined4 *)(ulong)(uVar1 - 0x18);
  }
  uVar7 = (uint)puVar16;
  if (0xc0 < uVar7) {
    uVar7 = 0xc0;
  }
LAB_00231cb0:
  if ((param_7 >> 7 & 1) == 0) {
    bVar21 = 0x80;
    puVar16 = (undefined4 *)((ulong)uVar2 * 0x1e + uVar5 * 0x65d0);
    if ((*(byte *)(puVar16 + 0x1d2904) >> 6 & 1) != 0) {
      bVar21 = *(byte *)(puVar16 + 0x1d2904) >> 4 & 3 | 0xc0;
    }
  }
  else {
    bVar21 = 0xa0;
  }
  if (param_6 == 0x80) {
    bVar10 = 1;
  }
  else {
    if (param_6 == 0xff) {
      lVar6 = (ulong)uVar2 * 0x1e + uVar5 * 0x65d0;
      puVar16 = (undefined4 *)(&DAT_0074a410 + lVar6);
      param_6 = (uint)(byte)(&DAT_0074a41a)[lVar6];
    }
    bVar10 = (byte)param_6 & 0x7c;
  }
  puVar8 = param_10;
  if (-1 < param_2) {
    puVar16 = (undefined4 *)(&DAT_00763b74 + (ulong)DAT_00763b70 * 0x1c);
    puVar8 = &DAT_00763b83 + (ulong)DAT_00763b70 * 0x1c;
  }
  puVar8[3] = bVar10;
  lVar6 = (ulong)uVar2 * 0x1e + uVar5 * 0x65d0;
  bVar10 = (&DAT_0052ee80)[uVar7];
  puVar8[1] = (byte)param_9;
  puVar8[2] = (byte)param_7 & 0x43;
  puVar8[4] = bVar10 & 0x7c;
  *puVar8 = 0xdd;
  puVar8[5] = (byte)(param_8 >> 7) & 0x3f;
  puVar8[6] = (byte)param_8 & 0x7f;
  puVar8[7] = 0x80;
  *param_11 = bVar10 >> 2 & 0x1f;
  bVar10 = (&DAT_0074a418)[lVar6];
  puVar8[8] = 0xf2;
  iVar12 = 0xd;
  puVar8[9] = (byte)param_9 + 4;
  puVar8[0xb] = 0xf9;
  puVar8[10] = bVar10 & 0x7c | 0x81;
  puVar8[0xc] = bVar21;
  if (-1 < param_2) {
    bVar21 = (&DAT_0074a421)[lVar6];
    bVar10 = (&DAT_0074a422)[lVar6];
    bVar3 = (&DAT_0074a423)[lVar6];
    uVar4 = (&DAT_0074a411)[lVar6];
    *puVar16 = 0xd;
    uVar1 = DAT_00763b70 + 1;
    puVar16[1] = 0;
    *(byte *)(puVar16 + 2) = (byte)param_9;
    if (0x7f < uVar1) {
      uVar1 = 0;
    }
    *(byte *)((long)puVar16 + 9) = bVar21 & 0x7c;
    *(byte *)((long)puVar16 + 10) = bVar10 & 0x7c;
    bVar21 = (byte)DAT_00763b70;
    *(byte *)((long)puVar16 + 0xb) = bVar3 & 0x7c;
    *(undefined1 *)(puVar16 + 3) = uVar4;
    *(char *)((long)puVar16 + 0xd) = (char)*param_11;
    *(bool *)((long)puVar16 + 0xe) = (param_7 & 0x80) != 0;
    DAT_00763b70 = uVar1;
    if (param_2 < 0x80) {
      uVar5 = 0;
      iVar12 = 0xe;
      uVar11 = 0xd;
      uVar13 = 0xc;
      uVar14 = 0xb;
      uVar15 = 10;
      uVar17 = 9;
      uVar18 = 8;
      uVar19 = 7;
      uVar20 = 6;
      uVar9 = 5;
      uVar22 = 4;
      uVar23 = 3;
      uVar24 = 2;
      uVar25 = 1;
    }
    else {
      lVar6 = 0;
      do {
        iVar12 = (int)lVar6;
        uVar5 = (ulong)(iVar12 + 1U);
        bVar10 = (byte)param_2;
        param_2 = param_2 >> 7;
        param_10[lVar6] = bVar10 & 0x7f;
        if (1 < iVar12 + 1U) break;
        lVar6 = 1;
      } while (0x7f < param_2);
      uVar25 = (ulong)(iVar12 + 2);
      uVar24 = (ulong)(iVar12 + 3);
      uVar23 = (ulong)(iVar12 + 4);
      uVar22 = (ulong)(iVar12 + 5);
      uVar9 = (ulong)(iVar12 + 6);
      uVar20 = (ulong)(iVar12 + 7);
      uVar19 = (ulong)(iVar12 + 8);
      uVar18 = (ulong)(iVar12 + 9);
      uVar17 = (ulong)(iVar12 + 10);
      uVar15 = (ulong)(iVar12 + 0xb);
      uVar14 = (ulong)(iVar12 + 0xc);
      uVar13 = (ulong)(iVar12 + 0xd);
      uVar11 = (ulong)(iVar12 + 0xe);
      iVar12 = iVar12 + 0xf;
    }
    param_10[uVar5] = (byte)param_2 | 0x80;
    param_10[uVar25] = 0xa7;
    param_10[uVar24] = 0x80;
    param_10[uVar23] = 0x80;
    param_10[uVar22] = 0xa7;
    param_10[uVar9] = 0x80;
    param_10[uVar20] = 0x80;
    param_10[uVar19] = 0xa2;
    param_10[uVar18] = '\x0f';
    param_10[uVar17] = bVar21 | 0x80;
    param_10[uVar15] = 0x80;
    param_10[uVar14] = 0x98;
    param_10[uVar13] = (byte)param_9 & 0xb | 4;
    param_10[uVar11] = (byte)param_4 | 0x80;
  }
  return iVar12;
}

