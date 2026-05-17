/* lset_lfowf @ 000f95fc 552B */


/* YAMAHA::lset_lfowf(unsigned char, unsigned char, unsigned char const*, unsigned char const*) */

void YAMAHA::lset_lfowf(uchar param_1,uchar param_2,uchar *param_3,uchar *param_4)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  ushort uVar4;
  short sVar5;
  undefined2 uVar6;
  int iVar7;
  int iVar8;
  short local_1c;
  short local_1a;
  
  iVar8 = DAT_000f9824 + 0xf960e;
  if (param_1 == '\0') {
    bVar2 = *param_3;
    iVar8 = *(int *)(iVar8 + DAT_000f9828);
    uVar6 = 0xf000;
    *(undefined2 *)(iVar8 + (uint)*param_4 * 2 + 0x26) = 0x4000;
    *(undefined2 *)(iVar8 + (uint)bVar2 * 2 + 0x26) = 0x4000;
    bVar2 = param_3[1];
    bVar1 = param_4[1];
    bVar3 = param_3[2];
    *(undefined2 *)(iVar8 + (uint)param_4[2] * 2 + 0x26) = 0x7fff;
    *(undefined2 *)(iVar8 + (uint)bVar3 * 2 + 0x26) = 0x7fff;
    *(undefined2 *)(iVar8 + (uint)bVar1 * 2 + 0x26) = 0x7fff;
    *(undefined2 *)(iVar8 + (uint)bVar2 * 2 + 0x26) = 0x7fff;
    bVar1 = param_3[6];
    bVar2 = param_4[6];
    bVar3 = param_3[7];
    *(undefined2 *)(iVar8 + (uint)param_4[7] * 2 + 0x26) = 0x7fff;
    *(undefined2 *)(iVar8 + (uint)bVar3 * 2 + 0x26) = 0x7fff;
    *(undefined2 *)(iVar8 + (uint)bVar2 * 2 + 0x26) = 0x7fff;
    *(undefined2 *)(iVar8 + (uint)bVar1 * 2 + 0x26) = 0x7fff;
    bVar2 = param_3[3];
    *(undefined2 *)(iVar8 + (uint)param_4[3] * 2 + 0x26) = 0x800;
    *(undefined2 *)(iVar8 + (uint)bVar2 * 2 + 0x26) = 0x800;
  }
  else {
    if (param_1 == '\x01') {
      uVar4 = *(ushort *)(*(int *)(iVar8 + DAT_000f982c) + (uint)param_2 * 2);
      lset_flt10(uVar4,&local_1c,&local_1a);
      iVar7 = (int)((uint)uVar4 << 0x10) >> 0x14;
      bVar2 = param_4[1];
      if (9 < iVar7) {
        iVar7 = 10;
      }
      bVar1 = param_3[1];
      bVar3 = param_3[2];
      iVar8 = *(int *)(iVar8 + DAT_000f9828);
      sVar5 = (short)iVar7 * 0x40 + 0x3d40;
      local_1c = local_1c << 6;
      *(short *)(iVar8 + (uint)param_4[2] * 2 + 0x26) = local_1c;
      *(short *)(iVar8 + (uint)bVar3 * 2 + 0x26) = local_1c;
      *(short *)(iVar8 + (uint)bVar2 * 2 + 0x26) = local_1c;
      *(short *)(iVar8 + (uint)bVar1 * 2 + 0x26) = local_1c;
      bVar2 = param_3[6];
      bVar1 = param_4[6];
      bVar3 = param_3[7];
      *(short *)(iVar8 + (uint)param_4[7] * 2 + 0x26) = local_1a;
      *(short *)(iVar8 + (uint)bVar3 * 2 + 0x26) = local_1a;
      *(short *)(iVar8 + (uint)bVar1 * 2 + 0x26) = local_1a;
      *(short *)(iVar8 + (uint)bVar2 * 2 + 0x26) = local_1a;
      bVar2 = *param_3;
      *(short *)(iVar8 + (uint)*param_4 * 2 + 0x26) = sVar5;
      *(short *)(iVar8 + (uint)bVar2 * 2 + 0x26) = sVar5;
      bVar2 = param_3[3];
      *(undefined2 *)(iVar8 + (uint)param_4[3] * 2 + 0x26) = 0x2000;
      *(undefined2 *)(iVar8 + (uint)bVar2 * 2 + 0x26) = 0x2000;
      bVar2 = param_3[4];
      *(undefined2 *)(iVar8 + (uint)param_4[4] * 2 + 0x26) = 0xf000;
      *(undefined2 *)(iVar8 + (uint)bVar2 * 2 + 0x26) = 0xf000;
      goto LAB_000f96b2;
    }
    bVar2 = *param_3;
    uVar6 = 0xf800;
    iVar8 = *(int *)(iVar8 + DAT_000f9828);
    *(undefined2 *)(iVar8 + (uint)*param_4 * 2 + 0x26) = 0x4000;
    *(undefined2 *)(iVar8 + (uint)bVar2 * 2 + 0x26) = 0x4000;
    bVar2 = param_3[1];
    bVar3 = param_4[1];
    bVar1 = param_3[2];
    *(undefined2 *)(iVar8 + (uint)param_4[2] * 2 + 0x26) = 0x7fff;
    *(undefined2 *)(iVar8 + (uint)bVar1 * 2 + 0x26) = 0x7fff;
    *(undefined2 *)(iVar8 + (uint)bVar3 * 2 + 0x26) = 0x7fff;
    *(undefined2 *)(iVar8 + (uint)bVar2 * 2 + 0x26) = 0x7fff;
    bVar3 = param_3[6];
    bVar2 = param_4[6];
    bVar1 = param_3[7];
    *(undefined2 *)(iVar8 + (uint)param_4[7] * 2 + 0x26) = 0x7fff;
    *(undefined2 *)(iVar8 + (uint)bVar1 * 2 + 0x26) = 0x7fff;
    *(undefined2 *)(iVar8 + (uint)bVar2 * 2 + 0x26) = 0x7fff;
    *(undefined2 *)(iVar8 + (uint)bVar3 * 2 + 0x26) = 0x7fff;
    bVar2 = param_3[3];
    *(undefined2 *)(iVar8 + (uint)param_4[3] * 2 + 0x26) = 0x7fff;
    *(undefined2 *)(iVar8 + (uint)bVar2 * 2 + 0x26) = 0x7fff;
  }
  bVar2 = param_3[4];
  *(undefined2 *)(iVar8 + (uint)param_4[4] * 2 + 0x26) = uVar6;
  *(undefined2 *)(iVar8 + (uint)bVar2 * 2 + 0x26) = uVar6;
LAB_000f96b2:
  LSendCoef('\b',param_3);
  LSendCoef('\b',param_4);
  return;
}

