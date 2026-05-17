/* STMCONTROL_Terminate @ 00139ed0 64B */


/* ARM::STMCONTROL_Terminate() */

void ARM::STMCONTROL_Terminate(void)

{
  undefined *puVar1;
  CStmSynth *this;
  
  puVar1 = PTR_gpVstm_00567d68;
  this = *(CStmSynth **)PTR_gpVstm_00567d68;
  if (this != (CStmSynth *)0x0) {
    CStmSynth::~CStmSynth(this);
    operator_delete(this);
    *(undefined8 *)puVar1 = 0;
  }
  return;
}

