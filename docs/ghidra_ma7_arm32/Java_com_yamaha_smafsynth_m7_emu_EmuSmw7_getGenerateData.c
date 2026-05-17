/* Java_com_yamaha_smafsynth_m7_emu_EmuSmw7_getGenerateData @ 0002ef30 88B */


undefined4
Java_com_yamaha_smafsynth_m7_emu_EmuSmw7_getGenerateData
          (int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  uchar *puVar2;
  undefined4 uVar3;
  undefined1 local_20 [8];
  
  local_20[0] = 0;
  iVar1 = (**(code **)(*param_1 + 0x2ac))(param_1,param_3);
  puVar2 = (uchar *)(**(code **)(*param_1 + 0x2e0))(param_1,param_3,local_20);
  uVar3 = CSmwCtrl::GetGenerate(*(CSmwCtrl **)(DAT_0002ef88 + 0x2ef68),puVar2,iVar1);
  (**(code **)(*param_1 + 0x300))(param_1,param_3,puVar2,0);
  return uVar3;
}

