/* SetDspAdr @ 00055f3c 22B */


/* ARM::CDsp2::SetDspAdr(unsigned int) */

void __thiscall ARM::CDsp2::SetDspAdr(CDsp2 *this,uint param_1)

{
  if (param_1 < 0x300) {
    if (*(int *)(this + 0xc) == 0) {
      *(uint *)(this + 0x18) = param_1;
      return;
    }
    if (*(int *)(this + 0xc) == 1) {
      *(uint *)(this + 0x14) = param_1;
    }
  }
  return;
}

