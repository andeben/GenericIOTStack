#ifndef OBJECT_DEFINITION_HPP
#define OBJECT_DEFINITION_HPP
#include <stdint.h>

enum GIS_ReturnCode_t {
  GIS_NO_ERROR,
  GIS_OBJECT_DOES_NOT_EXIST,
  GIS_INSTANCE_DOES_NOT_EXIST,
  GIS_INSTANCE_ATTRIBUTE_DOES_NOT_EXIST,
  GIS_ACTION_NOT_ALLOWED
};

enum GIS_Command_t {
  READ,
  WRITE,
  EXECUTE,
  SUBSCRIBE
};

enum GIS_ObjectId_t {
  UNIT,
  CLIMATE,
  WATER_CONTROL
};

struct GIS_Request_t {
  uint16_t      requestId;
  uint32_t      path;
  GIS_Command_t command;
  uint16_t      dataLength;
  uint8_t*      data;
};

struct GIS_Response_t {
  uint16_t requestId;
  uint8_t  resultCode;
  uint16_t dataLength;
  uint8_t* data;
};

#endif //OBJECT_DEFINITION_HPP