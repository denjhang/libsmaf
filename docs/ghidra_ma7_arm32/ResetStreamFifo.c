/* ResetStreamFifo @ 0003b678 90B */


/* ARM::CStmSynth::ResetStreamFifo(unsigned int) */

void __thiscall ARM::CStmSynth::ResetStreamFifo(CStmSynth *this,uint param_1)

{
  int iVar1;
  
  if (param_1 < 4) {
    *(undefined4 *)(this + param_1 * 0x8f0 + 0xbc) = 0;
    *(undefined4 *)(this + param_1 * 0x8f0 + 0xc0) = 0;
    iVar1 = (uint)(byte)this[param_1 * 0x8f0 + 0x44] + (uint)(byte)this[param_1 * 0x8f0 + 0x46] * 2;
    *(undefined4 *)(this + param_1 * 0x8f0 + 0xc4) = 0;
    if (iVar1 == 0) {
      *(undefined4 *)(this + param_1 * 0x8f0 + 0x18) = 0;
      *(undefined4 *)(this + param_1 * 0x8f0 + 0x20) = 0;
      *(undefined4 *)(this + param_1 * 0x8f0 + 0x14) = 0x7f;
      *(undefined4 *)(this + param_1 * 0x8f0 + 0x1c) = 0x7f;
      return;
    }
    if (iVar1 != 1) {
      return;
    }
    *(undefined4 *)(this + param_1 * 0x8f0 + 0x18) = 0;
    *(undefined4 *)(this + param_1 * 0x8f0 + 0x20) = 0;
    *(undefined4 *)(this + param_1 * 0x8f0 + 0x14) = 0x7f;
    *(undefined4 *)(this + param_1 * 0x8f0 + 0x1c) = 0x7f;
  }
  return;
}

