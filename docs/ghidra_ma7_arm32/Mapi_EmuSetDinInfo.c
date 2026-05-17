/* Mapi_EmuSetDinInfo @ 00030768 16B */


void Mapi_EmuSetDinInfo(MAPI_DININFO *param_1)

{
  CM7_EmuSmw7App::EmuSetDinInfo(*(uint *)(DAT_00030778 + 0x30774),param_1);
  return;
}

