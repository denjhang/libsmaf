/* DTMFCONTROL_Initialize @ 00041ae4 38B */


/* ARM::DTMFCONTROL_Initialize(unsigned int) */

undefined4 ARM::DTMFCONTROL_Initialize(uint param_1)

{
  CDtmfSynth *this;
  undefined4 uVar1;
  
  this = operator_new(0x4c);
  CDtmfSynth::CDtmfSynth(this,param_1);
  if (this == (CDtmfSynth *)0x0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = 0;
  }
  **(undefined4 **)(DAT_00041b0c + 0x41b06) = this;
  return uVar1;
}

