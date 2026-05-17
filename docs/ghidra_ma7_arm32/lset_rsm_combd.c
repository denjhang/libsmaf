/* lset_rsm_combd @ 001004b0 344B */


/* YAMAHA::lset_rsm_combd(unsigned short, unsigned char, unsigned short, unsigned char const*) */

void YAMAHA::lset_rsm_combd(ushort param_1,uchar param_2,ushort param_3,uchar *param_4)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  int iVar5;
  short sVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  
  uVar7 = (uint)*(ushort *)(*(int *)(DAT_00100608 + 0x1004c0) + (uint)param_3 * 2) * 0x7ae1;
  iVar5 = *(int *)(DAT_00100614 + 0x1004e0);
  uVar9 = (uint)*(byte *)(*(int *)(DAT_00100610 + 0x1004ce) + (uint)param_1) *
          (uint)*(ushort *)(*(int *)(DAT_0010060c + 0x1004c6) + (uint)param_2 * 2);
  bVar1 = *(byte *)(iVar5 + (uint)param_4[1] + 0x226);
  uVar8 = (uVar9 & 0x7fffff) >> 7;
  uVar2 = *(ushort *)(iVar5 + (uint)*param_4 * 2 + 0x266);
  if (bVar1 < 2) {
    uVar10 = (uVar7 >> 0x10) + (uint)uVar2 & 0xffff;
  }
  else {
    uVar10 = (uint)((ulonglong)(uVar7 >> 0x10) * 0xaaaaaaab >> 0x20);
  }
  uVar3 = (ushort)((int)uVar7 >> 0x11);
  if (1 < bVar1) {
    uVar10 = (uint)uVar2 + (uVar10 >> 1);
  }
  *(short *)(iVar5 + (uint)param_4[1] * 2 + 0x266) = (short)uVar10;
  uVar10 = (uint)param_4[2];
  bVar1 = *(byte *)(iVar5 + uVar10 + 0x226);
  if ((param_2 & 1) == 0) {
    uVar4 = uVar3;
    if (1 < bVar1) {
      uVar4 = uVar3 / 3;
    }
    *(ushort *)(iVar5 + uVar10 * 2 + 0x266) = uVar4 + uVar2;
    uVar10 = (uint)param_4[3];
    if (1 < *(byte *)(iVar5 + uVar10 + 0x226)) {
      *(ushort *)(iVar5 + uVar10 * 2 + 0x266) =
           uVar2 + (short)((ulonglong)((longlong)(int)(((int)uVar7 >> 0x11) + uVar8) * 0x55555556)
                          >> 0x20);
      return;
    }
    *(ushort *)(iVar5 + uVar10 * 2 + 0x266) = uVar3 + uVar2 + (short)(uVar9 * 0x200 >> 0x10);
    return;
  }
  if (bVar1 < 2) {
    sVar6 = uVar2 + (short)uVar8 + uVar3;
  }
  else {
    sVar6 = (short)((ulonglong)((longlong)(int)(((int)uVar7 >> 0x11) + uVar8) * 0x55555556) >> 0x20)
            + uVar2;
  }
  *(short *)(iVar5 + uVar10 * 2 + 0x266) = sVar6;
  if (1 < *(byte *)(iVar5 + (uint)param_4[3] + 0x226)) {
    uVar3 = uVar3 / 3;
  }
  *(ushort *)(iVar5 + (uint)param_4[3] * 2 + 0x266) = uVar2 + uVar3;
  return;
}

