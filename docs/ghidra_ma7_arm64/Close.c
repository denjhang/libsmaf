/* Close @ 0012b62c 124B */


/* CM7_EmuSmw7App::Close(unsigned int, void*) */

int __thiscall CM7_EmuSmw7App::Close(CM7_EmuSmw7App *this,uint param_1,void *param_2)

{
  int iVar1;
  
  if ((*(int *)(this + 0x4b8) == 3) && (*(code **)(this + 0x430) != (code *)0x0)) {
    iVar1 = (**(code **)(this + 0x430))(param_1,param_2);
    if (-1 < iVar1) {
      CBInfo_FreeCallback(param_1);
      return iVar1;
    }
    return iVar1;
  }
  return -1;
}

