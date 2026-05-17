/* HVCONTROL_Terminate @ 00042540 30B */


/* ARM::HVCONTROL_Terminate() */

void ARM::HVCONTROL_Terminate(void)

{
  undefined4 *puVar1;
  CCsmSynth *this;
  
  puVar1 = *(undefined4 **)(DAT_00042560 + 0x42548);
  this = (CCsmSynth *)*puVar1;
  if (this != (CCsmSynth *)0x0) {
    CCsmSynth::~CCsmSynth(this);
    operator_delete(this);
    *puVar1 = 0;
  }
  return;
}

