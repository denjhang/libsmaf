/* Mapi_EmuSetInfo @ 0012b924 28B */


void Mapi_EmuSetInfo(uint param_1,uint param_2)

{
  CM7_EmuSmw7App::EmuSetInfo((uint)PTR_theApp_005675c8,param_1,(void *)(ulong)param_2);
  return;
}

