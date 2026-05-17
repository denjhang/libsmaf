/* SetBuffer @ 0014c5bc 40B */


/* ARM::CDinSynth::SetBuffer(unsigned int, short*, short*, unsigned int) */

void __thiscall
ARM::CDinSynth::SetBuffer(CDinSynth *this,uint param_1,short *param_2,short *param_3,uint param_4)

{
  if (1 < param_1) {
    return;
  }
  *(short **)(this + (ulong)param_1 * 0xe8 + 0xc0) = param_2;
  *(short **)(this + (ulong)param_1 * 0xe8 + 200) = param_3;
  *(uint *)(this + (ulong)param_1 * 0xe8 + 0xd0) = param_4;
  return;
}

