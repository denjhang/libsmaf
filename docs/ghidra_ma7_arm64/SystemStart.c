/* SystemStart @ 00130e68 520B */


/* CPreMms::SystemStart(tagSMMSWIN_CONF*, void (*)(int, short, short, short*, short*), void (*)(int,
   short, short, tagSMMSWIN_RECT*, tagSMMSWIN_PNT*), void (*)(int, short, short, tagSMMSWIN_RECT*,
   tagSMMSWIN_PNT*, unsigned short*, short, short), char*) */

undefined8 __thiscall
CPreMms::SystemStart
          (CPreMms *this,tagSMMSWIN_CONF *param_1,
          _func_void_int_short_short_short_ptr_short_ptr *param_2,
          _func_void_int_short_short_tagSMMSWIN_RECT_ptr_tagSMMSWIN_PNT_ptr *param_3,
          _func_void_int_short_short_tagSMMSWIN_RECT_ptr_tagSMMSWIN_PNT_ptr_ushort_ptr_short_short
          *param_4,char *param_5)

{
  undefined8 uVar1;
  void *pvVar2;
  
  if (*(long *)this == 0) {
    pvVar2 = (void *)LoadLibraryEx(param_5,(my_event_t *)0x0,8);
    *(void **)this = pvVar2;
    if (pvVar2 == (void *)0x0) {
      return 0xffffff9c;
    }
    uVar1 = GetProcAddress(pvVar2,"winSmafMms_SystemStart");
    *(undefined8 *)(this + 8) = uVar1;
    uVar1 = GetProcAddress(*(void **)this,"winSmafMms_SystemStop");
    *(undefined8 *)(this + 0x10) = uVar1;
    uVar1 = GetProcAddress(*(void **)this,"SmafMms_Initialize");
    *(undefined8 *)(this + 0x18) = uVar1;
    uVar1 = GetProcAddress(*(void **)this,"SmafMms_Terminate");
    *(undefined8 *)(this + 0x20) = uVar1;
    uVar1 = GetProcAddress(*(void **)this,"SmafMms_DeviceControl");
    *(undefined8 *)(this + 0x28) = uVar1;
    uVar1 = GetProcAddress(*(void **)this,"SmafMms_DeviceControlEx");
    *(undefined8 *)(this + 0x30) = uVar1;
    uVar1 = GetProcAddress(*(void **)this,"SmafMms_Load");
    *(undefined8 *)(this + 0x38) = uVar1;
    uVar1 = GetProcAddress(*(void **)this,"SmafMms_Unload");
    *(undefined8 *)(this + 0x40) = uVar1;
    uVar1 = GetProcAddress(*(void **)this,"SmafMms_Open");
    *(undefined8 *)(this + 0x48) = uVar1;
    uVar1 = GetProcAddress(*(void **)this,"SmafMms_Close");
    *(undefined8 *)(this + 0x50) = uVar1;
    uVar1 = GetProcAddress(*(void **)this,"SmafMms_Standby");
    *(undefined8 *)(this + 0x58) = uVar1;
    uVar1 = GetProcAddress(*(void **)this,"SmafMms_Seek");
    *(undefined8 *)(this + 0x60) = uVar1;
    uVar1 = GetProcAddress(*(void **)this,"SmafMms_Start");
    *(undefined8 *)(this + 0x68) = uVar1;
    uVar1 = GetProcAddress(*(void **)this,"SmafMms_Stop");
    *(undefined8 *)(this + 0x70) = uVar1;
    uVar1 = GetProcAddress(*(void **)this,"SmafMms_WaitReady");
    *(undefined8 *)(this + 0x78) = uVar1;
    uVar1 = GetProcAddress(*(void **)this,"SmafMms_Control");
    *(undefined8 *)(this + 0x80) = uVar1;
    uVar1 = GetProcAddress(*(void **)this,"SmafMms_OpenArgInit");
    *(undefined8 *)(this + 0x88) = uVar1;
    uVar1 = GetProcAddress(*(void **)this,"SmafMms_LockMaSoundApi");
    *(undefined8 *)(this + 0x90) = uVar1;
    uVar1 = GetProcAddress(*(void **)this,"SmafMms_UnlockMaSoundApi");
    *(undefined8 *)(this + 0x98) = uVar1;
  }
  if (*(code **)(this + 8) != (code *)0x0) {
    uVar1 = (**(code **)(this + 8))(param_1,param_2,param_3,param_4);
    return uVar1;
  }
  return 0xffffff9b;
}

