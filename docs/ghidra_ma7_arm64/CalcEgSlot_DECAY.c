/* CalcEgSlot_DECAY @ 0014ffdc 60B */


/* ARM::CFmSynth::CalcEgSlot_DECAY(ARM::_tagOperator*) */

void ARM::CFmSynth::CalcEgSlot_DECAY(_tagOperator *param_1)

{
  uint uVar1;
  
  uVar1 = (uint)((long)((ulong)*(uint *)(param_1 + 0x54) * (ulong)*(uint *)(param_1 + 0x48)) >> 0x1e
                );
  *(uint *)(param_1 + 0x54) = uVar1;
  if (uVar1 <= *(uint *)(param_1 + 0x58)) {
    if (uVar1 == 0) {
      *(undefined8 *)(param_1 + 0x20) = 0;
      return;
    }
    *(undefined **)(param_1 + 0x20) = PTR_CalcEgSlot_SUSTAIN_005673a0;
  }
  return;
}

