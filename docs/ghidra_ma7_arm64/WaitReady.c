/* WaitReady @ 001313dc 48B */


/* CPreMms::WaitReady(int, int) */

undefined8 __thiscall CPreMms::WaitReady(CPreMms *this,int param_1,int param_2)

{
  undefined8 uVar1;
  
  if (*(code **)(this + 0x78) == (code *)0x0) {
    uVar1 = 0xffffff9b;
  }
  else {
    uVar1 = (**(code **)(this + 0x78))(param_1,param_2);
  }
  return uVar1;
}

