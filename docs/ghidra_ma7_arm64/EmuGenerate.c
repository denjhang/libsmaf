/* EmuGenerate @ 0012b940 456B */


/* CM7_EmuSmw7App::EmuGenerate(MAPI_BUFFER7*, unsigned int) */

void __thiscall CM7_EmuSmw7App::EmuGenerate(CM7_EmuSmw7App *this,MAPI_BUFFER7 *param_1,uint param_2)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long local_50;
  long local_48;
  long local_40;
  long lStack_38;
  long local_30;
  long lStack_28;
  long local_20;
  long lStack_18;
  long local_8;
  
  local_8 = *(long *)PTR___stack_chk_guard_00567868;
  if ((((((param_1 == (MAPI_BUFFER7 *)0x0) || (*(int *)(this + 0x4b8) != 3)) ||
        (lVar5 = *(long *)param_1, lVar5 == 0)) || (lVar6 = *(long *)(param_1 + 8), lVar6 == 0)) ||
      ((iVar4 = *(int *)(this + 0x518), iVar4 != 0 &&
       ((((*(long *)(param_1 + 0x10) == 0 || (*(long *)(param_1 + 0x18) == 0)) ||
         ((*(long *)(param_1 + 0x20) == 0 ||
          ((*(long *)(param_1 + 0x28) == 0 || (*(long *)(param_1 + 0x30) == 0)))))) ||
        (*(long *)(param_1 + 0x38) == 0)))))) || (param_2 == 0)) {
    uVar2 = 0xffffffff;
  }
  else {
    if (((byte)this[0xc] & 0x7f) == 1) {
      if (*(code **)(this + 0x488) != (code *)0x0) {
        (**(code **)(this + 0x488))(param_1,param_2,0);
        uVar2 = 0;
        goto LAB_0012bad4;
      }
    }
    else if (this[0xc] == (CM7_EmuSmw7App)0x0) {
      local_40 = *(long *)(param_1 + 0x10);
      lStack_38 = *(long *)(param_1 + 0x18);
      local_30 = *(long *)(param_1 + 0x20);
      lStack_28 = *(long *)(param_1 + 0x28);
      local_20 = *(long *)(param_1 + 0x30);
      lStack_18 = *(long *)(param_1 + 0x38);
      uVar3 = (ulong)*(uint *)(this + 0x4d0);
      while (local_50 = lVar5, local_48 = lVar6, (uint)uVar3 < param_2) {
        while( true ) {
          if (*(code **)(this + 0x488) != (code *)0x0) {
            (**(code **)(this + 0x488))(&local_50);
            uVar3 = (ulong)*(uint *)(this + 0x4d0);
            iVar4 = *(int *)(this + 0x518);
          }
          lVar1 = uVar3 * 4;
          param_2 = param_2 - (uint)uVar3;
          lVar5 = local_50 + lVar1;
          lVar6 = local_48 + lVar1;
          if (iVar4 == 0) break;
          local_30 = lVar1 + local_30;
          lStack_28 = lVar1 + lStack_28;
          local_20 = lVar1 + local_20;
          lStack_18 = lVar1 + lStack_18;
          local_40 = local_40 + lVar1;
          lStack_38 = lStack_38 + lVar1;
          local_50 = lVar5;
          local_48 = lVar6;
          if (param_2 <= (uint)uVar3) goto LAB_0012ba98;
        }
      }
LAB_0012ba98:
      if ((param_2 != 0) && (*(code **)(this + 0x488) != (code *)0x0)) {
        (**(code **)(this + 0x488))(&local_50,param_2);
      }
    }
    uVar2 = 0;
  }
LAB_0012bad4:
  if (local_8 == *(long *)PTR___stack_chk_guard_00567868) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}

