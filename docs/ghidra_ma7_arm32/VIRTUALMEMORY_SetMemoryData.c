/* VIRTUALMEMORY_SetMemoryData @ 00039128 22B */


/* ARM::VIRTUALMEMORY_SetMemoryData(unsigned int, unsigned char) */

void ARM::VIRTUALMEMORY_SetMemoryData(uint param_1,uchar param_2)

{
  if (param_1 - 0x10000 < 0x4000) {
    *(uchar *)((param_1 - 0x10000) + DAT_00039140 + 0x392b0) = param_2;
  }
  return;
}

