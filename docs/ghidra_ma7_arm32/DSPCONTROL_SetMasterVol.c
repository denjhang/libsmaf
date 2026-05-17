/* DSPCONTROL_SetMasterVol @ 000417f0 16B */


/* ARM::DSPCONTROL_SetMasterVol(int, int) */

void ARM::DSPCONTROL_SetMasterVol(int param_1,int param_2)

{
  CDsp::SetMasterVol((CDsp *)**(undefined4 **)(DAT_00041800 + 0x417fa),param_1,param_2);
  return;
}

