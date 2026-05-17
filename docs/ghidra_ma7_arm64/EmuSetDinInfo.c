/* EmuSetDinInfo @ 0012c308 72B */


/* CM7_EmuSmw7App::EmuSetDinInfo(unsigned int, MAPI_DININFO*) */

undefined8 CM7_EmuSmw7App::EmuSetDinInfo(uint param_1,MAPI_DININFO *param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  
  if ((int)param_2 == 0) {
    if ((*(int *)((ulong)param_1 + 0x4b8) == 3) &&
       (pcVar2 = *(code **)((ulong)param_1 + 0x498), pcVar2 != (code *)0x0)) {
      uVar1 = (*pcVar2)(0);
      return uVar1;
    }
  }
  return 0xffffffff;
}

