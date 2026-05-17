/* machdep_WriteRegN @ 0006684c 334B */


/* YAMAHA::machdep_WriteRegN(unsigned int, unsigned char const*, unsigned int) */

void YAMAHA::machdep_WriteRegN(uint param_1,uchar *param_2,uint param_3)

{
  uchar *puVar1;
  uchar *puVar2;
  uint uVar3;
  uchar *puVar4;
  
  if ((param_2 != (uchar *)0x0) && (param_3 != 0)) {
    puVar4 = param_2 + param_3;
    machdep_Wait(0x87);
    puVar1 = param_2 + 1;
    Ma7emu_WriteReg(param_1,*param_2);
    uVar3 = (uint)(puVar4 + ~(uint)param_2) & 7;
    if (puVar1 == puVar4) {
      return;
    }
    puVar2 = puVar1;
    if (uVar3 != 0) {
      if (uVar3 != 1) {
        if (uVar3 != 2) {
          if (uVar3 != 3) {
            if (uVar3 != 4) {
              if (uVar3 != 5) {
                if (uVar3 != 6) {
                  machdep_Wait(0x87);
                  puVar2 = param_2 + 2;
                  Ma7emu_WriteReg(param_1,*puVar1);
                }
                machdep_Wait(0x87);
                puVar1 = puVar2 + 1;
                Ma7emu_WriteReg(param_1,*puVar2);
              }
              machdep_Wait(0x87);
              puVar2 = puVar1 + 1;
              Ma7emu_WriteReg(param_1,*puVar1);
            }
            machdep_Wait(0x87);
            puVar1 = puVar2 + 1;
            Ma7emu_WriteReg(param_1,*puVar2);
          }
          machdep_Wait(0x87);
          puVar2 = puVar1 + 1;
          Ma7emu_WriteReg(param_1,*puVar1);
        }
        machdep_Wait(0x87);
        puVar1 = puVar2 + 1;
        Ma7emu_WriteReg(param_1,*puVar2);
      }
      machdep_Wait(0x87);
      Ma7emu_WriteReg(param_1,*puVar1);
      puVar2 = puVar1 + 1;
      if (puVar1 + 1 == puVar4) {
        return;
      }
    }
    do {
      machdep_Wait(0x87);
      puVar1 = puVar2 + 8;
      Ma7emu_WriteReg(param_1,*puVar2);
      machdep_Wait(0x87);
      Ma7emu_WriteReg(param_1,puVar2[1]);
      machdep_Wait(0x87);
      Ma7emu_WriteReg(param_1,puVar2[2]);
      machdep_Wait(0x87);
      Ma7emu_WriteReg(param_1,puVar2[3]);
      machdep_Wait(0x87);
      Ma7emu_WriteReg(param_1,puVar2[4]);
      machdep_Wait(0x87);
      Ma7emu_WriteReg(param_1,puVar2[5]);
      machdep_Wait(0x87);
      Ma7emu_WriteReg(param_1,puVar2[6]);
      machdep_Wait(0x87);
      Ma7emu_WriteReg(param_1,puVar2[7]);
      puVar2 = puVar1;
    } while (puVar1 != puVar4);
  }
  return;
}

