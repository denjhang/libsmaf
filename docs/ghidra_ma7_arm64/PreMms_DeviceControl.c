/* PreMms_DeviceControl @ 001310d8 40B */


/* PreMms_DeviceControl(unsigned char, unsigned char, unsigned char, unsigned char) */

void PreMms_DeviceControl(uchar param_1,uchar param_2,uchar param_3,uchar param_4)

{
  CPreMms::DeviceControl((CPreMms *)PTR_premms_00567818,param_1,param_2,param_3,param_4);
  return;
}

