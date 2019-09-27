#ifndef GENERIC_IOT_STACK_HPP
#define GENERIC_IOT_STACK_HPP
#include "communicationIf.hpp"
#include "objectDefinition.hpp"

class GenericIoTStack
{
  public:
	GenericIoTStack();
	~GenericIoTStack();
	bool InitializeClient(CommunicationIf* connection);
	bool InitializeServer(CommunicationIf* connection);
  bool RunStack();
  GIS_ReturnCode_t CreateApplicationObject(GIS_ObjectTypeId_t objectTypeId, int objectInstanceId);
  
};

#endif //GENERIC_IOT_STACK_HPP