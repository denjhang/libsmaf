/* DINCONTROL_Terminate @ 00041830 30B */


/* ARM::DINCONTROL_Terminate() */

void ARM::DINCONTROL_Terminate(void)

{
  undefined4 *puVar1;
  CDinSynth *this;
  
  puVar1 = *(undefined4 **)(DAT_00041850 + 0x41838);
  this = (CDinSynth *)*puVar1;
  if (this != (CDinSynth *)0x0) {
    CDinSynth::~CDinSynth(this);
    operator_delete(this);
    *puVar1 = 0;
  }
  return;
}

