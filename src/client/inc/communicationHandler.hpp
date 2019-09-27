#ifndef COMMUNICATION_HANDLER_HPP
#define COMMUNICATION_HANDLER_HPP
#include "communicationIf.hpp"
#include "signalDispatcher.hpp"

class CommunicationHandler
{
  public:
  CommunicationHandler(CommunicationIf* communication, 
                       SignalDispatcher* signalDispatcher);
  ~CommunicationHandler();
  void HandleIncomingMessage(uint8_t* data, uint16_t dataLength);
  void SendMessage(SignalIds_t signalId, uint8_t* data, uint32_t dataLength);
  private:
  
  CommunicationIf* mCommunication;
  SignalDispatcher* mSignalDispatcher;
};

#endif //COMMUNICATION_HANDLER_HPP