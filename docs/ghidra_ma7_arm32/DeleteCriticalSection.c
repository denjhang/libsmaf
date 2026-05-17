/* DeleteCriticalSection @ 0002f034 20B */


/* DeleteCriticalSection(critical_section*) */

void DeleteCriticalSection(critical_section *param_1)

{
  pthread_mutex_destroy((pthread_mutex_t *)param_1);
                    /* WARNING: Could not recover jumptable at 0x001204c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(pthread_mutex_lock + DAT_001204c8))(param_1 + 4);
  return;
}

