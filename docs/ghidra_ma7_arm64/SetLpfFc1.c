/* SetLpfFc1 @ 0013e338 28B */


/* ARM::CStmSynth::SetLpfFc1(unsigned int, unsigned int) */

void __thiscall ARM::CStmSynth::SetLpfFc1(CStmSynth *this,uint param_1,uint param_2)

{
  if (param_1 < 4) {
    *(uint *)(this + (ulong)param_1 * 0x918 + 0x84) = param_2;
  }
  return;
}

