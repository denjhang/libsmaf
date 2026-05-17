/* VIRTUALMEMORY_SetDefaultRomData @ 0013afb0 32B */


/* ARM::VIRTUALMEMORY_SetDefaultRomData(unsigned int, unsigned char) */

void ARM::VIRTUALMEMORY_SetDefaultRomData(uint param_1,uchar param_2)

{
  if (param_1 < 0x10000) {
    (&DAT_005833c0)[param_1] = param_2;
  }
  return;
}

