/* SetAdpcmDefault @ 0013e0dc 96B */


/* ARM::CStmSynth::SetAdpcmDefault(unsigned int, int, unsigned int) */

void __thiscall
ARM::CStmSynth::SetAdpcmDefault(CStmSynth *this,uint param_1,int param_2,uint param_3)

{
  if (param_1 < 4) {
    if (param_1 == 2) {
      *(uint *)(this + 0x1248) = param_3;
      *(int *)(this + 0x124c) = param_2;
      *(uint *)(this + 0x938) = param_3;
      *(int *)(this + 0x93c) = param_2;
      return;
    }
    if (param_1 == 3) {
      *(uint *)(this + 0x1b60) = param_3;
      *(int *)(this + 0x1b64) = param_2;
      *(uint *)(this + 0x1250) = param_3;
      *(int *)(this + 0x1254) = param_2;
      return;
    }
    if (param_1 == 1) {
      *(uint *)(this + 0x930) = param_3;
      *(int *)(this + 0x934) = param_2;
      return;
    }
    *(uint *)(this + 0x18) = param_3;
    *(int *)(this + 0x1c) = param_2;
  }
  return;
}

