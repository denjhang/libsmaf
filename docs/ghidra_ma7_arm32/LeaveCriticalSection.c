/* LeaveCriticalSection @ 0002f04c 4B */


/* LeaveCriticalSection(critical_section*) */

void LeaveCriticalSection(critical_section *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x001204e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(DAT_001204e8 + 0x1204ec))(param_1);
  return;
}

