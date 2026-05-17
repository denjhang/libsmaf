/* VIRTUALMEMORY_GetMemoryData @ 00039144 40B */


/* ARM::VIRTUALMEMORY_GetMemoryData(unsigned int) */

undefined1 ARM::VIRTUALMEMORY_GetMemoryData(uint param_1)

{
  if (param_1 < 0x10000) {
    return *(undefined1 *)(DAT_00039170 + 0x3916a + param_1);
  }
  if (0x13fff < param_1) {
    return 0xff;
  }
  return *(undefined1 *)((int)DWORD_ARRAY_00027700 + param_1 + DAT_0003916c + 0x1bd2);
}

