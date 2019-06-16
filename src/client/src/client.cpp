#include "client.hpp"

Client::Client()
{   
}

Client::~Client()
{

}

bool Client::Init(CommunicationIf* connection)
{
  mSignalDispatcher = new SignalDispatcher(); 
  mCommunicationHandler = new CommunicationHandler(connection, mSignalDispatcher);
  return true;
}

void Client::Execute()
{
}