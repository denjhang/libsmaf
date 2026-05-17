/* WTCONTROL_Initialize @ 0013b694 92B */


/* ARM::WTCONTROL_Initialize(unsigned int, ARM::CCh*) */

undefined8 ARM::WTCONTROL_Initialize(uint param_1,CCh *param_2)

{
  CWtSynth *this;
  undefined8 uVar1;
  
  if (param_2 == (CCh *)0x0) {
    uVar1 = 0xffffffff;
  }
  else {
    this = operator_new(0x103138);
    CWtSynth::CWtSynth(this,param_1,param_2);
    uVar1 = 0;
    *(CWtSynth **)PTR_gpVwt_00567608 = this;
  }
  return uVar1;
}

