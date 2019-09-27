#include <genericIoTStack.hpp>
#include <genericIoTStackPrivate.hpp>
#include <client.hpp>

GenericIoTStack::GenericIoTStack()
{
  mPrivate = new GenericIoTStackPrivate();
}

GenericIoTStack::~GenericIoTStack()
{
   delete mPrivate;
}


bool GenericIoTStack::InitializeClient(CommunicationIf* connection)
{
  bool returnValue = false;
  if (mPrivate->mClient == nullptr)
  {
    mPrivate->mClient = new Client();
  }
  returnValue = mPrivate->mClient->Init(connection);
  
  return returnValue;
}

bool GenericIoTStack::InitializeServer(CommunicationIf* connection)
{

  return false;
}

GIS_ReturnCode_t GenericIoTStack::RegisterApplicationObject(ApplicationObjectIf* object)
{
  return GIS_ReturnCode_t::GIS_NO_ERROR;
}

bool GenericIoTStack::RunStack()
{
  return false;
}
