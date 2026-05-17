/* DTMFCONTROL_Terminate @ 00041b10 30B */


/* ARM::DTMFCONTROL_Terminate() */

void ARM::DTMFCONTROL_Terminate(void)

{
  undefined4 *puVar1;
  CDtmfSynth *this;
  
  puVar1 = *(undefined4 **)(DAT_00041b30 + 0x41b18);
  this = (CDtmfSynth *)*puVar1;
  if (this != (CDtmfSynth *)0x0) {
    CDtmfSynth::~CDtmfSynth(this);
    operator_delete(this);
    *puVar1 = 0;
  }
  return;
}

