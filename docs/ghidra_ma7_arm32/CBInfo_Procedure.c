/* CBInfo_Procedure @ 000334f0 78B */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CBInfo_Procedure() */

void CBInfo_Procedure(void)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  critical_section *pcVar4;
  undefined4 *puVar5;
  
  iVar1 = DAT_00033540;
  pcVar4 = (critical_section *)(DAT_00033540 + 0x334f8);
  EnterCriticalSection(pcVar4);
  iVar3 = *(int *)(iVar1 + 0x33500);
  if (0 < iVar3) {
    puVar5 = (undefined4 *)(iVar1 + 0x3350c);
    do {
      pcVar2 = *(code **)(pcVar4 + puVar5[-2] * 0xc + 0x17c);
      if (pcVar2 != (code *)0x0) {
        (*pcVar2)(puVar5[-1],*puVar5);
        iVar3 = *(int *)(iVar1 + 0x33500);
      }
      iVar3 = iVar3 + -1;
      *(int *)(iVar1 + 0x33500) = iVar3;
      puVar5 = puVar5 + 3;
    } while (0 < iVar3);
  }
  LeaveCriticalSection((critical_section *)(DAT_00033544 + 0x3353c));
  return;
}

