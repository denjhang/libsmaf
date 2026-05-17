/* MapiPhraseCheckData @ 0012d558 68B */


/* CM7_EmuSmw7App::MapiPhraseCheckData(unsigned char*, unsigned int) */

undefined8 __thiscall
CM7_EmuSmw7App::MapiPhraseCheckData(CM7_EmuSmw7App *this,uchar *param_1,uint param_2)

{
  undefined8 uVar1;
  
  if ((*(int *)(this + 0x4b8) == 3) && (*(code **)(this + 0x168) != (code *)0x0)) {
    uVar1 = (**(code **)(this + 0x168))(param_1,param_2);
    return uVar1;
  }
  return 0xffffffff;
}

