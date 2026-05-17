/* LeaveCriticalSection @ 00129a60 4B */


/* LeaveCriticalSection(critical_section*) */

void LeaveCriticalSection(critical_section *param_1)

{
  (*(code *)PTR_pthread_mutex_unlock_00567070)();
  return;
}

