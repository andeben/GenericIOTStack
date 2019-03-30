#ifndef COMMUNICATION_HANDLER_HPP
#define COMMUNICATION_HANDLER_HPP
#include "common/inc/communicationIf.hpp"
#include "client/inc/signalDispatcher.hpp"

class CommunicationHandler
{
  public:
  CommunicationHandler(CommunicationIf* communication, 
                       SignalDispatcher* signalDispatcher);
  ~CommunicationHandler();
  void HandleIncomingMessage(GIS_BlackChannel_t* message);
  void SendMessage(SignalIds_t signalId, uint8_t* data, uint32_t dataLength);
  private:
  
  CommunicationIf* mCommunication;
  SignalDispatcher* mSignalDispatcher;
};

#endif //COMMUNICATION_HANDLER_HPP