/* EmuGetDinInfo @ 0012c364 76B */


/* CM7_EmuSmw7App::EmuGetDinInfo(unsigned int) */

undefined8 __thiscall CM7_EmuSmw7App::EmuGetDinInfo(CM7_EmuSmw7App *this,uint param_1)

{
  undefined8 uVar1;
  
  if (((param_1 == 0) && (*(int *)(this + 0x4b8) == 3)) && (*(code **)(this + 0x490) != (code *)0x0)
     ) {
    uVar1 = (**(code **)(this + 0x490))(5,0,0);
    return uVar1;
  }
  return 0xffffffff;
}

