/* SetWtVoiceNum @ 00088704 10B */


/* SetWtVoiceNum(int) */

void SetWtVoiceNum(int param_1)

{
  **(int **)(DAT_00088710 + 0x8870a) = param_1;
  return;
}

