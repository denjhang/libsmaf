/* ~CCsmSynth @ 0014c4a8 208B */


/* ARM::CCsmSynth::~CCsmSynth() */

void __thiscall ARM::CCsmSynth::~CCsmSynth(CCsmSynth *this)

{
  CLpf *this_00;
  CVolIP *this_01;
  CPanIP *this_02;
  CWnoise *pCVar1;
  
  this_00 = *(CLpf **)(this + 0x19a0);
  if (this_00 != (CLpf *)0x0) {
    CLpf::~CLpf(this_00);
    operator_delete(this_00);
  }
  this_01 = *(CVolIP **)(this + 0x19b0);
  *(undefined8 *)(this + 0x19a0) = 0;
  if (this_01 == (CVolIP *)0x0) {
    this_02 = *(CPanIP **)(this + 0x19b8);
    if (this_02 == (CPanIP *)0x0) {
      pCVar1 = *(CWnoise **)(this + 0x1958);
      *(undefined8 *)(this + 0x19b8) = 0;
      goto joined_r0x0014c540;
    }
  }
  else {
    CVolIP::~CVolIP(this_01);
    operator_delete(this_01);
    this_02 = *(CPanIP **)(this + 0x19b8);
    *(undefined8 *)(this + 0x19b0) = 0;
    if (this_02 == (CPanIP *)0x0) {
      pCVar1 = *(CWnoise **)(this + 0x1958);
      if (pCVar1 == (CWnoise *)0x0) {
        return;
      }
      CWnoise::~CWnoise(pCVar1);
      operator_delete(pCVar1);
      return;
    }
  }
  CPanIP::~CPanIP(this_02);
  operator_delete(this_02);
  pCVar1 = *(CWnoise **)(this + 0x1958);
  *(undefined8 *)(this + 0x19b8) = 0;
joined_r0x0014c540:
  if (pCVar1 == (CWnoise *)0x0) {
    return;
  }
  CWnoise::~CWnoise(pCVar1);
  operator_delete(pCVar1);
  return;
}

