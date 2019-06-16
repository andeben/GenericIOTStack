#ifndef CLIENT_INTERFACE_HPP
#define CLIENT_INTERFACE_HPP
#include "communicationIf.hpp"


class ClientInterface
{
  public:
  virtual ~ClientInterface() {};
  virtual bool Init(CommunicationIf* connection) = 0;
  virtual void Execute() = 0;
  
};

#endif //CLIENT_INTERFACE_HPP