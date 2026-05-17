/* lset_pitch @ 000fec44 222B */


/* YAMAHA::lset_pitch(unsigned char, unsigned short) */

void YAMAHA::lset_pitch(uchar param_1,ushort param_2)

{
  byte bVar1;
  byte bVar2;
  ushort uVar3;
  undefined2 uVar4;
  uint uVar5;
  undefined2 extraout_r1;
  byte *pbVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  uVar5 = (uint)param_1;
  iVar8 = DAT_000fed24 + 0xfec56;
  pbVar6 = *(byte **)(iVar8 + DAT_000fed28);
  if (uVar5 == 0) {
    bVar1 = *pbVar6;
    bVar2 = pbVar6[1];
    uVar4 = lcal_pitch(param_2);
  }
  else {
    bVar1 = pbVar6[2];
    bVar2 = pbVar6[3];
    uVar4 = lcal_pitch(param_2);
    pbVar6 = pbVar6 + 2;
  }
  iVar9 = DAT_000fed30;
  iVar7 = *(int *)(iVar8 + DAT_000fed2c);
  *(undefined2 *)(iVar7 + (uint)bVar2 * 2 + 0x26) = uVar4;
  *(undefined2 *)(iVar7 + (uint)bVar1 * 2 + 0x26) = uVar4;
  LSendCoef('\x02',pbVar6);
  uVar3 = *(ushort *)(iVar7 + 0x306);
  if (uVar3 == 0x40) {
    iVar8 = *(int *)(iVar8 + iVar9);
    iVar9 = (short)(ushort)param_1 * 2;
    if (param_2 < 0x41) {
      uVar4 = 0xc000;
    }
    else {
      uVar4 = 0x4000;
    }
    bVar1 = *(byte *)(iVar8 + iVar9);
    *(undefined2 *)(iVar7 + (uint)*(byte *)(uVar5 * 2 + iVar8 + 1) * 2 + 0x26) = uVar4;
    *(undefined2 *)(iVar7 + (uint)bVar1 * 2 + 0x26) = uVar4;
    LSendCoef('\x02',(uchar *)(iVar8 + iVar9));
    return;
  }
  iVar8 = *(int *)(iVar8 + iVar9);
  iVar9 = (short)(ushort)param_1 * 2;
  uVar4 = extraout_r1;
  if (0x40 < uVar3) {
    uVar4 = 0x4000;
  }
  if (uVar3 < 0x41) {
    uVar4 = 0xc000;
  }
  bVar1 = *(byte *)(iVar8 + iVar9);
  *(undefined2 *)(iVar7 + (uint)*(byte *)(uVar5 * 2 + iVar8 + 1) * 2 + 0x26) = uVar4;
  *(undefined2 *)(iVar7 + (uint)bVar1 * 2 + 0x26) = uVar4;
  LSendCoef('\x02',(uchar *)(iVar8 + iVar9));
  return;
}

