/* MapiMelodyLoad @ 0012d138 80B */


/* CM7_EmuSmw7App::MapiMelodyLoad(unsigned char*, unsigned int, MAPI_DATATYPE, unsigned char) */

undefined8 __thiscall
CM7_EmuSmw7App::MapiMelodyLoad
          (CM7_EmuSmw7App *this,undefined8 param_1,undefined4 param_2,undefined4 param_4,
          undefined1 param_5)

{
  undefined8 uVar1;
  
  if ((*(int *)(this + 0x4b8) == 3) && (*(code **)(this + 0x108) != (code *)0x0)) {
    uVar1 = (**(code **)(this + 0x108))(param_1,param_2,param_4,param_5);
    return uVar1;
  }
  return 0xffffffff;
}

