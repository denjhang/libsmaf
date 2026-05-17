/* Sequencer_FifoReset @ 00037f18 44B */


/* ARM::Sequencer_FifoReset(unsigned char) */

void ARM::Sequencer_FifoReset(uchar param_1)

{
  int iVar1;
  
  if (param_1 < 2) {
    iVar1 = (uint)param_1 * 0x458 + DAT_00037f44 + 0x37f28;
    *(undefined4 *)(iVar1 + 0x444) = 0;
    *(undefined4 *)(iVar1 + 0x448) = 0;
    *(undefined4 *)(iVar1 + 0x44c) = 0;
    *(undefined4 *)(iVar1 + 0x450) = 0;
    *(undefined4 *)(iVar1 + 0x440) = 0;
    *(undefined4 *)(iVar1 + 0x43c) = 0;
  }
  return;
}

