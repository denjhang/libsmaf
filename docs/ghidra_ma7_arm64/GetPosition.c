/* GetPosition @ 001296bc 32B */


/* CSmwCtrl::GetPosition() */

void __thiscall CSmwCtrl::GetPosition(CSmwCtrl *this)

{
  if (*(int *)(this + 4) != -1) {
    Mapi_Melody_Control(*(int *)(this + 4),0x1111002b,0);
    return;
  }
  return;
}

