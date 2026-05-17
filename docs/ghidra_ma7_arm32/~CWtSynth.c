/* ~CWtSynth @ 00040af4 148B */


/* ARM::CWtSynth::~CWtSynth() */

CWtSynth * __thiscall ARM::CWtSynth::~CWtSynth(CWtSynth *this)

{
  CWtSynth *pCVar1;
  int iVar2;
  CLpf *this_00;
  CVolIP *this_01;
  CPanIP *this_02;
  CWnoise *this_03;
  
  iVar2 = 0;
  pCVar1 = this + 0x8098;
  do {
    *pCVar1 = (CWtSynth)0x0;
    this[iVar2 + 4] = (CWtSynth)0x0;
    iVar2 = iVar2 + 0x8144;
    this_00 = *(CLpf **)(pCVar1 + 0x8c);
    *(undefined4 *)(pCVar1 + 0x10) = 0;
    *(undefined4 *)(pCVar1 + 0x58) = 0;
    if (this_00 != (CLpf *)0x0) {
      CLpf::~CLpf(this_00);
      operator_delete(this_00);
    }
    this_01 = *(CVolIP **)(pCVar1 + 0x94);
    *(undefined4 *)(pCVar1 + 0x8c) = 0;
    if (this_01 != (CVolIP *)0x0) {
      CVolIP::~CVolIP(this_01);
      operator_delete(this_01);
    }
    this_02 = *(CPanIP **)(pCVar1 + 0x98);
    *(undefined4 *)(pCVar1 + 0x94) = 0;
    if (this_02 != (CPanIP *)0x0) {
      CPanIP::~CPanIP(this_02);
      operator_delete(this_02);
    }
    this_03 = *(CWnoise **)(pCVar1 + 0x88);
    *(undefined4 *)(pCVar1 + 0x98) = 0;
    if (this_03 != (CWnoise *)0x0) {
      CWnoise::~CWnoise(this_03);
      operator_delete(this_03);
    }
    *(undefined4 *)(pCVar1 + 0x88) = 0;
    pCVar1 = pCVar1 + 0x8144;
  } while (iVar2 != 0x102880);
  return this;
}

