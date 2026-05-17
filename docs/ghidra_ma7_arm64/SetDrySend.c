/* SetDrySend @ 0014c768 104B */


/* ARM::CDinSynth::SetDrySend(unsigned int, unsigned int) */

void __thiscall ARM::CDinSynth::SetDrySend(CDinSynth *this,uint param_1,uint param_2)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = param_1 >> 1;
  if (1 < uVar1) {
    return;
  }
  *(uint *)(this + (ulong)uVar1 * 0xe8 + 0x28) = param_2;
  if ((param_1 & 1) != 0) {
    uVar2 = CVolIP::GetLinearVol(*(CVolIP **)(this + (ulong)uVar1 * 0xe8 + 0xa8),param_2);
    *(undefined4 *)(this + (ulong)uVar1 * 0xe8 + 0x9c) = uVar2;
    return;
  }
  uVar2 = CVolIP::GetLinearVol(*(CVolIP **)(this + (ulong)uVar1 * 0xe8 + 0xa8),param_2);
  *(undefined4 *)(this + (ulong)uVar1 * 0xe8 + 0x90) = uVar2;
  return;
}

