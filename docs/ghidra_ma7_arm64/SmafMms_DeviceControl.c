/* SmafMms_DeviceControl @ 001b0958 32B */


/* YAMAHA::SmafMms_DeviceControl(unsigned char, unsigned char, unsigned char, unsigned char) */

int YAMAHA::SmafMms_DeviceControl(uchar param_1,uchar param_2,uchar param_3,uchar param_4)

{
  int iVar1;
  
  iVar1 = PreMms_DeviceControl(param_1,param_2,param_3,param_4);
  if (iVar1 == -0x65) {
    iVar1 = -1;
  }
  return iVar1;
}

