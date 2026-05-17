/* operator.new @ 0011dfa0 94B */


/* operator new(unsigned int) */

void * operator_new(uint param_1)

{
  bool bVar1;
  void *pvVar2;
  int *piVar3;
  int iVar4;
  int extraout_r1;
  int iVar5;
  code *pcVar6;
  undefined4 *puVar7;
  
  puVar7 = (undefined4 *)(DAT_0011e000 + 0x11dfaa);
  while( true ) {
    pvVar2 = malloc(param_1);
    if (pvVar2 != (void *)0x0) {
      return pvVar2;
    }
    DataMemoryBarrier(0x1f);
    do {
      ExclusiveAccess(puVar7);
      pcVar6 = (code *)*puVar7;
      bVar1 = (bool)hasExclusiveAccess(puVar7);
    } while (!bVar1);
    *puVar7 = pcVar6;
    DataMemoryBarrier(0x1f);
    if (pcVar6 == (code *)0x0) break;
    (*pcVar6)();
  }
  piVar3 = (int *)FUN_0011d4b4(4);
  FUN_0011ec68();
  iVar4 = DAT_0011e008 + 0x11dfec;
  iVar5 = DAT_0011e00c + 0x11dfee;
  *piVar3 = DAT_0011e004 + 0x11dff0;
  FUN_0011d530(piVar3,iVar4,iVar5);
  if (extraout_r1 != -1) {
    __cxa_end_cleanup();
  }
                    /* WARNING: Subroutine does not return */
  __cxa_call_unexpected();
}

