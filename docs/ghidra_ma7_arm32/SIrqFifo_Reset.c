/* SIrqFifo_Reset @ 00039b4c 14B */


/* ARM::SIrqFifo_Reset() */

void ARM::SIrqFifo_Reset(void)

{
  int iVar1;
  
  iVar1 = DAT_00039b5c;
  *(undefined4 *)(DAT_00039b5c + 0x39b54) = 0;
  *(undefined4 *)(iVar1 + 0x39b58) = 0;
  *(undefined1 *)((int)&DAT_00039b5c + iVar1) = 0;
  return;
}

