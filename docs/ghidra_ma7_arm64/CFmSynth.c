/* CFmSynth @ 00159d90 656B */


/* ARM::CFmSynth::CFmSynth(unsigned int, ARM::CCh*) */

void __thiscall ARM::CFmSynth::CFmSynth(CFmSynth *this,uint param_1,CCh *param_2)

{
  CLpf *this_00;
  CVolIP *this_01;
  CPanIP *this_02;
  char cVar1;
  
  *(CCh **)(this + 0x1800) = param_2;
  *(undefined4 *)(this + 0x6808) = 0;
  *(undefined4 *)(this + 0x680c) = 0x8000;
  if (param_1 == 0x5622) {
    *(undefined **)(this + 0x6820) = &DAT_003bf7c0;
    *(undefined **)(this + 0x6828) = &DAT_003bfbe0;
    *(undefined **)(this + 0x6830) = &DAT_003bfce0;
    *(undefined4 *)(this + 0x6818) = 0x5622;
    goto LAB_00159e60;
  }
  if (param_1 < 0x5623) {
    if (param_1 == 0x2b11) {
      *(undefined **)(this + 0x6820) = &DAT_003bf7c0;
      *(undefined **)(this + 0x6828) = &DAT_003bf8c0;
      *(undefined **)(this + 0x6830) = &DAT_003bf9c0;
      *(undefined4 *)(this + 0x6818) = 0x2b11;
      goto LAB_00159e60;
    }
    if (param_1 == 16000) {
      *(undefined **)(this + 0x6820) = &DAT_003bf9d0;
      *(undefined **)(this + 0x6828) = &DAT_003bfad0;
      *(undefined **)(this + 0x6830) = &DAT_003bfbd0;
      *(undefined4 *)(this + 0x6818) = 16000;
      goto LAB_00159e60;
    }
  }
  else {
    if (param_1 == 0xac44) {
      *(undefined **)(this + 0x6820) = &DAT_003bff00;
      *(undefined8 *)(this + 0x6828) = 0x3c0000;
      *(undefined **)(this + 0x6830) = &DAT_003c0100;
      *(undefined4 *)(this + 0x6818) = 0xac44;
      goto LAB_00159e60;
    }
    if (param_1 == 48000) {
      *(undefined **)(this + 0x6820) = &DAT_003c0110;
      *(undefined **)(this + 0x6828) = &DAT_003c0210;
      *(undefined **)(this + 0x6830) = &DAT_003c0310;
      *(undefined4 *)(this + 0x6818) = 48000;
      goto LAB_00159e60;
    }
    if (param_1 == 24000) {
      *(undefined **)(this + 0x6820) = &DAT_003bfcf0;
      *(undefined **)(this + 0x6828) = &DAT_003bfdf0;
      *(undefined **)(this + 0x6830) = &DAT_003bfef0;
      *(undefined4 *)(this + 0x6818) = 24000;
      goto LAB_00159e60;
    }
  }
  *(undefined **)(this + 0x6820) = &DAT_003c0320;
  *(undefined **)(this + 0x6828) = &DAT_003c0420;
  *(undefined **)(this + 0x6830) = &DAT_003c0520;
  *(undefined4 *)(this + 0x6818) = 32000;
LAB_00159e60:
  cVar1 = ' ';
  do {
    this[0x19e4] = (CFmSynth)0x0;
    this[0x1a08] = (CFmSynth)0x0;
    this[0x1a09] = (CFmSynth)0x0;
    *(undefined4 *)(this + 0x1a30) = 0;
    *(undefined4 *)(this + 0x19fc) = 0x10000;
    *(undefined4 *)(this + 0x1a00) = 0x10000;
    *(undefined4 *)(this + 0x1a04) = 0x10000;
    this[0x19f0] = (CFmSynth)0x0;
    *(undefined4 *)(this + 0x1a40) = 0;
    *(undefined4 *)(this + 0x1a1c) = 0;
    *(undefined4 *)(this + 0x1a18) = 0;
    this[0x1a46] = (CFmSynth)0x0;
    this[0x1a44] = (CFmSynth)0x0;
    this[0x1a45] = (CFmSynth)0x0;
    *(undefined4 *)(this + 0x1874) = 0;
    *(undefined4 *)(this + 0x18dc) = 0;
    *(undefined4 *)(this + 0x1944) = 0;
    *(undefined4 *)(this + 0x19ac) = 0;
    *(undefined8 *)(this + 0x1840) = 0;
    *(undefined8 *)(this + 0x18a8) = 0;
    *(undefined8 *)(this + 0x1910) = 0;
    *(undefined8 *)(this + 0x1978) = 0;
    *(undefined4 *)(this + 0x180c) = 0;
    *(undefined4 *)(this + 0x1810) = 0;
    *(undefined4 *)(this + 0x19f4) = 0;
    *(undefined4 *)(this + 0x19f8) = 0;
    *(undefined4 *)(this + 0x1a0c) = 0;
    this_00 = operator_new(200);
    CLpf::CLpf(this_00,param_1);
    *(CLpf **)(this + 0x1a48) = this_00;
    this_01 = operator_new(0x1c);
    CVolIP::CVolIP(this_01,param_1);
    *(CVolIP **)(this + 0x1a58) = this_01;
    this_02 = operator_new(0x28);
    CPanIP::CPanIP(this_02,param_1);
    *(CPanIP **)(this + 0x1a60) = this_02;
    cVar1 = cVar1 + -1;
    this[0x1808] = (CFmSynth)0x0;
    this = this + 0x280;
  } while (cVar1 != '\0');
  return;
}

