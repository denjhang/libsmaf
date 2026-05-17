/* MaCmd_InitChannelVolume @ 000f3368 152B */


/* YAMAHA::MaCmd_InitChannelVolume(unsigned int) */

void YAMAHA::MaCmd_InitChannelVolume(uint param_1)

{
  int iVar1;
  
  iVar1 = param_1 * 0x65d0 + DAT_000f3400 + 0xf3374;
  *(undefined1 *)(iVar1 + 9) = 0x7f;
  *(undefined1 *)(iVar1 + 0x27) = 0x7f;
  *(undefined1 *)(iVar1 + 0x45) = 0x7f;
  *(undefined1 *)(iVar1 + 99) = 0x7f;
  *(undefined1 *)(iVar1 + 0x81) = 0x7f;
  *(undefined1 *)(iVar1 + 0x9f) = 0x7f;
  *(undefined1 *)(iVar1 + 0xbd) = 0x7f;
  *(undefined1 *)(iVar1 + 0xdb) = 0x7f;
  *(undefined1 *)(iVar1 + 0xf9) = 0x7f;
  *(undefined1 *)(iVar1 + 0x117) = 0x7f;
  *(undefined1 *)(iVar1 + 0x135) = 0x7f;
  *(undefined1 *)(iVar1 + 0x153) = 0x7f;
  *(undefined1 *)(iVar1 + 0x171) = 0x7f;
  *(undefined1 *)(iVar1 + 399) = 0x7f;
  *(undefined1 *)(iVar1 + 0x1ad) = 0x7f;
  *(undefined1 *)(iVar1 + 0x1cb) = 0x7f;
  *(undefined1 *)(iVar1 + 0x1e9) = 0x7f;
  *(undefined1 *)(iVar1 + 0x207) = 0x7f;
  *(undefined1 *)(iVar1 + 0x225) = 0x7f;
  *(undefined1 *)(iVar1 + 0x243) = 0x7f;
  *(undefined1 *)(iVar1 + 0x261) = 0x7f;
  *(undefined1 *)(iVar1 + 0x27f) = 0x7f;
  *(undefined1 *)(iVar1 + 0x29d) = 0x7f;
  *(undefined1 *)(iVar1 + 699) = 0x7f;
  *(undefined1 *)(iVar1 + 0x2d9) = 0x7f;
  *(undefined1 *)(iVar1 + 0x2f7) = 0x7f;
  *(undefined1 *)(iVar1 + 0x315) = 0x7f;
  *(undefined1 *)(iVar1 + 0x333) = 0x7f;
  *(undefined1 *)(iVar1 + 0x351) = 0x7f;
  *(undefined1 *)(iVar1 + 0x36f) = 0x7f;
  *(undefined1 *)(iVar1 + 0x38d) = 0x7f;
  *(undefined1 *)(iVar1 + 0x3ab) = 0x7f;
  if (param_1 == 0) {
    *(undefined4 *)(MaCmd_SetChannelVolume + DAT_000f3404 + 6) = 0;
  }
  return;
}

