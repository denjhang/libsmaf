/* KeyOn @ 00141a9c 192B */


/* ARM::CWtSynth::KeyOn(unsigned int, unsigned int, unsigned int, unsigned int) */

void __thiscall
ARM::CWtSynth::KeyOn(CWtSynth *this,uint param_1,uint param_2,uint param_3,uint param_4)

{
  ulong uVar1;
  
  if (param_1 < 0x20) {
    uVar1 = (ulong)param_1;
    this[uVar1 * 0x8188 + 0x810c] = SUB41(param_4,0);
    if ((this[uVar1 * 0x8188 + 0x810d] == (CWtSynth)0x0) && ((param_3 & 0xff) != 0)) {
      this[uVar1 * 0x8188 + 0x810d] = SUB41(param_3,0);
      *(uint *)(this + (ulong)param_1 * 0x8188 + 0xc) =
           *(uint *)(this + (ulong)param_1 * 0x8188 + 0xc) | 4;
    }
    if (param_2 == 1) {
      if (this[uVar1 * 0x8188 + 0x80b4] == (CWtSynth)0x0) {
        this[uVar1 * 0x8188 + 0x80b4] = (CWtSynth)0x1;
        *(uint *)(this + (ulong)param_1 * 0x8188 + 0xc) =
             *(uint *)(this + (ulong)param_1 * 0x8188 + 0xc) | 2;
        return;
      }
    }
    else if (this[uVar1 * 0x8188 + 0x80b4] == (CWtSynth)0x1) {
      this[uVar1 * 0x8188 + 0x80b4] = (CWtSynth)0x0;
      *(uint *)(this + (ulong)param_1 * 0x8188 + 0xc) =
           *(uint *)(this + (ulong)param_1 * 0x8188 + 0xc) | 4;
      return;
    }
  }
  return;
}

