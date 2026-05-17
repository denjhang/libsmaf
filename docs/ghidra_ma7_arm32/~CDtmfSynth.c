/* ~CDtmfSynth @ 0004ac94 48B */


/* ARM::CDtmfSynth::~CDtmfSynth() */

CDtmfSynth * __thiscall ARM::CDtmfSynth::~CDtmfSynth(CDtmfSynth *this)

{
  CPanIP *this_00;
  CVolIP *this_01;
  
  this_00 = *(CPanIP **)(this + 0x48);
  if (this_00 != (CPanIP *)0x0) {
    CPanIP::~CPanIP(this_00);
    operator_delete(this_00);
  }
  this_01 = *(CVolIP **)(this + 0x44);
  *(undefined4 *)(this + 0x48) = 0;
  if (this_01 != (CVolIP *)0x0) {
    CVolIP::~CVolIP(this_01);
    operator_delete(this_01);
  }
  *(undefined4 *)(this + 0x44) = 0;
  return this;
}

