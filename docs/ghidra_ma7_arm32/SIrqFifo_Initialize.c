/* SIrqFifo_Initialize @ 00039b14 16B */


/* ARM::SIrqFifo_Initialize() */

undefined4 ARM::SIrqFifo_Initialize(void)

{
  int iVar1;
  
  iVar1 = DAT_00039b24;
  *(undefined4 *)(DAT_00039b24 + 0x39b1e) = 0;
  *(undefined4 *)(iVar1 + 0x39b22) = 0;
  *(undefined1 *)((int)&DAT_00039b24 + iVar1 + 2) = 0;
  return 0;
}

