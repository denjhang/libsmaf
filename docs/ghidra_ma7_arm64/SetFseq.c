/* SetFseq @ 0014869c 36B */


/* ARM::CCsmSynth::SetFseq(ARM::_tagCsmHmt) */

void __thiscall ARM::CCsmSynth::SetFseq(CCsmSynth *this,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar3 = param_2[1];
  uVar1 = param_2[2];
  uVar4 = param_2[3];
  uVar2 = param_2[4];
  uVar5 = param_2[5];
  *(undefined8 *)(this + 0x1818) = *param_2;
  *(undefined8 *)(this + 0x1820) = uVar3;
  *(undefined8 *)(this + 0x1828) = uVar1;
  *(undefined8 *)(this + 0x1830) = uVar4;
  *(undefined8 *)(this + 0x1838) = uVar2;
  *(undefined8 *)(this + 0x1840) = uVar5;
  return;
}

