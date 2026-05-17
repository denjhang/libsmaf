/* Sequencer_GetCounter @ 00139654 48B */


/* ARM::Sequencer_GetCounter(unsigned char) */

undefined4 ARM::Sequencer_GetCounter(uchar param_1)

{
  if (1 < param_1) {
    return 0;
  }
  return *(undefined4 *)(&DAT_00582ac8 + (long)(int)(uint)param_1 * 0x8b);
}

