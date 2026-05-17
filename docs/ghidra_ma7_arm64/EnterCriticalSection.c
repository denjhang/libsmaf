/* EnterCriticalSection @ 00129a5c 4B */


/* EnterCriticalSection(critical_section*) */

void EnterCriticalSection(critical_section *param_1)

{
  (*(code *)PTR_pthread_mutex_lock_00567080)();
  return;
}

