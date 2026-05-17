/* CalcEgSlot_SUSTAIN @ 0004ad20 22B */


/* ARM::CFmSynth::CalcEgSlot_SUSTAIN(ARM::_tagOperator*) */

void ARM::CFmSynth::CalcEgSlot_SUSTAIN(_tagOperator *param_1)

{
  uint uVar1;
  
  uVar1 = (uint)((ulonglong)*(uint *)(param_1 + 0x48) * (ulonglong)*(uint *)(param_1 + 0x40)) >>
          0x1e | (int)((ulonglong)*(uint *)(param_1 + 0x48) * (ulonglong)*(uint *)(param_1 + 0x40)
                      >> 0x20) << 2;
  *(uint *)(param_1 + 0x48) = uVar1;
  if (uVar1 == 0) {
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  return;
}

