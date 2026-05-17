/* DSPCONTROL_Initialize @ 00145580 68B */


/* ARM::DSPCONTROL_Initialize(unsigned int) */

undefined8 ARM::DSPCONTROL_Initialize(uint param_1)

{
  CDsp *this;
  
  this = operator_new(0x3bf7e8);
  CDsp::CDsp(this,param_1);
  *(CDsp **)PTR_gpVDsp_00567e80 = this;
  return 0;
}

