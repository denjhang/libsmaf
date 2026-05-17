/* ~CCsmSynth @ 00047a0c 110B */


/* ARM::CCsmSynth::~CCsmSynth() */

CCsmSynth * __thiscall ARM::CCsmSynth::~CCsmSynth(CCsmSynth *this)

{
  CLpf *this_00;
  CVolIP *this_01;
  CPanIP *this_02;
  CWnoise *this_03;
  
  this_00 = *(CLpf **)(this + 0x1950);
  if (this_00 != (CLpf *)0x0) {
    CLpf::~CLpf(this_00);
    operator_delete(this_00);
  }
  this_01 = *(CVolIP **)(this + 0x1958);
  *(undefined4 *)(this + 0x1950) = 0;
  if (this_01 != (CVolIP *)0x0) {
    CVolIP::~CVolIP(this_01);
    operator_delete(this_01);
  }
  this_02 = *(CPanIP **)(this + 0x195c);
  *(undefined4 *)(this + 0x1958) = 0;
  if (this_02 != (CPanIP *)0x0) {
    CPanIP::~CPanIP(this_02);
    operator_delete(this_02);
  }
  this_03 = *(CWnoise **)(this + 0x1910);
  *(undefined4 *)(this + 0x195c) = 0;
  if (this_03 != (CWnoise *)0x0) {
    CWnoise::~CWnoise(this_03);
    operator_delete(this_03);
  }
  *(undefined4 *)(this + 0x1910) = 0;
  return this;
}

