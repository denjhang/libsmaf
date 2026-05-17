/* MaMmfCnv_SetTick @ 001ede78 76B */


/* YAMAHA::MaMmfCnv_SetTick(_MACNV_SEQ_INFO*, unsigned int) */

int YAMAHA::MaMmfCnv_SetTick(_MACNV_SEQ_INFO *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  
  if ((param_1 == (_MACNV_SEQ_INFO *)0x0) || (lVar3 = *(long *)(param_1 + 8), lVar3 == 0)) {
    return -2;
  }
  if (*(char *)(lVar3 + 0xc) != '\x02') {
    return -1;
  }
  uVar1 = *(uint *)(lVar3 + 0x2c);
  if (uVar1 <= param_2) {
    return -(uint)(uVar1 < param_2);
  }
  uVar2 = 0;
  if (param_2 != 0) {
    uVar2 = uVar1 / param_2;
  }
  *(uint *)(lVar3 + 0xdfc) = uVar2;
  return 0;
}

