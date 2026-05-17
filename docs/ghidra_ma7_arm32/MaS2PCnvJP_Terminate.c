/* MaS2PCnvJP_Terminate @ 000c7458 22B */


/* YAMAHA::MaS2PCnvJP_Terminate() */

void YAMAHA::MaS2PCnvJP_Terminate(void)

{
  int *piVar1;
  
  piVar1 = (int *)(DAT_000c7470 + 0xc745e);
  if (*piVar1 == 1) {
    *(undefined4 *)((int)&DAT_000c7470 + DAT_000c7470 + 2) = 0;
    *piVar1 = 0;
  }
  return;
}

