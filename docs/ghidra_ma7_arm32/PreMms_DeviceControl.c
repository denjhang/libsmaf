/* PreMms_DeviceControl @ 00033ca4 32B */


/* PreMms_DeviceControl(unsigned char, unsigned char, unsigned char, unsigned char) */

void PreMms_DeviceControl(uchar param_1,uchar param_2,uchar param_3,uchar param_4)

{
  CPreMms::DeviceControl(*(CPreMms **)(DAT_00033cc4 + 0x33cb4),param_1,param_2,param_3,param_4);
  return;
}

