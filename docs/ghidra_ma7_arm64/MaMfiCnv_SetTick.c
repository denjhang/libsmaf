/* MaMfiCnv_SetTick @ 001c20e8 72B */


/* YAMAHA::MaMfiCnv_SetTick(_MACNV_SEQ_INFO*, unsigned int) */

undefined8 YAMAHA::MaMfiCnv_SetTick(_MACNV_SEQ_INFO *param_1,uint param_2)

{
  uint uVar1;
  char *pcVar2;
  
  if (((param_1 != (_MACNV_SEQ_INFO *)0x0) && (pcVar2 = *(char **)(param_1 + 8), param_2 != 0)) &&
     (pcVar2 != (char *)0x0)) {
    if (*pcVar2 == '\x01') {
      *(uint *)(pcVar2 + 0x1cc) = param_2;
      uVar1 = 0;
      if (param_2 != 0) {
        uVar1 = 0x400 / param_2;
      }
      *(uint *)(pcVar2 + 0x1d0) = uVar1;
      return 0;
    }
    return 0xffffffff;
  }
  return 0xfffffffe;
}

