/* EmuGenerateApi @ 00030320 14B */


/* CM7_EmuSmw7App::EmuGenerateApi(MAPI_BUFFER7*, unsigned int) */

undefined4 __thiscall
CM7_EmuSmw7App::EmuGenerateApi(CM7_EmuSmw7App *this,MAPI_BUFFER7 *param_1,uint param_2)

{
  undefined4 uVar1;
  
  if (this[8] == (CM7_EmuSmw7App)0x0) {
    uVar1 = EmuGenerate(this,param_1,param_2);
    return uVar1;
  }
  return 0xffffffff;
}

