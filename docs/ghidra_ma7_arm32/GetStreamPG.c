/* GetStreamPG @ 0003ba00 20B */


/* ARM::CStmSynth::GetStreamPG(unsigned int) */

undefined4 __thiscall ARM::CStmSynth::GetStreamPG(CStmSynth *this,uint param_1)

{
  undefined4 uVar1;
  
  if (param_1 < 4) {
    uVar1 = *(undefined4 *)(this + param_1 * 0x8f0 + 0xc4);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

