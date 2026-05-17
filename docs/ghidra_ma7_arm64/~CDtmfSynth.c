/* ~CDtmfSynth @ 0014ff38 96B */


/* ARM::CDtmfSynth::~CDtmfSynth() */

void __thiscall ARM::CDtmfSynth::~CDtmfSynth(CDtmfSynth *this)

{
  CPanIP *this_00;
  CVolIP *this_01;
  
  this_00 = *(CPanIP **)(this + 0x50);
  if (this_00 != (CPanIP *)0x0) {
    CPanIP::~CPanIP(this_00);
    operator_delete(this_00);
  }
  this_01 = *(CVolIP **)(this + 0x48);
  *(undefined8 *)(this + 0x50) = 0;
  if (this_01 != (CVolIP *)0x0) {
    CVolIP::~CVolIP(this_01);
    operator_delete(this_01);
    return;
  }
  return;
}

