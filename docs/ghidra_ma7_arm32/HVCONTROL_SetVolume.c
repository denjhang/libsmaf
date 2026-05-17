/* HVCONTROL_SetVolume @ 00042578 16B */


/* ARM::HVCONTROL_SetVolume(unsigned int, unsigned int) */

void ARM::HVCONTROL_SetVolume(uint param_1,uint param_2)

{
  CCsmSynth::SetVolume((CCsmSynth *)**(undefined4 **)(DAT_00042588 + 0x42582),param_1,param_2);
  return;
}

