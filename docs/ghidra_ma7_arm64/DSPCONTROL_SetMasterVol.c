/* DSPCONTROL_SetMasterVol @ 00145bc0 24B */


/* ARM::DSPCONTROL_SetMasterVol(int, int) */

void ARM::DSPCONTROL_SetMasterVol(int param_1,int param_2)

{
  CDsp::SetMasterVol(*(CDsp **)PTR_gpVDsp_00567e80,param_1,param_2);
  return;
}

