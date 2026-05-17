/* SmafMms_OpenArgInit @ 001b149c 64B */


/* YAMAHA::SmafMms_OpenArgInit(SMMS_OPENARG*) */

void YAMAHA::SmafMms_OpenArgInit(SMMS_OPENARG *param_1)

{
  int iVar1;
  
  iVar1 = PreMms_OpenArgInit(param_1);
  if ((iVar1 == -0x65) && (param_1 != (SMMS_OPENARG *)0x0)) {
    *(undefined4 *)param_1 = 0;
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(undefined2 *)(param_1 + 0x1c) = 0;
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  return;
}

