/* MaS2PCnvKR_Terminate @ 000d6f6c 22B */


/* YAMAHA::MaS2PCnvKR_Terminate() */

void YAMAHA::MaS2PCnvKR_Terminate(void)

{
  int *piVar1;
  
  piVar1 = (int *)(DAT_000d6f84 + 0xd6f72);
  if (*piVar1 == 1) {
    *(undefined4 *)((int)&DAT_000d6f84 + DAT_000d6f84 + 2) = 0;
    *piVar1 = 0;
  }
  return;
}

