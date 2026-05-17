/* Check @ 0002ff50 30B */


/* CM7_EmuSmw7App::Check(unsigned int, _MASMW_CHECK_PARAM*) */

undefined4 CM7_EmuSmw7App::Check(uint param_1,_MASMW_CHECK_PARAM *param_2)

{
  undefined4 uVar1;
  
  if ((*(int *)(param_1 + 0x230) == 3) && (*(code **)(param_1 + 0x1e0) != (code *)0x0)) {
    uVar1 = (**(code **)(param_1 + 0x1e0))(param_2);
    return uVar1;
  }
  return 0xffffffff;
}

