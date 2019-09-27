#include <genericIoTStack.hpp>
#include <genericIoTStackPrivate.hpp>
#include <client.hpp>

GenericIoTStack::GenericIoTStack()
{
  mPrivateData = new GenericIoTStackPrivate();
}

GenericIoTStack::~GenericIoTStack()
{
   delete mPrivateData;
}


bool GenericIoTStack::InitializeClient(CommunicationIf* connection)
{
  bool returnValue = false;
  if (mPrivateData->mClient == nullptr)
  {
    mPrivateData->mClient = new Client();
  }
  returnValue = mPrivateData->mClient->Init(connection);

  return returnValue;
}

bool GenericIoTStack::InitializeServer(CommunicationIf* connection)
{

  return false;
}

GIS_ReturnCode_t GenericIoTStack::RegisterApplicationObject(ApplicationObjectIf* object)
{
  return GIS_ReturnCode_t::GIS_ACTION_NOT_ALLOWED;
}

bool GenericIoTStack::RunStack()
{
  return false;
}
