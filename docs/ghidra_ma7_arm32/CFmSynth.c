/* CFmSynth @ 00052930 514B */


/* ARM::CFmSynth::CFmSynth(unsigned int, ARM::CCh*) */

CFmSynth * __thiscall ARM::CFmSynth::CFmSynth(CFmSynth *this,uint param_1,CCh *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  CLpf *this_00;
  CVolIP *this_01;
  CPanIP *this_02;
  int iVar6;
  int iVar7;
  
  *(CCh **)(this + 0x1800) = param_2;
  *(undefined4 *)(this + 0x5e08) = 0x8000;
  *(undefined4 *)(this + 0x5e04) = 0;
  iVar5 = DAT_00052b4c;
  iVar4 = DAT_00052b48;
  iVar3 = DAT_00052b44;
  iVar2 = DAT_00052b40;
  iVar1 = DAT_00052b3c;
  iVar7 = DAT_00052b38;
  iVar6 = DAT_00052b34;
  if (param_1 == 0x5622) {
    *(undefined4 *)(this + 0x5e14) = 0x5622;
    *(int *)(this + 0x5e18) = iVar5 + 0x52b64;
    *(int *)(this + 0x5e1c) = iVar5 + 0x52f84;
    *(int *)(this + 0x5e20) = iVar5 + 0x53084;
    goto LAB_000529c6;
  }
  if (param_1 < 0x5623) {
    if (param_1 == 0x2b11) {
      *(undefined4 *)(this + 0x5e14) = 0x2b11;
      *(int *)(this + 0x5e18) = iVar3 + 0x52b28;
      *(int *)(this + 0x5e1c) = iVar3 + 0x52c28;
      *(int *)(this + 0x5e20) = iVar3 + 0x52d28;
      goto LAB_000529c6;
    }
    if (param_1 == 16000) {
      *(undefined4 *)(this + 0x5e14) = 16000;
      *(int *)(this + 0x5e18) = iVar7 + 0x52c0a;
      *(int *)(this + 0x5e1c) = iVar7 + 0x52d0a;
      *(int *)(this + 0x5e20) = iVar7 + 0x52e0a;
      goto LAB_000529c6;
    }
  }
  else {
    if (param_1 == 0xac44) {
      *(undefined4 *)(this + 0x5e14) = 0xac44;
      *(int *)(this + 0x5e18) = iVar1 + 0x5322c;
      *(int *)(this + 0x5e1c) = (int)&DAT_0005332c + iVar1;
      *(int *)(this + 0x5e20) = iVar1 + 0x5342c;
      goto LAB_000529c6;
    }
    if (param_1 == 48000) {
      *(undefined4 *)(this + 0x5e14) = 48000;
      *(int *)(this + 0x5e18) = iVar4 + 0x53496;
      *(int *)(this + 0x5e1c) = iVar4 + 0x53596;
      *(int *)(this + 0x5e20) = iVar4 + 0x53696;
      goto LAB_000529c6;
    }
    if (param_1 == 24000) {
      *(undefined4 *)(this + 0x5e14) = 24000;
      *(int *)(this + 0x5e18) = iVar2 + 0x5303a;
      *(int *)(this + 0x5e1c) = iVar2 + 0x5313a;
      *(int *)(this + 0x5e20) = iVar2 + 0x5323a;
      goto LAB_000529c6;
    }
  }
  *(undefined4 *)(this + 0x5e14) = 32000;
  *(int *)(this + 0x5e18) = iVar6 + 0x5352e;
  *(int *)(this + 0x5e1c) = iVar6 + 0x5362e;
  *(int *)(this + 0x5e20) = iVar6 + 0x5372e;
LAB_000529c6:
  iVar6 = 0;
  do {
    iVar7 = iVar6 + 0x230;
    this[iVar6 + 0x19b0] = (CFmSynth)0x0;
    this[iVar6 + 0x19d0] = (CFmSynth)0x0;
    this[iVar6 + 0x19d1] = (CFmSynth)0x0;
    *(undefined4 *)(this + iVar6 + 0x19f8) = 0;
    *(undefined4 *)(this + iVar6 + 0x19c4) = 0x10000;
    *(undefined4 *)(this + iVar6 + 0x19c8) = 0x10000;
    *(undefined4 *)(this + iVar6 + 0x19cc) = 0x10000;
    this[iVar6 + 0x19b8] = (CFmSynth)0x0;
    *(undefined4 *)(this + iVar6 + 0x1a08) = 0;
    *(undefined4 *)(this + iVar6 + 0x19e4) = 0;
    *(undefined4 *)(this + iVar6 + 0x19e0) = 0;
    this[iVar6 + 0x1a0e] = (CFmSynth)0x0;
    this[iVar6 + 0x1a0c] = (CFmSynth)0x0;
    this[iVar6 + 0x1a0d] = (CFmSynth)0x0;
    *(undefined4 *)(this + iVar6 + 0x1864) = 0;
    *(undefined4 *)(this + iVar6 + 0x18c0) = 0;
    *(undefined4 *)(this + iVar6 + 0x191c) = 0;
    *(undefined4 *)(this + iVar6 + 0x1978) = 0;
    *(undefined4 *)(this + iVar6 + 0x1838) = 0;
    *(undefined4 *)(this + iVar6 + 0x1894) = 0;
    *(undefined4 *)(this + iVar6 + 0x18f0) = 0;
    *(undefined4 *)(this + iVar6 + 0x194c) = 0;
    *(undefined4 *)(this + iVar6 + 0x1808) = 0;
    *(undefined4 *)(this + iVar6 + 0x180c) = 0;
    *(undefined4 *)(this + iVar6 + 0x19bc) = 0;
    *(undefined4 *)(this + iVar6 + 0x19c0) = 0;
    *(undefined4 *)(this + iVar6 + 0x19d4) = 0;
    this_00 = operator_new(0xa4);
    CLpf::CLpf(this_00,param_1);
    *(CLpf **)(this + iVar6 + 0x1a10) = this_00;
    this_01 = operator_new(0x1c);
    CVolIP::CVolIP(this_01,param_1);
    *(CVolIP **)(this + iVar6 + 0x1a18) = this_01;
    this_02 = operator_new(0x28);
    CPanIP::CPanIP(this_02,param_1);
    *(CPanIP **)(this + iVar6 + 0x1a1c) = this_02;
    this[iVar6 + 0x1804] = (CFmSynth)0x0;
    iVar6 = iVar7;
  } while (iVar7 != 0x4600);
  return this;
}

