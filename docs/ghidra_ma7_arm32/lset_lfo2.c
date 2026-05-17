/* lset_lfo2 @ 000f9830 930B */


/* YAMAHA::lset_lfo2(unsigned char, unsigned char const*) */

void YAMAHA::lset_lfo2(uchar param_1,uchar *param_2)

{
  byte bVar1;
  ushort uVar2;
  short sVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  byte *pbVar9;
  short local_2c;
  short local_2a [3];
  
  iVar5 = DAT_000f9be8;
  iVar6 = DAT_000f9bd4 + 0xf983e;
  if (param_1 == '\0') {
    iVar5 = *(int *)(iVar6 + DAT_000f9bd8);
    pbVar9 = *(byte **)(iVar6 + DAT_000f9be0);
    iVar8 = (int)*(short *)(*(int *)(iVar6 + DAT_000f9bdc) + (uint)*(ushort *)(iVar5 + 0x306) * 2);
    iVar8 = (int)((uint)*(ushort *)(iVar5 + 0x308) *
                 (*(short *)(*(int *)(iVar6 + DAT_000f9bdc) +
                            (*(ushort *)(iVar5 + 0x306) + 0x10) * 2) - iVar8)) / 0x7f + iVar8;
    *(short *)(iVar5 + (uint)pbVar9[1] * 2 + 0x26) = (short)(iVar8 >> 6);
    if (iVar8 < 1) {
      *(undefined2 *)(iVar5 + (uint)*pbVar9 * 2 + 0x26) = 0;
    }
    else if (iVar8 == 1) {
      *(undefined2 *)(iVar5 + (uint)*pbVar9 * 2 + 0x26) = 0xc0;
    }
    else {
      sVar3 = (short)iVar8;
      if (iVar8 < 4) {
        *(ushort *)(iVar5 + (uint)*pbVar9 * 2 + 0x26) = sVar3 * 0x20 & 0x60U | 0x100;
      }
      else if (iVar8 < 8) {
        *(ushort *)(iVar5 + (uint)*pbVar9 * 2 + 0x26) = sVar3 * 0x10 & 0x70U | 0x180;
      }
      else {
        uVar4 = (uint)*pbVar9;
        if (iVar8 < 0x10) {
          *(ushort *)(iVar5 + uVar4 * 2 + 0x26) = sVar3 * 8 & 0x78U | 0x200;
        }
        else if (iVar8 < 0x20) {
          *(ushort *)(iVar5 + uVar4 * 2 + 0x26) = sVar3 * 4 & 0x7cU | 0x280;
        }
        else {
          *(ushort *)(iVar5 + uVar4 * 2 + 0x26) = sVar3 * 2 & 0x7eU | 0x300;
        }
      }
    }
    bVar1 = param_2[1];
    *(undefined2 *)(iVar5 + (uint)param_2[2] * 2 + 0x26) = 0x7fff;
    *(undefined2 *)(iVar5 + (uint)bVar1 * 2 + 0x26) = 0x7fff;
    bVar1 = param_2[6];
    *(undefined2 *)(iVar5 + (uint)param_2[7] * 2 + 0x26) = 0x7fff;
    *(undefined2 *)(iVar5 + (uint)bVar1 * 2 + 0x26) = 0x7fff;
    *(undefined2 *)(iVar5 + (uint)param_2[3] * 2 + 0x26) = 0x1000;
    *(undefined2 *)(iVar5 + (uint)param_2[4] * 2 + 0x26) = 0xe000;
  }
  else if (param_1 == '\x01') {
    iVar7 = *(int *)(iVar6 + DAT_000f9bd8);
    uVar4 = (uint)*(ushort *)(iVar7 + 0x306);
    uVar2 = *(ushort *)(iVar7 + 0x308);
    iVar8 = (int)*(short *)(*(int *)(iVar6 + DAT_000f9be4) + uVar4 * 2);
    bVar1 = (*(byte **)(iVar6 + DAT_000f9be0))[1];
    iVar8 = (int)((uint)uVar2 *
                 (*(short *)(*(int *)(iVar6 + DAT_000f9be4) + (uVar4 + 0x10) * 2) - iVar8)) / 0x7f +
            iVar8;
    *(short *)(iVar7 + (uint)**(byte **)(iVar6 + DAT_000f9be0) * 2 + 0x26) = (short)iVar8;
    *(short *)(iVar7 + (uint)bVar1 * 2 + 0x26) = (short)(iVar8 >> 6);
    lset_flt10(*(ushort *)(*(int *)(iVar6 + iVar5) + (uVar4 + ((uint)uVar2 * 0x10) / 0x7f) * 2),
               &local_2c,local_2a);
    bVar1 = param_2[1];
    *(short *)(iVar7 + (uint)param_2[2] * 2 + 0x26) = local_2c << 6;
    *(short *)(iVar7 + (uint)bVar1 * 2 + 0x26) = local_2c << 6;
    bVar1 = param_2[6];
    *(short *)(iVar7 + (uint)param_2[7] * 2 + 0x26) = local_2a[0];
    *(short *)(iVar7 + (uint)bVar1 * 2 + 0x26) = local_2a[0];
    *(undefined2 *)(iVar7 + (uint)param_2[3] * 2 + 0x26) = 0x4000;
    *(undefined2 *)(iVar7 + (uint)param_2[4] * 2 + 0x26) = 0xe000;
  }
  else {
    iVar8 = *(int *)(iVar6 + DAT_000f9bd8);
    pbVar9 = *(byte **)(iVar6 + DAT_000f9be0);
    iVar5 = (int)*(short *)(*(int *)(iVar6 + DAT_000f9bdc) + (uint)*(ushort *)(iVar8 + 0x306) * 2);
    iVar5 = (int)((uint)*(ushort *)(iVar8 + 0x308) *
                 (*(short *)(*(int *)(iVar6 + DAT_000f9bdc) +
                            (*(ushort *)(iVar8 + 0x306) + 0x10) * 2) - iVar5)) / 0x7f + iVar5;
    *(short *)(iVar8 + (uint)pbVar9[1] * 2 + 0x26) = (short)(iVar5 >> 6);
    if (iVar5 < 1) {
      *(undefined2 *)(iVar8 + (*pbVar9 + 0x10) * 2 + 6) = 0;
    }
    else if (iVar5 == 1) {
      *(undefined2 *)(iVar8 + (uint)*pbVar9 * 2 + 0x26) = 0xc0;
    }
    else {
      sVar3 = (short)iVar5;
      if (iVar5 < 4) {
        *(ushort *)(iVar8 + (uint)*pbVar9 * 2 + 0x26) = sVar3 * 0x20 & 0x60U | 0x100;
      }
      else {
        uVar4 = (uint)*pbVar9;
        if (iVar5 < 8) {
          *(ushort *)(iVar8 + uVar4 * 2 + 0x26) = sVar3 * 0x10 & 0x70U | 0x180;
        }
        else if (iVar5 < 0x10) {
          *(ushort *)(iVar8 + uVar4 * 2 + 0x26) = sVar3 * 8 & 0x78U | 0x200;
        }
        else if (iVar5 < 0x20) {
          *(ushort *)(iVar8 + uVar4 * 2 + 0x26) = sVar3 * 4 & 0x7cU | 0x280;
        }
        else {
          *(ushort *)(iVar8 + uVar4 * 2 + 0x26) = sVar3 * 2 & 0x7eU | 0x300;
        }
      }
    }
    bVar1 = param_2[1];
    *(undefined2 *)(iVar8 + (uint)param_2[2] * 2 + 0x26) = 0x7fff;
    *(undefined2 *)(iVar8 + (uint)bVar1 * 2 + 0x26) = 0x7fff;
    bVar1 = param_2[6];
    *(undefined2 *)(iVar8 + (uint)param_2[7] * 2 + 0x26) = 0x7fff;
    *(undefined2 *)(iVar8 + (uint)bVar1 * 2 + 0x26) = 0x7fff;
    *(undefined2 *)(iVar8 + (uint)param_2[3] * 2 + 0x26) = 0x7fff;
    *(undefined2 *)(iVar8 + (uint)param_2[4] * 2 + 0x26) = 0xf800;
  }
  LSendCoef('\a',param_2 + 1);
  return;
}

