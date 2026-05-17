/* MaRmdCnv_Conv @ 001fc388 40B */


/* YAMAHA::MaRmdCnv_Conv(_MACNV_SEQ_INFO*, _MASND_CMD_PARAM*) */

int YAMAHA::MaRmdCnv_Conv(_MACNV_SEQ_INFO *param_1,_MASND_CMD_PARAM *param_2)

{
  if (((param_1 != (_MACNV_SEQ_INFO *)0x0) && (param_2 != (_MASND_CMD_PARAM *)0x0)) &&
     (*(int **)(param_1 + 8) != (int *)0x0)) {
    return -(uint)(**(int **)(param_1 + 8) != 1);
  }
  return -2;
}

