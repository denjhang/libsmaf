/* operator.delete[] @ 002766a4 4B */


/* operator delete[](void*) */

void operator_delete__(void *param_1)

{
  if (param_1 != (void *)0x0) {
    free(param_1);
    return;
  }
  return;
}

