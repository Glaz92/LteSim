#pragma once
#include "UeEnums.h"
#include <optional>
#include "Coords.h"
#include "Actor.h"

class UserEquipmentIf : public Actor
{
public:
  virtual unsigned int getUeId() = 0;
  virtual std::optional<unsigned int> getEnbId() = 0;
};