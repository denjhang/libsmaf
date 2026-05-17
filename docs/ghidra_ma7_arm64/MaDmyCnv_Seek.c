/* MaDmyCnv_Seek @ 0018b7bc 8B */


/* YAMAHA::MaDmyCnv_Seek(_MACNV_SEQ_INFO*, unsigned int, _MACNV_SEEK_INFO*) */

undefined1  [16]
YAMAHA::MaDmyCnv_Seek(_MACNV_SEQ_INFO *param_1,uint param_2,_MACNV_SEEK_INFO *param_3)

{
  undefined1 auVar1 [16];
  
  auVar1._12_4_ = 0;
  auVar1._8_4_ = param_2;
  auVar1._0_8_ = 0xffffffff;
  return auVar1;
}

