#ifndef CLIENT_MAIN_HPP
#define CLIENT_MAIN_HPP
#include <map>
#include "common/inc/communicationIf.hpp"
#include "client/inc/communicationHandler.hpp"
#include "client/inc/signalDispatcher.hpp"

class Client
{
  public:
  Client();
  ~Client();
  bool Init(CommunicationIf* connection);
  void Execute();
  private:
  CommunicationHandler* mCommunicationHandler;
  SignalDispatcher*     mSignalDispatcher;
};

#endif //OBJECT_MANAGER_HPP