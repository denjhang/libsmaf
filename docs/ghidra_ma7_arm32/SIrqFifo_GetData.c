/* SIrqFifo_GetData @ 00039bb0 62B */


/* ARM::SIrqFifo_GetData() */

ushort ARM::SIrqFifo_GetData(void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(DAT_00039bf0 + 0x39bba);
  if (*(int *)(DAT_00039bf0 + 0x39bb6) == iVar3) {
    return 0;
  }
  uVar1 = *(ushort *)(DAT_00039bf0 + 0x39bb6 + iVar3 * 2 + 0xc);
  if (*(char *)(DAT_00039bf0 + 0x39bbe) != '\0') {
    uVar2 = iVar3 + 1;
    if (0x40 < uVar2) {
      uVar2 = 0;
    }
    *(uint *)(DAT_00039bf0 + 0x39bba) = uVar2;
    *(undefined1 *)(DAT_00039bf4 + 0x39be6) = 0;
    return uVar1 & 0xff;
  }
  *(undefined1 *)(DAT_00039bf0 + 0x39bbe) = 1;
  return uVar1 >> 8;
}

