/* ~CFmSynth @ 00052b50 184B */


/* ARM::CFmSynth::~CFmSynth() */

CFmSynth * __thiscall ARM::CFmSynth::~CFmSynth(CFmSynth *this)

{
  char cVar1;
  CFmSynth *pCVar2;
  CFmSynth *pCVar3;
  CLpf *pCVar4;
  CVolIP *pCVar5;
  CPanIP *pCVar6;
  
  pCVar2 = this + 0x1a10;
  cVar1 = '\0';
  pCVar3 = this + 0x1a1c;
  do {
    pCVar4 = *(CLpf **)(pCVar3 + -0xc);
    if (pCVar4 != (CLpf *)0x0) {
      CLpf::~CLpf(pCVar4);
      operator_delete(pCVar4);
    }
    *(undefined4 *)(pCVar3 + -0xc) = 0;
    pCVar5 = *(CVolIP **)(pCVar2 + 8);
    if (pCVar5 != (CVolIP *)0x0) {
      CVolIP::~CVolIP(pCVar5);
      operator_delete(pCVar5);
    }
    pCVar6 = *(CPanIP **)(pCVar2 + 0xc);
    *(undefined4 *)(pCVar2 + 8) = 0;
    if (pCVar6 != (CPanIP *)0x0) {
      CPanIP::~CPanIP(pCVar6);
      operator_delete(pCVar6);
    }
    *(undefined4 *)(pCVar2 + 0xc) = 0;
    pCVar4 = *(CLpf **)(pCVar3 + 0x224);
    if (pCVar4 != (CLpf *)0x0) {
      CLpf::~CLpf(pCVar4);
      operator_delete(pCVar4);
    }
    *(undefined4 *)(pCVar3 + 0x224) = 0;
    pCVar5 = *(CVolIP **)(pCVar2 + 0x238);
    if (pCVar5 != (CVolIP *)0x0) {
      CVolIP::~CVolIP(pCVar5);
      operator_delete(pCVar5);
    }
    pCVar6 = *(CPanIP **)(pCVar2 + 0x23c);
    *(undefined4 *)(pCVar2 + 0x238) = 0;
    if (pCVar6 != (CPanIP *)0x0) {
      CPanIP::~CPanIP(pCVar6);
      operator_delete(pCVar6);
    }
    cVar1 = cVar1 + '\x02';
    *(undefined4 *)(pCVar2 + 0x23c) = 0;
    pCVar3 = pCVar3 + 0x460;
    pCVar2 = pCVar2 + 0x460;
  } while (cVar1 != ' ');
  return this;
}

