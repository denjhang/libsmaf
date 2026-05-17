/* VIRTUALMEMORY_Initialize @ 0013aee4 72B */


/* ARM::VIRTUALMEMORY_Initialize() */

undefined8 ARM::VIRTUALMEMORY_Initialize(void)

{
  memcpy(&DAT_005833c0,&DAT_0027bf50,0x10000);
  memset(&DAT_005933c0,0,0x4000);
  return 0;
}

