/* lcal_pwdly1 @ 000fed34 20B */


/* YAMAHA::lcal_pwdly1(short) */

int YAMAHA::lcal_pwdly1(short param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(DAT_000fed48 + 0xfed3e);
  *(undefined2 *)(iVar1 + 0x88) = 0x28;
  *(undefined2 *)(iVar1 + 0x8c) = 0x30;
  return (int)param_1;
}

