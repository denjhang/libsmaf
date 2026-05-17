/* Sequencer_SetStopPoint @ 00038020 26B */


/* ARM::Sequencer_SetStopPoint(unsigned char, unsigned int) */

void ARM::Sequencer_SetStopPoint(uchar param_1,uint param_2)

{
  int iVar1;
  
  if ((param_1 < 2) &&
     (iVar1 = (uint)param_1 * 0x458 + DAT_0003803c + 0x3802e, *(uint *)(iVar1 + 8) != param_2)) {
    *(uint *)(iVar1 + 8) = param_2;
  }
  return;
}

