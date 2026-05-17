/* DINCONTROL_Initialize @ 00145bd8 64B */


/* ARM::DINCONTROL_Initialize(unsigned int) */

undefined8 ARM::DINCONTROL_Initialize(uint param_1)

{
  CDinSynth *this;
  
  this = operator_new(0x1e0);
  CDinSynth::CDinSynth(this,param_1);
  *(CDinSynth **)PTR_gpVDin_00567b50 = this;
  return 0;
}

