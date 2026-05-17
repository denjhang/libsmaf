/* Load @ 00033d44 22B */


/* CPreMms::Load(unsigned char*, unsigned int, unsigned char) */

undefined4 __thiscall CPreMms::Load(CPreMms *this,uchar *param_1,uint param_2,uchar param_3)

{
  undefined4 uVar1;
  
  if (*(code **)(this + 0x1c) != (code *)0x0) {
    uVar1 = (**(code **)(this + 0x1c))(param_1,param_2,param_3);
    return uVar1;
  }
  return 0xffffff9b;
}

