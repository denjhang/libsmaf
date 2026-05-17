/* lset_flt10 @ 000f94e0 284B */


/* YAMAHA::lset_flt10(unsigned short, short*, short*) */

void YAMAHA::lset_flt10(ushort param_1,short *param_2,short *param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  short sVar5;
  short sVar6;
  
  iVar3 = 1;
  iVar1 = -(0xf - ((param_1 & 0x3ff) >> 7) & 0xffff);
  iVar4 = iVar1 + 0xf;
  *param_2 = (short)((param_1 & 0x7f) << 2);
  *param_3 = 1;
  if (iVar1 == -0xf) {
    return;
  }
  uVar2 = iVar1 + 0xeU & 0xf;
  sVar6 = 2;
  sVar5 = 2;
  if (iVar4 != 1) {
    if (uVar2 != 0) {
      if (uVar2 != 1) {
        if (uVar2 != 2) {
          if (uVar2 != 3) {
            if (uVar2 != 4) {
              if (uVar2 != 5) {
                if (uVar2 != 6) {
                  if (uVar2 != 7) {
                    if (uVar2 != 8) {
                      if (uVar2 != 9) {
                        if (uVar2 != 10) {
                          if (uVar2 != 0xb) {
                            if (uVar2 != 0xc) {
                              if (uVar2 != 0xd) {
                                if (uVar2 != 0xe) {
                                  sVar6 = 0;
                                  iVar3 = 2;
                                }
                                iVar3 = iVar3 + 1;
                                sVar6 = sVar6 << 1;
                              }
                              iVar3 = iVar3 + 1;
                              sVar6 = sVar6 << 1;
                            }
                            iVar3 = iVar3 + 1;
                            sVar6 = sVar6 << 1;
                          }
                          iVar3 = iVar3 + 1;
                          sVar6 = sVar6 << 1;
                        }
                        iVar3 = iVar3 + 1;
                        sVar6 = sVar6 << 1;
                      }
                      iVar3 = iVar3 + 1;
                      sVar6 = sVar6 << 1;
                    }
                    iVar3 = iVar3 + 1;
                    sVar6 = sVar6 << 1;
                  }
                  iVar3 = iVar3 + 1;
                  sVar6 = sVar6 << 1;
                }
                iVar3 = iVar3 + 1;
                sVar6 = sVar6 << 1;
              }
              iVar3 = iVar3 + 1;
              sVar6 = sVar6 << 1;
            }
            iVar3 = iVar3 + 1;
            sVar6 = sVar6 << 1;
          }
          iVar3 = iVar3 + 1;
          sVar6 = sVar6 << 1;
        }
        iVar3 = iVar3 + 1;
        sVar6 = sVar6 << 1;
      }
      iVar3 = iVar3 + 1;
      sVar5 = sVar6 << 1;
      if (iVar3 == iVar4) goto LAB_000f95f2;
    }
    do {
      iVar3 = iVar3 + 0x10;
      sVar5 = 0;
    } while (iVar3 != iVar4);
  }
LAB_000f95f2:
  *param_3 = sVar5;
  return;
}

