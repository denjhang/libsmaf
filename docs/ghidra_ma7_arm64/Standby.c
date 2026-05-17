/* Standby @ 001312d0 52B */


/* CPreMms::Standby(int, unsigned int, unsigned int) */

undefined8 __thiscall CPreMms::Standby(CPreMms *this,int param_1,uint param_2,uint param_3)

{
  undefined8 uVar1;
  
  if (*(code **)(this + 0x58) == (code *)0x0) {
    uVar1 = 0xffffff9b;
  }
  else {
    uVar1 = (**(code **)(this + 0x58))(param_1,param_2,param_3);
  }
  return uVar1;
}

