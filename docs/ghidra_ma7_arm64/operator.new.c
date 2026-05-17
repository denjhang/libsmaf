/* operator.new @ 00277204 144B */


/* operator new(unsigned long) */

void * operator_new(ulong param_1)

{
  char cVar1;
  bool bVar2;
  void *pvVar3;
  undefined8 *puVar4;
  long extraout_x1;
  
  while( true ) {
    pvVar3 = malloc(param_1);
    if (pvVar3 != (void *)0x0) {
      return pvVar3;
    }
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x764e40,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (DAT_00764e40 == (code *)0x0) break;
    (*DAT_00764e40)();
  }
  puVar4 = (undefined8 *)FUN_00276370(8);
  FUN_00278090();
  *puVar4 = &PTR_FUN_00565710;
  FUN_00276434(puVar4,&PTR_PTR_00566340,FUN_002770f0);
  if (extraout_x1 == -1) {
                    /* WARNING: Subroutine does not return */
    __cxa_call_unexpected();
  }
                    /* WARNING: Subroutine does not return */
  _Unwind_Resume();
}

