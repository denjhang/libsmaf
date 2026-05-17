/* Mapi_EmuSetInfo @ 000301dc 24B */


void Mapi_EmuSetInfo(uint param_1,void *param_2)

{
  CM7_EmuSmw7App::EmuSetInfo(*(uint *)(DAT_000301f4 + 0x301ee),param_1,param_2);
  return;
}

