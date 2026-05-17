/* EmuSetInfo @ 0012b8fc 40B */


/* CM7_EmuSmw7App::EmuSetInfo(unsigned int, unsigned int, void*) */

undefined8 CM7_EmuSmw7App::EmuSetInfo(uint param_1,uint param_2,void *param_3)

{
  if ((*(int *)((ulong)param_1 + 0x4b8) == 3) && (param_2 == 1)) {
    *(int *)((ulong)param_1 + 0x518) = (int)param_3;
    return 0;
  }
  return 0xffffffff;
}

