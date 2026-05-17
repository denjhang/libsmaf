/* EmuSetPath @ 000305f4 270B */


/* CM7_EmuSmw7App::EmuSetPath(char*, char*, char*) */

void __thiscall
CM7_EmuSmw7App::EmuSetPath(CM7_EmuSmw7App *this,char *param_1,char *param_2,char *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  size_t sVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int *piVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  char acStack_328 [4];
  char acStack_324 [256];
  undefined4 local_224;
  undefined4 uStack_220;
  undefined4 local_124;
  undefined1 local_120;
  int local_24;
  
  piVar8 = *(int **)(DAT_00030704 + 0x3060a);
  local_24 = *piVar8;
  if (((*(int *)(this + 0x230) == 2) ||
      ((param_1 != (char *)0x0 && (sVar4 = strlen(param_1), 0xff < sVar4)))) ||
     ((param_3 != (char *)0x0 && (sVar4 = strlen(param_3), 0xff < sVar4)))) {
    uVar9 = 0xffffffff;
  }
  else {
    iVar1 = DAT_00030728;
    if (param_1 == (char *)0x0) {
      uVar9 = *(undefined4 *)(DAT_00030724 + 0x306f6);
      uVar5 = *(undefined4 *)(DAT_00030724 + 0x306fa);
      uVar6 = *(undefined4 *)(DAT_00030724 + 0x306fe);
      *(undefined4 *)(DAT_00030728 + 0x308fc) = *(undefined4 *)(DAT_00030724 + 0x306f2);
      *(undefined4 *)(iVar1 + 0x30900) = uVar9;
      *(undefined4 *)(iVar1 + 0x30904) = uVar5;
      *(undefined4 *)(iVar1 + 0x30908) = uVar6;
    }
    else {
      strcpy((char *)(DAT_00030708 + 0x30840),param_1);
    }
    iVar3 = DAT_00030720;
    iVar2 = DAT_0003071c;
    iVar1 = DAT_0003070c;
    if (param_3 == (char *)0x0) {
      puVar10 = (undefined4 *)(DAT_0003071c + 0x306ca);
      uVar9 = *(undefined4 *)(DAT_00030718 + 0x306c4);
      uVar5 = *(undefined4 *)(DAT_00030718 + 0x306c8);
      uVar6 = *(undefined4 *)(DAT_00030718 + 0x306cc);
      uVar7 = *(undefined4 *)(DAT_00030718 + 0x306d0);
      puVar12 = (undefined4 *)(DAT_00030718 + 0x306d4);
      puVar11 = (undefined4 *)(DAT_00030720 + 0x306d0);
      *(undefined1 *)(DAT_0003071c + 0x309d6) = 0;
      *puVar10 = uVar9;
      *(undefined4 *)(iVar2 + 0x306ce) = uVar5;
      *(undefined4 *)(iVar2 + 0x306d2) = uVar6;
      *(undefined4 *)(iVar2 + 0x306d6) = uVar7;
      uVar9 = *(undefined4 *)(iVar3 + 0x306d4);
      uVar5 = *(undefined4 *)(iVar3 + 0x306d8);
      uVar6 = *puVar12;
      *(undefined4 *)(&UNK_000307ce + iVar2) = *puVar11;
      *(undefined4 *)((int)&DAT_000307d0 + iVar2 + 2) = uVar9;
      *(undefined4 *)(InitMaSmwApi + iVar2 + 2) = uVar5;
      *(short *)(iVar2 + 0x306da) = (short)uVar6;
      uVar9 = 0;
    }
    else {
      strcpy((char *)(DAT_0003070c + 0x30654),param_3);
      _splitpath(param_3,acStack_328,acStack_324,(char *)&local_224,(char *)&local_124);
      local_224 = *(undefined4 *)(DAT_00030710 + 0x30676);
      uStack_220 = *(undefined4 *)(DAT_00030710 + 0x3067a);
      local_124 = *(undefined4 *)(DAT_00030714 + 0x3067a);
      local_120 = (undefined1)*(undefined4 *)(DAT_00030714 + 0x3067e);
      uVar9 = 0;
      _makepath((char *)(iVar1 + 0x30758),acStack_328,acStack_324,(char *)&local_224,
                (char *)&local_124);
      *(undefined1 *)(iVar1 + 0x30960) = 1;
    }
  }
  if (local_24 == *piVar8) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar9);
}

