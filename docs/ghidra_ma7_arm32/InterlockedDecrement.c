/* InterlockedDecrement @ 0002f2e0 10B */


/* InterlockedDecrement(int*) */

void InterlockedDecrement(int *param_1)

{
  *param_1 = *param_1 + -1;
  return;
}

