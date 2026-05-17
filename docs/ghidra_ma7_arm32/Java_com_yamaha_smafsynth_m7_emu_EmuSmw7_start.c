/* Java_com_yamaha_smafsynth_m7_emu_EmuSmw7_start @ 0002ee7c 136B */


longlong Java_com_yamaha_smafsynth_m7_emu_EmuSmw7_start
                   (int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                   int param_5,undefined4 param_6,int param_7,undefined4 param_8,int param_9,
                   undefined4 param_10,int param_11,undefined4 param_12,int param_13)

{
  int iVar1;
  uchar *puVar2;
  undefined1 local_30 [12];
  
  local_30[0] = 0;
  iVar1 = (**(code **)(*param_1 + 0x2ac))(param_1,param_3);
  puVar2 = (uchar *)(**(code **)(*param_1 + 0x2e0))(param_1,param_3,local_30);
  iVar1 = CSmwCtrl::Start(*(CSmwCtrl **)(DAT_0002ef04 + 0x2eedc),puVar2,iVar1,param_5,param_7,
                          param_9,param_11,param_13);
  (**(code **)(*param_1 + 0x300))(param_1,param_3,puVar2,0);
  return (longlong)iVar1;
}

