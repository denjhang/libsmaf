/* SetDspID @ 0014e040 244B */


/* ARM::CDsp::SetDspID(unsigned int, unsigned int, unsigned int) */

void __thiscall ARM::CDsp::SetDspID(CDsp *this,uint param_1,uint param_2,uint param_3)

{
  critical_section *pcVar1;
  
  pcVar1 = (critical_section *)(this + 0x3bf7b0);
  EnterCriticalSection(pcVar1);
  if (param_1 < 2) {
    if ((param_1 == 0) && (*(int *)(this + 0x3a3030) == 1)) {
      CDsp1::Reset();
      CDsp2::Reset((CDsp2 *)(this + 0xd0));
      CSrc::Reset((CSrc *)(this + 0x36fc28));
      *(undefined4 *)(this + 0x3a3030) = 0;
      goto LAB_0014e090;
    }
    *(uint *)(this + 0x3a3030) = param_1;
  }
  if (param_3 < 2) {
    CDsp2::SetRamSelect((CDsp2 *)(this + 0xd0),param_3);
  }
  if (param_2 == 0) {
    CDsp2::Stop((CDsp2 *)(this + 0xd0));
    LeaveCriticalSection(pcVar1);
    return;
  }
  if ((param_2 == 1) && (*(int *)(this + 0x3a3030) == 0)) {
    CDsp2::Start((CDsp2 *)(this + 0xd0));
  }
LAB_0014e090:
  LeaveCriticalSection(pcVar1);
  return;
}

