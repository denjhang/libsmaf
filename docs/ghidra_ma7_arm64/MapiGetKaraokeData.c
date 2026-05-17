/* MapiGetKaraokeData @ 0012cff8 72B */


/* CM7_EmuSmw7App::MapiGetKaraokeData(int, unsigned int, MAPI_KARAOKEDATA*) */

undefined8 __thiscall
CM7_EmuSmw7App::MapiGetKaraokeData
          (CM7_EmuSmw7App *this,int param_1,uint param_2,MAPI_KARAOKEDATA *param_3)

{
  undefined8 uVar1;
  
  if ((*(int *)(this + 0x4b8) == 3) && (*(code **)(this + 0xf0) != (code *)0x0)) {
    uVar1 = (**(code **)(this + 0xf0))(param_1,param_2,param_3);
    return uVar1;
  }
  return 0xffffffff;
}

