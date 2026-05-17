/* EmuGetInfo @ 0012f16c 460B */


/* CM7_EmuSmw7App::EmuGetInfo(unsigned int, unsigned int, void*) */

ulong __thiscall
CM7_EmuSmw7App::EmuGetInfo(CM7_EmuSmw7App *this,uint param_1,uint param_2,void *param_3)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  iVar2 = *(int *)(this + 0x4b8);
  if (iVar2 != 2) {
    switch(param_1) {
    case 0:
      uVar3 = GetDllVersion();
      return uVar3;
    case 1:
      return 0x202065a;
    case 2:
      return 0x23f;
    case 3:
      if (iVar2 != 3) {
        iVar2 = LoadHwLibrary((signed *)this);
        if (iVar2 == 0) {
          if ((*(code **)(this + 0x470) != (code *)0x0) &&
             (iVar2 = (**(code **)(this + 0x470))(0xac44,0,PTR_IntHandler_005671e0), -1 < iVar2)) {
            *(undefined4 *)(this + 0x4e4) = 4;
            if (*(code **)(this + 0x478) != (code *)0x0) {
              (**(code **)(this + 0x478))();
            }
          }
          FreeHwLibrary(this);
        }
        if ((*(int *)(this + 0x4b8) != 3) &&
           (((DAT_00581fa4 != '\x01' && (iVar2 = LoadHwLibrary((signed *)this), iVar2 == 0)) ||
            (iVar2 = LoadHwLibrary((signed *)this), iVar2 == 0)))) {
          *(undefined4 *)(this + 0x4e0) = 1;
          FreeHwLibrary(this);
        }
      }
      return (ulong)(*(uint *)(this + 0x4e4) | *(uint *)(this + 0x4e0));
    case 4:
      if (iVar2 == 3) {
        if (*(code **)(this + 0x490) != (code *)0x0) {
          uVar1 = (**(code **)(this + 0x490))(4,param_2,param_3);
          return (ulong)((uVar1 & 6) << 1 | (int)uVar1 >> 3 & 2U | uVar1 & 1);
        }
        return 0;
      }
      break;
    case 5:
      if ((iVar2 == 3) && (*(code **)(this + 0x490) != (code *)0x0)) {
        uVar3 = (**(code **)(this + 0x490))(0,param_2,param_3);
        return uVar3;
      }
    }
  }
  return 0xffffffff;
}

