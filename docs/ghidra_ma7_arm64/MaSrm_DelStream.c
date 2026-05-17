/* MaSrm_DelStream @ 001a7358 68B */


/* YAMAHA::MaSrm_DelStream(unsigned int, unsigned int) */

void YAMAHA::MaSrm_DelStream(uint param_1,uint param_2)

{
  if ((param_1 < 4) && (param_2 < 0x40)) {
    (&DAT_005dc1c0)[(ulong)param_2 * 3 + (ulong)param_1 * 0xc0] = 0;
    (&DAT_005dc1ca)[(ulong)param_1 * 0x600 + (ulong)param_2 * 0x18] = 0;
  }
  return;
}

