/* MapiStmOpen @ 00031dd8 32B */


/* CM7_EmuSmw7App::MapiStmOpen(int, unsigned int, int (*)(int, MAPI_MELODY_CBEVT, unsigned int)) */

undefined4 __thiscall
CM7_EmuSmw7App::MapiStmOpen
          (CM7_EmuSmw7App *this,int param_1,uint param_2,
          _func_int_int_MAPI_MELODY_CBEVT_uint *param_3)

{
  undefined4 uVar1;
  
  if ((*(int *)(this + 0x230) == 3) && (*(code **)(this + 0x124) != (code *)0x0)) {
    uVar1 = (**(code **)(this + 0x124))(param_1,param_2,param_3);
    return uVar1;
  }
  return 0xffffffff;
}

