/* MaCmd_StreamSlave @ 00231fa8 792B */


/* YAMAHA::MaCmd_StreamSlave(unsigned int, int, unsigned int, unsigned int, unsigned int, unsigned
   int, unsigned int, unsigned int, unsigned int, unsigned char*, unsigned int*) */

int YAMAHA::MaCmd_StreamSlave
              (uint param_1,int param_2,uint param_3,uint param_4,uint param_5,uint param_6,
              uint param_7,uint param_8,uint param_9,uchar *param_10,uint *param_11)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  uchar *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  byte bVar13;
  ulong uVar14;
  undefined4 *puVar15;
  ulong uVar16;
  byte bVar17;
  uint uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  
  uVar1 = (ulong)param_1;
  lVar5 = uVar1 * 0x65d0;
  uVar2 = (ulong)(param_3 & 0x1f);
  puVar15 = (undefined4 *)(ulong)(byte)(&DAT_0052ee00)[(byte)(&DAT_0074a7d2)[lVar5]];
  uVar3 = (uint)(byte)(&DAT_0052ee00)[(byte)(&DAT_0074a7d3)[lVar5]] +
          (uint)(byte)(&DAT_0052ee00)[(byte)(&DAT_0074a7d2)[lVar5]] +
          (uint)(byte)(&DAT_0052ee00)[(ulong)param_5 & 0x7f];
  if ((&DAT_0074a7d7)[lVar5] == '\x01') {
    uVar18 = 0;
    if (uVar3 < 0x18) goto LAB_00232010;
    uVar3 = uVar3 - 0x18;
  }
  uVar18 = uVar3;
  if (0xc0 < uVar3) {
    uVar18 = 0xc0;
  }
LAB_00232010:
  bVar17 = 0xa0;
  if ((param_7 >> 7 & 1) == 0) {
    bVar17 = 0x80;
    bVar13 = (&DAT_0074a410)[uVar2 * 0x1e + uVar1 * 0x65d0];
    puVar15 = (undefined4 *)(ulong)bVar13;
    if ((bVar13 >> 6 & 1) != 0) {
      bVar17 = bVar13 >> 4 & 3 | 0xc0;
    }
  }
  if (param_6 == 0x80) {
    bVar13 = 1;
  }
  else if (param_6 == 0xff) {
    lVar5 = uVar2 * 0x1e + uVar1 * 0x65d0;
    puVar15 = (undefined4 *)(&DAT_0074a410 + lVar5);
    bVar13 = (&DAT_0074a41a)[lVar5] & 0x7c;
  }
  else {
    bVar13 = (byte)param_6 & 0x7c;
  }
  puVar6 = param_10;
  if (-1 < param_2) {
    puVar15 = (undefined4 *)(&DAT_00763b74 + (ulong)DAT_00763b70 * 0x1c);
    puVar6 = &DAT_00763b83 + (ulong)DAT_00763b70 * 0x1c;
  }
  puVar6[3] = bVar13;
  bVar13 = (&DAT_0052ee80)[uVar18];
  puVar6[2] = (byte)param_7 & 0x43;
  puVar6[4] = bVar13 & 0x7c;
  puVar6[5] = (byte)(param_8 >> 7) & 0x3f;
  *puVar6 = 0xdd;
  puVar6[1] = (uchar)param_9;
  puVar6[6] = (byte)param_8 & 0x7f;
  puVar6[7] = 0x80;
  *param_11 = bVar13 >> 2 & 0x1f;
  bVar13 = (&DAT_0074a418)[uVar2 * 0x1e + uVar1 * 0x65d0];
  puVar6[8] = 0xf2;
  iVar4 = 0xd;
  puVar6[9] = (uchar)param_9 + '\x04';
  puVar6[0xb] = 0xf9;
  puVar6[10] = bVar13 & 0x7c | 0x81;
  puVar6[0xc] = bVar17;
  if (-1 < param_2) {
    *puVar15 = 0xd;
    *(uchar *)(puVar15 + 2) = (uchar)param_9;
    puVar15[1] = 2;
    uVar3 = DAT_00763b70 + 1;
    *(char *)((long)puVar15 + 0xd) = (char)*param_11;
    *(bool *)((long)puVar15 + 0xe) = (param_7 & 0x80) != 0;
    if (0x7f < uVar3) {
      uVar3 = 0;
    }
    bVar17 = (byte)DAT_00763b70;
    DAT_00763b70 = uVar3;
    if (param_2 < 0x80) {
      uVar1 = 0;
      iVar4 = 0xe;
      uVar2 = 0xd;
      uVar7 = 0xc;
      uVar8 = 0xb;
      uVar9 = 10;
      uVar10 = 9;
      uVar11 = 8;
      uVar12 = 7;
      uVar14 = 6;
      uVar16 = 5;
      uVar19 = 4;
      uVar20 = 3;
      uVar21 = 2;
      uVar22 = 1;
    }
    else {
      lVar5 = 0;
      do {
        iVar4 = (int)lVar5;
        uVar1 = (ulong)(iVar4 + 1U);
        bVar13 = (byte)param_2;
        param_2 = param_2 >> 7;
        param_10[lVar5] = bVar13 & 0x7f;
        if (1 < iVar4 + 1U) break;
        lVar5 = 1;
      } while (0x7f < param_2);
      uVar22 = (ulong)(iVar4 + 2);
      uVar21 = (ulong)(iVar4 + 3);
      uVar20 = (ulong)(iVar4 + 4);
      uVar19 = (ulong)(iVar4 + 5);
      uVar16 = (ulong)(iVar4 + 6);
      uVar14 = (ulong)(iVar4 + 7);
      uVar12 = (ulong)(iVar4 + 8);
      uVar11 = (ulong)(iVar4 + 9);
      uVar10 = (ulong)(iVar4 + 10);
      uVar9 = (ulong)(iVar4 + 0xb);
      uVar8 = (ulong)(iVar4 + 0xc);
      uVar7 = (ulong)(iVar4 + 0xd);
      uVar2 = (ulong)(iVar4 + 0xe);
      iVar4 = iVar4 + 0xf;
    }
    param_10[uVar1] = (byte)param_2 | 0x80;
    param_10[uVar22] = 0xa7;
    param_10[uVar21] = 0x80;
    param_10[uVar20] = 0x80;
    param_10[uVar19] = 0xa7;
    param_10[uVar16] = 0x80;
    param_10[uVar14] = 0x80;
    param_10[uVar12] = 0xa2;
    param_10[uVar11] = '\x0f';
    param_10[uVar10] = bVar17 | 0x80;
    param_10[uVar9] = 0x80;
    param_10[uVar8] = 0xa0;
    param_10[uVar7] = '\0';
    param_10[uVar2] = (byte)param_4 | 0x80;
  }
  return iVar4;
}

