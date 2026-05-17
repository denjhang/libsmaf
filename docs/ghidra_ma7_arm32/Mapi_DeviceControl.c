/* Mapi_DeviceControl @ 00031320 32B */


void Mapi_DeviceControl(uchar param_1,uchar param_2,uchar param_3,uchar param_4)

{
  CM7_EmuSmw7App::MapiDeviceControl
            (*(CM7_EmuSmw7App **)(DAT_00031340 + 0x31330),param_1,param_2,param_3,param_4);
  return;
}

