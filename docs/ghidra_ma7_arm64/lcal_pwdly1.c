/* lcal_pwdly1 @ 0024c54c 28B */


/* YAMAHA::lcal_pwdly1(short) */

void YAMAHA::lcal_pwdly1(short param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_lprm_00567530;
  *(undefined2 *)(PTR_lprm_00567530 + 0x88) = 0x28;
  *(undefined2 *)(puVar1 + 0x8c) = 0x30;
  return;
}

