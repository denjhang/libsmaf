/* LSendCoef @ 000fae94 306B */


/* WARNING: Removing unreachable block (ram,0x000faee4) */
/* YAMAHA::LSendCoef(unsigned char, unsigned char const*) */

undefined4 YAMAHA::LSendCoef(uchar param_1,uchar *param_2)

{
  byte bVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  
  uVar6 = (uint)param_1;
  iVar8 = DAT_000fafc8 + 0xfaea2;
  if (**(char **)(iVar8 + DAT_000fafcc) != '\0') {
    return 0;
  }
  if (uVar6 == 0) {
    uVar6 = 0xfffe0004;
    iVar10 = 0x1fffe;
    uVar4 = 0xffff;
    iVar8 = *(int *)(iVar8 + DAT_000fafd4);
    goto LAB_000faf98;
  }
  bVar1 = *param_2;
  uVar7 = (uint)bVar1;
  iVar10 = *(int *)(iVar8 + DAT_000fafd0);
  iVar8 = *(int *)(iVar8 + DAT_000fafd4);
  uVar4 = 0xffff;
  if (uVar7 < 0x10000) {
    uVar4 = uVar7;
  }
  uVar2 = *(undefined2 *)(iVar10 + uVar7 * 2 + 0x26);
  uVar5 = 1;
  *(char *)(iVar8 + uVar7 * 2) = (char)((ushort)uVar2 >> 8);
  *(char *)(iVar8 + (short)(ushort)bVar1 * 2 + 1) = (char)uVar2;
  if (1 < uVar6) {
    if ((uVar6 - 1 & 1) != 0) {
      bVar1 = param_2[1];
      uVar11 = (uint)bVar1;
      uVar5 = 2;
      if (uVar11 <= uVar4) {
        uVar4 = uVar11;
      }
      if (uVar7 < uVar11) {
        uVar7 = uVar11;
      }
      uVar2 = *(undefined2 *)(iVar10 + uVar11 * 2 + 0x26);
      *(char *)(iVar8 + uVar11 * 2) = (char)((ushort)uVar2 >> 8);
      *(char *)(iVar8 + (short)(ushort)bVar1 * 2 + 1) = (char)uVar2;
      if (uVar6 < 3) goto LAB_000faf8e;
    }
    do {
      bVar1 = param_2[uVar5];
      uVar11 = (uint)bVar1;
      iVar9 = uVar5 + 1;
      uVar5 = uVar5 + 2;
      if (uVar11 <= uVar4) {
        uVar4 = uVar11;
      }
      if (uVar7 < uVar11) {
        uVar7 = uVar11;
      }
      uVar2 = *(undefined2 *)(iVar10 + uVar11 * 2 + 0x26);
      *(char *)(iVar8 + uVar11 * 2) = (char)((ushort)uVar2 >> 8);
      *(char *)(iVar8 + (short)(ushort)bVar1 * 2 + 1) = (char)uVar2;
      bVar1 = param_2[iVar9];
      uVar11 = (uint)bVar1;
      if (uVar11 <= uVar4) {
        uVar4 = uVar11;
      }
      if (uVar7 < uVar11) {
        uVar7 = uVar11;
      }
      uVar2 = *(undefined2 *)(iVar10 + uVar11 * 2 + 0x26);
      *(char *)(iVar8 + uVar11 * 2) = (char)((ushort)uVar2 >> 8);
      *(char *)(iVar8 + (short)(ushort)bVar1 * 2 + 1) = (char)uVar2;
    } while ((uVar5 & 0xff) < uVar6);
  }
LAB_000faf8e:
  iVar10 = uVar4 << 1;
  uVar6 = ((uVar7 - uVar4) + 1) * 2;
LAB_000faf98:
  uVar3 = _MaDevDrv_SendDspCoef(uVar4,(uchar *)(iVar10 + iVar8),uVar6);
  return uVar3;
}

