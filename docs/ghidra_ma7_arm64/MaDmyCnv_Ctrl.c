/* MaDmyCnv_Ctrl @ 0018b7c4 8B */


/* YAMAHA::MaDmyCnv_Ctrl(_MACNV_SEQ_INFO*, unsigned int, unsigned int, void*) */

undefined1  [16]
YAMAHA::MaDmyCnv_Ctrl(_MACNV_SEQ_INFO *param_1,uint param_2,uint param_3,void *param_4)

{
  undefined1 auVar1 [16];
  
  auVar1._12_4_ = 0;
  auVar1._8_4_ = param_2;
  auVar1._0_8_ = 0xffffffff;
  return auVar1;
}

