/* VIRTUALMEMORY_SetDefaultRomData @ 00039174 14B */


/* ARM::VIRTUALMEMORY_SetDefaultRomData(unsigned int, unsigned char) */

void ARM::VIRTUALMEMORY_SetDefaultRomData(uint param_1,uchar param_2)

{
  if (param_1 < 0x10000) {
    *(uchar *)(DAT_00039184 + 0x39180 + param_1) = param_2;
  }
  return;
}

