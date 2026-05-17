/* MapiPhraseAudioSeek @ 0012ddac 76B */


/* CM7_EmuSmw7App::MapiPhraseAudioSeek(int, unsigned int, unsigned char) */

undefined8 __thiscall
CM7_EmuSmw7App::MapiPhraseAudioSeek(CM7_EmuSmw7App *this,int param_1,uint param_2,uchar param_3)

{
  undefined8 uVar1;
  
  if ((*(int *)(this + 0x4b8) == 3) && (*(code **)(this + 0x230) != (code *)0x0)) {
    uVar1 = (**(code **)(this + 0x230))(param_1,param_2,param_3);
    return uVar1;
  }
  return 0xffffffff;
}

