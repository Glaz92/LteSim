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
  UeId identity;
  UeState state;

  std::optional<EnbId> enbId;

  UuPtr uuPtr;
  UeCapability capabilities;

public:
  UserEquipment() = delete;
  UserEquipment(UuPtr _uuPtr);

  void turnOn();
  void turnOff();

  void stateMachine() ;

  void run() override;
};