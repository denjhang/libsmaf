/* SetMode @ 00047a80 44B */


/* ARM::CDinSynth::SetMode(unsigned int, unsigned int, unsigned int) */

void __thiscall ARM::CDinSynth::SetMode(CDinSynth *this,uint param_1,uint param_2,uint param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1 < 2) {
    iVar2 = *(int *)(DAT_00047aac + 0x47a94 + (param_3 & 0xf) * 4);
    *(int *)(this + param_1 * 0xc4 + 0x10) = iVar2;
    uVar1 = __udivsi3(iVar2 << 0x10,*(undefined4 *)(this + 400));
    *(undefined4 *)(this + param_1 * 0xc4 + 0x80) = uVar1;
  }
  return;
}

