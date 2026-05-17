/* FMCONTROL_SetVolume @ 00041e44 16B */


/* ARM::FMCONTROL_SetVolume(unsigned int, unsigned int) */

void ARM::FMCONTROL_SetVolume(uint param_1,uint param_2)

{
  CFmSynth::SetVolume((CFmSynth *)**(undefined4 **)(DAT_00041e54 + 0x41e4e),param_1,param_2);
  return;
}

