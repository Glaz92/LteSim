#pragma once
#include <memory>
#include "CommonMsgsData.h"

enum class RrcDlMsgType
{
  rrcConnectionSetup,
  ueCapabilityEnquiry,
  rrcConnectionReconfiguration
};

struct RrcDlMsg
{

};

using RrcDlMsgPtr = std::shared_ptr<RrcDlMsg>;

struct RrcConnectionSetup : public RrcDlMsg
{

};