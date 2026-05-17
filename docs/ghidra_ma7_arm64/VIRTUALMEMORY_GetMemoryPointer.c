/* VIRTUALMEMORY_GetMemoryPointer @ 0013afd0 76B */


/* ARM::VIRTUALMEMORY_GetMemoryPointer(unsigned int) */

undefined * ARM::VIRTUALMEMORY_GetMemoryPointer(uint param_1)

{
  if (param_1 < 0x10000) {
    return &DAT_005833c0 + param_1;
  }
  if (param_1 < 0x14000) {
    return &DAT_005933c0 + (param_1 - 0x10000);
  }
  return (undefined *)0x0;
}

