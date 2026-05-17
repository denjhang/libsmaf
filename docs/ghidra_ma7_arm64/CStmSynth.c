/* CStmSynth @ 00140094 404B */


/* ARM::CStmSynth::CStmSynth(unsigned int, ARM::CCh*) */

void __thiscall ARM::CStmSynth::CStmSynth(CStmSynth *this,uint param_1,CCh *param_2)

{
  CLpf *pCVar1;
  CVolIP *this_00;
  CPanIP *this_01;
  char cVar2;
  
  *(CCh **)this = param_2;
  if (param_1 != 0x5622) {
    if (param_1 < 0x5623) {
      if ((param_1 != 0x2b11) && (param_1 != 16000)) goto LAB_0014021c;
    }
    else if ((param_1 != 32000) && ((param_1 != 0xac44 && (param_1 != 24000)))) {
LAB_0014021c:
      *(undefined4 *)(this + 0x2468) = 48000;
      goto LAB_001400f0;
    }
  }
  *(uint *)(this + 0x2468) = param_1;
LAB_001400f0:
  cVar2 = '\x04';
  do {
    this[9] = (CStmSynth)0x0;
    this[0x4c] = (CStmSynth)0x0;
    cVar2 = cVar2 + -1;
    *(undefined4 *)(this + 0xc) = 0;
    *(undefined4 *)(this + 0x10) = 0;
    *(undefined4 *)(this + 100) = 0;
    *(undefined4 *)(this + 0x6c) = 0;
    *(undefined4 *)(this + 0x68) = 0;
    *(undefined4 *)(this + 0x70) = 0;
    *(undefined4 *)(this + 0x60) = 0;
    *(undefined4 *)(this + 0x14) = 0;
    *(undefined4 *)(this + 0xa8) = 0;
    *(undefined4 *)(this + 0xa0) = 0x10000;
    *(undefined4 *)(this + 0xec) = 0x401;
    pCVar1 = operator_new(200);
    CLpf::CLpf(pCVar1,param_1);
    *(CLpf **)(this + 0xb0) = pCVar1;
    pCVar1 = operator_new(200);
    CLpf::CLpf(pCVar1,param_1);
    *(CLpf **)(this + 0xb8) = pCVar1;
    this_00 = operator_new(0x1c);
    CVolIP::CVolIP(this_00,param_1);
    *(CVolIP **)(this + 200) = this_00;
    this_01 = operator_new(0x28);
    CPanIP::CPanIP(this_01,param_1);
    *(CPanIP **)(this + 0xd0) = this_01;
    *(undefined4 *)(this + 0xdc) = 0;
    *(undefined4 *)(this + 0xe0) = 0;
    *(undefined4 *)(this + 0xe4) = 0;
    *(undefined4 *)(this + 0xe8) = 0x3ff;
    this[0x97] = (CStmSynth)0x1f;
    *(undefined4 *)(this + 0x90) = 0;
    this[0xd8] = (CStmSynth)0x0;
    *(undefined4 *)(this + 0x8f4) = 0x8000;
    *(undefined4 *)(this + 0x8f0) = 0;
    *(undefined4 *)(this + 0x8f8) = 0x7fff;
    *(undefined4 *)(this + 0x8fc) = 0;
    *(undefined4 *)(this + 0x900) = 0;
    this = this + 0x918;
  } while (cVar2 != '\0');
  return;
}

