/* SetVolume @ 0013e530 32B */


/* ARM::CStmSynth::SetVolume(unsigned int, unsigned int, unsigned int) */

void __thiscall ARM::CStmSynth::SetVolume(CStmSynth *this,uint param_1,uint param_2,uint param_3)

{
  if (param_1 < 4) {
    *(uint *)(this + (ulong)param_1 * 0x918 + 0x8f0) = param_2;
    *(uint *)(this + (ulong)param_1 * 0x918 + 0x8f4) = param_3;
  }
  return;
}

