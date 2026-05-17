/* DSPCONTROL_Generate @ 00145604 32B */


/* ARM::DSPCONTROL_Generate(unsigned int, ARM::_genbuf*, unsigned int) */

void ARM::DSPCONTROL_Generate(uint param_1,_genbuf *param_2,uint param_3)

{
  CDsp::Generate(*(CDsp **)PTR_gpVDsp_00567e80,param_1,param_2,param_3);
  return;
}

