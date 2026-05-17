/* SetAdpcmDefault @ 0003b730 72B */


/* ARM::CStmSynth::SetAdpcmDefault(unsigned int, int, unsigned int) */

void __thiscall
ARM::CStmSynth::SetAdpcmDefault(CStmSynth *this,uint param_1,int param_2,uint param_3)

{
  if (param_1 < 4) {
    if (param_1 == 2) {
      *(uint *)(this + 0x11f4) = param_3;
      *(int *)(this + 0x11f8) = param_2;
      *(uint *)(this + 0x90c) = param_3;
      *(int *)(this + 0x910) = param_2;
      return;
    }
    if (param_1 == 3) {
      *(uint *)(this + 0x1ae4) = param_3;
      *(int *)(this + 0x1ae8) = param_2;
      *(uint *)(this + 0x11fc) = param_3;
      *(int *)(this + 0x1200) = param_2;
      return;
    }
    *(uint *)(this + param_1 * 0x8f0 + 0x14) = param_3;
    *(int *)(this + param_1 * 0x8f0 + 0x18) = param_2;
  }
  return;
}

