/* FMCONTROL_Initialize @ 001464e0 88B */


/* ARM::FMCONTROL_Initialize(unsigned int, ARM::CCh*) */

undefined8 ARM::FMCONTROL_Initialize(uint param_1,CCh *param_2)

{
  CFmSynth *this;
  undefined8 uVar1;
  
  if (param_2 == (CCh *)0x0) {
    uVar1 = 0xffffffff;
  }
  else {
    this = operator_new(0x68b8);
    CFmSynth::CFmSynth(this,param_1,param_2);
    uVar1 = 0;
    *(CFmSynth **)PTR_gpVfm_00567348 = this;
  }
  return uVar1;
}

