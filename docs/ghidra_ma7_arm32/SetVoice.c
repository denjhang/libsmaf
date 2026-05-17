/* SetVoice @ 00043230 32B */


/* ARM::CCsmSynth::SetVoice(ARM::_tagCsmVoice) */

void ARM::CCsmSynth::SetVoice
               (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5)

{
  *(undefined4 *)(param_1 + 0x1804) = param_2;
  *(undefined4 *)(param_1 + 0x1808) = param_3;
  *(undefined4 *)(param_1 + 0x180c) = param_4;
  *(undefined4 *)(param_1 + 0x1810) = param_5;
  return;
}

