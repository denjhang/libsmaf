/* operator.delete @ 0011d70c 10B */


/* operator delete(void*) */

void operator_delete(void *param_1)

{
  if (param_1 == (void *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00120544. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(DAT_00120548 + 0x12054c))();
  return;
}

