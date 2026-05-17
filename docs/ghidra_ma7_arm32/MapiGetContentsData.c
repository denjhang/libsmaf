/* MapiGetContentsData @ 00031260 28B */


/* CM7_EmuSmw7App::MapiGetContentsData(int, MAPI_CONTENTSINFO*) */

undefined4 CM7_EmuSmw7App::MapiGetContentsData(int param_1,MAPI_CONTENTSINFO *param_2)

{
  undefined4 uVar1;
  
  if ((*(int *)(param_1 + 0x230) == 3) && (*(code **)(param_1 + 0x44) != (code *)0x0)) {
    uVar1 = (**(code **)(param_1 + 0x44))(param_2);
    return uVar1;
  }
  return 0xffffffff;
}

