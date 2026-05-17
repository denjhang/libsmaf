/* SetFormat @ 0003b6d4 84B */


/* ARM::CStmSynth::SetFormat(unsigned int, unsigned int, unsigned int, unsigned int) */

void __thiscall
ARM::CStmSynth::SetFormat(CStmSynth *this,uint param_1,uint param_2,uint param_3,uint param_4)

{
  if (param_1 < 4) {
    this[param_1 * 0x8f0 + 0x44] = SUB41(param_2,0);
    this[param_1 * 0x8f0 + 0x45] = SUB41(param_3,0);
    this[param_1 * 0x8f0 + 0x46] = SUB41(param_4,0);
    *(uint *)(this + param_1 * 0x8f0 + 8) = *(uint *)(this + param_1 * 0x8f0 + 8) | 1;
    switch((param_2 & 0xff) + (param_4 & 0xff) * 2) {
    case 0:
    case 2:
    case 4:
    case 6:
      *(undefined4 *)(this + param_1 * 0x8f0 + 200) = 0x3ff;
      return;
    case 1:
    case 3:
    case 5:
    case 7:
      *(undefined4 *)(this + param_1 * 0x8f0 + 200) = 0x7ff;
    }
  }
  return;
}

