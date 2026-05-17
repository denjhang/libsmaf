/* ResetStreamFifo @ 0013dfe8 104B */


/* ARM::CStmSynth::ResetStreamFifo(unsigned int) */

void __thiscall ARM::CStmSynth::ResetStreamFifo(CStmSynth *this,uint param_1)

{
  int iVar1;
  CStmSynth CVar2;
  CStmSynth CVar3;
  
  if (param_1 < 4) {
    CVar2 = this[(ulong)param_1 * 0x918 + 0x4e];
    CVar3 = this[(ulong)param_1 * 0x918 + 0x4c];
    *(undefined4 *)(this + (ulong)param_1 * 0x918 + 0xdc) = 0;
    *(undefined4 *)(this + (ulong)param_1 * 0x918 + 0xe0) = 0;
    iVar1 = (uint)(byte)CVar3 + (uint)(byte)CVar2 * 2;
    *(undefined4 *)(this + (ulong)param_1 * 0x918 + 0xe4) = 0;
    if (iVar1 == 0) {
      *(undefined4 *)(this + (ulong)param_1 * 0x918 + 0x1c) = 0;
      *(undefined4 *)(this + (ulong)param_1 * 0x918 + 0x24) = 0;
      *(undefined4 *)(this + (ulong)param_1 * 0x918 + 0x18) = 0x7f;
      *(undefined4 *)(this + (ulong)param_1 * 0x918 + 0x20) = 0x7f;
      return;
    }
    if (iVar1 == 1) {
      *(undefined4 *)(this + (ulong)param_1 * 0x918 + 0x1c) = 0;
      *(undefined4 *)(this + (ulong)param_1 * 0x918 + 0x24) = 0;
      *(undefined4 *)(this + (ulong)param_1 * 0x918 + 0x18) = 0x7f;
      *(undefined4 *)(this + (ulong)param_1 * 0x918 + 0x20) = 0x7f;
    }
  }
  return;
}

