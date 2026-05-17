/* EmuSetInfo @ 000301c0 26B */


/* CM7_EmuSmw7App::EmuSetInfo(unsigned int, unsigned int, void*) */

undefined4 CM7_EmuSmw7App::EmuSetInfo(uint param_1,uint param_2,void *param_3)

{
  if ((*(int *)(param_1 + 0x230) == 3) && (param_2 == 1)) {
    *(void **)(param_1 + 0x268) = param_3;
    return 0;
  }
  return 0xffffffff;
}

