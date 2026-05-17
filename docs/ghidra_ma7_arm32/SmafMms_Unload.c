/* SmafMms_Unload @ 0009036c 60B */


/* YAMAHA::SmafMms_Unload(int) */

int YAMAHA::SmafMms_Unload(int param_1)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  
  iVar1 = PreMms_Unload(param_1);
  if (iVar1 == -0x65) {
    uVar2 = param_1 & 0xf;
    if (uVar2 < 2) {
      piVar3 = (int *)(DAT_000903a8 + 0x9038e);
      iVar1 = MaSound_Unload(*piVar3,uVar2,(void *)0x0);
      if (-1 < iVar1) {
        piVar3[uVar2 + 3] = 0;
        return iVar1;
      }
    }
    else {
      iVar1 = -1;
    }
  }
  return iVar1;
}

