/* EnterCriticalSection @ 0002f048 4B */


/* EnterCriticalSection(critical_section*) */

void EnterCriticalSection(critical_section *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x001204d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(pthread_mutex_unlock + DAT_001204d8))(param_1);
  return;
}

