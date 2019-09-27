#ifndef COMMUNICATION_IF_MOCK_HPP
#define COMMUNICATION_IF_MOCK_HPP
#include "gmock/gmock.h"  
#include "communicationIf.hpp"

class CommunicationIfMock : public CommunicationIf {
public:
  
  MOCK_METHOD1(SendMessage, void(GIS_BlackChannel_t* message));
  MOCK_METHOD1(RegisterIncomingMessageHandler, void(std::function<void(GIS_BlackChannel_t* message)>));
};

#endif //COMMUNICATION_IF_MOCK_HPP