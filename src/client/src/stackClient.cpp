#include "client/inc/stackClient.hpp"

StackClient::StackClient()
{

}

StackClient::~StackClient()
{

}

bool StackClient::Init(CommunicationIf* connection)
{
  mSignalDispatcher = new SignalDispatcher(); 
  mCommunicationHandler = new CommunicationHandler(connection, mSignalDispatcher);
  return true;
}

void StackClient::Execute()
{
}