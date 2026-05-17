/* SetAreaSize @ 0014e1c4 176B */


/* ARM::CDsp::SetAreaSize(unsigned int, unsigned int, unsigned int) */

void __thiscall ARM::CDsp::SetAreaSize(CDsp *this,uint param_1,uint param_2,uint param_3)

{
  critical_section *pcVar1;
  
  pcVar1 = (critical_section *)(this + 0x3bf7b0);
  EnterCriticalSection(pcVar1);
  if (param_1 < 9) {
    CDsp2::SetArea0Size((CDsp2 *)(this + 0xd0),*(uint *)(&DAT_00331e10 + (ulong)param_1 * 4));
  }
  if (param_2 < 4) {
    CDsp2::SetArea1FsRatio((CDsp2 *)(this + 0xd0),*(uint *)(&DAT_00331e40 + (ulong)param_2 * 4));
  }
  if (1 < param_3) {
    LeaveCriticalSection(pcVar1);
    return;
  }
  CDsp2::SetTramMode((CDsp2 *)(this + 0xd0),param_3);
  LeaveCriticalSection(pcVar1);
  return;
}

