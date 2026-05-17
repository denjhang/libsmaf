/* SetEq @ 0014c7d0 56B */


/* ARM::CDinSynth::SetEq(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int,
   unsigned int, unsigned int) */

void __thiscall
ARM::CDinSynth::SetEq
          (CDinSynth *this,uint param_1,uint param_2,uint param_3,uint param_4,uint param_5,
          uint param_6,uint param_7)

{
  long lVar1;
  
  if ((param_1 < 2) && (param_2 < 3)) {
    lVar1 = (ulong)param_2 + (ulong)param_1 * 0x3a;
    *(uint *)(this + lVar1 * 4 + 0x40) = param_3;
    *(uint *)(this + lVar1 * 4 + 0x4c) = param_4;
    *(uint *)(this + lVar1 * 4 + 0x58) = param_5;
    *(uint *)(this + lVar1 * 4 + 100) = param_6;
    *(uint *)(this + lVar1 * 4 + 0x70) = param_7;
  }
  return;
}

