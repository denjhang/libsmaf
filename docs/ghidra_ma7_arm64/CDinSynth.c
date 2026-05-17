/* CDinSynth @ 0014d71c 340B */


/* ARM::CDinSynth::CDinSynth(unsigned int) */

void __thiscall ARM::CDinSynth::CDinSynth(CDinSynth *this,uint param_1)

{
  CVolIP *pCVar1;
  CPanIP *pCVar2;
  
  if (param_1 == 0x5622) {
LAB_0014d78c:
    *(uint *)(this + 0x1dc) = param_1;
  }
  else {
    if (param_1 < 0x5623) {
      if ((param_1 == 0x2b11) || (param_1 == 16000)) goto LAB_0014d78c;
    }
    else if ((param_1 == 32000) || ((param_1 == 0xac44 || (param_1 == 24000)))) goto LAB_0014d78c;
    *(undefined4 *)(this + 0x1dc) = 48000;
  }
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x88) = 0;
  pCVar1 = operator_new(0x1c);
  CVolIP::CVolIP(pCVar1,param_1);
  *(CVolIP **)(this + 0xa8) = pCVar1;
  pCVar2 = operator_new(0x28);
  CPanIP::CPanIP(pCVar2,param_1);
  *(CPanIP **)(this + 0xb0) = pCVar2;
  *(undefined4 *)(this + 0x18) = 0x10;
  *(undefined4 *)(this + 0x20) = 0x1f;
  *(undefined4 *)(this + 0xd0) = 0;
  *(undefined8 *)(this + 0xc0) = 0;
  *(undefined8 *)(this + 200) = 0;
  *(undefined4 *)(this + 0xe8) = 0;
  *(undefined8 *)(this + 0xd8) = 0;
  *(undefined8 *)(this + 0xe0) = 0;
  *(undefined4 *)(this + 0xf0) = 0;
  *(undefined4 *)(this + 0x10c) = 0;
  *(undefined4 *)(this + 0x170) = 0;
  pCVar1 = operator_new(0x1c);
  CVolIP::CVolIP(pCVar1,param_1);
  *(CVolIP **)(this + 400) = pCVar1;
  pCVar2 = operator_new(0x28);
  CPanIP::CPanIP(pCVar2,param_1);
  *(CPanIP **)(this + 0x198) = pCVar2;
  *(undefined4 *)(this + 0x1b8) = 0;
  *(undefined8 *)(this + 0x1a8) = 0;
  *(undefined8 *)(this + 0x1b0) = 0;
  *(undefined4 *)(this + 0x1d0) = 0;
  *(undefined8 *)(this + 0x1c0) = 0;
  *(undefined8 *)(this + 0x1c8) = 0;
  *(undefined4 *)(this + 0x100) = 0x10;
  *(undefined4 *)(this + 0x108) = 0x1f;
  return;
}

