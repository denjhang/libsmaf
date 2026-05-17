/* machdep_WriteValN @ 0006699c 332B */


/* YAMAHA::machdep_WriteValN(unsigned int, unsigned char, unsigned int) */

void YAMAHA::machdep_WriteValN(uint param_1,uchar param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  
  if (param_3 != 0) {
    uVar2 = param_3 - 1 & 7;
    machdep_Wait(0x87);
    Ma7emu_WriteReg(param_1,param_2);
    uVar1 = 1;
    if (param_3 == 1) {
      return;
    }
    if (uVar2 != 0) {
      if (uVar2 != 1) {
        if (uVar2 != 2) {
          if (uVar2 != 3) {
            if (uVar2 != 4) {
              if (uVar2 != 5) {
                if (uVar2 != 6) {
                  uVar1 = 2;
                  machdep_Wait(0x87);
                  Ma7emu_WriteReg(param_1,param_2);
                }
                uVar1 = uVar1 + 1;
                machdep_Wait(0x87);
                Ma7emu_WriteReg(param_1,param_2);
              }
              uVar1 = uVar1 + 1;
              machdep_Wait(0x87);
              Ma7emu_WriteReg(param_1,param_2);
            }
            uVar1 = uVar1 + 1;
            machdep_Wait(0x87);
            Ma7emu_WriteReg(param_1,param_2);
          }
          uVar1 = uVar1 + 1;
          machdep_Wait(0x87);
          Ma7emu_WriteReg(param_1,param_2);
        }
        uVar1 = uVar1 + 1;
        machdep_Wait(0x87);
        Ma7emu_WriteReg(param_1,param_2);
      }
      uVar1 = uVar1 + 1;
      machdep_Wait(0x87);
      Ma7emu_WriteReg(param_1,param_2);
      if (uVar1 == param_3) {
        return;
      }
    }
    do {
      uVar1 = uVar1 + 8;
      machdep_Wait(0x87);
      Ma7emu_WriteReg(param_1,param_2);
      machdep_Wait(0x87);
      Ma7emu_WriteReg(param_1,param_2);
      machdep_Wait(0x87);
      Ma7emu_WriteReg(param_1,param_2);
      machdep_Wait(0x87);
      Ma7emu_WriteReg(param_1,param_2);
      machdep_Wait(0x87);
      Ma7emu_WriteReg(param_1,param_2);
      machdep_Wait(0x87);
      Ma7emu_WriteReg(param_1,param_2);
      machdep_Wait(0x87);
      Ma7emu_WriteReg(param_1,param_2);
      machdep_Wait(0x87);
      Ma7emu_WriteReg(param_1,param_2);
    } while (uVar1 != param_3);
  }
  return;
}

