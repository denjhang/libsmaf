/* SmafMms_OpenArgInit @ 00090844 34B */


/* YAMAHA::SmafMms_OpenArgInit(SMMS_OPENARG*) */

void YAMAHA::SmafMms_OpenArgInit(SMMS_OPENARG *param_1)

{
  int iVar1;
  
  iVar1 = PreMms_OpenArgInit(param_1);
  if ((iVar1 == -0x65) && (param_1 != (SMMS_OPENARG *)0x0)) {
    *(undefined4 *)param_1 = 0;
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
    *(undefined2 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0;
    return;
  }
  return;
}

