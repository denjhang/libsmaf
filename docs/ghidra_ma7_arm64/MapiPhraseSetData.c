/* MapiPhraseSetData @ 0012d5b0 76B */


/* CM7_EmuSmw7App::MapiPhraseSetData(int, unsigned char*, unsigned int, int) */

undefined8 __thiscall
CM7_EmuSmw7App::MapiPhraseSetData
          (CM7_EmuSmw7App *this,int param_1,uchar *param_2,uint param_3,int param_4)

{
  undefined8 uVar1;
  
  if ((*(int *)(this + 0x4b8) == 3) && (*(code **)(this + 0x170) != (code *)0x0)) {
    uVar1 = (**(code **)(this + 0x170))(param_1,param_2,param_3,param_4);
    return uVar1;
  }
  return 0xffffffff;
}

