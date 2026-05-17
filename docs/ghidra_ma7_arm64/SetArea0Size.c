/* SetArea0Size @ 00169df8 20B */


/* ARM::CDsp2::SetArea0Size(unsigned int) */

void __thiscall ARM::CDsp2::SetArea0Size(CDsp2 *this,uint param_1)

{
  *(uint *)(this + 0x1e20) = param_1;
  *(uint *)(this + 0x1e24) = 0x2000 - param_1;
  return;
}

