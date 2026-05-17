/* SetEqCoef @ 000538a0 100B */


/* ARM::CDsp1::SetEqCoef(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int,
   unsigned int) */

void __thiscall
ARM::CDsp1::SetEqCoef
          (CDsp1 *this,uint param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6
          )

{
  if (param_1 < 3) {
    if ((param_2 & 0x8000) != 0) {
      param_2 = ~(~(param_2 << 0x10) >> 0x10);
    }
    *(uint *)(this + param_1 * 4 + 4) = param_2;
    if ((param_3 & 0x8000) != 0) {
      param_3 = ~(~(param_3 << 0x10) >> 0x10);
    }
    *(uint *)(this + param_1 * 4 + 0x10) = param_3;
    if ((param_4 & 0x8000) != 0) {
      param_4 = ~(~(param_4 << 0x10) >> 0x10);
    }
    *(uint *)(this + param_1 * 4 + 0x1c) = param_4;
    if ((param_5 & 0x8000) != 0) {
      param_5 = ~(~(param_5 << 0x10) >> 0x10);
    }
    *(uint *)(this + param_1 * 4 + 0x28) = param_5;
    if ((param_6 & 0x8000) != 0) {
      param_6 = ~(~(param_6 << 0x10) >> 0x10);
    }
    *(uint *)(this + param_1 * 4 + 0x34) = param_6;
  }
  return;
}

