/* Stop @ 00055f30 12B */


/* ARM::CDsp2::Stop() */

void __thiscall ARM::CDsp2::Stop(CDsp2 *this)

{
  if (*(int *)(this + 0x10) == 1) {
    *(undefined4 *)(this + 0x10) = 0;
  }
  return;
}

