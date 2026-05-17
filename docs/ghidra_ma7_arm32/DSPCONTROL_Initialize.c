/* DSPCONTROL_Initialize @ 00041348 44B */


/* ARM::DSPCONTROL_Initialize(unsigned int) */

undefined4 ARM::DSPCONTROL_Initialize(uint param_1)

{
  CDsp *this;
  undefined4 uVar1;
  
  this = operator_new(0x3bf710);
  CDsp::CDsp(this,param_1);
  if (this == (CDsp *)0x0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = 0;
  }
  **(undefined4 **)(DAT_00041374 + 0x41370) = this;
  return uVar1;
}

