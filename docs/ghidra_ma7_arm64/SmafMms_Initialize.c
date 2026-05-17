/* SmafMms_Initialize @ 001b0888 100B */


/* YAMAHA::SmafMms_Initialize(void*) */

int YAMAHA::SmafMms_Initialize(void *param_1)

{
  int iVar1;
  
  iVar1 = PreMms_Initialize(param_1);
  if (iVar1 == -0x65) {
    iVar1 = MaSound_Initialize();
    if (iVar1 == 0) {
      DAT_005ddba0 = MaSound_Create('\x01');
      DAT_005ddba8 = 0;
      DAT_005ddbb0 = FUN_001b0880;
      DAT_005ddbb8 = 0;
      DAT_005ddbbc = 0;
    }
  }
  return iVar1;
}

