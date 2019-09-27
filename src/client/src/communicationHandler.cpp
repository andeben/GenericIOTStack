#include <functional>
#include <string>
#include "communicationHandler.hpp"
#include "signalDispatcher.hpp"

CommunicationHandler::CommunicationHandler(CommunicationIf* communication, 
                                           SignalDispatcher* signalDispatcher)
   : mCommunication(communication),
     mSignalDispatcher(signalDispatcher)
{
  communication->RegisterIncomingMessageHandler(std::bind(&CommunicationHandler::HandleIncomingMessage, this, std::placeholders::_1));
}

CommunicationHandler::~CommunicationHandler()
{

}

void CommunicationHandler::HandleIncomingMessage(GIS_BlackChannel_t* message)
{
  switch(message->signalId)
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
  mCommunication->SendMessage(&message);
}