/* Open @ 00033da0 20B */


/* CPreMms::Open(int, SMMS_OPENARG const*) */

undefined4 CPreMms::Open(int param_1,SMMS_OPENARG *param_2)

{
  undefined4 uVar1;
  
  if (*(code **)(param_1 + 0x24) != (code *)0x0) {
    uVar1 = (**(code **)(param_1 + 0x24))(param_2);
    return uVar1;
  }
  return 0xffffff9b;
}

