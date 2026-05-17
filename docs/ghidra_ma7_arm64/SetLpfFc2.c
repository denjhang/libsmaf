/* SetLpfFc2 @ 0013e354 28B */


/* ARM::CStmSynth::SetLpfFc2(unsigned int, unsigned int) */

void __thiscall ARM::CStmSynth::SetLpfFc2(CStmSynth *this,uint param_1,uint param_2)

{
  if (param_1 < 4) {
    *(uint *)(this + (ulong)param_1 * 0x918 + 0x88) = param_2;
  }
  return;
}

