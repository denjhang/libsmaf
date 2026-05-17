/* MaAtRmdCnv_Open @ 000908fc 48B */


/* YAMAHA::MaAtRmdCnv_Open(_MACNV_SEQ_INFO*, _MACNV_OPEN_PARAM*) */

undefined4 YAMAHA::MaAtRmdCnv_Open(_MACNV_SEQ_INFO *param_1,_MACNV_OPEN_PARAM *param_2)

{
  if ((param_1 != (_MACNV_SEQ_INFO *)0x0) && (*(undefined4 **)(param_1 + 4) != (undefined4 *)0x0)) {
    **(undefined4 **)(param_1 + 4) = 1;
    if (-1 < *(int *)param_2) {
      *(undefined1 *)(*(int *)(DAT_0009092c + 0x90916) + 2) = 0;
      return 0;
    }
    *(undefined1 *)(*(int *)(DAT_00090930 + 0x90922) + 2) = 1;
    return 0;
  }
  return 0xfffffffe;
}

