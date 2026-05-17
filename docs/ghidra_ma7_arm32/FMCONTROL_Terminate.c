/* FMCONTROL_Terminate @ 00041e0c 30B */


/* ARM::FMCONTROL_Terminate() */

void ARM::FMCONTROL_Terminate(void)

{
  undefined4 *puVar1;
  CFmSynth *this;
  
  puVar1 = *(undefined4 **)(DAT_00041e2c + 0x41e14);
  this = (CFmSynth *)*puVar1;
  if (this != (CFmSynth *)0x0) {
    CFmSynth::~CFmSynth(this);
    operator_delete(this);
    *puVar1 = 0;
  }
  return;
}

