/* FMCONTROL_Initialize @ 00041dd4 52B */


/* ARM::FMCONTROL_Initialize(unsigned int, ARM::CCh*) */

undefined4 ARM::FMCONTROL_Initialize(uint param_1,CCh *param_2)

{
  CFmSynth *this;
  undefined4 uVar1;
  
  if (param_2 == (CCh *)0x0) {
    return 0xffffffff;
  }
  this = operator_new(0x5ea4);
  CFmSynth::CFmSynth(this,param_1,param_2);
  if (this == (CFmSynth *)0x0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = 0;
  }
  **(undefined4 **)(DAT_00041e08 + 0x41dfe) = this;
  return uVar1;
}

