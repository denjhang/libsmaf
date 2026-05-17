/* Java_com_yamaha_smafsynth_m7_emu_EmuSmw7_start @ 00129744 232B */


void Java_com_yamaha_smafsynth_m7_emu_EmuSmw7_start
               (long *param_1,undefined8 param_2,undefined8 param_3,int param_4,int param_5,
               int param_6,int param_7,int param_8)

{
  undefined *puVar1;
  int iVar2;
  uchar *puVar3;
  undefined1 local_9;
  long local_8;
  
  puVar1 = PTR___stack_chk_guard_00567868;
  local_8 = *(long *)PTR___stack_chk_guard_00567868;
  local_9 = 0;
  iVar2 = (**(code **)(*param_1 + 0x558))(param_1,param_3);
  puVar3 = (uchar *)(**(code **)(*param_1 + 0x5c0))(param_1,param_3,&local_9);
  iVar2 = CSmwCtrl::Start((CSmwCtrl *)PTR_g_SmwCtrl_00567f50,puVar3,iVar2,param_4,param_5,param_6,
                          param_7,param_8);
  (**(code **)(*param_1 + 0x600))(param_1,param_3,puVar3,0);
  if (local_8 == *(long *)puVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail((long)iVar2);
}

