/* CWtSynth @ 001446b0 692B */


/* ARM::CWtSynth::CWtSynth(unsigned int, ARM::CCh*) */

void __thiscall ARM::CWtSynth::CWtSynth(CWtSynth *this,uint param_1,CCh *param_2)

{
  CLpf *this_00;
  CVolIP *this_01;
  CPanIP *this_02;
  CWnoise *this_03;
  int iVar1;
  
  *(CCh **)this = param_2;
  *(undefined4 *)(this + 0x103108) = 0;
  *(undefined4 *)(this + 0x10310c) = 0x7fff;
  if (param_1 == 0x5622) {
    *(undefined4 *)(this + 0x103110) = 0x5622;
    *(undefined **)(this + 0x103118) = &DAT_0031e600;
    *(undefined **)(this + 0x103120) = &DAT_0031eb20;
    *(undefined **)(this + 0x103128) = &DAT_0031ec20;
    *(undefined **)(this + 0x103130) = &DAT_0031ec30;
    goto LAB_00144790;
  }
  if (param_1 < 0x5623) {
    if (param_1 == 0x2b11) {
      *(undefined4 *)(this + 0x103110) = 0x2b11;
      *(undefined **)(this + 0x103118) = &DAT_0031e600;
      *(undefined **)(this + 0x103120) = &DAT_0031e700;
      *(undefined **)(this + 0x103128) = &DAT_0031e800;
      *(undefined **)(this + 0x103130) = &DAT_0031e810;
      goto LAB_00144790;
    }
    if (param_1 == 16000) {
      *(undefined4 *)(this + 0x103110) = 16000;
      *(undefined **)(this + 0x103118) = &DAT_0031e890;
      *(undefined **)(this + 0x103120) = &DAT_0031e990;
      *(undefined **)(this + 0x103128) = &DAT_0031ea90;
      *(undefined **)(this + 0x103130) = &DAT_0031eaa0;
      goto LAB_00144790;
    }
  }
  else {
    if (param_1 == 32000) {
      *(undefined4 *)(this + 0x103110) = 32000;
      *(undefined **)(this + 0x103118) = &DAT_0031ef40;
      *(undefined **)(this + 0x103120) = &DAT_0031f040;
      *(undefined **)(this + 0x103128) = &DAT_0031f140;
      *(undefined **)(this + 0x103130) = &DAT_0031f150;
      goto LAB_00144790;
    }
    if (param_1 == 0xac44) {
      *(undefined4 *)(this + 0x103110) = 0xac44;
      *(undefined **)(this + 0x103118) = &DAT_0031f1d0;
      *(undefined **)(this + 0x103120) = &DAT_0031f2d0;
      *(undefined **)(this + 0x103128) = &DAT_0031f3d0;
      *(undefined **)(this + 0x103130) = &DAT_0031f3e0;
      goto LAB_00144790;
    }
    if (param_1 == 24000) {
      *(undefined4 *)(this + 0x103110) = 24000;
      *(undefined **)(this + 0x103118) = &DAT_0031ecb0;
      *(undefined **)(this + 0x103120) = &DAT_0031edb0;
      *(undefined **)(this + 0x103128) = &DAT_0031eeb0;
      *(undefined **)(this + 0x103130) = &DAT_0031eec0;
      goto LAB_00144790;
    }
  }
  *(undefined **)(this + 0x103118) = &DAT_0031f460;
  *(undefined **)(this + 0x103120) = &DAT_0031f560;
  *(undefined **)(this + 0x103128) = &DAT_0031f660;
  *(undefined **)(this + 0x103130) = &DAT_0031f670;
  *(undefined4 *)(this + 0x103110) = 48000;
LAB_00144790:
  iVar1 = 0x20;
  do {
    this[0x80b4] = (CWtSynth)0x0;
    this[8] = (CWtSynth)0x0;
    *(undefined8 *)(this + 0x80c8) = 0;
    *(undefined4 *)(this + 0x80dc) = 0;
    *(undefined4 *)(this + 0x8114) = 0;
    this[0x80b5] = (CWtSynth)0x0;
    this[0x80b6] = (CWtSynth)0x0;
    this[0x80b7] = (CWtSynth)0x0;
    *(undefined4 *)(this + 0x80c0) = 0;
    *(undefined4 *)(this + 0x80a4) = 0x10000;
    *(undefined4 *)(this + 0x80a8) = 0x10000;
    *(undefined4 *)(this + 0x80ac) = 0x10000;
    *(undefined4 *)(this + 0x80b0) = 0x8000;
    *(undefined4 *)(this + 0x80fc) = 0;
    this[0x810e] = (CWtSynth)0x0;
    this[0x810c] = (CWtSynth)0x0;
    this[0x810d] = (CWtSynth)0x0;
    *(undefined4 *)(this + 0xc) = 0;
    *(undefined4 *)(this + 0x10) = 0;
    *(undefined4 *)(this + 0x8110) = 0;
    this_00 = operator_new(200);
    CLpf::CLpf(this_00,param_1);
    *(CLpf **)(this + 0x8150) = this_00;
    this_01 = operator_new(0x1c);
    CVolIP::CVolIP(this_01,param_1);
    *(CVolIP **)(this + 0x8160) = this_01;
    this_02 = operator_new(0x28);
    CPanIP::CPanIP(this_02,param_1);
    *(CPanIP **)(this + 0x8168) = this_02;
    this_03 = operator_new(1);
    CWnoise::CWnoise(this_03,0,'\0');
    *(CWnoise **)(this + 0x8148) = this_03;
    iVar1 = iVar1 + -1;
    this = this + 0x8188;
  } while (iVar1 != 0);
  return;
}

