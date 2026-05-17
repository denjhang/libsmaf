/* MaSound_DeviceControl @ 000323b8 32B */


void MaSound_DeviceControl(uchar param_1,uchar param_2,uchar param_3,uchar param_4)

{
  CM7_EmuSmw7App::MaSoundDeviceControl
            (*(CM7_EmuSmw7App **)(DAT_000323d8 + 0x323c8),param_1,param_2,param_3,param_4);
  return;
}

