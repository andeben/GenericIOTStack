#ifndef SIGNAL_DISPATCHER_HPP
#define SIGNAL_DISPATCHER_HPP
#include <CommunicationIf.hpp>
#include <objectDefinition.hpp>
#include <signalDefinition.hpp>
class SignalDispatcher
{
  public:
  SignalDispatcher();
  ~SignalDispatcher();
  void HandleRequest(GIS_Request_t* request, GIS_Response_t* response);
  
};

#endif //SIGNAL_DISPATCHER_HPP