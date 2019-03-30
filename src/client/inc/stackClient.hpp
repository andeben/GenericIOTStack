#ifndef STACK_CLIENT_HPP
#define STACK_CLIENT_HPP
#include <map>
#include "common/inc/communicationIf.hpp"
#include "client/inc/communicationHandler.hpp"
#include "client/inc/signalDispatcher.hpp"

class StackClient
{
  public:
  StackClient();
  ~StackClient();
  bool Init(CommunicationIf* connection);
  void Execute();
  private:
  CommunicationHandler* mCommunicationHandler;
  SignalDispatcher*     mSignalDispatcher;
};

#endif //STACK_CLIENT_HPP