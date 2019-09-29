#ifndef COMMUNICATION_IF_MOCK_HPP
#define COMMUNICATION_IF_MOCK_HPP
#include "gmock/gmock.h"  
#include "communicationIf.hpp"

class CommunicationIfMock : public CommunicationIf {
public:
  MOCK_METHOD2(ConnectToRemote, int(std::string ip, int port));
  MOCK_METHOD2(SendMessage, void(uint8_t* data, uint16_t dataLength));
  MOCK_METHOD1(RegisterIncomingMessageHandler, void(std::function<void(uint8_t* data, uint16_t dataLength)>));
};

#endif //COMMUNICATION_IF_MOCK_HPP