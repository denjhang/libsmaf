/* HVCONTROL_SetVolume @ 00146ea0 24B */


/* ARM::HVCONTROL_SetVolume(unsigned int, unsigned int) */

void ARM::HVCONTROL_SetVolume(uint param_1,uint param_2)

{
  CCsmSynth::SetVolume(*(CCsmSynth **)PTR_gpVHV_00567ec0,param_1,param_2);
  return;
}

