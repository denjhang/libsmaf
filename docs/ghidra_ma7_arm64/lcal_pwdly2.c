/* lcal_pwdly2 @ 0024c568 28B */


/* YAMAHA::lcal_pwdly2(short) */

void YAMAHA::lcal_pwdly2(short param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_lprm_00567530;
  *(undefined2 *)(PTR_lprm_00567530 + 0xb2) = 0x28;
  *(undefined2 *)(puVar1 + 0xb6) = 0x30;
  return;
}

