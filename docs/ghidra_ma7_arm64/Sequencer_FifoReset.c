/* Sequencer_FifoReset @ 001394bc 68B */


/* ARM::Sequencer_FifoReset(unsigned char) */

void ARM::Sequencer_FifoReset(uchar param_1)

{
  long lVar1;
  
  if (1 < param_1) {
    return;
  }
  lVar1 = (long)(int)(uint)param_1;
  *(undefined8 *)(&DAT_00582edc + lVar1 * 0x116) = 0;
  *(undefined8 *)(&DAT_00582ee4 + lVar1 * 0x116) = 0;
  *(undefined8 *)(&DAT_00582eec + lVar1 * 0x116) = 0;
  return;
}

