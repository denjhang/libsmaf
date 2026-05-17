/* MaAtRmdCnv_Check @ 001b14e4 40B */


/* YAMAHA::MaAtRmdCnv_Check(_MACNV_SEQ_INFO*, _MACNV_CHECK_PARAM*) */

ulong YAMAHA::MaAtRmdCnv_Check(_MACNV_SEQ_INFO *param_1,_MACNV_CHECK_PARAM *param_2)

{
  undefined4 *puVar1;
  
  if ((param_1 != (_MACNV_SEQ_INFO *)0x0) &&
     (puVar1 = *(undefined4 **)(param_1 + 8), param_2 != (_MACNV_CHECK_PARAM *)0x0)) {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = 0;
      return (ulong)(puVar1 == (undefined4 *)0x0);
    }
  }
  return 0xfffffffe;
}

