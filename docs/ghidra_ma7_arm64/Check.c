/* Check @ 0012b4b0 68B */


/* CM7_EmuSmw7App::Check(unsigned int, _MASMW_CHECK_PARAM*) */

undefined8 __thiscall
CM7_EmuSmw7App::Check(CM7_EmuSmw7App *this,uint param_1,_MASMW_CHECK_PARAM *param_2)

{
  undefined8 uVar1;
  
  if ((*(int *)(this + 0x4b8) == 3) && (*(code **)(this + 0x418) != (code *)0x0)) {
    uVar1 = (**(code **)(this + 0x418))(param_1,param_2);
    return uVar1;
  }
  return 0xffffffff;
}

