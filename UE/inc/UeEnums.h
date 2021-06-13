#pragma once

enum class UeState
{
  OFF,
  IDLE,
  CONNECTING,
  CONNECTED
};

enum class UeConnectingState
{
  waitForSib,
  waitForSetup,
  waitForEnquiry,
  waitForReconfiguration
};