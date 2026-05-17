/* FMCONTROL_Terminate @ 00146538 64B */


/* ARM::FMCONTROL_Terminate() */

void ARM::FMCONTROL_Terminate(void)

{
  undefined *puVar1;
  CFmSynth *this;
  
  puVar1 = PTR_gpVfm_00567348;
  this = *(CFmSynth **)PTR_gpVfm_00567348;
  if (this != (CFmSynth *)0x0) {
    CFmSynth::~CFmSynth(this);
    operator_delete(this);
    *(undefined8 *)puVar1 = 0;
  }
  return;
}

