/* ~CStmSynth @ 0003d2ec 116B */


/* ARM::CStmSynth::~CStmSynth() */

CStmSynth * __thiscall ARM::CStmSynth::~CStmSynth(CStmSynth *this)

{
  CStmSynth *pCVar1;
  int iVar2;
  CLpf *pCVar3;
  CVolIP *this_00;
  CPanIP *this_01;
  
  iVar2 = 0;
  pCVar1 = this;
  do {
    pCVar3 = *(CLpf **)(pCVar1 + 0xa4);
    iVar2 = iVar2 + 1;
    if (pCVar3 != (CLpf *)0x0) {
      CLpf::~CLpf(pCVar3);
      operator_delete(pCVar3);
    }
    pCVar3 = *(CLpf **)(pCVar1 + 0xa8);
    *(undefined4 *)(pCVar1 + 0xa4) = 0;
    if (pCVar3 != (CLpf *)0x0) {
      CLpf::~CLpf(pCVar3);
      operator_delete(pCVar3);
    }
    this_00 = *(CVolIP **)(pCVar1 + 0xb0);
    *(undefined4 *)(pCVar1 + 0xa8) = 0;
    if (this_00 != (CVolIP *)0x0) {
      CVolIP::~CVolIP(this_00);
      operator_delete(this_00);
    }
    this_01 = *(CPanIP **)(pCVar1 + 0xb4);
    *(undefined4 *)(pCVar1 + 0xb0) = 0;
    if (this_01 != (CPanIP *)0x0) {
      CPanIP::~CPanIP(this_01);
      operator_delete(this_01);
    }
    *(undefined4 *)(pCVar1 + 0xb4) = 0;
    pCVar1 = pCVar1 + 0x8f0;
  } while (iVar2 != 4);
  return this;
}

