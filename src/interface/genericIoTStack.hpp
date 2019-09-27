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
  GIS_ReturnCode_t RegisterApplicationObject(GIS_ObjectTypeId_t objectTypeId, int objectInstanceId);
  GIS_ReturnCode_t ExecuteActionOnObjectInstance(GIS_ObjectTypeId_t      objectTypeId,
																								 int 								     objectInstanceId,
																								 GIS_ObjectAttributeId_t objectAttributeId,
																								 GIS_Command_t 			     action,
																								 GIS_Value_t*            value);
};

#endif //GENERIC_IOT_STACK_HPP