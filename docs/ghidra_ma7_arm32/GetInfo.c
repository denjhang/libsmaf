/* GetInfo @ 0002ff84 32B */


/* CM7_EmuSmw7App::GetInfo(unsigned int, unsigned int, _MASMW_GETINFO_PARAM*) */

undefined4 __thiscall
CM7_EmuSmw7App::GetInfo
          (CM7_EmuSmw7App *this,uint param_1,uint param_2,_MASMW_GETINFO_PARAM *param_3)

{
  undefined4 uVar1;
  
  if ((*(int *)(this + 0x230) == 3) && (*(code **)(this + 0x1e4) != (code *)0x0)) {
    uVar1 = (**(code **)(this + 0x1e4))(param_1,param_2,param_3);
    return uVar1;
  }
  return 0xffffffff;
}

