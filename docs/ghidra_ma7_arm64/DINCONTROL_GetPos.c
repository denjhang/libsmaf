/* DINCONTROL_GetPos @ 00146008 20B */


/* ARM::DINCONTROL_GetPos(unsigned int) */

void ARM::DINCONTROL_GetPos(uint param_1)

{
  CDinSynth::GetPos((uint)*(undefined8 *)PTR_gpVDin_00567b50);
  return;
}

