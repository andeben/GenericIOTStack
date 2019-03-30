#ifndef SIGNAL_DISPATCHER_HPP
#define SIGNAL_DISPATCHER_HPP
#include "common/inc/communicationIf.hpp"
#include "common/inc/objectDefinition.hpp"

class SignalDispatcher
{
  public:
  SignalDispatcher();
  ~SignalDispatcher();
  void HandleRequest(GIS_Request_t* request, GIS_Response_t* response);
  
};

#endif //SIGNAL_DISPATCHER_HPP