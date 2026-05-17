/* ConcatCopy @ 0012a420 124B */


/* CString::ConcatCopy(int, char const*, int, char const*) */

void __thiscall
CString::ConcatCopy(CString *this,int param_1,char *param_2,int param_3,char *param_4)

{
  if (param_1 + param_3 == 0) {
    return;
  }
  AllocBuffer(this,param_1 + param_3);
  memcpy(*(void **)this,param_2,(long)param_1);
  memcpy((void *)(*(long *)this + (long)param_1),param_4,(long)param_3);
  return;
}

