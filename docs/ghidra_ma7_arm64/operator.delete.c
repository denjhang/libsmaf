/* operator.delete @ 00276698 12B */


/* operator delete(void*) */

void operator_delete(void *param_1)

{
  if (param_1 != (void *)0x0) {
    free(param_1);
    return;
  }
  return;
}

