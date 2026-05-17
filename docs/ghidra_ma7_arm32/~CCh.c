/* ~CCh @ 00040bd4 18B */


/* ARM::CCh::~CCh() */

CCh * __thiscall ARM::CCh::~CCh(CCh *this)

{
  ~CCh(this);
  operator_delete(this);
  return this;
}

