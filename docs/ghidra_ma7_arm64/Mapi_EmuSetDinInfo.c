/* Mapi_EmuSetDinInfo @ 0012c350 20B */


void Mapi_EmuSetDinInfo(ulong param_1)

{
  CM7_EmuSmw7App::EmuSetDinInfo((uint)PTR_theApp_005675c8,(MAPI_DININFO *)(param_1 & 0xffffffff));
  return;
}

