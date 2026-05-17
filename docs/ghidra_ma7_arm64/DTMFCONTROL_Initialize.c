/* DTMFCONTROL_Initialize @ 00146064 64B */


/* ARM::DTMFCONTROL_Initialize(unsigned int) */

undefined8 ARM::DTMFCONTROL_Initialize(uint param_1)

{
  CDtmfSynth *this;
  
  this = operator_new(0x58);
  CDtmfSynth::CDtmfSynth(this,param_1);
  *(CDtmfSynth **)PTR_gpVDTMF_00567308 = this;
  return 0;
}

