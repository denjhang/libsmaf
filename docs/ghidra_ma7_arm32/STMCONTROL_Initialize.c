/* STMCONTROL_Initialize @ 00038710 52B */


/* ARM::STMCONTROL_Initialize(unsigned int, ARM::CCh*) */

undefined4 ARM::STMCONTROL_Initialize(uint param_1,CCh *param_2)

{
  CStmSynth *this;
  undefined4 uVar1;
  
  if (param_2 == (CCh *)0x0) {
    return 0xffffffff;
  }
  this = operator_new(0x23c8);
  CStmSynth::CStmSynth(this,param_1,param_2);
  if (this == (CStmSynth *)0x0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = 0;
  }
  **(undefined4 **)(DAT_00038744 + 0x3873a) = this;
  return uVar1;
}

