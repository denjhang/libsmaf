/* Sequencer_SetStopPoint @ 0013961c 56B */


/* ARM::Sequencer_SetStopPoint(unsigned char, unsigned int) */

void ARM::Sequencer_SetStopPoint(uchar param_1,uint param_2)

{
  if ((param_1 < 2) && ((&DAT_00582aa8)[(long)(int)(uint)param_1 * 0x116] != param_2)) {
    (&DAT_00582aa8)[(long)(int)(uint)param_1 * 0x116] = param_2;
    return;
  }
  return;
}

