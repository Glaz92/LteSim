#pragma once
#include "UeEnums.h"
#include <optional>
#include "Coords.h"
#include "Actor.h"
#include "RrcDlMsgs.h"
#include "UeEnums.h"

class UserEquipmentIf : public Actor
{
public:
  virtual unsigned int getUeId() = 0;
  virtual std::optional<EnbId> getEnbId() = 0;
  virtual UeState getUeState() = 0;
  virtual void sendSignalToUe(RrcDlMsgType msgType, RrcDlMsgPtr msg, EnbId enbId) = 0;
};