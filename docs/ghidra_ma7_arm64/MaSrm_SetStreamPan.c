/* MaSrm_SetStreamPan @ 001a7dd8 68B */


/* YAMAHA::MaSrm_SetStreamPan(unsigned int, unsigned int, unsigned int) */

void YAMAHA::MaSrm_SetStreamPan(uint param_1,uint param_2,uint param_3)

{
  long lVar1;
  
  if (((param_1 < 4) && (param_2 < 0x40)) &&
     (lVar1 = (ulong)param_1 * 0x600 + (ulong)param_2 * 0x18,
     ((byte)(&DAT_005dc1c8)[lVar1] >> 5 & 1) == 0)) {
    (&DAT_005dc1c9)[lVar1] = (char)param_3;
  }
  return;
}

