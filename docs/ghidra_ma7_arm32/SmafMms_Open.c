/* SmafMms_Open @ 000903ac 60B */


/* YAMAHA::SmafMms_Open(int, SMMS_OPENARG const*) */

int YAMAHA::SmafMms_Open(int param_1,SMMS_OPENARG *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = PreMms_Open(param_1,param_2);
  iVar1 = DAT_000903e8;
  if (iVar2 == -0x65) {
    if ((param_1 & 0xfU) < 2) {
      iVar2 = MaSound_Open(*(int *)(DAT_000903e8 + 0x903d0),param_1 & 0xfU,
                           *(ushort *)(param_2 + 0x10),(void *)0x0);
      if (-1 < iVar2) {
        uVar3 = *(undefined4 *)(param_2 + 8);
        *(undefined4 *)(iVar1 + 0x903d8) = *(undefined4 *)(param_2 + 4);
        *(undefined4 *)(iVar1 + 0x903d4) = uVar3;
        return iVar2;
      }
    }
    else {
      iVar2 = -1;
    }
  }
  return iVar2;
}

