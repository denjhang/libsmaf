/* VIRTUALMEMORY_Initialize @ 000390f0 40B */


/* ARM::VIRTUALMEMORY_Initialize() */

undefined4 ARM::VIRTUALMEMORY_Initialize(void)

{
  memcpy((void *)(DAT_00039118 + 0x39100),(void *)(DAT_0003911c + 0x390fe),0x10000);
  memset(VIRTUALREGISTER_GetRegM + DAT_00039120 + 2,0,0x4000);
  return 0;
}

