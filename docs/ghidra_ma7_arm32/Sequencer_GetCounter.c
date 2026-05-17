/* Sequencer_GetCounter @ 00038040 24B */


/* ARM::Sequencer_GetCounter(unsigned char) */

undefined4 ARM::Sequencer_GetCounter(uchar param_1)

{
  if (1 < param_1) {
    return 0;
  }
  return *(undefined4 *)((uint)param_1 * 0x458 + DAT_00038058 + 0x3807a);
}

