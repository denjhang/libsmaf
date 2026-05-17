/* Start @ 00055f24 10B */


/* ARM::CDsp2::Start() */

void __thiscall ARM::CDsp2::Start(CDsp2 *this)

{
  if (*(int *)(this + 0x10) == 0) {
    *(undefined4 *)(this + 0x10) = 1;
  }
  return;
}

