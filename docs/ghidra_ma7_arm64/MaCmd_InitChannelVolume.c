/* MaCmd_InitChannelVolume @ 0023a470 168B */


/* YAMAHA::MaCmd_InitChannelVolume(unsigned int) */

void YAMAHA::MaCmd_InitChannelVolume(uint param_1)

{
  long lVar1;
  
  lVar1 = (ulong)param_1 * 0x65d0;
  (&DAT_0074a419)[lVar1] = 0x7f;
  (&DAT_0074a437)[lVar1] = 0x7f;
  (&DAT_0074a455)[lVar1] = 0x7f;
  (&DAT_0074a473)[lVar1] = 0x7f;
  (&DAT_0074a491)[lVar1] = 0x7f;
  (&DAT_0074a4af)[lVar1] = 0x7f;
  (&DAT_0074a4cd)[lVar1] = 0x7f;
  (&DAT_0074a4eb)[lVar1] = 0x7f;
  (&DAT_0074a509)[lVar1] = 0x7f;
  (&DAT_0074a527)[lVar1] = 0x7f;
  (&DAT_0074a545)[lVar1] = 0x7f;
  (&DAT_0074a563)[lVar1] = 0x7f;
  (&DAT_0074a581)[lVar1] = 0x7f;
  (&DAT_0074a59f)[lVar1] = 0x7f;
  (&DAT_0074a5bd)[lVar1] = 0x7f;
  (&DAT_0074a5db)[lVar1] = 0x7f;
  (&DAT_0074a5f9)[lVar1] = 0x7f;
  (&DAT_0074a617)[lVar1] = 0x7f;
  (&DAT_0074a635)[lVar1] = 0x7f;
  (&DAT_0074a653)[lVar1] = 0x7f;
  (&DAT_0074a671)[lVar1] = 0x7f;
  (&DAT_0074a68f)[lVar1] = 0x7f;
  (&DAT_0074a6ad)[lVar1] = 0x7f;
  (&DAT_0074a6cb)[lVar1] = 0x7f;
  (&DAT_0074a6e9)[lVar1] = 0x7f;
  (&DAT_0074a707)[lVar1] = 0x7f;
  (&DAT_0074a725)[lVar1] = 0x7f;
  (&DAT_0074a743)[lVar1] = 0x7f;
  (&DAT_0074a761)[lVar1] = 0x7f;
  (&DAT_0074a77f)[lVar1] = 0x7f;
  (&DAT_0074a79d)[lVar1] = 0x7f;
  (&DAT_0074a7bb)[lVar1] = 0x7f;
  if (param_1 == 0) {
    DAT_00763b70 = 0;
  }
  return;
}

