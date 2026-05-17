/* CalcEgSlot_ATTACK @ 0014ffac 48B */


/* ARM::CFmSynth::CalcEgSlot_ATTACK(ARM::_tagOperator*) */

void ARM::CFmSynth::CalcEgSlot_ATTACK(_tagOperator *param_1)

{
  if (-1 < *(int *)(param_1 + 0x44) + *(int *)(param_1 + 0x54)) {
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x44) + *(int *)(param_1 + 0x54);
    return;
  }
  *(undefined4 *)(param_1 + 0x54) = 0x80000000;
  *(undefined **)(param_1 + 0x20) = PTR_CalcEgSlot_DECAY_00567dd8;
  return;
}

