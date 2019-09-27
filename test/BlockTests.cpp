#include <stdio.h>
#include <gtest/gtest.h>
#include "genericIoTStack.hpp"
#include "communicationIfMock.hpp"
/* this is a test that can pass*/
TEST(AddTest, InitClient)
{
  GenericIoTStack* stack = new GenericIoTStack();
  CommunicationIfMock* comInterface = new CommunicationIfMock();
	EXPECT_EQ(false, stack->InitializeClient(comInterface));
}

/* make a tast that can not pass*/
TEST(ADDTest, InitServer)
{
  GenericIoTStack* stack = new GenericIoTStack();
  CommunicationIfMock* comInterface = new CommunicationIfMock();
	EXPECT_EQ(false, stack->InitializeServer(comInterface));
}
