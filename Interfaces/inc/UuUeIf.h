#pragma once
#include "UuIf.h"
#include "RrcUlMsgs.h"

class UuUeIf // : public UuIf
{
public:
  virtual void sendSignalToEnb(RrcUlMsgType ueType, RrcUlMsg msg, EnbId enbId) = 0;
};