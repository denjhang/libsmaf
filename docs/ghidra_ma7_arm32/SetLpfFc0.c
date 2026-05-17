/* SetLpfFc0 @ 0003b8bc 16B */


/* ARM::CStmSynth::SetLpfFc0(unsigned int, unsigned int) */

void __thiscall ARM::CStmSynth::SetLpfFc0(CStmSynth *this,uint param_1,uint param_2)

{
  CStmSynth *pCVar1;
  
  pCVar1 = (CStmSynth *)param_1;
  if (param_1 < 4) {
    pCVar1 = this + param_1 * 0x8f0;
  }
  if (param_1 < 4) {
    *(uint *)(pCVar1 + 0x78) = param_2;
  }
  return;
}

