/* LSendDspCoef @ 000fb1d4 344B */


/* YAMAHA::LSendDspCoef(unsigned int, unsigned int) */

undefined4 YAMAHA::LSendDspCoef(uint param_1,uint param_2)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined1 *puVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  
  if ((param_2 < param_1 || 0x2ff < param_1) || (0x2ff < param_2)) {
    uVar5 = 0xfffffffe;
  }
  else {
    uVar5 = 0;
    if (**(char **)(DAT_000fb32c + 0xfb204) == '\0') {
      iVar4 = param_1 * 2;
      iVar10 = *(int *)(DAT_000fb334 + 0xfb21a) + iVar4;
      uVar12 = param_1 + 1;
      iVar8 = *(int *)(DAT_000fb330 + 0xfb22a);
      uVar11 = param_2 - param_1 & 3;
      uVar1 = *(undefined2 *)(iVar10 + 0x26);
      puVar9 = (undefined1 *)(iVar8 + iVar4);
      iVar6 = 2;
      *puVar9 = (char)((ushort)uVar1 >> 8);
      puVar9[1] = (char)uVar1;
      if (uVar12 <= param_2) {
        if (uVar11 != 0) {
          if (uVar11 != 1) {
            iVar7 = iVar6;
            if (uVar11 != 2) {
              uVar1 = *(undefined2 *)(iVar10 + 0x28);
              uVar12 = param_1 + 2;
              iVar7 = 4;
              puVar9[2] = (char)((ushort)uVar1 >> 8);
              puVar9[3] = (char)uVar1;
            }
            uVar12 = uVar12 + 1;
            uVar1 = *(undefined2 *)(iVar10 + iVar7 + 0x26);
            puVar9[iVar7] = (char)((ushort)uVar1 >> 8);
            iVar6 = iVar7 + 2;
            puVar9[iVar7 + 1] = (char)uVar1;
          }
          uVar12 = uVar12 + 1;
          uVar1 = *(undefined2 *)(iVar10 + iVar6 + 0x26);
          puVar9[iVar6] = (char)((ushort)uVar1 >> 8);
          puVar9[iVar6 + 1] = (char)uVar1;
          iVar6 = iVar6 + 2;
          if (param_2 < uVar12) goto LAB_000fb306;
        }
        do {
          uVar1 = *(undefined2 *)(iVar10 + iVar6 + 0x26);
          uVar2 = *(undefined2 *)(iVar10 + iVar6 + 2 + 0x26);
          puVar9[iVar6] = (char)((ushort)uVar1 >> 8);
          uVar3 = *(undefined2 *)(iVar10 + iVar6 + 4 + 0x26);
          uVar12 = uVar12 + 4;
          puVar9[iVar6 + 1] = (char)uVar1;
          puVar9[iVar6 + 2] = (char)((ushort)uVar2 >> 8);
          uVar1 = *(undefined2 *)(iVar10 + iVar6 + 6 + 0x26);
          puVar9[iVar6 + 3] = (char)uVar2;
          puVar9[iVar6 + 4] = (char)((ushort)uVar3 >> 8);
          puVar9[iVar6 + 5] = (char)uVar3;
          puVar9[iVar6 + 6] = (char)((ushort)uVar1 >> 8);
          puVar9[iVar6 + 7] = (char)uVar1;
          iVar6 = iVar6 + 8;
        } while (uVar12 <= param_2);
      }
LAB_000fb306:
      uVar5 = _MaDevDrv_SendDspCoef(param_1,(uchar *)(iVar8 + iVar4),((param_2 - param_1) + 1) * 2);
      return uVar5;
    }
  }
  return uVar5;
}

