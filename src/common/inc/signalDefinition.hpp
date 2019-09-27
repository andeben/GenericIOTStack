#ifndef SIGNAL_DEFINITION_HPP
#define SIGNAL_DEFINITION_HPP
#include <stdint.h>

enum SignalIds_t
{
  GIS_REQUEST,
  GIS_RESPONSE,
  GIS_FORWARD,
  GIS_INDICATION
};

struct GIS_BlackChannel_t {
  SignalIds_t signalId;
  uint16_t    length;
  uint8_t*    data;
};

struct GIS_Request_t {
  uint16_t      requestId;
  uint32_t      path;
  uint8_t       command;
  uint16_t      dataLength;
  uint8_t*      data;
};

struct GIS_Response_t {
  uint16_t requestId;
  uint8_t  resultCode;
  uint16_t dataLength;
  uint8_t* data;
};
#endif //SIGNAL_DEFINITION_HPP