/* SetSwap @ 00053904 12B */


/* ARM::CDsp1::SetSwap(unsigned int) */

void __thiscall ARM::CDsp1::SetSwap(CDsp1 *this,uint param_1)

{
  this[0x40] = (CDsp1)(param_1 != 0);
  return;
}

