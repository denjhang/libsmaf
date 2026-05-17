/* SmafMms_Open @ 001b0ce0 128B */


/* YAMAHA::SmafMms_Open(int, SMMS_OPENARG const*) */

undefined8 YAMAHA::SmafMms_Open(int param_1,SMMS_OPENARG *param_2)

{
  undefined8 uVar1;
  
  uVar1 = PreMms_Open(param_1,param_2);
  if ((int)uVar1 == -0x65) {
    if ((param_1 & 0xfU) < 2) {
      uVar1 = MaSound_Open(DAT_005ddba0,param_1 & 0xfU,*(ushort *)(param_2 + 0x1c),(void *)0x0);
      if (-1 < (int)uVar1) {
        DAT_005ddbb0 = *(undefined8 *)(param_2 + 8);
        DAT_005ddba8 = *(undefined8 *)(param_2 + 0x10);
        return uVar1;
      }
    }
    else {
      uVar1 = 0xffffffff;
    }
  }
  return uVar1;
}

