/* SmafMms_Terminate @ 001b08ec 108B */


/* YAMAHA::SmafMms_Terminate() */

void YAMAHA::SmafMms_Terminate(void)

{
  int iVar1;
  
  iVar1 = PreMms_Terminate();
  if (iVar1 == -0x65) {
    MaSound_Stop(DAT_005ddba0,1,(void *)0x0);
    MaSound_Close(DAT_005ddba0,1,(void *)0x0);
    MaSound_Unload(DAT_005ddba0,1,(void *)0x0);
    MaSound_Delete(DAT_005ddba0);
    iVar1 = MaSound_Terminate();
    if (iVar1 == 0) {
      DAT_005ddba0 = 0;
    }
  }
  return;
}

