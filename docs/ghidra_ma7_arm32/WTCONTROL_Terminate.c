/* WTCONTROL_Terminate @ 00039654 30B */


/* ARM::WTCONTROL_Terminate() */

void ARM::WTCONTROL_Terminate(void)

{
  undefined4 *puVar1;
  CWtSynth *this;
  
  puVar1 = *(undefined4 **)(DAT_00039674 + 0x3965c);
  this = (CWtSynth *)*puVar1;
  if (this != (CWtSynth *)0x0) {
    CWtSynth::~CWtSynth(this);
    operator_delete(this);
    *puVar1 = 0;
  }
  return;
}

