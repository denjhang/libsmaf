/* ~CStmSynth @ 00140228 608B */


/* ARM::CStmSynth::~CStmSynth() */

void __thiscall ARM::CStmSynth::~CStmSynth(CStmSynth *this)

{
  CStmSynth *pCVar1;
  CStmSynth *pCVar2;
  CLpf *pCVar3;
  CVolIP *pCVar4;
  CPanIP *pCVar5;
  
  pCVar1 = this + 0xd0;
  pCVar3 = *(CLpf **)(this + 0xb0);
  if (pCVar3 != (CLpf *)0x0) {
    CLpf::~CLpf(pCVar3);
    operator_delete(pCVar3);
  }
  pCVar3 = *(CLpf **)(this + 0xb8);
  *(undefined8 *)(this + 0xb0) = 0;
  if (pCVar3 == (CLpf *)0x0) {
    pCVar4 = *(CVolIP **)(this + 200);
    if (pCVar4 != (CVolIP *)0x0) goto LAB_00140278;
LAB_00140288:
    pCVar5 = *(CPanIP **)pCVar1;
    *(undefined8 *)(this + 200) = 0;
  }
  else {
    CLpf::~CLpf(pCVar3);
    operator_delete(pCVar3);
    pCVar4 = *(CVolIP **)(this + 200);
    *(undefined8 *)(this + 0xb8) = 0;
    if (pCVar4 != (CVolIP *)0x0) {
LAB_00140278:
      CVolIP::~CVolIP(pCVar4);
      operator_delete(pCVar4);
      goto LAB_00140288;
    }
    pCVar5 = *(CPanIP **)pCVar1;
  }
  if (pCVar5 != (CPanIP *)0x0) {
    CPanIP::~CPanIP(pCVar5);
    operator_delete(pCVar5);
  }
  pCVar2 = this + 0x9e8;
  *(undefined8 *)pCVar1 = 0;
  pCVar3 = *(CLpf **)(this + 0x9c8);
  if (pCVar3 != (CLpf *)0x0) {
    CLpf::~CLpf(pCVar3);
    operator_delete(pCVar3);
  }
  pCVar3 = *(CLpf **)(this + 0x9d0);
  *(undefined8 *)(this + 0x9c8) = 0;
  if (pCVar3 == (CLpf *)0x0) {
    pCVar4 = *(CVolIP **)(this + 0x9e0);
    if (pCVar4 != (CVolIP *)0x0) goto LAB_001402ec;
LAB_001402fc:
    pCVar5 = *(CPanIP **)pCVar2;
    *(undefined8 *)(this + 0x9e0) = 0;
  }
  else {
    CLpf::~CLpf(pCVar3);
    operator_delete(pCVar3);
    pCVar4 = *(CVolIP **)(this + 0x9e0);
    *(undefined8 *)(this + 0x9d0) = 0;
    if (pCVar4 != (CVolIP *)0x0) {
LAB_001402ec:
      CVolIP::~CVolIP(pCVar4);
      operator_delete(pCVar4);
      goto LAB_001402fc;
    }
    pCVar5 = *(CPanIP **)pCVar2;
  }
  if (pCVar5 != (CPanIP *)0x0) {
    CPanIP::~CPanIP(pCVar5);
    operator_delete(pCVar5);
  }
  pCVar1 = this + 0x1300;
  *(undefined8 *)pCVar2 = 0;
  pCVar3 = *(CLpf **)(this + 0x12e0);
  if (pCVar3 != (CLpf *)0x0) {
    CLpf::~CLpf(pCVar3);
    operator_delete(pCVar3);
  }
  pCVar3 = *(CLpf **)(this + 0x12e8);
  *(undefined8 *)(this + 0x12e0) = 0;
  if (pCVar3 == (CLpf *)0x0) {
    pCVar4 = *(CVolIP **)(this + 0x12f8);
    if (pCVar4 != (CVolIP *)0x0) goto LAB_00140360;
LAB_00140370:
    pCVar5 = *(CPanIP **)pCVar1;
    *(undefined8 *)(this + 0x12f8) = 0;
  }
  else {
    CLpf::~CLpf(pCVar3);
    operator_delete(pCVar3);
    pCVar4 = *(CVolIP **)(this + 0x12f8);
    *(undefined8 *)(this + 0x12e8) = 0;
    if (pCVar4 != (CVolIP *)0x0) {
LAB_00140360:
      CVolIP::~CVolIP(pCVar4);
      operator_delete(pCVar4);
      goto LAB_00140370;
    }
    pCVar5 = *(CPanIP **)pCVar1;
  }
  if (pCVar5 != (CPanIP *)0x0) {
    CPanIP::~CPanIP(pCVar5);
    operator_delete(pCVar5);
  }
  *(undefined8 *)pCVar1 = 0;
  pCVar1 = this + 0x1c18;
  pCVar3 = *(CLpf **)(this + 0x1bf8);
  if (pCVar3 != (CLpf *)0x0) {
    CLpf::~CLpf(pCVar3);
    operator_delete(pCVar3);
  }
  pCVar3 = *(CLpf **)(this + 0x1c00);
  *(undefined8 *)(this + 0x1bf8) = 0;
  if (pCVar3 == (CLpf *)0x0) {
    pCVar4 = *(CVolIP **)(this + 0x1c10);
    if (pCVar4 != (CVolIP *)0x0) goto LAB_001403d8;
LAB_001403e8:
    pCVar5 = *(CPanIP **)pCVar1;
    *(undefined8 *)(this + 0x1c10) = 0;
    if (pCVar5 == (CPanIP *)0x0) goto LAB_00140404;
  }
  else {
    CLpf::~CLpf(pCVar3);
    operator_delete(pCVar3);
    pCVar4 = *(CVolIP **)(this + 0x1c10);
    *(undefined8 *)(this + 0x1c00) = 0;
    if (pCVar4 != (CVolIP *)0x0) {
LAB_001403d8:
      CVolIP::~CVolIP(pCVar4);
      operator_delete(pCVar4);
      goto LAB_001403e8;
    }
    pCVar5 = *(CPanIP **)pCVar1;
    if (pCVar5 == (CPanIP *)0x0) {
      *(undefined8 *)pCVar1 = 0;
      return;
    }
  }
  CPanIP::~CPanIP(pCVar5);
  operator_delete(pCVar5);
LAB_00140404:
  *(undefined8 *)pCVar1 = 0;
  return;
}

