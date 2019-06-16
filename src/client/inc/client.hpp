#ifndef CLIENT_HPP
#define CLIENT_HPP
#include <map>
#include "clientInterface.hpp"
#include "communicationIf.hpp"
#include "communicationHandler.hpp"
#include "signalDispatcher.hpp"

class Client  : public ClientInterface
{
  public:
  Client();
  ~Client();
  virtual bool Init(CommunicationIf* connection);
  virtual void Execute();
  private:
  CommunicationHandler* mCommunicationHandler;
  SignalDispatcher*     mSignalDispatcher;
};

#endif //CLIENT_HPP