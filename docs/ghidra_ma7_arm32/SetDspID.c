/* SetDspID @ 00049078 168B */


/* ARM::CDsp::SetDspID(unsigned int, unsigned int, unsigned int) */

void __thiscall ARM::CDsp::SetDspID(CDsp *this,uint param_1,uint param_2,uint param_3)

{
  critical_section *pcVar1;
  CDsp *pCVar2;
  
  pcVar1 = (critical_section *)(this + 0x3bf700);
  EnterCriticalSection(pcVar1);
  if (param_1 < 2) {
    pCVar2 = this + 0x3a2fc0;
    if ((param_1 == 0) && (*(int *)pCVar2 == 1)) {
      CDsp1::Reset();
      CDsp2::Reset((CDsp2 *)(this + 200));
      CSrc::Reset((CSrc *)(this + 0x36fc20));
      *(undefined4 *)pCVar2 = 0;
      goto LAB_000490a2;
    }
    *(uint *)pCVar2 = param_1;
  }
  if (param_3 < 2) {
    CDsp2::SetRamSelect((CDsp2 *)(this + 200),param_3);
  }
  if (param_2 == 0) {
    CDsp2::Stop((CDsp2 *)(this + 200));
    LeaveCriticalSection(pcVar1);
    return;
  }
  if ((param_2 == 1) && (*(int *)(this + 0x3a2fc0) == 0)) {
    CDsp2::Start((CDsp2 *)(this + 200));
  }
LAB_000490a2:
  LeaveCriticalSection(pcVar1);
  return;
}

