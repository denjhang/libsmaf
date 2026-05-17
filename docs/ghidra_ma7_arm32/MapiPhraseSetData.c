/* MapiPhraseSetData @ 00031620 34B */


/* CM7_EmuSmw7App::MapiPhraseSetData(int, unsigned char*, unsigned int, int) */

undefined4 __thiscall
CM7_EmuSmw7App::MapiPhraseSetData
          (CM7_EmuSmw7App *this,int param_1,uchar *param_2,uint param_3,int param_4)

{
  undefined4 uVar1;
  
  if ((*(int *)(this + 0x230) == 3) && (*(code **)(this + 0x8c) != (code *)0x0)) {
    uVar1 = (**(code **)(this + 0x8c))(param_1,param_2,param_3,param_4,param_3);
    return uVar1;
  }
  return 0xffffffff;
}

