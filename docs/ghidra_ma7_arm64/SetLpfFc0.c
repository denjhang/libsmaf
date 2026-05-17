/* SetLpfFc0 @ 0013e31c 28B */


/* ARM::CStmSynth::SetLpfFc0(unsigned int, unsigned int) */

void __thiscall ARM::CStmSynth::SetLpfFc0(CStmSynth *this,uint param_1,uint param_2)

{
  if (param_1 < 4) {
    *(uint *)(this + (ulong)param_1 * 0x918 + 0x80) = param_2;
  }
  return;
}

