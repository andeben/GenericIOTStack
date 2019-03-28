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

#endif //SIGNAL_DEFINITION_HPP