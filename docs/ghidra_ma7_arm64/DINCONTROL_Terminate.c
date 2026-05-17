/* DINCONTROL_Terminate @ 00145c18 64B */


/* ARM::DINCONTROL_Terminate() */

void ARM::DINCONTROL_Terminate(void)

{
  undefined *puVar1;
  CDinSynth *this;
  
  puVar1 = PTR_gpVDin_00567b50;
  this = *(CDinSynth **)PTR_gpVDin_00567b50;
  if (this != (CDinSynth *)0x0) {
    CDinSynth::~CDinSynth(this);
    operator_delete(this);
    *(undefined8 *)puVar1 = 0;
  }
  return;
}

