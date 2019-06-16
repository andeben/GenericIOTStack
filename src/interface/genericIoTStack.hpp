#ifndef GENERIC_IOT_STACK_HPP
#define GENERIC_IOT_STACK_HPP
#include "communicationIf.hpp"


class GenericIoTStack
{
  public:
	GenericIoTStack();
	~GenericIoTStack();
	bool InitializeClient(CommunicationIf* connection);
	bool InitializeServer(CommunicationIf* connection);
  

};

#endif //GENERIC_IOT_STACK_HPP