/* Seek @ 00033e24 20B */


/* CPreMms::Seek(int, unsigned int) */

undefined4 CPreMms::Seek(int param_1,uint param_2)

{
  undefined4 uVar1;
  
  if (*(code **)(param_1 + 0x30) != (code *)0x0) {
    uVar1 = (**(code **)(param_1 + 0x30))(param_2);
    return uVar1;
  }
  return 0xffffff9b;
}

