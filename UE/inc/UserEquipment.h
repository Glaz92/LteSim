#pragma once
#include "UeEnums.h"
#include "UserEquipmentIf.h"
#include <optional>
#include "Coords.h"
#include "UuUeIf.h"
#include "Actor.h"
#include "CommonMsgsData.h"

using UuPtr = std::shared_ptr<UuUeIf>;

class UserEquipment : public UserEquipmentIf
{
private:
  UuPtr uuPtr;
  UeState state;
  UeConnectingState connectingState;

  UeId identity;
  UeCapability capabilities;

  std::optional<EnbId> enbId;

public:
  UserEquipment() = delete;
  UserEquipment(UuPtr _uuPtr);

  UeId getUeId() override { return identity; }
  std::optional<EnbId> getEnbId() override { return enbId; }
  UeState getUeState() override { return state; }

  void turnOn();
  void turnOff();

  void sendSignalToUe(RrcDlMsgType msgType, RrcDlMsgPtr msg, EnbId _enbId) override;

  void run() override;

private:
  void stateMachine();
  void connecting();
};