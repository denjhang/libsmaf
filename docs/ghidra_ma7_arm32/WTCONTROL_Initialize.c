/* WTCONTROL_Initialize @ 00039618 56B */


/* ARM::WTCONTROL_Initialize(unsigned int, ARM::CCh*) */

undefined4 ARM::WTCONTROL_Initialize(uint param_1,CCh *param_2)

{
  CWtSynth *this;
  undefined4 uVar1;
  
  if (param_2 == (CCh *)0x0) {
    return 0xffffffff;
  }
  this = operator_new(0x1028a0);
  CWtSynth::CWtSynth(this,param_1,param_2);
  if (this == (CWtSynth *)0x0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = 0;
  }
  **(undefined4 **)(DAT_00039650 + 0x39646) = this;
  return uVar1;
}

