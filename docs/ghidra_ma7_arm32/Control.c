/* Control @ 00033ec4 22B */


/* CPreMms::Control(int, unsigned int, void*) */

undefined4 __thiscall CPreMms::Control(CPreMms *this,int param_1,uint param_2,void *param_3)

{
  undefined4 uVar1;
  
  if (*(code **)(this + 0x40) != (code *)0x0) {
    uVar1 = (**(code **)(this + 0x40))(param_1,param_2,param_3);
    return uVar1;
  }
  return 0xffffff9b;
}

