/* CalcEg_KEYON @ 00052d20 60B */


/* ARM::CLpf::CalcEg_KEYON(ARM::CLpf*) */

void ARM::CLpf::CalcEg_KEYON(CLpf *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x90);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_1 + 0x58);
  if (param_1[0x34] == (CLpf)0x1) {
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  iVar1 = 0;
  if (iVar3 != 0) {
    iVar1 = CWnoise::Generate();
    iVar1 = iVar1 << (iVar3 + 7U & 0xff);
  }
  iVar3 = DAT_00052d5c;
  *(int *)(param_1 + 0x94) = iVar1;
  uVar2 = *(undefined4 *)(iVar3 + 0x52d54);
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(undefined4 *)(param_1 + 8) = uVar2;
  return;
}

