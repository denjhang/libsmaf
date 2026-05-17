/* DTMFCONTROL_Terminate @ 001460a4 64B */


/* ARM::DTMFCONTROL_Terminate() */

void ARM::DTMFCONTROL_Terminate(void)

{
  undefined *puVar1;
  CDtmfSynth *this;
  
  puVar1 = PTR_gpVDTMF_00567308;
  this = *(CDtmfSynth **)PTR_gpVDTMF_00567308;
  if (this != (CDtmfSynth *)0x0) {
    CDtmfSynth::~CDtmfSynth(this);
    operator_delete(this);
    *(undefined8 *)puVar1 = 0;
  }
  return;
}

