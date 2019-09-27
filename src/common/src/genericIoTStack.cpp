#include "genericIoTStack.hpp"
#include "client.hpp"

GenericIoTStack::GenericIoTStack()
{
}

GenericIoTStack::~GenericIoTStack()
{
}

bool GenericIoTStack::InitializeClient(CommunicationIf* connection)
{
  return false;
}

bool GenericIoTStack::InitializeServer(CommunicationIf* connection)
{
  return false;
}
