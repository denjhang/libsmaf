/* EmuGetDinInfo @ 0003077c 26B */


/* CM7_EmuSmw7App::EmuGetDinInfo(unsigned int) */

undefined4 CM7_EmuSmw7App::EmuGetDinInfo(uint param_1)

{
  undefined4 uVar1;
  int in_r1;
  
  if (((*(int *)(param_1 + 0x230) == 3) && (in_r1 == 0)) &&
     (*(code **)(param_1 + 0x21c) != (code *)0x0)) {
    uVar1 = (**(code **)(param_1 + 0x21c))(5);
    return uVar1;
  }
  return 0xffffffff;
}

