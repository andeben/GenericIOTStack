#ifndef COMMUNICATION_IF_HPP
#define COMMUNICATION_IF_HPP
#include <cstdint>
#include <functional>

class CommunicationIf
{
  public:
  virtual ~CommunicationIf() {};
  virtual void ConnectToRemote(std::string ip, int port) = 0;
  virtual void SendMessage(uint8_t* dataBuffer, uint16_t dataLength) = 0;
  void RecieveMessage(uint8_t* dataBuffer, uint16_t dataLength) {if (messageHandler != nullptr) {messageHandler(dataBuffer, dataLength);} }
  void RegisterIncomingMessageHandler(std::function<void (uint8_t* dataBuffer, uint16_t dataLength)> callback) {messageHandler = callback;};
  private: 
  std::function<void (uint8_t* dataBuffer, uint16_t dataLength)> messageHandler = nullptr;  
};

#endif //COMMUNICATION_IF_HPP