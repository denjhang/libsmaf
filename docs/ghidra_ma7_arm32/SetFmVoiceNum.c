/* SetFmVoiceNum @ 000886f4 10B */


/* SetFmVoiceNum(int) */

void SetFmVoiceNum(int param_1)

{
  **(int **)(DAT_00088700 + 0x886fa) = param_1;
  return;
}

