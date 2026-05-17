/* Open @ 0012b56c 172B */


/* CM7_EmuSmw7App::Open(unsigned int, _MASMW_OPEN_PARAM*) */

int __thiscall CM7_EmuSmw7App::Open(CM7_EmuSmw7App *this,uint param_1,_MASMW_OPEN_PARAM *param_2)

{
  int iVar1;
  _func_void_uint_uint *p_Var2;
  code *pcVar3;
  _func_void_uint_uint *p_Var4;
  
  if (*(int *)(this + 0x4b8) == 3) {
    p_Var2 = (_func_void_uint_uint *)CBInfo_GetHookFunc();
    pcVar3 = *(code **)(this + 0x428);
    p_Var4 = *(_func_void_uint_uint **)(param_2 + 0x18);
    *(_func_void_uint_uint **)(param_2 + 0x18) = p_Var2;
    if (pcVar3 != (code *)0x0) {
      iVar1 = (*pcVar3)(param_1,param_2);
      if (-1 < iVar1) {
        CBInfo_SetCallback(p_Var2,param_1,p_Var4);
        return iVar1;
      }
      return iVar1;
    }
  }
  return -1;
}

