/* MaS2PCnvCN_Terminate @ 000cbbe0 22B */


/* YAMAHA::MaS2PCnvCN_Terminate() */

void YAMAHA::MaS2PCnvCN_Terminate(void)

{
  int *piVar1;
  
  piVar1 = (int *)(DAT_000cbbf8 + 0xcbbe6);
  if (*piVar1 == 1) {
    *(undefined4 *)((int)&DAT_000cbbf8 + DAT_000cbbf8 + 2) = 0;
    *piVar1 = 0;
  }
  return;
}

