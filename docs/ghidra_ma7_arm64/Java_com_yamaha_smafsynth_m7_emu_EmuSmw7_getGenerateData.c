/* Java_com_yamaha_smafsynth_m7_emu_EmuSmw7_getGenerateData @ 00129874 192B */


void Java_com_yamaha_smafsynth_m7_emu_EmuSmw7_getGenerateData
               (long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  uchar *puVar4;
  undefined1 local_9;
  long local_8;
  
  puVar1 = PTR___stack_chk_guard_00567868;
  local_8 = *(long *)PTR___stack_chk_guard_00567868;
  local_9 = 0;
  iVar2 = (**(code **)(*param_1 + 0x558))(param_1,param_3);
  puVar4 = (uchar *)(**(code **)(*param_1 + 0x5c0))(param_1,param_3,&local_9);
  uVar3 = CSmwCtrl::GetGenerate((CSmwCtrl *)PTR_g_SmwCtrl_00567f50,puVar4,iVar2);
  (**(code **)(*param_1 + 0x600))(param_1,param_3,puVar4,0);
  if (local_8 == *(long *)puVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}

