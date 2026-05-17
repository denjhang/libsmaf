/* SystemStart @ 00033af4 288B */


/* CPreMms::SystemStart(tagSMMSWIN_CONF*, void (*)(int, short, short, short*, short*), void (*)(int,
   short, short, tagSMMSWIN_RECT*, tagSMMSWIN_PNT*), void (*)(int, short, short, tagSMMSWIN_RECT*,
   tagSMMSWIN_PNT*, unsigned short*, short, short), char*) */

undefined4 __thiscall
CPreMms::SystemStart
          (CPreMms *this,tagSMMSWIN_CONF *param_1,
          _func_void_int_short_short_short_ptr_short_ptr *param_2,
          _func_void_int_short_short_tagSMMSWIN_RECT_ptr_tagSMMSWIN_PNT_ptr *param_3,
          _func_void_int_short_short_tagSMMSWIN_RECT_ptr_tagSMMSWIN_PNT_ptr_ushort_ptr_short_short
          *param_4,char *param_5)

{
  undefined4 uVar1;
  void *pvVar2;
  char *pcVar3;
  
  if (*(int *)this == 0) {
    pvVar2 = (void *)LoadLibraryEx(param_5,(my_event_t *)0x0,8);
    *(void **)this = pvVar2;
    if (pvVar2 == (void *)0x0) {
      return 0xffffff9c;
    }
    uVar1 = GetProcAddress(pvVar2,(char *)(DAT_00033c14 + 0x33b2e));
    pcVar3 = (char *)(DAT_00033c18 + 0x33b36);
    *(undefined4 *)(this + 4) = uVar1;
    uVar1 = GetProcAddress(*(void **)this,pcVar3);
    pcVar3 = (char *)(DAT_00033c1c + 0x33b42);
    *(undefined4 *)(this + 8) = uVar1;
    uVar1 = GetProcAddress(*(void **)this,pcVar3);
    pcVar3 = (char *)(DAT_00033c20 + 0x33b4e);
    *(undefined4 *)(this + 0xc) = uVar1;
    uVar1 = GetProcAddress(*(void **)this,pcVar3);
    pcVar3 = (char *)(DAT_00033c24 + 0x33b5a);
    *(undefined4 *)(this + 0x10) = uVar1;
    uVar1 = GetProcAddress(*(void **)this,pcVar3);
    pcVar3 = (char *)(DAT_00033c28 + 0x33b66);
    *(undefined4 *)(this + 0x14) = uVar1;
    uVar1 = GetProcAddress(*(void **)this,pcVar3);
    pcVar3 = (char *)(DAT_00033c2c + 0x33b72);
    *(undefined4 *)(this + 0x18) = uVar1;
    uVar1 = GetProcAddress(*(void **)this,pcVar3);
    pcVar3 = (char *)(DAT_00033c30 + 0x33b7e);
    *(undefined4 *)(this + 0x1c) = uVar1;
    uVar1 = GetProcAddress(*(void **)this,pcVar3);
    pcVar3 = (char *)(DAT_00033c34 + 0x33b8a);
    *(undefined4 *)(this + 0x20) = uVar1;
    uVar1 = GetProcAddress(*(void **)this,pcVar3);
    pcVar3 = (char *)(DAT_00033c38 + 0x33b96);
    *(undefined4 *)(this + 0x24) = uVar1;
    uVar1 = GetProcAddress(*(void **)this,pcVar3);
    pcVar3 = (char *)(DAT_00033c3c + 0x33ba2);
    *(undefined4 *)(this + 0x28) = uVar1;
    uVar1 = GetProcAddress(*(void **)this,pcVar3);
    pcVar3 = (char *)(DAT_00033c40 + 0x33bae);
    *(undefined4 *)(this + 0x2c) = uVar1;
    uVar1 = GetProcAddress(*(void **)this,pcVar3);
    pcVar3 = (char *)(DAT_00033c44 + 0x33bba);
    *(undefined4 *)(this + 0x30) = uVar1;
    uVar1 = GetProcAddress(*(void **)this,pcVar3);
    pcVar3 = (char *)(DAT_00033c48 + 0x33bc6);
    *(undefined4 *)(this + 0x34) = uVar1;
    uVar1 = GetProcAddress(*(void **)this,pcVar3);
    pcVar3 = (char *)(DAT_00033c4c + 0x33bd2);
    *(undefined4 *)(this + 0x38) = uVar1;
    uVar1 = GetProcAddress(*(void **)this,pcVar3);
    pcVar3 = (char *)(DAT_00033c50 + 0x33bde);
    *(undefined4 *)(this + 0x3c) = uVar1;
    uVar1 = GetProcAddress(*(void **)this,pcVar3);
    pcVar3 = (char *)(DAT_00033c54 + 0x33bea);
    *(undefined4 *)(this + 0x40) = uVar1;
    uVar1 = GetProcAddress(*(void **)this,pcVar3);
    pcVar3 = (char *)(DAT_00033c58 + 0x33bf6);
    *(undefined4 *)(this + 0x44) = uVar1;
    uVar1 = GetProcAddress(*(void **)this,pcVar3);
    pcVar3 = (char *)(DAT_00033c5c + 0x33c02);
    *(undefined4 *)(this + 0x48) = uVar1;
    uVar1 = GetProcAddress(*(void **)this,pcVar3);
    *(undefined4 *)(this + 0x4c) = uVar1;
  }
  uVar1 = 0xffffff9b;
  if (*(code **)(this + 4) != (code *)0x0) {
    uVar1 = (**(code **)(this + 4))(param_1,param_2,param_3,param_4);
  }
  return uVar1;
}

