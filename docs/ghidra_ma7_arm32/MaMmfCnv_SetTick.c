/* MaMmfCnv_SetTick @ 000b8284 58B */


/* YAMAHA::MaMmfCnv_SetTick(_MACNV_SEQ_INFO*, unsigned int) */

undefined4 YAMAHA::MaMmfCnv_SetTick(_MACNV_SEQ_INFO *param_1,uint param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if ((param_1 == (_MACNV_SEQ_INFO *)0x0) || (iVar2 = *(int *)(param_1 + 4), iVar2 == 0)) {
    uVar1 = 0xfffffffe;
  }
  else if (*(char *)(iVar2 + 8) == '\x02') {
    if (param_2 < *(uint *)(iVar2 + 0x24)) {
      uVar1 = __udivsi3();
      *(undefined4 *)(iVar2 + 0xc30) = uVar1;
      return 0;
    }
    if (*(uint *)(iVar2 + 0x24) < param_2) {
      uVar1 = 0xffffffff;
    }
    else {
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

