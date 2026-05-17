/* DINCONTROL_GetPos @ 00041a9c 14B */


/* ARM::DINCONTROL_GetPos(unsigned int) */

void ARM::DINCONTROL_GetPos(uint param_1)

{
  CDinSynth::GetPos(**(uint **)(DAT_00041aac + 0x41aa4));
  return;
}

