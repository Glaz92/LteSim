#include "UserEquipment.h"
#include "UuUeIf.h"

UserEquipment::UserEquipment(UuPtr _uuPtr)
  : uuPtr(_uuPtr), state(UeState::OFF), connectingState(UeConnectingState::waitForSib)
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

void UserEquipment::connecting()
{
  // switch()
  // {
  //   case UeConnectingState::waitForSib:
  //   case UeConnectingState::waitForSetup:
  //     break;
  //   case UeConnectingState::waitForEnquiry:
  //     break;
  //   case UeConnectingState::waitForReconfiguration:
  //     break;
  // }
}

void UserEquipment::sendSignalToUe(RrcDlMsgType msgType, RrcDlMsgPtr msg, EnbId _enbId)
{
  if(state != UeState::OFF and enbId == _enbId)
  {
    switch(msgType)
    {
      case RrcDlMsgType::rrcConnectionSetup:
        if(state == UeState::CONNECTING and connectingState == UeConnectingState::waitForSetup)
        {
          connectingState = UeConnectingState::waitForEnquiry;
        }
        break;
      case RrcDlMsgType::ueCapabilityEnquiry:
        if(state == UeState::CONNECTING and connectingState == UeConnectingState::waitForEnquiry)
        {
          connectingState = UeConnectingState::waitForReconfiguration;
        }
        break;
      case RrcDlMsgType::rrcConnectionReconfiguration:
        if(state == UeState::CONNECTING and connectingState == UeConnectingState::waitForReconfiguration)
        {
          connectingState = UeConnectingState::waitForSib;
          state = UeState::CONNECTED;
        }
        break;
    }
  }
}

void UserEquipment::run()
{
  stateMachine();
}