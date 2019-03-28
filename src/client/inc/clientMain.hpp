#ifndef CLIENT_MAIN_HPP
#define CLIENT_MAIN_HPP
#include <map>
#include "communicationIf.hpp"
#include "communicationHandler.hpp"
#include "signalDispatcher.hpp"

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