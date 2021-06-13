#pragma once
#include "UserEquipmentIf.h"
#include "UuUeIf.h"
#include <vector>
#include <memory>

using UserEquipmentPtr = std::unique_ptr<UserEquipmentIf>;

class Uu : public UuUeIf
{
private:
  std::vector<UserEquipmentPtr> ues;
};