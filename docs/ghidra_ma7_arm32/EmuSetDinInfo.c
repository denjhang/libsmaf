/* EmuSetDinInfo @ 00030748 30B */


/* CM7_EmuSmw7App::EmuSetDinInfo(unsigned int, MAPI_DININFO*) */

undefined4 CM7_EmuSmw7App::EmuSetDinInfo(uint param_1,MAPI_DININFO *param_2)

{
  undefined4 uVar1;
  
  if (((*(int *)(param_1 + 0x230) == 3) && (param_2 == (MAPI_DININFO *)0x0)) &&
     (*(code **)(param_1 + 0x220) != (code *)0x0)) {
    uVar1 = (**(code **)(param_1 + 0x220))(0);
    return uVar1;
  }
  return 0xffffffff;
}

