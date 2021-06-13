#pragma once
#include <memory>

enum class RrcUlMsgType
{
  rrcConnectionRequest,
  RrcConnectionSetupComplete
};

struct RrcUlMsg
{

};

using RrcUlMsgPtr = std::shared_ptr<RrcUlMsg>;

enum class EstablishmentCause
{
   emergency, // This corresponds to NAS Procedure “MO-CS fallback Emergency call”
   mt_Access, // Corresponding NAS procedures are“Service Request” (paging response for PS domain) or “Extended Service Request”(MT-CS fallback)
   mo_Signalling, // Corresponding NAS procedures are Attach, Detach, and TAU
   mo_Data // Corresponding NAS Procedures are“Service Request” and “Extended Service Request”
   // notes from http://howltestuffworks.blogspot.com
};

struct RrcConnectionRequest : public RrcUlMsg
{
  UeId identity { 0 };
  EstablishmentCause cause { EstablishmentCause::mo_Data };
};

struct RrcConnectionSetupComplete : public RrcUlMsg
{

};