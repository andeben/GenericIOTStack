#ifndef COMMUNICATION_IF_HPP
#define COMMUNICATION_IF_HPP
#include <cstdint>
#include <functional>

class CommunicationIf
{
  public:
  virtual ~CommunicationIf() {};
  virtual int ConnectToRemote(std::string ip, int port) = 0;
  virtual void SendMessage(uint8_t* dataBuffer, uint16_t dataLength) = 0;
  void RecieveMessage(uint8_t* dataBuffer, uint16_t dataLength) {if (mMessageHandler != nullptr) {mMessageHandler(dataBuffer, dataLength);} }
  void RegisterIncomingMessageHandler(std::function<void (uint8_t* dataBuffer, uint16_t dataLength)> callback) {mMessageHandler = callback;};
  private: 
  std::function<void (uint8_t* dataBuffer, uint16_t dataLength)> mMessageHandler = nullptr;  
};

#endif //COMMUNICATION_IF_HPP