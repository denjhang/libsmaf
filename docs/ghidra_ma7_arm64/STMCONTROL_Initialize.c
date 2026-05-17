/* STMCONTROL_Initialize @ 00139e78 88B */


/* ARM::STMCONTROL_Initialize(unsigned int, ARM::CCh*) */

undefined8 ARM::STMCONTROL_Initialize(uint param_1,CCh *param_2)

{
  CStmSynth *this;
  undefined8 uVar1;
  
  if (param_2 == (CCh *)0x0) {
    uVar1 = 0xffffffff;
  }
  else {
    this = operator_new(0x2470);
    CStmSynth::CStmSynth(this,param_1,param_2);
    uVar1 = 0;
    *(CStmSynth **)PTR_gpVstm_00567d68 = this;
  }
  return uVar1;
}

