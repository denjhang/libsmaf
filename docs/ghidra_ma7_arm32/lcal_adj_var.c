/* lcal_adj_var @ 0010087c 58B */


/* YAMAHA::lcal_adj_var(short) */

int YAMAHA::lcal_adj_var(short param_1)

{
  short sVar1;
  int iVar3;
  uint uVar2;
  
  iVar3 = *(int *)(DAT_001008b8 + 0x100884);
  uVar2 = ((int)param_1 *
           (uint)*(byte *)(*(int *)(DAT_001008bc + 0x10088e) +
                          (uint)*(byte *)(iVar3 + 9) * 0xf + *(int *)(iVar3 + 0xc)) & 0x3fffff) >> 6
  ;
  sVar1 = (short)uVar2;
  if ((1 < *(ushort *)(iVar3 + 0x318)) && (uVar2 == 0)) {
    sVar1 = 1;
  }
  return (int)sVar1;
}

