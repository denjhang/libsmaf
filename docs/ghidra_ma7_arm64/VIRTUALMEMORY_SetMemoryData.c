/* VIRTUALMEMORY_SetMemoryData @ 0013af30 40B */


/* ARM::VIRTUALMEMORY_SetMemoryData(unsigned int, unsigned char) */

void ARM::VIRTUALMEMORY_SetMemoryData(uint param_1,uchar param_2)

{
  if (param_1 - 0x10000 < 0x4000) {
    (&DAT_005933c0)[param_1 - 0x10000] = param_2;
  }
  return;
}

