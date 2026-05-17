/* Timer_GetCounter @ 00038f5c 84B */


/* ARM::Timer_GetCounter(unsigned char) */

byte ARM::Timer_GetCounter(uchar param_1)

{
  byte bVar1;
  int iVar2;
  byte bVar3;
  int iVar4;
  
  if (param_1 < 2) {
    iVar2 = (uint)param_1 * 0x30;
    iVar4 = DAT_00038fb0 + 0x38f72 + iVar2;
    if (*(char *)(DAT_00038fb0 + 0x38f72 + iVar2) == '\0') {
      bVar1 = *(byte *)(iVar4 + 0xc);
    }
    else {
      if (*(int *)(iVar4 + 0x28) == 0 && *(int *)(iVar4 + 0x2c) == 0) {
        bVar3 = *(byte *)(iVar4 + 0xc);
        bVar1 = bVar3;
      }
      else {
        bVar1 = __aeabi_ldivmod(*(uint *)(iVar4 + 0x18) - *(uint *)(iVar4 + 0x10),
                                (*(int *)(iVar4 + 0x1c) - *(int *)(iVar4 + 0x14)) -
                                (uint)(*(uint *)(iVar4 + 0x18) < *(uint *)(iVar4 + 0x10)));
        bVar3 = *(byte *)(iVar4 + 0xc);
      }
      if (bVar3 < bVar1) {
        bVar1 = bVar3;
      }
    }
    if ((bVar1 & 0x80) != 0) {
      bVar1 = 0;
    }
    return bVar1;
  }
  return 0xff;
}

