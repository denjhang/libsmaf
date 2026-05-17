/* MapiMelodyLoad @ 00031380 36B */


/* CM7_EmuSmw7App::MapiMelodyLoad(unsigned char*, unsigned int, MAPI_DATATYPE, unsigned char) */

undefined4 __thiscall
CM7_EmuSmw7App::MapiMelodyLoad
          (CM7_EmuSmw7App *this,undefined4 param_1,undefined4 param_2,undefined4 param_4,
          undefined1 param_5)

{
  undefined4 uVar1;
  
  if ((*(int *)(this + 0x230) == 3) && (*(code **)(this + 0x58) != (code *)0x0)) {
    uVar1 = (**(code **)(this + 0x58))(param_1,param_2,param_4,param_5,param_4);
    return uVar1;
  }
  return 0xffffffff;
}

