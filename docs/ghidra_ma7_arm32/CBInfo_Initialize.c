/* CBInfo_Initialize @ 000332fc 300B */


/* CBInfo_Initialize(my_event_t*) */

void CBInfo_Initialize(my_event_t *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  critical_section *pcVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  
  iVar5 = DAT_00033438;
  iVar3 = DAT_00033434;
  iVar2 = DAT_00033430;
  iVar1 = DAT_00033428;
  pcVar4 = (critical_section *)(DAT_00033428 + 0x3330c);
  iVar10 = DAT_0003342c + 0x33316;
  InitializeCriticalSection(pcVar4);
  EnterCriticalSection(pcVar4);
  iVar7 = DAT_00033444;
  iVar6 = DAT_00033440;
  *(int *)((int)&DAT_000334ec + iVar1) = DAT_0003343c + 0x33330;
  iVar11 = DAT_00033450;
  iVar9 = DAT_0003344c;
  iVar8 = DAT_00033448;
  *(my_event_t **)(CBInfo_Terminate + iVar1 + 4) = param_1;
  *(int *)(iVar1 + 0x3348c) = iVar10;
  *(int *)(iVar1 + 0x33498) = iVar2 + 0x3332e;
  *(int *)(iVar1 + 0x334a4) = iVar3 + 0x33338;
  *(int *)(iVar1 + 0x334b0) = iVar5 + 0x3333c;
  *(int *)(iVar1 + 0x334bc) = iVar6 + 0x33340;
  *(int *)(iVar1 + 0x334c8) = iVar7 + 0x33344;
  *(int *)(iVar1 + 0x334d4) = iVar8 + 0x3334a;
  *(int *)(iVar1 + 0x334e0) = iVar9 + 0x33350;
  *(int *)(iVar1 + 0x334f8) = iVar11 + 0x33356;
  iVar3 = DAT_00033478;
  iVar2 = DAT_00033474;
  iVar11 = DAT_00033458 + 0x33388;
  iVar9 = DAT_0003345c + 0x3338e;
  iVar8 = DAT_00033460 + 0x33394;
  iVar7 = DAT_00033464 + 0x33398;
  iVar10 = DAT_00033468 + 0x3339c;
  iVar6 = DAT_0003346c + 0x333a0;
  iVar5 = DAT_00033470 + 0x333a4;
  *(int *)(iVar1 + 0x33510) = DAT_00033454 + 0x33382;
  *(int *)(iVar1 + 0x3351c) = iVar11;
  *(int *)(iVar1 + 0x33528) = iVar9;
  *(int *)(iVar1 + 0x33504) = iVar3 + 0x333b0;
  *(int *)(iVar1 + 0x33534) = iVar8;
  *(undefined4 *)(iVar1 + 0x33314) = 0;
  *(undefined4 *)(iVar1 + 0x33488) = 0;
  *(undefined4 *)(iVar1 + 0x33494) = 0;
  *(undefined4 *)(iVar1 + 0x334a0) = 0;
  *(undefined4 *)(iVar1 + 0x334ac) = 0;
  *(undefined4 *)(iVar1 + 0x334b8) = 0;
  *(undefined4 *)(iVar1 + 0x334c4) = 0;
  *(undefined4 *)(iVar1 + 0x334d0) = 0;
  *(undefined4 *)(iVar1 + 0x334dc) = 0;
  *(undefined4 *)(iVar1 + 0x334e8) = 0;
  *(undefined4 *)(CBInfo_Procedure + iVar1 + 4) = 0;
  *(undefined4 *)(iVar1 + 0x33500) = 0;
  *(undefined4 *)(iVar1 + 0x3350c) = 0;
  *(undefined4 *)(iVar1 + 0x33518) = 0;
  *(undefined4 *)(iVar1 + 0x33524) = 0;
  *(undefined4 *)(iVar1 + 0x33530) = 0;
  *(undefined4 *)(iVar1 + 0x3353c) = 0;
  *(int *)((int)&DAT_00033540 + iVar1) = iVar7;
  *(undefined4 *)(CBInfo_GetHookFunc + iVar1) = 0;
  *(undefined4 *)(iVar1 + 0x33554) = 0;
  *(undefined4 *)(iVar1 + 0x33560) = 0;
  *(undefined4 *)(iVar1 + 0x3356c) = 0;
  *(int *)(iVar1 + 0x3354c) = iVar10;
  *(int *)(iVar1 + 0x33558) = iVar6;
  *(int *)(iVar1 + 0x33564) = iVar5;
  *(int *)(iVar1 + 0x33570) = iVar2 + 0x333aa;
  LeaveCriticalSection(pcVar4);
  return;
}

