/* VIRTUALMEMORY_GetMemoryPointer @ 00039188 40B */


/* ARM::VIRTUALMEMORY_GetMemoryPointer(unsigned int) */

int ARM::VIRTUALMEMORY_GetMemoryPointer(uint param_1)

{
  if (param_1 < 0x10000) {
    return param_1 + DAT_000391b4 + 0x391aa;
  }
  if (param_1 < 0x14000) {
    return DAT_000391b0 + param_1 + 0x29316;
  }
  return 0;
}

