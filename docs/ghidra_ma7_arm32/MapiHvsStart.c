/* MapiHvsStart @ 00031d08 30B */


/* CM7_EmuSmw7App::MapiHvsStart(int, unsigned short) */

undefined4 CM7_EmuSmw7App::MapiHvsStart(int param_1,ushort param_2)

{
  undefined4 uVar1;
  
  if ((*(int *)(param_1 + 0x230) == 3) && (*(code **)(param_1 + 0x114) != (code *)0x0)) {
    uVar1 = (**(code **)(param_1 + 0x114))(param_2);
    return uVar1;
  }
  return 0xffffffff;
}

