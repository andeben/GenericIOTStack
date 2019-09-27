#ifndef COMMUNICATION_IF_HPP
#define COMMUNICATION_IF_HPP
#include <cstdint>
#include <functional>
#include "signalDefinition.hpp"

class CommunicationIf
{
  public:
  virtual ~CommunicationIf() {};
  virtual void SendMessage(GIS_BlackChannel_t* message) = 0;
  virtual void RegisterIncomingMessageHandler(std::function<void (GIS_BlackChannel_t* message)>) = 0;
};

#endif //COMMUNICATION_IF_HPP