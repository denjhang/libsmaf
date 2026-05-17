/* CalcEg_KEYON @ 0015a368 112B */


/* ARM::CLpf::CalcEg_KEYON(ARM::CLpf*) */

void ARM::CLpf::CalcEg_KEYON(CLpf *param_1)

{
  int iVar1;
  short sVar2;
  int iVar3;
  
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_1 + 0x74);
  if (param_1[0x50] == (CLpf)0x1) {
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  iVar1 = *(int *)(param_1 + 0xac);
  iVar3 = 0;
  if (iVar1 != 0) {
    sVar2 = CWnoise::Generate();
    iVar3 = (int)sVar2 << (ulong)(iVar1 + 7U & 0x1f);
  }
  *(int *)(param_1 + 0xb0) = iVar3;
  *(undefined4 *)(param_1 + 0xb4) = 0;
  *(undefined **)(param_1 + 8) = PTR_CalcEg_ATTACK_00567f78;
  return;
}

