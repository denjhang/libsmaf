/* SetBuffer @ 00047ab0 32B */


/* ARM::CDinSynth::SetBuffer(unsigned int, short*, short*, unsigned int) */

void __thiscall
ARM::CDinSynth::SetBuffer(CDinSynth *this,uint param_1,short *param_2,short *param_3,uint param_4)

{
  if (param_1 < 2) {
    *(short **)(this + param_1 * 0xc4 + 0xb4) = param_3;
    *(short **)(this + param_1 * 0xc4 + 0xb0) = param_2;
    *(uint *)(this + param_1 * 0xc4 + 0xb8) = param_4;
  }
  return;
}

