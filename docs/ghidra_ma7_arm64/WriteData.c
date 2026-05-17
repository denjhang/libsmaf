/* WriteData @ 0013df84 100B */


/* ARM::CStmSynth::WriteData(unsigned int, unsigned char) */

void __thiscall ARM::CStmSynth::WriteData(CStmSynth *this,uint param_1,uchar param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  if (param_1 < 4) {
    uVar1 = *(uint *)(this + (ulong)param_1 * 0x918 + 0xe4);
    uVar2 = *(uint *)(this + (ulong)param_1 * 0x918 + 0xe8);
    this[(ulong)*(uint *)(this + (ulong)param_1 * 0x918 + 0xe0) + (ulong)param_1 * 0x918 + 0xf0] =
         (CStmSynth)param_2;
    if (uVar1 <= uVar2) {
      iVar3 = *(int *)(this + (ulong)param_1 * 0x918 + 0xe4);
      *(uint *)(this + (ulong)param_1 * 0x918 + 0xe0) =
           *(int *)(this + (ulong)param_1 * 0x918 + 0xe0) + 1U &
           *(uint *)(this + (ulong)param_1 * 0x918 + 0xe8);
      *(int *)(this + (ulong)param_1 * 0x918 + 0xe4) = iVar3 + 1;
      return;
    }
  }
  return;
}

