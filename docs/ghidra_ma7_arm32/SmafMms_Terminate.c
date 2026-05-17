/* SmafMms_Terminate @ 000900e0 66B */


/* YAMAHA::SmafMms_Terminate() */

void YAMAHA::SmafMms_Terminate(void)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = PreMms_Terminate();
  if (iVar1 == -0x65) {
    piVar2 = (int *)(DAT_00090124 + 0x900f8);
    MaSound_Stop(*piVar2,1,(void *)0x0);
    MaSound_Close(*piVar2,1,(void *)0x0);
    MaSound_Unload(*piVar2,1,(void *)0x0);
    MaSound_Delete(*piVar2);
    iVar1 = MaSound_Terminate();
    if (iVar1 == 0) {
      *piVar2 = 0;
    }
  }
  return;
}

