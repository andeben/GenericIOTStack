#ifndef GENERIC_IOT_STACK_HPP
#define GENERIC_IOT_STACK_HPP
#include "communicationIf.hpp"
#include "applicationObjectIf.hpp"
class GenericIoTStackPrivate;

class GenericIoTStack
{
  public:
	GenericIoTStack();
	~GenericIoTStack();
	bool InitializeClient(CommunicationIf* connection);
	bool InitializeServer(CommunicationIf* connection);
  GIS_ReturnCode_t RegisterApplicationObject(ApplicationObjectIf* object);
	bool RunStack();
	private:
	GenericIoTStackPrivate* mPrivate;
};

#endif //GENERIC_IOT_STACK_HPP