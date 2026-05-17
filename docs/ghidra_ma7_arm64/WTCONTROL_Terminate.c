/* WTCONTROL_Terminate @ 0013b6f0 64B */


/* ARM::WTCONTROL_Terminate() */

void ARM::WTCONTROL_Terminate(void)

{
  undefined *puVar1;
  CWtSynth *this;
  
  puVar1 = PTR_gpVwt_00567608;
  this = *(CWtSynth **)PTR_gpVwt_00567608;
  if (this != (CWtSynth *)0x0) {
    CWtSynth::~CWtSynth(this);
    operator_delete(this);
    *(undefined8 *)puVar1 = 0;
  }
  return;
}

