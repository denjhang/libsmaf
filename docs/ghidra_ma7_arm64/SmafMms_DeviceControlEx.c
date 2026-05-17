/* SmafMms_DeviceControlEx @ 001b0978 32B */


/* YAMAHA::SmafMms_DeviceControlEx(unsigned int, unsigned int, void*) */

int YAMAHA::SmafMms_DeviceControlEx(uint param_1,uint param_2,void *param_3)

{
  int iVar1;
  
  iVar1 = PreMms_DeviceControlEx(param_1,param_2,param_3);
  if (iVar1 == -0x65) {
    iVar1 = -1;
  }
  return iVar1;
}

