/* DSPCONTROL_ResetDsp @ 00145bac 20B */


/* ARM::DSPCONTROL_ResetDsp(unsigned int) */

void ARM::DSPCONTROL_ResetDsp(uint param_1)

{
  CDsp::ResetDsp(*(CDsp **)PTR_gpVDsp_00567e80,param_1);
  return;
}

