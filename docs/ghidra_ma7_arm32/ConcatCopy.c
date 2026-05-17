/* ConcatCopy @ 0002f5a8 54B */


/* CString::ConcatCopy(int, char const*, int, char const*) */

void __thiscall
CString::ConcatCopy(CString *this,int param_1,char *param_2,int param_3,char *param_4)

{
  if (param_1 + param_3 != 0) {
    AllocBuffer(this,param_1 + param_3);
    memcpy(*(void **)this,param_2,param_1);
                    /* WARNING: Could not recover jumptable at 0x00120514. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(DAT_00120518 + 0x12051c))(*(int *)this + param_1,param_4,param_3);
    return;
  }
  return;
}

