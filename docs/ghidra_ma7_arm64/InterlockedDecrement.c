/* InterlockedDecrement @ 00129f24 20B */


/* InterlockedDecrement(int*) */

void InterlockedDecrement(int *param_1)

{
  *param_1 = *param_1 + -1;
  return;
}

