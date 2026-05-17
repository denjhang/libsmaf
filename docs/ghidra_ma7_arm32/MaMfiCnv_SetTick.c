/* MaMfiCnv_SetTick @ 0009f954 50B */


/* YAMAHA::MaMfiCnv_SetTick(_MACNV_SEQ_INFO*, unsigned int) */

undefined4 YAMAHA::MaMfiCnv_SetTick(_MACNV_SEQ_INFO *param_1,uint param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char *pcVar3;
  
  if (((param_1 == (_MACNV_SEQ_INFO *)0x0) ||
      (pcVar3 = *(char **)(param_1 + 4), pcVar3 == (char *)0x0)) || (param_2 == 0)) {
    uVar2 = 0xfffffffe;
  }
  else if (*pcVar3 == '\x01') {
    *(uint *)(pcVar3 + 0x1c8) = param_2;
    uVar1 = __udivsi3(0x400);
    uVar2 = 0;
    *(undefined4 *)(pcVar3 + 0x1cc) = uVar1;
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

