/* Mapi_EmuInitialize @ 00032b54 40B */


void Mapi_EmuInitialize(tagMAPIWIN_CONF *param_1,
                       _func_void_int_short_short_short_ptr_short_ptr *param_2,
                       _func_void_int_short_short_tagMAPIWIN_RECT_ptr_tagMAPIWIN_PNT_ptr *param_3,
                       _func_void_int_short_short_tagMAPIWIN_RECT_ptr_tagMAPIWIN_PNT_ptr_ushort_ptr_short_short
                       *param_4,uint param_5)

{
  CM7_EmuSmw7App::EmuInit(*(uint *)(DAT_00032b7c + 0x32b66),param_1,param_2,param_3,param_4,param_5)
  ;
  return;
}

