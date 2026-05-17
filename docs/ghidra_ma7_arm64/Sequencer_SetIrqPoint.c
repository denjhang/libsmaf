/* Sequencer_SetIrqPoint @ 001395d4 72B */


/* ARM::Sequencer_SetIrqPoint(unsigned char, unsigned int) */

void ARM::Sequencer_SetIrqPoint(uchar param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  
  if (param_1 < 2) {
    uVar2 = (uint)param_1;
    iVar1 = param_2 << 7;
    if (uVar2 != 0) {
      iVar1 = param_2 << 4;
    }
    if ((&DAT_00582aa4)[(long)(int)uVar2 * 0x116] != iVar1) {
      (&DAT_00582aa4)[(long)(int)uVar2 * 0x116] = iVar1;
      return;
    }
  }
  return;
}

