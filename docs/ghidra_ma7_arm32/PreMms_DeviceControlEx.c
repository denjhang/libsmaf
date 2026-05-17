/* PreMms_DeviceControlEx @ 00033ce0 24B */


/* PreMms_DeviceControlEx(unsigned int, unsigned int, void*) */

void PreMms_DeviceControlEx(uint param_1,uint param_2,void *param_3)

{
  CPreMms::DeviceControlEx(*(CPreMms **)(DAT_00033cf8 + 0x33cf2),param_1,param_2,param_3);
  return;
}

