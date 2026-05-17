/* CBInfo_SetCallback @ 0003369c 350B */


/* CBInfo_SetCallback(void (*)(unsigned int, unsigned int), unsigned int, void (*)(unsigned int,
   unsigned int)) */

void CBInfo_SetCallback(_func_void_uint_uint *param_1,uint param_2,_func_void_uint_uint *param_3)

{
  int iVar1;
  uint *puVar2;
  
  iVar1 = DAT_000337fc;
  if ((param_1 == (_func_void_uint_uint *)0x0) || (param_3 == (_func_void_uint_uint *)0x0)) {
    return;
  }
  EnterCriticalSection((critical_section *)(DAT_000337fc + 0x336b2));
  if (*(_func_void_uint_uint **)(iVar1 + 0x33832) == param_1) {
    puVar2 = (uint *)(iVar1 + 0x3382a);
  }
  else if (*(_func_void_uint_uint **)(iVar1 + 0x3383e) == param_1) {
    puVar2 = (uint *)(iVar1 + 0x33836);
  }
  else if (*(_func_void_uint_uint **)(iVar1 + 0x3384a) == param_1) {
    puVar2 = (uint *)(iVar1 + 0x33842);
  }
  else if (*(_func_void_uint_uint **)(iVar1 + 0x33856) == param_1) {
    puVar2 = (uint *)(iVar1 + 0x3384e);
  }
  else if (*(_func_void_uint_uint **)(iVar1 + 0x33862) == param_1) {
    puVar2 = (uint *)(iVar1 + 0x3385a);
  }
  else if (*(_func_void_uint_uint **)(iVar1 + 0x3386e) == param_1) {
    puVar2 = (uint *)(iVar1 + 0x33866);
  }
  else if (*(_func_void_uint_uint **)(iVar1 + 0x3387a) == param_1) {
    puVar2 = (uint *)(iVar1 + 0x33872);
  }
  else if (*(_func_void_uint_uint **)(iVar1 + 0x33886) == param_1) {
    puVar2 = (uint *)(DAT_0003380c + 0x33958);
  }
  else if (*(_func_void_uint_uint **)(DAT_00033800 + 0x338de) == param_1) {
    puVar2 = (uint *)(DAT_00033800 + 0x338d6);
  }
  else if (*(_func_void_uint_uint **)(DAT_00033800 + 0x338ea) == param_1) {
    puVar2 = (uint *)(DAT_00033800 + 0x338e2);
  }
  else if (*(_func_void_uint_uint **)(DAT_00033800 + 0x338f6) == param_1) {
    puVar2 = (uint *)(DAT_00033800 + 0x338ee);
  }
  else if (*(_func_void_uint_uint **)(DAT_00033800 + 0x33902) == param_1) {
    puVar2 = (uint *)(DAT_00033800 + 0x338fa);
  }
  else if (*(_func_void_uint_uint **)(DAT_00033800 + 0x3390e) == param_1) {
    puVar2 = (uint *)(DAT_00033800 + 0x33906);
  }
  else if (*(_func_void_uint_uint **)(DAT_00033800 + 0x3391a) == param_1) {
    puVar2 = (uint *)(DAT_00033800 + 0x33912);
  }
  else if (*(_func_void_uint_uint **)(DAT_00033800 + 0x33926) == param_1) {
    puVar2 = (uint *)(DAT_00033800 + 0x3391e);
  }
  else if (*(_func_void_uint_uint **)(DAT_00033800 + 0x33932) == param_1) {
    puVar2 = (uint *)(DAT_00033800 + 0x3392a);
  }
  else if (*(_func_void_uint_uint **)(DAT_00033800 + 0x3393e) == param_1) {
    puVar2 = (uint *)(DAT_00033800 + 0x33936);
  }
  else if (*(_func_void_uint_uint **)(DAT_00033800 + 0x3394a) == param_1) {
    puVar2 = (uint *)(DAT_00033810 + 0x33a3a);
  }
  else if (*(_func_void_uint_uint **)(DAT_00033804 + 0x339ac) == param_1) {
    puVar2 = (uint *)(DAT_00033804 + 0x339a4);
  }
  else {
    if (*(_func_void_uint_uint **)(DAT_00033804 + 0x339b8) != param_1) goto LAB_00033768;
    puVar2 = (uint *)(DAT_00033804 + 0x339b0);
  }
  *puVar2 = param_2;
  puVar2[1] = (uint)param_3;
LAB_00033768:
  LeaveCriticalSection((critical_section *)(DAT_00033808 + 0x33772));
  return;
}

