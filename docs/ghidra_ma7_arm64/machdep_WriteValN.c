/* machdep_WriteValN @ 001788d4 492B */


/* YAMAHA::machdep_WriteValN(unsigned int, unsigned char, unsigned int) */

void YAMAHA::machdep_WriteValN(uint param_1,uchar param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  
  if (param_3 != 0) {
    machdep_Wait(0x87);
    uVar2 = 1;
    uVar1 = param_3 - 1 & 7;
    Ma7emu_WriteReg(param_1,param_2);
    if (param_3 != 1) {
      if (uVar1 != 0) {
        if (uVar1 != 1) {
          if (uVar1 != 2) {
            if (uVar1 != 3) {
              if (uVar1 != 4) {
                if (uVar1 != 5) {
                  if (uVar1 != 6) {
                    uVar2 = 2;
                    machdep_Wait(0x87);
                    Ma7emu_WriteReg(param_1,param_2);
                  }
                  uVar2 = uVar2 + 1;
                  machdep_Wait(0x87);
                  Ma7emu_WriteReg(param_1,param_2);
                }
                uVar2 = uVar2 + 1;
                machdep_Wait(0x87);
                Ma7emu_WriteReg(param_1,param_2);
              }
              uVar2 = uVar2 + 1;
              machdep_Wait(0x87);
              Ma7emu_WriteReg(param_1,param_2);
            }
            uVar2 = uVar2 + 1;
            machdep_Wait(0x87);
            Ma7emu_WriteReg(param_1,param_2);
          }
          uVar2 = uVar2 + 1;
          machdep_Wait(0x87);
          Ma7emu_WriteReg(param_1,param_2);
        }
        uVar2 = uVar2 + 1;
        machdep_Wait(0x87);
        Ma7emu_WriteReg(param_1,param_2);
        if (uVar2 == param_3) {
          return;
        }
      }
      do {
        uVar2 = uVar2 + 8;
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
      } while (uVar2 != param_3);
    }
  }
  return;
}

