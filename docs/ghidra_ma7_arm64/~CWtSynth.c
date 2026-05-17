/* ~CWtSynth @ 00144964 240B */


/* ARM::CWtSynth::~CWtSynth() */

void __thiscall ARM::CWtSynth::~CWtSynth(CWtSynth *this)

{
  CWtSynth *pCVar1;
  CWnoise *this_00;
  CLpf *this_01;
  CVolIP *this_02;
  CPanIP *this_03;
  
  pCVar1 = this + 0x8148;
  do {
    while( true ) {
      pCVar1[-0x94] = (CWtSynth)0x0;
      pCVar1[-0x8140] = (CWtSynth)0x0;
      *(undefined8 *)(pCVar1 + -0x80) = 0;
      this_01 = *(CLpf **)(pCVar1 + 8);
      *(undefined4 *)(pCVar1 + -0x34) = 0;
      if (this_01 != (CLpf *)0x0) {
        CLpf::~CLpf(this_01);
        operator_delete(this_01);
      }
      this_02 = *(CVolIP **)(pCVar1 + 0x18);
      *(undefined8 *)(pCVar1 + 8) = 0;
      if (this_02 == (CVolIP *)0x0) break;
      CVolIP::~CVolIP(this_02);
      operator_delete(this_02);
      this_03 = *(CPanIP **)(pCVar1 + 0x20);
      *(undefined8 *)(pCVar1 + 0x18) = 0;
      if (this_03 != (CPanIP *)0x0) goto LAB_001449a0;
      this_00 = *(CWnoise **)pCVar1;
      if (this_00 != (CWnoise *)0x0) goto LAB_001449bc;
      *(undefined8 *)pCVar1 = 0;
      pCVar1 = pCVar1 + 0x8188;
      if (pCVar1 == this + 0x10b248) {
        return;
      }
    }
    this_03 = *(CPanIP **)(pCVar1 + 0x20);
    if (this_03 != (CPanIP *)0x0) {
LAB_001449a0:
      CPanIP::~CPanIP(this_03);
      operator_delete(this_03);
    }
    this_00 = *(CWnoise **)pCVar1;
    *(undefined8 *)(pCVar1 + 0x20) = 0;
    if (this_00 != (CWnoise *)0x0) {
LAB_001449bc:
      CWnoise::~CWnoise(this_00);
      operator_delete(this_00);
    }
    *(undefined8 *)pCVar1 = 0;
    pCVar1 = pCVar1 + 0x8188;
    if (pCVar1 == this + 0x10b248) {
      return;
    }
  } while( true );
}

