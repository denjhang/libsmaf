/* CLpf @ 00053204 268B */


/* ARM::CLpf::CLpf(unsigned int) */

CLpf * __thiscall ARM::CLpf::CLpf(CLpf *this,uint param_1)

{
  CWnoise *this_00;
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  
  iVar4 = DAT_00053310 + 0x53212;
  uVar6 = *(undefined4 *)(iVar4 + DAT_00053314);
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = uVar6;
  iVar5 = DAT_0005333c;
  if (param_1 == 0x5622) {
    iVar7 = *(int *)(iVar4 + DAT_00053390);
    iVar1 = DAT_00053398;
    iVar2 = DAT_00053394;
    iVar8 = DAT_0005339c;
    goto LAB_00053264;
  }
  if (param_1 < 0x5623) {
    if (param_1 == 0x2b11) {
      iVar7 = *(int *)(iVar4 + DAT_0005336c);
      iVar1 = DAT_00053374;
      iVar2 = DAT_00053370;
      iVar8 = DAT_00053378;
      goto LAB_00053264;
    }
    if (param_1 == 16000) {
      iVar7 = *(int *)(iVar4 + DAT_0005332c);
      iVar1 = DAT_00053334;
      iVar2 = DAT_00053330;
      iVar8 = DAT_00053338;
      goto LAB_00053264;
    }
  }
  else {
    if (param_1 == 32000) {
      iVar7 = *(int *)(iVar4 + DAT_00053344);
      iVar1 = DAT_0005334c;
      iVar2 = DAT_00053348;
      iVar5 = DAT_00053350;
      iVar8 = DAT_00053354;
      goto LAB_00053264;
    }
    if (param_1 == 0xac44) {
      iVar7 = *(int *)(iVar4 + DAT_0005337c);
      iVar1 = DAT_00053384;
      iVar2 = DAT_00053380;
      iVar5 = DAT_00053388;
      iVar8 = DAT_0005338c;
      goto LAB_00053264;
    }
    if (param_1 == 24000) {
      iVar7 = *(int *)(iVar4 + DAT_00053358);
      iVar1 = DAT_00053360;
      iVar2 = DAT_0005335c;
      iVar5 = DAT_00053364;
      iVar8 = DAT_00053368;
      goto LAB_00053264;
    }
  }
  iVar7 = *(int *)(iVar4 + DAT_00053318);
  iVar1 = DAT_00053320;
  iVar2 = DAT_0005331c;
  iVar5 = DAT_00053324;
  iVar8 = DAT_00053328;
LAB_00053264:
  *(int *)(this + 0x14) = iVar7;
  puVar3 = *(undefined4 **)(iVar4 + iVar2);
  *(undefined4 **)(this + 0x18) = puVar3;
  *(undefined4 *)(this + 0x28) = *(undefined4 *)(iVar4 + iVar1);
  iVar1 = DAT_00053340;
  *(undefined4 *)(this + 0x2c) = *(undefined4 *)(iVar4 + iVar5);
  *(undefined4 *)(this + 0x30) = *(undefined4 *)(iVar4 + iVar8);
  *(undefined4 *)(this + 0x24) = *puVar3;
  puVar3 = *(undefined4 **)(iVar4 + iVar1);
  *(undefined4 *)(this + 0x90) = 0;
  *(undefined4 *)(this + 0x94) = 0;
  uVar6 = *puVar3;
  *(undefined4 *)(this + 0x98) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x1c) = uVar6;
  uVar6 = *(undefined4 *)(iVar7 + 0x7c);
  this[0x37] = (CLpf)0x0;
  *(undefined4 *)(this + 0x38) = 0;
  *(undefined4 *)(this + 0x9c) = uVar6;
  *(undefined4 *)(this + 0x3c) = 0;
  *(undefined4 *)(this + 0x40) = 0;
  this_00 = operator_new(1);
  CWnoise::CWnoise(this_00,0,'\0');
  *(CWnoise **)(this + 0xa0) = this_00;
  return this;
}

