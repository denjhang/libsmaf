/* CalcEgSlot_DECAY @ 0004acf8 36B */


/* ARM::CFmSynth::CalcEgSlot_DECAY(ARM::_tagOperator*) */

void ARM::CFmSynth::CalcEgSlot_DECAY(_tagOperator *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = (uint)((ulonglong)*(uint *)(param_1 + 0x48) * (ulonglong)*(uint *)(param_1 + 0x3c)) >>
          0x1e | (int)((ulonglong)*(uint *)(param_1 + 0x48) * (ulonglong)*(uint *)(param_1 + 0x3c)
                      >> 0x20) << 2;
  *(uint *)(param_1 + 0x48) = uVar1;
  if (uVar1 <= *(uint *)(param_1 + 0x4c)) {
    uVar2 = 0;
    if (uVar1 != 0) {
      uVar2 = *(undefined4 *)(DAT_0004ad1c + 0x4ad18);
    }
    *(undefined4 *)(param_1 + 0x1c) = uVar2;
  }
  return;
}

