/* CStmSynth @ 0003d1d4 278B */


/* ARM::CStmSynth::CStmSynth(unsigned int, ARM::CCh*) */

CStmSynth * __thiscall ARM::CStmSynth::CStmSynth(CStmSynth *this,uint param_1,CCh *param_2)

{
  CLpf *pCVar1;
  CVolIP *this_00;
  CPanIP *this_01;
  CStmSynth *pCVar2;
  char cVar3;
  
  *(CCh **)this = param_2;
  if (param_1 != 0x5622) {
    if (param_1 < 0x5623) {
      if ((param_1 != 0x2b11) && (param_1 != 16000)) goto LAB_0003d2de;
    }
    else if ((param_1 != 32000) && ((param_1 != 0xac44 && (param_1 != 24000)))) {
LAB_0003d2de:
      *(undefined4 *)(this + 0x23c4) = 48000;
      goto LAB_0003d204;
    }
  }
  *(uint *)(this + 0x23c4) = param_1;
LAB_0003d204:
  cVar3 = '\x04';
  pCVar2 = this;
  do {
    pCVar2[5] = (CStmSynth)0x0;
    pCVar2[0x44] = (CStmSynth)0x0;
    *(undefined4 *)(pCVar2 + 8) = 0;
    *(undefined4 *)(pCVar2 + 0xc) = 0;
    *(undefined4 *)(pCVar2 + 0x5c) = 0;
    *(undefined4 *)(pCVar2 + 100) = 0;
    *(undefined4 *)(pCVar2 + 0x60) = 0;
    *(undefined4 *)(pCVar2 + 0x68) = 0;
    *(undefined4 *)(pCVar2 + 0x58) = 0;
    *(undefined4 *)(pCVar2 + 0x10) = 0;
    *(undefined4 *)(pCVar2 + 0xa0) = 0;
    *(undefined4 *)(pCVar2 + 0x98) = 0x10000;
    *(undefined4 *)(pCVar2 + 0xcc) = 0x401;
    pCVar1 = operator_new(0xa4);
    CLpf::CLpf(pCVar1,param_1);
    *(CLpf **)(pCVar2 + 0xa4) = pCVar1;
    pCVar1 = operator_new(0xa4);
    CLpf::CLpf(pCVar1,param_1);
    *(CLpf **)(pCVar2 + 0xa8) = pCVar1;
    this_00 = operator_new(0x1c);
    CVolIP::CVolIP(this_00,param_1);
    *(CVolIP **)(pCVar2 + 0xb0) = this_00;
    this_01 = operator_new(0x28);
    CPanIP::CPanIP(this_01,param_1);
    cVar3 = cVar3 + -1;
    *(CPanIP **)(pCVar2 + 0xb4) = this_01;
    *(undefined4 *)(pCVar2 + 0xbc) = 0;
    *(undefined4 *)(pCVar2 + 0xc0) = 0;
    *(undefined4 *)(pCVar2 + 0xc4) = 0;
    *(undefined4 *)(pCVar2 + 0x88) = 0;
    pCVar2[0xb8] = (CStmSynth)0x0;
    *(undefined4 *)(pCVar2 + 0x8d0) = 0;
    *(undefined4 *)(pCVar2 + 0x8dc) = 0;
    *(undefined4 *)(pCVar2 + 0x8e0) = 0;
    *(undefined4 *)(pCVar2 + 200) = 0x3ff;
    pCVar2[0x8f] = (CStmSynth)0x1f;
    *(undefined4 *)(pCVar2 + 0x8d4) = 0x8000;
    *(undefined4 *)(pCVar2 + 0x8d8) = 0x7fff;
    pCVar2 = pCVar2 + 0x8f0;
  } while (cVar3 != '\0');
  return this;
}

