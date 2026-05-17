/* Control @ 00131420 52B */


/* CPreMms::Control(int, unsigned int, void*) */

undefined8 __thiscall CPreMms::Control(CPreMms *this,int param_1,uint param_2,void *param_3)

{
  undefined8 uVar1;
  
  if (*(code **)(this + 0x80) == (code *)0x0) {
    uVar1 = 0xffffff9b;
  }
  else {
    uVar1 = (**(code **)(this + 0x80))(param_1,param_2,param_3);
  }
  return uVar1;
}

