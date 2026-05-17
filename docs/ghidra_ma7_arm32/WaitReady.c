/* WaitReady @ 00033e9c 20B */


/* CPreMms::WaitReady(int, int) */

undefined4 CPreMms::WaitReady(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if (*(code **)(param_1 + 0x3c) != (code *)0x0) {
    uVar1 = (**(code **)(param_1 + 0x3c))(param_2);
    return uVar1;
  }
  return 0xffffff9b;
}

