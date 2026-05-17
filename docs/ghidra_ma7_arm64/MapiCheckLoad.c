/* MapiCheckLoad @ 0012ce88 76B */


/* CM7_EmuSmw7App::MapiCheckLoad(unsigned char*, unsigned int, MAPI_DATATYPE, MAPI_DATAINFO*) */

undefined8 __thiscall
CM7_EmuSmw7App::MapiCheckLoad
          (CM7_EmuSmw7App *this,undefined8 param_1,undefined4 param_2,undefined4 param_4,
          undefined8 param_5)

{
  undefined8 uVar1;
  
  if ((*(int *)(this + 0x4b8) == 3) && (*(code **)(this + 0xd0) != (code *)0x0)) {
    uVar1 = (**(code **)(this + 0xd0))(param_1,param_2,param_4,param_5);
    return uVar1;
  }
  return 0xffffffff;
}

