/* SetDspAdr @ 0015fdac 44B */


/* ARM::CDsp2::SetDspAdr(unsigned int) */

void __thiscall ARM::CDsp2::SetDspAdr(CDsp2 *this,uint param_1)

{
  if (param_1 < 0x300) {
    if (*(int *)(this + 0x10) == 0) {
      *(uint *)(this + 0x1c) = param_1;
      return;
    }
    if (*(int *)(this + 0x10) == 1) {
      *(uint *)(this + 0x18) = param_1;
      return;
    }
  }
  return;
}

