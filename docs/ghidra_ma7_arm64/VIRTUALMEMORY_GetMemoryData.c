/* VIRTUALMEMORY_GetMemoryData @ 0013af58 88B */


/* ARM::VIRTUALMEMORY_GetMemoryData(unsigned int) */

undefined1 ARM::VIRTUALMEMORY_GetMemoryData(uint param_1)

{
  if (param_1 < 0x10000) {
    return (&DAT_005833c0)[param_1];
  }
  if (0x13fff < param_1) {
    return 0xff;
  }
  return (&DAT_005933c0)[param_1 - 0x10000];
}

