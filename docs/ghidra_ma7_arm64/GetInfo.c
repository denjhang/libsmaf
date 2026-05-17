/* GetInfo @ 0012b508 72B */


/* CM7_EmuSmw7App::GetInfo(unsigned int, unsigned int, _MASMW_GETINFO_PARAM*) */

undefined8 __thiscall
CM7_EmuSmw7App::GetInfo
          (CM7_EmuSmw7App *this,uint param_1,uint param_2,_MASMW_GETINFO_PARAM *param_3)

{
  undefined8 uVar1;
  
  if ((*(int *)(this + 0x4b8) == 3) && (*(code **)(this + 0x420) != (code *)0x0)) {
    uVar1 = (**(code **)(this + 0x420))(param_1,param_2,param_3);
    return uVar1;
  }
  return 0xffffffff;
}

