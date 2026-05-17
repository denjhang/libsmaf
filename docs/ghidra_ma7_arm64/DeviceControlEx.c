/* DeviceControlEx @ 00131100 52B */


/* CPreMms::DeviceControlEx(unsigned int, unsigned int, void*) */

undefined8 __thiscall
CPreMms::DeviceControlEx(CPreMms *this,uint param_1,uint param_2,void *param_3)

{
  undefined8 uVar1;
  
  if (*(code **)(this + 0x30) == (code *)0x0) {
    uVar1 = 0xffffff9b;
  }
  else {
    uVar1 = (**(code **)(this + 0x30))(param_1,param_2,param_3);
  }
  return uVar1;
}

