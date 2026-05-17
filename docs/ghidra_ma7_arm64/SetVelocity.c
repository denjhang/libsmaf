/* SetVelocity @ 0014c678 32B */


/* ARM::CDinSynth::SetVelocity(unsigned int, unsigned int) */

void __thiscall ARM::CDinSynth::SetVelocity(CDinSynth *this,uint param_1,uint param_2)

{
  if (1 < param_1 >> 1) {
    return;
  }
  *(uint *)(this + (ulong)(param_1 >> 1) * 0xe8 + 0x20) = param_2;
  return;
}

