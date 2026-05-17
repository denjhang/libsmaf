/* SetStreamInt @ 0003b96c 138B */


/* ARM::CStmSynth::SetStreamInt(unsigned int, unsigned int, unsigned int) */

void __thiscall ARM::CStmSynth::SetStreamInt(CStmSynth *this,uint param_1,uint param_2,uint param_3)

{
  uint uVar1;
  
  if (param_1 < 4) {
    if (param_3 == 0) {
      *(undefined4 *)(this + param_1 * 0x8f0 + 0xcc) = 0x401;
      return;
    }
    uVar1 = *(int *)(this + param_1 * 0x8f0 + 200) + 1;
    switch(param_2) {
    case 0:
      *(undefined4 *)(this + param_1 * 0x8f0 + 0xcc) = 0;
      break;
    case 1:
      *(uint *)(this + param_1 * 0x8f0 + 0xcc) = uVar1 >> 3;
      break;
    case 2:
      *(uint *)(this + param_1 * 0x8f0 + 0xcc) = (uVar1 >> 3) << 1;
      break;
    case 3:
      *(uint *)(this + param_1 * 0x8f0 + 0xcc) = (uVar1 >> 3) * 3;
      break;
    case 4:
      *(uint *)(this + param_1 * 0x8f0 + 0xcc) = (uVar1 >> 3) << 2;
      break;
    case 5:
      *(uint *)(this + param_1 * 0x8f0 + 0xcc) = (uVar1 >> 3) * 5;
      break;
    case 6:
      *(uint *)(this + param_1 * 0x8f0 + 0xcc) = (uVar1 >> 3) * 6;
      break;
    default:
      *(uint *)(this + param_1 * 0x8f0 + 0xcc) = (uVar1 >> 3) * 7;
    }
  }
  return;
}

