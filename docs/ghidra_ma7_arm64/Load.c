/* Load @ 001311c0 56B */


/* CPreMms::Load(unsigned char*, unsigned int, unsigned char) */

undefined8 __thiscall CPreMms::Load(CPreMms *this,uchar *param_1,uint param_2,uchar param_3)

{
  undefined8 uVar1;
  
  if (*(code **)(this + 0x38) == (code *)0x0) {
    uVar1 = 0xffffff9b;
  }
  else {
    uVar1 = (**(code **)(this + 0x38))(param_1,param_2,param_3);
  }
  return uVar1;
}

