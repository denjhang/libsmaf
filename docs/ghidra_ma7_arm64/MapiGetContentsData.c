/* MapiGetContentsData @ 0012cf48 68B */


/* CM7_EmuSmw7App::MapiGetContentsData(int, MAPI_CONTENTSINFO*) */

undefined8 __thiscall
CM7_EmuSmw7App::MapiGetContentsData(CM7_EmuSmw7App *this,int param_1,MAPI_CONTENTSINFO *param_2)

{
  undefined8 uVar1;
  
  if ((*(int *)(this + 0x4b8) == 3) && (*(code **)(this + 0xe0) != (code *)0x0)) {
    uVar1 = (**(code **)(this + 0xe0))(param_1,param_2);
    return uVar1;
  }
  return 0xffffffff;
}

