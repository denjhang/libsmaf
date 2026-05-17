/* Format @ 0012a5cc 268B */


/* CString::Format(char*, ...) */

void CString::Format(char *param_1,...)

{
  undefined *puVar1;
  int iVar2;
  char *in_x1;
  undefined8 in_x2;
  undefined8 in_x3;
  undefined8 in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined8 in_d0;
  undefined8 in_d1;
  undefined8 in_d2;
  undefined8 in_d3;
  undefined8 in_d4;
  undefined8 in_d5;
  undefined8 in_d6;
  undefined8 in_d7;
  undefined1 *local_500;
  undefined1 *puStack_4f8;
  undefined8 *local_4f0;
  undefined8 uStack_4e8;
  char acStack_4b8 [1024];
  long local_b8;
  undefined8 local_b0;
  undefined8 local_a0;
  undefined8 local_90;
  undefined8 local_80;
  undefined8 local_70;
  undefined8 local_60;
  undefined8 local_50;
  undefined8 local_40;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  undefined8 local_8;
  
  puVar1 = PTR___stack_chk_guard_00567868;
  local_4f0 = &local_30;
  uStack_4e8 = 0xffffff80ffffffd0;
  local_b8 = *(long *)PTR___stack_chk_guard_00567868;
  local_500 = (undefined1 *)register0x00000008;
  puStack_4f8 = (undefined1 *)register0x00000008;
  local_b0 = in_d0;
  local_a0 = in_d1;
  local_90 = in_d2;
  local_80 = in_d3;
  local_70 = in_d4;
  local_60 = in_d5;
  local_50 = in_d6;
  local_40 = in_d7;
  local_30 = in_x2;
  local_28 = in_x3;
  local_20 = in_x4;
  local_18 = in_x5;
  local_10 = in_x6;
  local_8 = in_x7;
  vsprintf(acStack_4b8,in_x1,&local_500);
  iVar2 = SafeStrlen((CString *)param_1,acStack_4b8);
  AssignCopy((CString *)param_1,iVar2,acStack_4b8);
  if (local_b8 == *(long *)puVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

