/* KeyOn @ 0004309c 50B */


/* ARM::CCsmSynth::KeyOn(unsigned int, unsigned int, unsigned int) */

void __thiscall ARM::CCsmSynth::KeyOn(CCsmSynth *this,uint param_1,uint param_2,uint param_3)

{
  CCsmSynth CVar1;
  
  CVar1 = (CCsmSynth)0x88;
  this[0x18c4] = SUB41(param_3,0);
  this[0x18c5] = SUB41(param_2,0);
  this[0x18d9] = (CCsmSynth)((byte)SUB41(param_3,0) | (byte)this[0x18d9]);
  if (param_2 == 0) {
    CVar1 = this[0x18c8];
  }
  this[0x18c7] = CVar1;
  this[0x18c9] = SUB41(param_1,0);
  return;
}

