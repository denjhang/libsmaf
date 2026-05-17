/* MaSound_DeviceControlEx @ 000323f4 24B */


void MaSound_DeviceControlEx(uint param_1,uint param_2,void *param_3)

{
  CM7_EmuSmw7App::MaSoundDeviceControlEx
            (*(CM7_EmuSmw7App **)(DAT_0003240c + 0x32406),param_1,param_2,param_3);
  return;
}

