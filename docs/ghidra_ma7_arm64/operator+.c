/* operator+ @ 0012a574 88B */


/* TEMPNAMEPLACEHOLDERVALUE(CString const&, CString const&) */

void operator+(CString *param_1,CString *param_2)

{
  CString *in_x8;
  
  CString::CString(in_x8);
  CString::ConcatCopy(in_x8,*(int *)(*(char **)param_1 + -8),*(char **)param_1,
                      *(int *)(*(char **)param_2 + -8),*(char **)param_2);
  return;
}

