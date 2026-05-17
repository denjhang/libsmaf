/* InitializeCriticalSection @ 0002f014 34B */


/* InitializeCriticalSection(critical_section*) */

void InitializeCriticalSection(critical_section *param_1)

{
  undefined4 extraout_r2;
  undefined4 in_r3;
  pthread_mutexattr_t *__attr;
  
  __attr = (pthread_mutexattr_t *)(param_1 + 4);
  pthread_mutexattr_init(__attr);
  pthread_mutexattr_settype(__attr,1);
                    /* WARNING: Could not recover jumptable at 0x001204b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(DAT_001204b8 + 0x1204bc))(param_1,__attr,extraout_r2,in_r3);
  return;
}

