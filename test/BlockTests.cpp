#include <stdio.h>
#include <gtest/gtest.h>
#include <genericIoTStack.hpp>
#include <applicationObjectIfMock.hpp>
#include <communicationIfMock.hpp>

class GenericIoTStackBlockTests : public testing::Test {

};

TEST_F(GenericIoTStackBlockTests, InitClient)
{
  GenericIoTStack* stack = new GenericIoTStack();
  CommunicationIfMock* comInterface = new CommunicationIfMock();
	EXPECT_EQ(true, stack->InitializeClient(comInterface));
  EXPECT_EQ(true, stack->InitializeClient(comInterface));
}

TEST_F(GenericIoTStackBlockTests, RegisterClientObject)
{
  GenericIoTStack* stack = new GenericIoTStack();
  CommunicationIfMock* comInterface = new CommunicationIfMock();
  ApplicationObjectIfMock* appObjMock = new ApplicationObjectIfMock();
	EXPECT_EQ(true, stack->InitializeClient(comInterface));
  EXPECT_EQ(GIS_ReturnCode_t::GIS_NO_ERROR, stack->RegisterApplicationObject(appObjMock));
}


TEST_F(GenericIoTStackBlockTests, InitServer)
{
  GenericIoTStack* stack = new GenericIoTStack();
  CommunicationIfMock* comInterface = new CommunicationIfMock();
	EXPECT_EQ(false, stack->InitializeServer(comInterface));
}
