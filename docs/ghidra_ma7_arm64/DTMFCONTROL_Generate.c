/* DTMFCONTROL_Generate @ 001460e4 24B */


/* ARM::DTMFCONTROL_Generate(unsigned int, ARM::_genbuf*) */

void ARM::DTMFCONTROL_Generate(uint param_1,_genbuf *param_2)

{
  CDtmfSynth::Generate(*(CDtmfSynth **)PTR_gpVDTMF_00567308,param_1,param_2);
  return;
}

