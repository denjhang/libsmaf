/* WTCONTROL_SetVolume @ 0013b748 24B */


/* ARM::WTCONTROL_SetVolume(unsigned int, unsigned int) */

void ARM::WTCONTROL_SetVolume(uint param_1,uint param_2)

{
  CWtSynth::SetVolume(*(CWtSynth **)PTR_gpVwt_00567608,param_1,param_2);
  return;
}

