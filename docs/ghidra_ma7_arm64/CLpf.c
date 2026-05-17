/* CLpf @ 0015aad0 664B */


/* ARM::CLpf::CLpf(unsigned int) */

void __thiscall ARM::CLpf::CLpf(CLpf *this,uint param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  CWnoise *this_00;
  undefined *puVar7;
  undefined4 *puVar8;
  undefined8 uVar9;
  
  *(undefined **)(this + 8) = PTR_CalcEg_DEAD_00567f08;
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  puVar6 = PTR_sdAlRate32000_00567fb8;
  puVar7 = PTR_sdAlRate22050_00567da8;
  puVar5 = PTR_sdAlRate44100_00567c58;
  puVar4 = PTR_sdAlRate11025_00567c38;
  puVar3 = PTR_sdAlRate16000_005676e8;
  puVar2 = PTR_sdAlRate48000_00567420;
  puVar1 = PTR_sdAlRate24000_00567108;
  if (param_1 == 0x5622) {
    *(undefined **)(this + 0x18) = PTR_sdAlRate22050_00567da8;
    puVar8 = (undefined4 *)PTR_dAlLfoRate22050_00567ec8;
    *(undefined **)(this + 0x20) = PTR_dAlLfoRate22050_00567ec8;
    *(undefined **)(this + 0x38) = PTR_sdKTable22050_00567cf0;
    *(undefined **)(this + 0x40) = PTR_sdKExpTable22050_005677a0;
    *(undefined **)(this + 0x48) = PTR_sdKTbl22050_00567248;
    goto LAB_0015abbc;
  }
  if (param_1 < 0x5623) {
    if (param_1 == 0x2b11) {
      *(undefined **)(this + 0x18) = PTR_sdAlRate11025_00567c38;
      puVar8 = (undefined4 *)PTR_dAlLfoRate11025_00567de8;
      *(undefined **)(this + 0x20) = PTR_dAlLfoRate11025_00567de8;
      *(undefined **)(this + 0x38) = PTR_sdKTable11025_00567890;
      *(undefined **)(this + 0x40) = PTR_sdKExpTable22050_005677a0;
      *(undefined **)(this + 0x48) = PTR_sdKTbl11025_00567ce8;
      puVar7 = puVar4;
      goto LAB_0015abbc;
    }
    if (param_1 == 16000) {
      *(undefined **)(this + 0x18) = PTR_sdAlRate16000_005676e8;
      puVar8 = (undefined4 *)PTR_dAlLfoRate16000_00567340;
      *(undefined **)(this + 0x20) = PTR_dAlLfoRate16000_00567340;
      *(undefined **)(this + 0x38) = PTR_sdKTable16000_00567d80;
      *(undefined **)(this + 0x40) = PTR_sdKExpTable22050_005677a0;
      *(undefined **)(this + 0x48) = PTR_sdKTbl16000_00567fa0;
      puVar7 = puVar3;
      goto LAB_0015abbc;
    }
  }
  else {
    if (param_1 == 32000) {
      *(undefined **)(this + 0x18) = PTR_sdAlRate32000_00567fb8;
      puVar8 = (undefined4 *)PTR_dAlLfoRate32000_005674d0;
      *(undefined **)(this + 0x20) = PTR_dAlLfoRate32000_005674d0;
      *(undefined **)(this + 0x38) = PTR_sdKTable32000_00567138;
      *(undefined **)(this + 0x40) = PTR_sdKExpTable32000_00567928;
      *(undefined **)(this + 0x48) = PTR_sdKTbl32000_00567c98;
      puVar7 = puVar6;
      goto LAB_0015abbc;
    }
    if (param_1 == 0xac44) {
      *(undefined **)(this + 0x18) = PTR_sdAlRate44100_00567c58;
      puVar8 = (undefined4 *)PTR_dAlLfoRate44100_00567328;
      *(undefined **)(this + 0x20) = PTR_dAlLfoRate44100_00567328;
      *(undefined **)(this + 0x38) = PTR_sdKTable44100_00567a68;
      *(undefined **)(this + 0x40) = PTR_sdKExpTable44100_00567c50;
      *(undefined **)(this + 0x48) = PTR_sdKTbl44100_00567280;
      puVar7 = puVar5;
      goto LAB_0015abbc;
    }
    if (param_1 == 24000) {
      *(undefined **)(this + 0x18) = PTR_sdAlRate24000_00567108;
      puVar8 = (undefined4 *)PTR_dAlLfoRate24000_00567d60;
      *(undefined **)(this + 0x20) = PTR_dAlLfoRate24000_00567d60;
      *(undefined **)(this + 0x38) = PTR_sdKTable24000_00567ea8;
      *(undefined **)(this + 0x40) = PTR_sdKExpTable24000_005674c8;
      *(undefined **)(this + 0x48) = PTR_sdKTbl24000_005677f8;
      puVar7 = puVar1;
      goto LAB_0015abbc;
    }
  }
  *(undefined **)(this + 0x18) = PTR_sdAlRate48000_00567420;
  puVar8 = (undefined4 *)PTR_dAlLfoRate48000_00567c10;
  *(undefined **)(this + 0x20) = PTR_dAlLfoRate48000_00567c10;
  *(undefined **)(this + 0x38) = PTR_sdKTable48000_00567f40;
  *(undefined **)(this + 0x40) = PTR_sdKExpTable48000_00567bb0;
  *(undefined **)(this + 0x48) = PTR_sdKTbl48000_00567850;
  puVar7 = puVar2;
LAB_0015abbc:
  *(undefined4 *)(this + 0x34) = *puVar8;
  puVar1 = PTR_psdAlLfo_005676f0;
  *(undefined4 *)(this + 0xac) = 0;
  *(undefined4 *)(this + 0xb0) = 0;
  uVar9 = *(undefined8 *)puVar1;
  *(undefined4 *)(this + 0xb4) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined8 *)(this + 0x28) = uVar9;
  *(undefined4 *)(this + 0xb8) = *(undefined4 *)(puVar7 + 0x7c);
  this[0x53] = (CLpf)0x0;
  *(undefined4 *)(this + 0x54) = 0;
  *(undefined4 *)(this + 0x58) = 0;
  *(undefined4 *)(this + 0x5c) = 0;
  this_00 = operator_new(1);
  CWnoise::CWnoise(this_00,0,'\0');
  *(CWnoise **)(this + 0xc0) = this_00;
  return;
}

