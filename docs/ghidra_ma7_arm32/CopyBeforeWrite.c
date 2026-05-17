/* CopyBeforeWrite @ 0002f424 48B */


/* CString::CopyBeforeWrite() */

void __thiscall CString::CopyBeforeWrite(CString *this)

{
  undefined4 in_r3;
  int iVar1;
  
  iVar1 = *(int *)this;
  if (*(int *)(iVar1 + -0xc) < 2) {
    return;
  }
  Release(this);
  AllocBuffer(this,*(int *)(iVar1 + -8));
                    /* WARNING: Could not recover jumptable at 0x00120514. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(DAT_00120518 + 0x12051c))(*(undefined4 *)this,iVar1,*(int *)(iVar1 + -8) + 1,in_r3);
  return;
}

