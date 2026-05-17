/* PreMms_winSystemStart @ 00033c60 36B */


/* PreMms_winSystemStart(tagSMMSWIN_CONF*, void (*)(int, short, short, short*, short*), void
   (*)(int, short, short, tagSMMSWIN_RECT*, tagSMMSWIN_PNT*), void (*)(int, short, short,
   tagSMMSWIN_RECT*, tagSMMSWIN_PNT*, unsigned short*, short, short), char*) */

void PreMms_winSystemStart
               (tagSMMSWIN_CONF *param_1,_func_void_int_short_short_short_ptr_short_ptr *param_2,
               _func_void_int_short_short_tagSMMSWIN_RECT_ptr_tagSMMSWIN_PNT_ptr *param_3,
               _func_void_int_short_short_tagSMMSWIN_RECT_ptr_tagSMMSWIN_PNT_ptr_ushort_ptr_short_short
               *param_4,char *param_5)

{
  CPreMms::SystemStart
            (*(CPreMms **)(DAT_00033c84 + 0x33c70),param_1,param_2,param_3,param_4,param_5);
  return;
}

