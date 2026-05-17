/* MaCmd_StreamMaster @ 002322c0 824B */


/* YAMAHA::MaCmd_StreamMaster(unsigned int, int, unsigned int, unsigned int, unsigned int, unsigned
   int, unsigned int, unsigned int, unsigned int, unsigned char*, unsigned int*) */

int YAMAHA::MaCmd_StreamMaster
              (uint param_1,int param_2,uint param_3,uint param_4,uint param_5,uint param_6,
              uint param_7,uint param_8,uint param_9,uchar *param_10,uint *param_11)

{
  undefined1 uVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  int iVar5;
  byte bVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  uint uVar12;
  uchar *puVar13;
  ulong uVar14;
  undefined4 *puVar15;
  ulong uVar16;
  byte bVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  long lVar22;
  ulong uVar23;
  
  uVar2 = (ulong)param_1;
  lVar22 = uVar2 * 0x65d0;
  uVar3 = (ulong)(param_3 & 0x1f);
  puVar15 = (undefined4 *)(ulong)(byte)(&DAT_0052ee00)[(ulong)param_5 & 0x7f];
  uVar12 = (uint)(byte)(&DAT_0052ee00)[(byte)(&DAT_0074a7d3)[lVar22]] +
           (uint)(byte)(&DAT_0052ee00)[(byte)(&DAT_0074a7d2)[lVar22]] +
           (uint)(byte)(&DAT_0052ee00)[(ulong)param_5 & 0x7f];
  if ((&DAT_0074a7d7)[lVar22] == '\x01') {
    uVar4 = 0;
    if (uVar12 < 0x18) goto LAB_00232330;
    uVar12 = uVar12 - 0x18;
  }
  uVar4 = uVar12;
  if (0xc0 < uVar12) {
    uVar4 = 0xc0;
  }
LAB_00232330:
  bVar17 = 0xa0;
  if ((param_7 >> 7 & 1) == 0) {
    puVar15 = (undefined4 *)(uVar3 * 0x1e);
    bVar17 = 0x80;
    if ((*(byte *)(puVar15 + uVar2 * 0x1974 + 0x1d2904) >> 6 & 1) != 0) {
      bVar17 = *(byte *)(puVar15 + uVar2 * 0x1974 + 0x1d2904) >> 4 & 3 | 0xc0;
    }
  }
  if (param_6 == 0x80) {
    bVar6 = 1;
  }
  else if (param_6 == 0xff) {
    puVar15 = (undefined4 *)0x65d0;
    bVar6 = (&DAT_0074a41a)[uVar3 * 0x1e + uVar2 * 0x65d0] & 0x7c;
  }
  else {
    bVar6 = (byte)param_6 & 0x7c;
  }
  puVar13 = param_10;
  if (-1 < param_2) {
    puVar15 = (undefined4 *)(&DAT_00763b74 + (ulong)DAT_00763b70 * 0x1c);
    puVar13 = &DAT_00763b83 + (ulong)DAT_00763b70 * 0x1c;
  }
  puVar13[3] = bVar6;
  lVar22 = uVar3 * 0x1e + uVar2 * 0x65d0;
  bVar6 = (&DAT_0052ee80)[uVar4];
  puVar13[1] = (byte)param_9;
  puVar13[2] = (byte)param_7 & 0x43;
  puVar13[4] = bVar6 & 0x7c;
  *puVar13 = 0xdd;
  puVar13[5] = (byte)(param_8 >> 7) & 0x3f;
  puVar13[6] = (byte)param_8 & 0x7f;
  puVar13[7] = 0x80;
  *param_11 = bVar6 >> 2 & 0x1f;
  bVar6 = (&DAT_0074a418)[lVar22];
  puVar13[8] = 0xf2;
  iVar5 = 0xd;
  puVar13[9] = (byte)param_9 + 4;
  puVar13[0xb] = 0xf9;
  puVar13[10] = bVar6 & 0x7c | 0x81;
  puVar13[0xc] = bVar17;
  if (-1 < param_2) {
    uVar1 = (&DAT_0074a411)[lVar22];
    *puVar15 = 0xd;
    *(byte *)(puVar15 + 2) = (byte)param_9;
    puVar15[1] = 1;
    *(undefined1 *)(puVar15 + 3) = uVar1;
    uVar12 = DAT_00763b70 + 1;
    bVar17 = (byte)DAT_00763b70;
    if (0x7f < uVar12) {
      uVar12 = 0;
    }
    *(char *)((long)puVar15 + 0xd) = (char)*param_11;
    *(bool *)((long)puVar15 + 0xe) = (param_7 & 0x80) != 0;
    DAT_00763b70 = uVar12;
    if (param_2 < 0x80) {
      uVar2 = 0;
      iVar5 = 0xe;
      uVar3 = 0xd;
      uVar7 = 0xc;
      uVar8 = 0xb;
      uVar9 = 10;
      uVar10 = 9;
      uVar11 = 8;
      uVar14 = 7;
      uVar16 = 6;
      uVar18 = 5;
      uVar19 = 4;
      uVar20 = 3;
      uVar21 = 2;
      uVar23 = 1;
    }
    else {
      lVar22 = 0;
      do {
        iVar5 = (int)lVar22;
        uVar2 = (ulong)(iVar5 + 1U);
        bVar6 = (byte)param_2;
        param_2 = param_2 >> 7;
        param_10[lVar22] = bVar6 & 0x7f;
        if (1 < iVar5 + 1U) break;
        lVar22 = 1;
      } while (0x7f < param_2);
      uVar23 = (ulong)(iVar5 + 2);
      uVar21 = (ulong)(iVar5 + 3);
      uVar20 = (ulong)(iVar5 + 4);
      uVar19 = (ulong)(iVar5 + 5);
      uVar18 = (ulong)(iVar5 + 6);
      uVar16 = (ulong)(iVar5 + 7);
      uVar14 = (ulong)(iVar5 + 8);
      uVar11 = (ulong)(iVar5 + 9);
      uVar10 = (ulong)(iVar5 + 10);
      uVar9 = (ulong)(iVar5 + 0xb);
      uVar8 = (ulong)(iVar5 + 0xc);
      uVar7 = (ulong)(iVar5 + 0xd);
      uVar3 = (ulong)(iVar5 + 0xe);
      iVar5 = iVar5 + 0xf;
    }
    param_10[uVar2] = (byte)param_2 | 0x80;
    param_10[uVar23] = 0xa7;
    param_10[uVar21] = 0x80;
    param_10[uVar20] = 0x80;
    param_10[uVar19] = 0xa7;
    param_10[uVar18] = 0x80;
    param_10[uVar16] = 0x80;
    param_10[uVar14] = 0xa2;
    param_10[uVar11] = '\x0f';
    param_10[uVar10] = bVar17 | 0x80;
    param_10[uVar9] = 0x80;
    param_10[uVar8] = 0x98;
    param_10[uVar7] = (byte)param_9 & 3 | 0xc;
    param_10[uVar3] = (byte)param_4 | 0x80;
  }
  return iVar5;
}

