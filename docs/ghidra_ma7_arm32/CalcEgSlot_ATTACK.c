/* CalcEgSlot_ATTACK @ 0004acd8 28B */


/* ARM::CFmSynth::CalcEgSlot_ATTACK(ARM::_tagOperator*) */

void ARM::CFmSynth::CalcEgSlot_ATTACK(_tagOperator *param_1)

{
  int iVar1;
  
  iVar1 = DAT_0004acf4;
  if (-1 < *(int *)(param_1 + 0x38) + *(int *)(param_1 + 0x48)) {
    *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x38) + *(int *)(param_1 + 0x48);
    return;
  }
  *(undefined4 *)(param_1 + 0x48) = 0x80000000;
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(iVar1 + 0x4acf0);
  return;
}

