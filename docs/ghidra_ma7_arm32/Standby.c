/* Standby @ 00033df0 22B */


/* CPreMms::Standby(int, unsigned int, unsigned int) */

undefined4 __thiscall CPreMms::Standby(CPreMms *this,int param_1,uint param_2,uint param_3)

{
  undefined4 uVar1;
  
  if (*(code **)(this + 0x2c) != (code *)0x0) {
    uVar1 = (**(code **)(this + 0x2c))(param_1,param_2,param_3);
    return uVar1;
  }
  return 0xffffff9b;
}

