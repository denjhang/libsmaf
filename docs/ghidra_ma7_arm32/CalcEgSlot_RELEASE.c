/* CalcEgSlot_RELEASE @ 0004ad38 44B */


/* ARM::CFmSynth::CalcEgSlot_RELEASE(ARM::_tagOperator*) */

void ARM::CFmSynth::CalcEgSlot_RELEASE(_tagOperator *param_1)

{
  longlong lVar1;
  uint uVar2;
  
  if (param_1[0x53] == (_tagOperator)0x0) {
    lVar1 = (ulonglong)*(uint *)(param_1 + 0x48) * (ulonglong)*(uint *)(param_1 + 0x44);
    uVar2 = (uint)lVar1 >> 0x1e | (int)((ulonglong)lVar1 >> 0x20) << 2;
  }
  else {
    lVar1 = (ulonglong)*(uint *)(param_1 + 0x48) * (ulonglong)*(uint *)(param_1 + 0x40);
    uVar2 = (uint)lVar1 >> 0x1e | (int)((ulonglong)lVar1 >> 0x20) << 2;
  }
  *(uint *)(param_1 + 0x48) = uVar2;
  if (uVar2 == 0) {
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  return;
}

