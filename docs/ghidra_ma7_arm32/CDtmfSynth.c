/* CDtmfSynth @ 0004ac18 122B */


/* ARM::CDtmfSynth::CDtmfSynth(unsigned int) */

CDtmfSynth * __thiscall ARM::CDtmfSynth::CDtmfSynth(CDtmfSynth *this,uint param_1)

{
  CVolIP *this_00;
  CPanIP *this_01;
  
  if (param_1 != 0x5622) {
    if (param_1 < 0x5623) {
      if ((param_1 != 0x2b11) && (param_1 != 16000)) goto LAB_0004ac8a;
    }
    else if ((param_1 != 32000) && ((param_1 != 0xac44 && (param_1 != 24000)))) {
LAB_0004ac8a:
      *(undefined4 *)this = 48000;
      goto LAB_0004ac40;
    }
  }
  *(uint *)this = param_1;
LAB_0004ac40:
  this[0x34] = (CDtmfSynth)0x0;
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 0x38) = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  this_00 = operator_new(0x1c);
  CVolIP::CVolIP(this_00,param_1);
  *(CVolIP **)(this + 0x44) = this_00;
  this_01 = operator_new(0x28);
  CPanIP::CPanIP(this_01,param_1);
  *(CPanIP **)(this + 0x48) = this_01;
  return this;
}

