/* MaSound_DeviceControlEx @ 0012ecd4 28B */


void MaSound_DeviceControlEx(uint param_1,uint param_2,void *param_3)

{
  CM7_EmuSmw7App::MaSoundDeviceControlEx
            ((CM7_EmuSmw7App *)PTR_theApp_005675c8,param_1,param_2,param_3);
  return;
}

