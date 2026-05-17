/* DINCONTROL_Initialize @ 00041804 40B */


/* ARM::DINCONTROL_Initialize(unsigned int) */

undefined4 ARM::DINCONTROL_Initialize(uint param_1)

{
  CDinSynth *this;
  undefined4 uVar1;
  
  this = operator_new(0x194);
  CDinSynth::CDinSynth(this,param_1);
  if (this == (CDinSynth *)0x0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = 0;
  }
  **(undefined4 **)(DAT_0004182c + 0x41828) = this;
  return uVar1;
}

