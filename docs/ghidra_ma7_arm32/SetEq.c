/* SetEq @ 00047be8 52B */


/* ARM::CDinSynth::SetEq(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int,
   unsigned int, unsigned int) */

void __thiscall
ARM::CDinSynth::SetEq
          (CDinSynth *this,uint param_1,uint param_2,uint param_3,uint param_4,uint param_5,
          uint param_6,uint param_7)

{
  int iVar1;
  
  if ((param_1 < 2) && (param_2 < 3)) {
    iVar1 = param_2 * 4 + param_1 * 0xc4 + 4;
    *(uint *)(this + iVar1 + 0x38) = param_3;
    *(uint *)(this + iVar1 + 0x50) = param_5;
    *(uint *)(this + iVar1 + 0x5c) = param_6;
    *(uint *)(this + iVar1 + 0x44) = param_4;
    *(uint *)(this + iVar1 + 0x68) = param_7;
    return;
  }
  return;
}

