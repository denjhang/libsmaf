/* lcal_pwdly2 @ 000fed4c 20B */


/* YAMAHA::lcal_pwdly2(short) */

int YAMAHA::lcal_pwdly2(short param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(DAT_000fed60 + 0xfed56);
  *(undefined2 *)(iVar1 + 0xb2) = 0x28;
  *(undefined2 *)(iVar1 + 0xb6) = 0x30;
  return (int)param_1;
}

