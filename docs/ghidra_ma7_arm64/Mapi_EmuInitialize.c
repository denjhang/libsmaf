/* Mapi_EmuInitialize @ 0012f730 56B */


void Mapi_EmuInitialize(uint param_1,_func_void_int_short_short_short_ptr_short_ptr *param_2,
                       _func_void_int_short_short_tagMAPIWIN_RECT_ptr_tagMAPIWIN_PNT_ptr *param_3,
                       _func_void_int_short_short_tagMAPIWIN_RECT_ptr_tagMAPIWIN_PNT_ptr_ushort_ptr_short_short
                       *param_4,uint param_5)

{
  CM7_EmuSmw7App::EmuInit
            ((uint)PTR_theApp_005675c8,(tagMAPIWIN_CONF *)(ulong)param_1,param_2,param_3,param_4,
             param_5);
  return;
}

