/* WriteData @ 0003b62c 74B */


/* ARM::CStmSynth::WriteData(unsigned int, unsigned char) */

void __thiscall ARM::CStmSynth::WriteData(CStmSynth *this,uint param_1,uchar param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  if (param_1 < 4) {
    iVar1 = param_1 * 0x8f0 + 4;
    uVar3 = *(uint *)(this + param_1 * 0x8f0 + 0xc4);
    uVar4 = *(uint *)(this + param_1 * 0x8f0 + 200);
    if (uVar3 <= uVar4) {
      iVar2 = *(int *)(this + param_1 * 0x8f0 + 0xc0);
      this[iVar2 + iVar1 + 0xcc] = (CStmSynth)param_2;
      *(uint *)(this + param_1 * 0x8f0 + 0xc4) = uVar3 + 1;
      *(uint *)(this + param_1 * 0x8f0 + 0xc0) = uVar4 & iVar2 + 1U;
      return;
    }
    this[*(int *)(this + param_1 * 0x8f0 + 0xc0) + iVar1 + 0xcc] = (CStmSynth)param_2;
  }
  return;
}

