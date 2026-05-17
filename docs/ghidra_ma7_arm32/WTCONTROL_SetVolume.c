/* WTCONTROL_SetVolume @ 0003968c 16B */


/* ARM::WTCONTROL_SetVolume(unsigned int, unsigned int) */

void ARM::WTCONTROL_SetVolume(uint param_1,uint param_2)

{
  CWtSynth::SetVolume((CWtSynth *)**(undefined4 **)(DAT_0003969c + 0x39696),param_1,param_2);
  return;
}

