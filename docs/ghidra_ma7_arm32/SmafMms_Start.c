/* SmafMms_Start @ 00090574 48B */


/* YAMAHA::SmafMms_Start(int) */

int YAMAHA::SmafMms_Start(int param_1)

{
  int iVar1;
  
  iVar1 = PreMms_Start(param_1);
  if (iVar1 == -0x65) {
    if ((param_1 & 0xfU) < 2) {
      iVar1 = MaSound_Start(*(int *)(DAT_000905a4 + 0x90596),param_1 & 0xfU,0,(void *)0x0);
      return iVar1;
    }
    iVar1 = -1;
  }
  return iVar1;
}

