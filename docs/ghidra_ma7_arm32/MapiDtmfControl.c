/* MapiDtmfControl @ 000320e0 32B */


/* CM7_EmuSmw7App::MapiDtmfControl(int, unsigned int, void*) */

undefined4 __thiscall
CM7_EmuSmw7App::MapiDtmfControl(CM7_EmuSmw7App *this,int param_1,uint param_2,void *param_3)

{
  undefined4 uVar1;
  
  if ((*(int *)(this + 0x230) == 3) && (*(code **)(this + 0x160) != (code *)0x0)) {
    uVar1 = (**(code **)(this + 0x160))(param_1,param_2,param_3);
    return uVar1;
  }
  return 0xffffffff;
}

