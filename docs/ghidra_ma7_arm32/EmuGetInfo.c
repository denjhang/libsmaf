/* EmuGetInfo @ 00032714 282B */


/* CM7_EmuSmw7App::EmuGetInfo(unsigned int, unsigned int, void*) */

uint __thiscall
CM7_EmuSmw7App::EmuGetInfo(CM7_EmuSmw7App *this,uint param_1,uint param_2,void *param_3)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)(this + 0x230);
  if (iVar1 != 2) {
    switch(param_1) {
    case 0:
      uVar2 = GetDllVersion();
      return uVar2;
    case 1:
      return 0x202065a;
    case 2:
      return 0x23f;
    case 3:
      if (iVar1 != 3) {
        iVar1 = LoadHwLibrary((signed *)this);
        if (iVar1 == 0) {
          if ((*(code **)(this + 0x20c) != (code *)0x0) &&
             (iVar1 = (**(code **)(this + 0x20c))(0xac44,0,*(undefined4 *)(DAT_00032838 + 0x3276c)),
             -1 < iVar1)) {
            *(undefined4 *)(this + 0x24c) = 4;
            if (*(code **)(this + 0x210) != (code *)0x0) {
              (**(code **)(this + 0x210))();
            }
          }
          FreeHwLibrary(this);
        }
        if (*(int *)(this + 0x230) != 3) {
          if (*(char *)(DAT_0003283c + 0x32aa2) == '\x01') {
            iVar1 = LoadHwLibrary((signed *)this);
            if (iVar1 == 0) {
              *(undefined4 *)(this + 0x248) = 1;
              FreeHwLibrary(this);
            }
          }
          else {
            iVar1 = LoadHwLibrary((signed *)this);
            if ((iVar1 == 0) || (iVar1 = LoadHwLibrary((signed *)this), iVar1 == 0)) {
              *(undefined4 *)(this + 0x248) = 1;
              FreeHwLibrary(this);
            }
          }
        }
      }
      return *(uint *)(this + 0x24c) | *(uint *)(this + 0x248);
    case 4:
      if (iVar1 == 3) {
        if (*(code **)(this + 0x21c) == (code *)0x0) {
          return 0;
        }
        uVar2 = (**(code **)(this + 0x21c))(4,param_2,param_3);
        return (uVar2 & 6) << 1 | (int)uVar2 >> 3 & 2U | uVar2 & 1;
      }
      break;
    case 5:
      if ((iVar1 == 3) && (*(code **)(this + 0x21c) != (code *)0x0)) {
        uVar2 = (**(code **)(this + 0x21c))(0,param_2,param_3);
        return uVar2;
      }
    }
  }
  return 0xffffffff;
}

