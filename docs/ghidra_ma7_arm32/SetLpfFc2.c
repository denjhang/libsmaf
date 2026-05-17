/* SetLpfFc2 @ 0003b8dc 18B */


/* ARM::CStmSynth::SetLpfFc2(unsigned int, unsigned int) */

void __thiscall ARM::CStmSynth::SetLpfFc2(CStmSynth *this,uint param_1,uint param_2)

{
  if (param_1 < 4) {
    *(uint *)(this + param_1 * 0x8f0 + 0x80) = param_2;
  }
  return;
}

