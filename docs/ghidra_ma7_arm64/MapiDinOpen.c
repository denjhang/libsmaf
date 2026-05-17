/* MapiDinOpen @ 0012e50c 72B */


/* CM7_EmuSmw7App::MapiDinOpen(int, unsigned int, int (*)(int, MAPI_MELODY_CBEVT, unsigned int)) */

undefined8 __thiscall
CM7_EmuSmw7App::MapiDinOpen
          (CM7_EmuSmw7App *this,int param_1,uint param_2,
          _func_int_int_MAPI_MELODY_CBEVT_uint *param_3)

{
  undefined8 uVar1;
  
  if ((*(int *)(this + 0x4b8) == 3) && (*(code **)(this + 0x2d8) != (code *)0x0)) {
    uVar1 = (**(code **)(this + 0x2d8))(param_1,param_2,param_3);
    return uVar1;
  }
  return 0xffffffff;
}

