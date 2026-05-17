/* CWtSynth @ 00040884 592B */


/* ARM::CWtSynth::CWtSynth(unsigned int, ARM::CCh*) */

CWtSynth * __thiscall ARM::CWtSynth::CWtSynth(CWtSynth *this,uint param_1,CCh *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  CLpf *this_00;
  CVolIP *this_01;
  CPanIP *this_02;
  CWnoise *this_03;
  CWtSynth *pCVar8;
  int iVar9;
  
  *(CCh **)this = param_2;
  *(undefined4 *)(this + 0x102888) = 0x7fff;
  *(undefined4 *)(this + 0x102884) = 0;
  iVar7 = DAT_00040af0;
  iVar6 = DAT_00040aec;
  iVar5 = DAT_00040ae8;
  iVar4 = DAT_00040ae4;
  iVar3 = DAT_00040ae0;
  iVar2 = DAT_00040adc;
  iVar1 = DAT_00040ad8;
  iVar9 = DAT_00040ad4;
  if (param_1 == 0x5622) {
    *(undefined4 *)(this + 0x10288c) = 0x5622;
    *(int *)(this + 0x102890) = iVar7 + 0x40b00;
    *(int *)(this + 0x102894) = iVar7 + 0x41020;
    *(int *)(this + 0x102898) = iVar7 + 0x41120;
    *(int *)(this + 0x10289c) = iVar7 + 0x41130;
    goto LAB_0004093a;
  }
  if (param_1 < 0x5623) {
    if (param_1 == 0x2b11) {
      *(undefined4 *)(this + 0x10288c) = 0x2b11;
      *(int *)(this + 0x102890) = iVar5 + 0x40aa8;
      *(int *)(this + 0x102894) = (int)&DAT_00040ba8 + iVar5;
      *(int *)(this + 0x102898) = iVar5 + 0x40ca8;
      *(int *)(this + 0x10289c) = iVar5 + 0x40cb8;
      goto LAB_0004093a;
    }
    if (param_1 == 16000) {
      *(undefined4 *)(this + 0x10288c) = 16000;
      *(int *)(this + 0x102890) = (int)&DAT_00040bf8 + iVar2;
      *(int *)(this + 0x102894) = iVar2 + 0x40cf8;
      *(int *)(this + 0x102898) = iVar2 + 0x40df8;
      *(int *)(this + 0x10289c) = iVar2 + 0x40e08;
      goto LAB_0004093a;
    }
  }
  else {
    if (param_1 == 32000) {
      *(undefined4 *)(this + 0x10288c) = 32000;
      *(int *)(this + 0x102890) = iVar3 + 0x41390;
      *(int *)(this + 0x102894) = iVar3 + 0x41490;
      *(int *)(this + 0x102898) = iVar3 + 0x41590;
      *(int *)(this + 0x10289c) = iVar3 + 0x415a0;
      goto LAB_0004093a;
    }
    if (param_1 == 0xac44) {
      *(undefined4 *)(this + 0x10288c) = 0xac44;
      *(int *)(this + 0x102890) = iVar6 + 0x416a4;
      *(int *)(this + 0x102894) = iVar6 + 0x417a4;
      *(int *)(this + 0x102898) = iVar6 + 0x418a4;
      *(int *)(this + 0x10289c) = iVar6 + 0x418b4;
      goto LAB_0004093a;
    }
    if (param_1 == 24000) {
      *(undefined4 *)(this + 0x10288c) = 24000;
      *(int *)(this + 0x102890) = iVar4 + 0x4112c;
      *(code **)(this + 0x102894) = CCh::SetPitchBend3 + iVar4;
      *(int *)(this + 0x102898) = iVar4 + 0x4132c;
      *(int *)(this + 0x10289c) = iVar4 + 0x4133c;
      goto LAB_0004093a;
    }
  }
  *(undefined4 *)(this + 0x10288c) = 48000;
  *(int *)(this + 0x102890) = iVar9 + 0x41788;
  *(byte **)(this + 0x102894) = &BYTE_00041888 + iVar9;
  *(int *)(this + 0x102898) = iVar1 + 0x40896;
  *(int *)(this + 0x10289c) = iVar1 + 0x408a6;
LAB_0004093a:
  iVar9 = 0x20;
  pCVar8 = this;
  do {
    pCVar8[0x8098] = (CWtSynth)0x0;
    pCVar8[4] = (CWtSynth)0x0;
    *(undefined4 *)(pCVar8 + 0x80a8) = 0;
    *(undefined4 *)(pCVar8 + 0x80b8) = 0;
    *(undefined4 *)(pCVar8 + 0x80f0) = 0;
    pCVar8[0x8099] = (CWtSynth)0x0;
    pCVar8[0x809a] = (CWtSynth)0x0;
    pCVar8[0x809b] = (CWtSynth)0x0;
    *(undefined4 *)(pCVar8 + 0x80a4) = 0;
    *(undefined4 *)(pCVar8 + 0x8088) = 0x10000;
    *(undefined4 *)(pCVar8 + 0x808c) = 0x10000;
    *(undefined4 *)(pCVar8 + 0x8090) = 0x10000;
    *(undefined4 *)(pCVar8 + 0x8094) = 0x8000;
    *(undefined4 *)(pCVar8 + 0x80d8) = 0;
    pCVar8[0x80ea] = (CWtSynth)0x0;
    pCVar8[33000] = (CWtSynth)0x0;
    pCVar8[0x80e9] = (CWtSynth)0x0;
    *(undefined4 *)(pCVar8 + 8) = 0;
    *(undefined4 *)(pCVar8 + 0xc) = 0;
    *(undefined4 *)(pCVar8 + 0x80ec) = 0;
    this_00 = operator_new(0xa4);
    CLpf::CLpf(this_00,param_1);
    *(CLpf **)(pCVar8 + 0x8124) = this_00;
    this_01 = operator_new(0x1c);
    CVolIP::CVolIP(this_01,param_1);
    *(CVolIP **)(pCVar8 + 0x812c) = this_01;
    this_02 = operator_new(0x28);
    CPanIP::CPanIP(this_02,param_1);
    *(CPanIP **)(pCVar8 + 0x8130) = this_02;
    this_03 = operator_new(1);
    CWnoise::CWnoise(this_03,0,'\0');
    iVar9 = iVar9 + -1;
    *(CWnoise **)(pCVar8 + 0x8120) = this_03;
    pCVar8 = pCVar8 + 0x8144;
  } while (iVar9 != 0);
  return this;
}

