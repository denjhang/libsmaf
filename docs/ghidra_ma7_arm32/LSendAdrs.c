/* LSendAdrs @ 000fb338 422B */


/* YAMAHA::LSendAdrs(unsigned char, unsigned char const*) */

void YAMAHA::LSendAdrs(uchar param_1,uchar *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  byte *pbVar9;
  uint uVar10;
  
  uVar1 = (uint)param_1;
  if (*(char *)(DAT_000fb4e0 + 0xfb344 + (uint)*param_2) == '\v') {
    iVar6 = *(int *)(DAT_000fb4e4 + 0xfb354);
    if (*(char *)(iVar6 + 8) == '\0') {
      iVar5 = *(int *)(DAT_000fb4f0 + 0xfb4dc);
    }
    else {
      if (*(char *)(iVar6 + 8) != '\x02') {
        return;
      }
      iVar5 = *(int *)(DAT_000fb4e8 + 0xfb368);
    }
    if (uVar1 != 0) {
      uVar2 = 1;
      iVar3 = *(int *)(DAT_000fb4ec + 0xfb38a);
      uVar10 = (uint)*(ushort *)(iVar6 + (uint)*param_2 * 2 + 0x266);
      iVar8 = (uint)*(byte *)(iVar3 + (uint)*param_2) * 6;
      pbVar4 = (byte *)(iVar5 + iVar8);
      pbVar9 = (byte *)(iVar8 + 2 + iVar5);
      pbVar4[1] = (byte)((uVar10 << 0x14) >> 0x18);
      *pbVar4 = (byte)((uVar10 << 0x13) >> 0x1f) | *pbVar4 & 0xfe;
      *pbVar9 = *pbVar9 & 0xf | (byte)((uVar10 & 0xf) << 4);
      if (1 < uVar1) {
        if ((uVar1 - 1 & 1) != 0) {
          uVar2 = 2;
          uVar10 = (uint)*(ushort *)(iVar6 + (uint)param_2[1] * 2 + 0x266);
          iVar8 = (uint)*(byte *)(iVar3 + (uint)param_2[1]) * 6;
          pbVar9 = (byte *)(iVar5 + iVar8);
          pbVar4 = (byte *)(iVar8 + 2 + iVar5);
          pbVar9[1] = (byte)((uVar10 << 0x14) >> 0x18);
          *pbVar9 = *pbVar9 & 0xfe | (byte)((uVar10 << 0x13) >> 0x1f);
          *pbVar4 = *pbVar4 & 0xf | (byte)((uVar10 & 0xf) << 4);
          if (uVar1 < 3) {
            return;
          }
        }
        do {
          pbVar4 = param_2 + uVar2;
          iVar7 = uVar2 + 1;
          uVar2 = uVar2 + 2;
          uVar10 = (uint)*(ushort *)(iVar6 + (uint)*pbVar4 * 2 + 0x266);
          iVar8 = (uint)*(byte *)(iVar3 + (uint)*pbVar4) * 6;
          *(byte *)(iVar5 + iVar8) =
               *(byte *)(iVar5 + iVar8) & 0xfe | (byte)((uVar10 << 0x13) >> 0x1f);
          *(char *)(iVar5 + iVar8 + 1) = (char)((uVar10 << 0x14) >> 0x18);
          *(byte *)(iVar5 + iVar8 + 2) =
               *(byte *)(iVar5 + iVar8 + 2) & 0xf | (byte)((uVar10 & 0xf) << 4);
          uVar10 = (uint)*(ushort *)(iVar6 + (uint)param_2[iVar7] * 2 + 0x266);
          iVar8 = (uint)*(byte *)(iVar3 + (uint)param_2[iVar7]) * 6;
          *(byte *)(iVar5 + iVar8) =
               *(byte *)(iVar5 + iVar8) & 0xfe | (byte)((uVar10 << 0x13) >> 0x1f);
          *(char *)(iVar5 + iVar8 + 1) = (char)((uVar10 << 0x14) >> 0x18);
          *(byte *)(iVar5 + iVar8 + 2) =
               *(byte *)(iVar5 + iVar8 + 2) & 0xf | (byte)((uVar10 & 0xf) << 4);
        } while ((uVar2 & 0xff) < uVar1);
      }
    }
  }
  return;
}

