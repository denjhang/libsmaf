/* CDtmfSynth @ 0014fe60 216B */


/* ARM::CDtmfSynth::CDtmfSynth(unsigned int) */

void __thiscall ARM::CDtmfSynth::CDtmfSynth(CDtmfSynth *this,uint param_1)

{
  CVolIP *this_00;
  CPanIP *this_01;
  
  if (param_1 != 0x5622) {
    if (param_1 < 0x5623) {
      if ((param_1 != 0x2b11) && (param_1 != 16000)) goto LAB_0014ff2c;
    }
    else if ((param_1 != 32000) && ((param_1 != 0xac44 && (param_1 != 24000)))) {
LAB_0014ff2c:
      *(undefined4 *)this = 48000;
      goto LAB_0014feac;
    }
  }
  *(uint *)this = param_1;
LAB_0014feac:
  this[0x38] = (CDtmfSynth)0x0;
  *(undefined4 *)(this + 0x34) = 0;
  *(undefined4 *)(this + 0x3c) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x2c) = 0;
  this_00 = operator_new(0x1c);
  CVolIP::CVolIP(this_00,param_1);
  *(CVolIP **)(this + 0x48) = this_00;
  this_01 = operator_new(0x28);
  CPanIP::CPanIP(this_01,param_1);
  *(CPanIP **)(this + 0x50) = this_01;
  return;
}

