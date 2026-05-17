/* SIrqFifo_SetData @ 00039b60 74B */


/* ARM::SIrqFifo_SetData(unsigned short) */

uint ARM::SIrqFifo_SetData(ushort param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  
  puVar4 = (uint *)(DAT_00039bac + 0x39b68);
  uVar2 = *puVar4;
  uVar3 = uVar2 + 1;
  uVar1 = uVar3;
  if (0x40 < uVar3) {
    uVar1 = 0;
  }
  if (*(uint *)(DAT_00039bac + 0x39b6c) != uVar1) {
    if (uVar3 < 0x41) {
      *puVar4 = uVar3;
    }
    else {
      uVar1 = 0;
    }
    *(ushort *)((int)puVar4 + uVar2 * 2 + 0xc) = param_1;
    if (uVar3 < 0x41) {
      uVar1 = 0;
    }
    else {
      *puVar4 = uVar1;
    }
    return uVar1;
  }
  if (uVar2 != 0) {
    *(ushort *)((int)puVar4 + uVar2 * 2 + 10) = param_1;
    return 0x40;
  }
  *(ushort *)((int)&DAT_00039bf4 + DAT_00039bac) = param_1;
  return 0x40;
}

