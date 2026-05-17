/* LoadHwLibrary @ 00030e9c 114B */


/* CM7_EmuSmw7App::LoadHwLibrary(signed char*) */

undefined4 CM7_EmuSmw7App::LoadHwLibrary(signed *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar4 = DAT_00030f24;
  iVar3 = DAT_00030f20;
  iVar2 = DAT_00030f1c;
  iVar1 = DAT_00030f18;
  iVar8 = DAT_00030f10 + 0x30eae;
  *(undefined4 *)(param_1 + 0x20c) = *(undefined4 *)(iVar8 + DAT_00030f14);
  iVar6 = DAT_00030f2c;
  iVar5 = DAT_00030f28;
  *(undefined4 *)(param_1 + 0x210) = *(undefined4 *)(iVar8 + iVar1);
  iVar7 = DAT_00030f34;
  iVar1 = DAT_00030f30;
  *(undefined4 *)(param_1 + 0x214) = *(undefined4 *)(iVar8 + iVar2);
  *(undefined4 *)(param_1 + 0x218) = *(undefined4 *)(iVar8 + iVar3);
  *(undefined4 *)(param_1 + 0x21c) = *(undefined4 *)(iVar8 + iVar4);
  *(undefined4 *)(param_1 + 0x220) = *(undefined4 *)(iVar8 + iVar5);
  *(undefined4 *)(param_1 + 0x224) = *(undefined4 *)(iVar8 + iVar6);
  *(undefined4 *)(param_1 + 0x228) = *(undefined4 *)(iVar8 + iVar1);
  *(undefined4 *)(param_1 + 0x22c) = *(undefined4 *)(iVar8 + iVar7);
  DllMain(0,1,0);
  return 0;
}

