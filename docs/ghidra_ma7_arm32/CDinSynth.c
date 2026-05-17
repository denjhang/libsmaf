/* CDinSynth @ 0004893c 240B */


/* ARM::CDinSynth::CDinSynth(unsigned int) */

CDinSynth * __thiscall ARM::CDinSynth::CDinSynth(CDinSynth *this,uint param_1)

{
  CVolIP *pCVar1;
  CPanIP *pCVar2;
  
  if (param_1 == 0x5622) {
LAB_0004897c:
    *(uint *)(this + 400) = param_1;
  }
  else {
    if (param_1 < 0x5623) {
      if ((param_1 == 0x2b11) || (param_1 == 16000)) goto LAB_0004897c;
    }
    else if ((param_1 == 32000) || ((param_1 == 0xac44 || (param_1 == 24000)))) goto LAB_0004897c;
    *(undefined4 *)(this + 400) = 48000;
  }
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x84) = 0;
  pCVar1 = operator_new(0x1c);
  CVolIP::CVolIP(pCVar1,param_1);
  *(CVolIP **)(this + 0xa4) = pCVar1;
  pCVar2 = operator_new(0x28);
  CPanIP::CPanIP(pCVar2,param_1);
  *(CPanIP **)(this + 0xa8) = pCVar2;
  *(undefined4 *)(this + 0xb8) = 0;
  *(undefined4 *)(this + 0xb0) = 0;
  *(undefined4 *)(this + 0xb4) = 0;
  *(undefined4 *)(this + 0xc4) = 0;
  *(undefined4 *)(this + 0xbc) = 0;
  *(undefined4 *)(this + 0xc0) = 0;
  *(undefined4 *)(this + 0x14) = 0x10;
  *(undefined4 *)(this + 0x1c) = 0x1f;
  *(undefined4 *)(this + 200) = 0;
  *(undefined4 *)(this + 0xe4) = 0;
  *(undefined4 *)(this + 0x148) = 0;
  pCVar1 = operator_new(0x1c);
  CVolIP::CVolIP(pCVar1,param_1);
  *(CVolIP **)(this + 0x168) = pCVar1;
  pCVar2 = operator_new(0x28);
  CPanIP::CPanIP(pCVar2,param_1);
  *(CPanIP **)(this + 0x16c) = pCVar2;
  *(undefined4 *)(this + 0x17c) = 0;
  *(undefined4 *)(this + 0x174) = 0;
  *(undefined4 *)(this + 0x178) = 0;
  *(undefined4 *)(this + 0x188) = 0;
  *(undefined4 *)(this + 0x180) = 0;
  *(undefined4 *)(this + 0x184) = 0;
  *(undefined4 *)(this + 0xd8) = 0x10;
  *(undefined4 *)(this + 0xe0) = 0x1f;
  return this;
}

