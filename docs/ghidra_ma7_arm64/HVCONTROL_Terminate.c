/* HVCONTROL_Terminate @ 00146e48 64B */


/* ARM::HVCONTROL_Terminate() */

void ARM::HVCONTROL_Terminate(void)

{
  undefined *puVar1;
  CCsmSynth *this;
  
  puVar1 = PTR_gpVHV_00567ec0;
  this = *(CCsmSynth **)PTR_gpVHV_00567ec0;
  if (this != (CCsmSynth *)0x0) {
    CCsmSynth::~CCsmSynth(this);
    operator_delete(this);
    *(undefined8 *)puVar1 = 0;
  }
  return;
}

