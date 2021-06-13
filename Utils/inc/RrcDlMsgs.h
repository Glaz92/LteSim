#pragma once
#include <memory>

enum class RrcDlMsgType
{
  rrcConnectionSetup
};

struct RrcDlMsg
{

};

using RrcDlMsgPtr = std::shared_ptr<RrcDlMsg>;

struct RrcConnectionSetup : public RrcDlMsg
{

};