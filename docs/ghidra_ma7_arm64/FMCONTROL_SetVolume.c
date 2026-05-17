/* FMCONTROL_SetVolume @ 00146590 24B */


/* ARM::FMCONTROL_SetVolume(unsigned int, unsigned int) */

void ARM::FMCONTROL_SetVolume(uint param_1,uint param_2)

{
  CFmSynth::SetVolume(*(CFmSynth **)PTR_gpVfm_00567348,param_1,param_2);
  return;
}

