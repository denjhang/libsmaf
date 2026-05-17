/* ~CFmSynth @ 0015a020 440B */


/* ARM::CFmSynth::~CFmSynth() */

void __thiscall ARM::CFmSynth::~CFmSynth(CFmSynth *this)

{
  CFmSynth *pCVar1;
  CLpf *pCVar2;
  CPanIP *pCVar3;
  CFmSynth *pCVar4;
  CVolIP *pCVar5;
  
  pCVar4 = this + 0x1a60;
  do {
    pCVar2 = *(CLpf **)(pCVar4 + -0x18);
    if (pCVar2 != (CLpf *)0x0) {
      CLpf::~CLpf(pCVar2);
      operator_delete(pCVar2);
    }
    pCVar5 = *(CVolIP **)(pCVar4 + -8);
    *(undefined8 *)(pCVar4 + -0x18) = 0;
    if (pCVar5 == (CVolIP *)0x0) {
      pCVar3 = *(CPanIP **)pCVar4;
    }
    else {
      CVolIP::~CVolIP(pCVar5);
      operator_delete(pCVar5);
      pCVar3 = *(CPanIP **)pCVar4;
      *(undefined8 *)(pCVar4 + -8) = 0;
    }
    if (pCVar3 != (CPanIP *)0x0) {
      CPanIP::~CPanIP(pCVar3);
      operator_delete(pCVar3);
    }
    pCVar1 = pCVar4 + 0x280;
    *(undefined8 *)pCVar4 = 0;
    pCVar2 = *(CLpf **)(pCVar4 + 0x268);
    if (pCVar2 != (CLpf *)0x0) {
      CLpf::~CLpf(pCVar2);
      operator_delete(pCVar2);
    }
    pCVar5 = *(CVolIP **)(pCVar4 + 0x278);
    *(undefined8 *)(pCVar4 + 0x268) = 0;
    if (pCVar5 == (CVolIP *)0x0) {
      pCVar3 = *(CPanIP **)pCVar1;
    }
    else {
      CVolIP::~CVolIP(pCVar5);
      operator_delete(pCVar5);
      pCVar3 = *(CPanIP **)pCVar1;
      *(undefined8 *)(pCVar4 + 0x278) = 0;
    }
    if (pCVar3 != (CPanIP *)0x0) {
      CPanIP::~CPanIP(pCVar3);
      operator_delete(pCVar3);
    }
    *(undefined8 *)pCVar1 = 0;
    pCVar2 = *(CLpf **)(pCVar4 + 0x4e8);
    if (pCVar2 != (CLpf *)0x0) {
      CLpf::~CLpf(pCVar2);
      operator_delete(pCVar2);
    }
    pCVar5 = *(CVolIP **)(pCVar4 + 0x4f8);
    *(undefined8 *)(pCVar4 + 0x4e8) = 0;
    if (pCVar5 != (CVolIP *)0x0) {
      CVolIP::~CVolIP(pCVar5);
      operator_delete(pCVar5);
      *(undefined8 *)(pCVar4 + 0x4f8) = 0;
    }
    pCVar3 = *(CPanIP **)(pCVar4 + 0x500);
    if (pCVar3 != (CPanIP *)0x0) {
      CPanIP::~CPanIP(pCVar3);
      operator_delete(pCVar3);
    }
    *(undefined8 *)(pCVar4 + 0x500) = 0;
    pCVar2 = *(CLpf **)(pCVar4 + 0x768);
    if (pCVar2 != (CLpf *)0x0) {
      CLpf::~CLpf(pCVar2);
      operator_delete(pCVar2);
    }
    pCVar5 = *(CVolIP **)(pCVar4 + 0x778);
    *(undefined8 *)(pCVar4 + 0x768) = 0;
    if (pCVar5 != (CVolIP *)0x0) {
      CVolIP::~CVolIP(pCVar5);
      operator_delete(pCVar5);
      *(undefined8 *)(pCVar4 + 0x778) = 0;
    }
    pCVar3 = *(CPanIP **)(pCVar4 + 0x780);
    if (pCVar3 != (CPanIP *)0x0) {
      CPanIP::~CPanIP(pCVar3);
      operator_delete(pCVar3);
    }
    pCVar1 = pCVar4 + 0xa00;
    *(undefined8 *)(pCVar4 + 0x780) = 0;
    pCVar4 = pCVar1;
  } while (pCVar1 != this + 0x6a60);
  return;
}

