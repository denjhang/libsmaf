/* DTMFCONTROL_Generate @ 00041b34 16B */


/* ARM::DTMFCONTROL_Generate(unsigned int, ARM::_genbuf*) */

void ARM::DTMFCONTROL_Generate(uint param_1,_genbuf *param_2)

{
  CDtmfSynth::Generate((CDtmfSynth *)**(undefined4 **)(DAT_00041b44 + 0x41b3e),param_1,param_2);
  return;
}

