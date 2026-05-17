/* machdep_WriteRegN @ 001786f4 480B */


/* YAMAHA::machdep_WriteRegN(unsigned int, unsigned char const*, unsigned int) */

void YAMAHA::machdep_WriteRegN(uint param_1,uchar *param_2,uint param_3)

{
  uchar *puVar1;
  uchar *puVar2;
  uchar *puVar3;
  ulong uVar4;
  
  if ((param_2 != (uchar *)0x0) && (param_3 != 0)) {
    puVar1 = param_2 + (ulong)(param_3 - 1) + 1;
    machdep_Wait(0x87);
    uVar4 = (ulong)(puVar1 + ~(ulong)param_2) & 7;
    puVar2 = param_2 + 1;
    Ma7emu_WriteReg(param_1,*param_2);
    if (puVar2 != puVar1) {
      puVar3 = puVar2;
      if (uVar4 != 0) {
        if (uVar4 != 1) {
          if (uVar4 != 2) {
            if (uVar4 != 3) {
              if (uVar4 != 4) {
                if (uVar4 != 5) {
                  if (uVar4 != 6) {
                    machdep_Wait(0x87);
                    puVar3 = param_2 + 2;
                    Ma7emu_WriteReg(param_1,*puVar2);
                  }
                  machdep_Wait(0x87);
                  puVar2 = puVar3 + 1;
                  Ma7emu_WriteReg(param_1,*puVar3);
                }
                machdep_Wait(0x87);
                puVar3 = puVar2 + 1;
                Ma7emu_WriteReg(param_1,*puVar2);
              }
              machdep_Wait(0x87);
              puVar2 = puVar3 + 1;
              Ma7emu_WriteReg(param_1,*puVar3);
            }
            machdep_Wait(0x87);
            puVar3 = puVar2 + 1;
            Ma7emu_WriteReg(param_1,*puVar2);
          }
          machdep_Wait(0x87);
          puVar2 = puVar3 + 1;
          Ma7emu_WriteReg(param_1,*puVar3);
        }
        machdep_Wait(0x87);
        Ma7emu_WriteReg(param_1,*puVar2);
        puVar3 = puVar2 + 1;
        if (puVar2 + 1 == puVar1) {
          return;
        }
      }
      do {
        puVar2 = puVar3 + 8;
        machdep_Wait(0x87);
        Ma7emu_WriteReg(param_1,*puVar3);
        machdep_Wait(0x87);
        Ma7emu_WriteReg(param_1,puVar3[1]);
        machdep_Wait(0x87);
        Ma7emu_WriteReg(param_1,puVar3[2]);
        machdep_Wait(0x87);
        Ma7emu_WriteReg(param_1,puVar3[3]);
        machdep_Wait(0x87);
        Ma7emu_WriteReg(param_1,puVar3[4]);
        machdep_Wait(0x87);
        Ma7emu_WriteReg(param_1,puVar3[5]);
        machdep_Wait(0x87);
        Ma7emu_WriteReg(param_1,puVar3[6]);
        machdep_Wait(0x87);
        Ma7emu_WriteReg(param_1,puVar3[7]);
        puVar3 = puVar2;
      } while (puVar2 != puVar1);
    }
  }
  return;
}

