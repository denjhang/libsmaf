/* ResetDsp @ 00049030 72B */


/* ARM::CDsp::ResetDsp(unsigned int) */

void __thiscall ARM::CDsp::ResetDsp(CDsp *this,uint param_1)

{
  if (1 < param_1) {
    return;
  }
  EnterCriticalSection((critical_section *)(this + 0x3bf700));
  if ((param_1 == 0) && (*(int *)(this + 0x3a2fbc) == 1)) {
    CDsp2::ProgramReset((CDsp2 *)(this + 200));
  }
  *(uint *)(this + 0x3a2fbc) = param_1;
  LeaveCriticalSection((critical_section *)(this + 0x3bf700));
  return;
}

