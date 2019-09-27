#include <functional>
#include <string>
#include "communicationHandler.hpp"
#include "signalDispatcher.hpp"
#define IP "0.0.0.0"
#define PORT 9000U

CommunicationHandler::CommunicationHandler(CommunicationIf* communication, 
                                           SignalDispatcher* signalDispatcher)
   : mCommunication(communication),
     mSignalDispatcher(signalDispatcher)
{
  communication->RegisterIncomingMessageHandler(std::bind(&CommunicationHandler::HandleIncomingMessage, this, std::placeholders::_1, std::placeholders::_2));
  communication->ConnectToRemote(IP, PORT);
}

CommunicationHandler::~CommunicationHandler()
{

}

void CommunicationHandler::HandleIncomingMessage(uint8_t* data, uint16_t dataLength)
{

  switch(((GIS_BlackChannel_t*)data)->signalId)
  {
    case GIS_REQUEST:
    {
      GIS_Response_t response;
      // mSignalDispatcher->HandleRequest(static_cast<GIS_Request_t*>(message->data), &response);
      // uint8_t buffer[response.dataLength + 5];
      // (void)memcpy(buffer, response, 5);
      // (void)memcpy(&buffer[5], response.data, response.dataLength);
      // SendMessage(GIS_RESPONSE, &response, &message);
      break;
    }
    case GIS_RESPONSE:
    break;
    case GIS_FORWARD:
    break;
    case GIS_INDICATION:
    break;
    default:
    break;
  }

}

void CommunicationHandler::SendMessage(SignalIds_t signalId, uint8_t* data, uint32_t dataLength)
{
  GIS_BlackChannel_t message;
  message.signalId = signalId;
  message.length   = dataLength;
  message.data     = data;
  mCommunication->SendMessage((uint8_t*)(&message), sizeof(message)+dataLength);
}