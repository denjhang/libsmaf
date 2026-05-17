/* SetFormat @ 0013e050 140B */


/* ARM::CStmSynth::SetFormat(unsigned int, unsigned int, unsigned int, unsigned int) */

void __thiscall
ARM::CStmSynth::SetFormat(CStmSynth *this,uint param_1,uint param_2,uint param_3,uint param_4)

{
  ulong uVar1;
  
  if (param_1 < 4) {
    uVar1 = (ulong)param_1;
    this[uVar1 * 0x918 + 0x4c] = SUB41(param_2,0);
    this[uVar1 * 0x918 + 0x4e] = SUB41(param_4,0);
    this[uVar1 * 0x918 + 0x4d] = SUB41(param_3,0);
    *(uint *)(this + (ulong)param_1 * 0x918 + 0xc) =
         *(uint *)(this + (ulong)param_1 * 0x918 + 0xc) | 1;
    switch((uint)(byte)this[uVar1 * 0x918 + 0x4c] + (uint)(byte)this[uVar1 * 0x918 + 0x4e] * 2) {
    case 0:
    case 2:
    case 4:
    case 6:
      *(undefined4 *)(this + uVar1 * 0x918 + 0xe8) = 0x3ff;
      return;
    case 1:
    case 3:
    case 5:
    case 7:
      *(undefined4 *)(this + uVar1 * 0x918 + 0xe8) = 0x7ff;
      return;
    }
  }
  return;
}

