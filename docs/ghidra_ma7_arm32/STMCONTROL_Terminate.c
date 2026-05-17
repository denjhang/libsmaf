/* STMCONTROL_Terminate @ 00038748 30B */


/* ARM::STMCONTROL_Terminate() */

void ARM::STMCONTROL_Terminate(void)

{
  undefined4 *puVar1;
  CStmSynth *this;
  
  puVar1 = *(undefined4 **)(DAT_00038768 + 0x38750);
  this = (CStmSynth *)*puVar1;
  if (this != (CStmSynth *)0x0) {
    CStmSynth::~CStmSynth(this);
    operator_delete(this);
    *puVar1 = 0;
  }
  return;
}

