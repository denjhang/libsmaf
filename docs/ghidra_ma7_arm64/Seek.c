/* Seek @ 0012b72c 72B */


/* CM7_EmuSmw7App::Seek(unsigned int, unsigned int, _MASMW_SEEK_PARAM*) */

undefined8 __thiscall
CM7_EmuSmw7App::Seek(CM7_EmuSmw7App *this,uint param_1,uint param_2,_MASMW_SEEK_PARAM *param_3)

{
  undefined8 uVar1;
  
  if ((*(int *)(this + 0x4b8) == 3) && (*(code **)(this + 0x440) != (code *)0x0)) {
    uVar1 = (**(code **)(this + 0x440))(param_1,param_2,param_3);
    return uVar1;
  }
  return 0xffffffff;
}

