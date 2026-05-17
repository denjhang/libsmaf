/* MaJtsCnv_GetResInfo @ 001b8ff4 36B */


/* YAMAHA::MaJtsCnv_GetResInfo(_MACNV_SEQ_INFO*) */

int YAMAHA::MaJtsCnv_GetResInfo(_MACNV_SEQ_INFO *param_1)

{
  if ((param_1 != (_MACNV_SEQ_INFO *)0x0) && (*(int **)(param_1 + 8) != (int *)0x0)) {
    return -(uint)(**(int **)(param_1 + 8) != 1);
  }
  return -2;
}

