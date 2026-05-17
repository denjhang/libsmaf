/* MapiCheckLoad @ 000311ec 32B */


/* CM7_EmuSmw7App::MapiCheckLoad(unsigned char*, unsigned int, MAPI_DATATYPE, MAPI_DATAINFO*) */

undefined4 __thiscall
CM7_EmuSmw7App::MapiCheckLoad
          (CM7_EmuSmw7App *this,undefined4 param_1,undefined4 param_2,undefined4 param_4,
          undefined4 param_5)

{
  undefined4 uVar1;
  
  if ((*(int *)(this + 0x230) == 3) && (*(code **)(this + 0x3c) != (code *)0x0)) {
    uVar1 = (**(code **)(this + 0x3c))(param_1,param_2,param_4,param_5,param_4);
    return uVar1;
  }
  return 0xffffffff;
}

