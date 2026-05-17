/* SetFcOffset @ 0004fafc 28B */


/* ARM::CFmSynth::SetFcOffset(unsigned int, unsigned int) */

void __thiscall ARM::CFmSynth::SetFcOffset(CFmSynth *this,uint param_1,uint param_2)

{
  if (param_1 < 0x20) {
    *(uint *)(this + param_1 * 0x230 + 0x1a14) = param_2 & 0x1fff;
  }
  return;
}

