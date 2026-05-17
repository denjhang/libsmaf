/* operator+ @ 0002f660 40B */


/* TEMPNAMEPLACEHOLDERVALUE(CString const&, CString const&) */

CString * operator+(CString *param_1,CString *param_2)

{
  undefined4 *in_r2;
  
  CString::CString(param_1);
  CString::ConcatCopy(param_1,*(int *)(*(char **)param_2 + -8),*(char **)param_2,
                      *(int *)((char *)*in_r2 + -8),(char *)*in_r2);
  return param_1;
}

