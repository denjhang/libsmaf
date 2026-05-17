/* SetStreamInt @ 0013e408 260B */


/* ARM::CStmSynth::SetStreamInt(unsigned int, unsigned int, unsigned int) */

void __thiscall ARM::CStmSynth::SetStreamInt(CStmSynth *this,uint param_1,uint param_2,uint param_3)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_1 < 4) {
    uVar2 = (ulong)param_1;
    if (param_3 == 0) {
      *(undefined4 *)(this + uVar2 * 0x918 + 0xec) = 0x401;
      return;
    }
    uVar1 = *(int *)(this + uVar2 * 0x918 + 0xe8) + 1;
    switch(param_2) {
    case 0:
      *(undefined4 *)(this + uVar2 * 0x918 + 0xec) = 0;
      return;
    case 1:
      *(uint *)(this + uVar2 * 0x918 + 0xec) = uVar1 >> 3;
      return;
    case 2:
      *(uint *)(this + uVar2 * 0x918 + 0xec) = (uVar1 >> 3) << 1;
      return;
    case 3:
      *(uint *)(this + uVar2 * 0x918 + 0xec) = (uVar1 >> 3) * 3;
      return;
    case 4:
      *(uint *)(this + uVar2 * 0x918 + 0xec) = (uVar1 >> 3) << 2;
      return;
    case 5:
      *(uint *)(this + uVar2 * 0x918 + 0xec) = (uVar1 >> 3) * 5;
      return;
    case 6:
      *(uint *)(this + uVar2 * 0x918 + 0xec) = (uVar1 >> 3) * 6;
      return;
    default:
      *(uint *)(this + uVar2 * 0x918 + 0xec) = (uVar1 >> 3) * 7;
    }
  }
  return;
}

