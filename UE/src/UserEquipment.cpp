#include "UserEquipment.h"
#include "UuUeIf.h"

UserEquipment::UserEquipment(UuPtr _uuPtr)
  : uuPtr(_uuPtr), state(UeState::OFF)
{

}

void UserEquipment::turnOn()
{
  state = UeState::IDLE;
}

void UserEquipment::turnOff()
{

}

void UserEquipment::stateMachine()
{
  switch(state)
  {
    case UeState::OFF:
      break;
    case UeState::IDLE:
      break;
    case UeState::CONNECTING:
      break;
    case UeState::CONNECTED:
      break;
    default:
      break;
  }
}

void UserEquipment::run()
{
  stateMachine();
}