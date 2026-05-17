/* GetKaraokeData @ 0012b898 72B */


/* CM7_EmuSmw7App::GetKaraokeData(unsigned int, unsigned int, _MASMW_KARAOKE_PARAM*) */

undefined8 __thiscall
CM7_EmuSmw7App::GetKaraokeData
          (CM7_EmuSmw7App *this,uint param_1,uint param_2,_MASMW_KARAOKE_PARAM *param_3)

{
  undefined8 uVar1;
  
  if ((*(int *)(this + 0x4b8) == 3) && (*(code **)(this + 0x460) != (code *)0x0)) {
    uVar1 = (**(code **)(this + 0x460))(param_1,param_2,param_3);
    return uVar1;
  }
  return 0xffffffff;
}

