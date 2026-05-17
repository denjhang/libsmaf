/* SetEqCoef @ 0015b2a4 116B */


/* ARM::CDsp1::SetEqCoef(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int,
   unsigned int) */

void __thiscall
ARM::CDsp1::SetEqCoef
          (CDsp1 *this,uint param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6
          )

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  if (param_1 < 3) {
    uVar1 = param_2 | 0xffff0000;
    if ((param_2 & 0x8000) == 0) {
      uVar1 = param_2;
    }
    uVar2 = param_3 | 0xffff0000;
    if ((param_3 & 0x8000) == 0) {
      uVar2 = param_3;
    }
    uVar3 = param_4 | 0xffff0000;
    if ((param_4 & 0x8000) == 0) {
      uVar3 = param_4;
    }
    uVar4 = param_5 | 0xffff0000;
    if ((param_5 & 0x8000) == 0) {
      uVar4 = param_5;
    }
    uVar5 = param_6 | 0xffff0000;
    if ((param_6 & 0x8000) == 0) {
      uVar5 = param_6;
    }
    *(uint *)(this + (ulong)param_1 * 4 + 8) = uVar1;
    *(uint *)(this + (ulong)param_1 * 4 + 0x14) = uVar2;
    *(uint *)(this + (ulong)param_1 * 4 + 0x20) = uVar3;
    *(uint *)(this + (ulong)param_1 * 4 + 0x2c) = uVar4;
    *(uint *)(this + (ulong)param_1 * 4 + 0x38) = uVar5;
  }
  return;
}

