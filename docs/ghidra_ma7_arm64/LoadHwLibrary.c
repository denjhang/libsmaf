/* LoadHwLibrary @ 0012c9b0 152B */


/* CM7_EmuSmw7App::LoadHwLibrary(signed char*) */

undefined8 CM7_EmuSmw7App::LoadHwLibrary(signed *param_1)

{
  *(undefined **)(param_1 + 0x470) = PTR_Hw_Initialize_00567980;
  *(undefined **)(param_1 + 0x478) = PTR_Hw_Terminate_00567e00;
  *(undefined **)(param_1 + 0x480) = PTR_Hw_Generate_00567858;
  *(undefined **)(param_1 + 0x488) = PTR_Hw_GenerateEx_00567e18;
  *(undefined **)(param_1 + 0x490) = PTR_Hw_GetInfo_00567d10;
  *(undefined **)(param_1 + 0x498) = PTR_Hw_SetInfo_00567568;
  *(undefined **)(param_1 + 0x4a0) = PTR_Hw_WriteReg_00567fc8;
  *(undefined **)(param_1 + 0x4a8) = PTR_Hw_ReadReg_005671d0;
  *(undefined **)(param_1 + 0x4b0) = PTR_DllMain_00567c18;
  DllMain(0,1,0);
  return 0;
}

