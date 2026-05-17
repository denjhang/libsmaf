/* MapiRecStart @ 0012eb38 64B */


/* CM7_EmuSmw7App::MapiRecStart(int) */

undefined8 __thiscall CM7_EmuSmw7App::MapiRecStart(CM7_EmuSmw7App *this,int param_1)

{
  undefined8 uVar1;
  
  if ((*(int *)(this + 0x4b8) == 3) && (*(code **)(this + 0x368) != (code *)0x0)) {
    uVar1 = (**(code **)(this + 0x368))(param_1);
    return uVar1;
  }
  return 0xffffffff;
}

