#ifndef OBJECT_DEFINITION_HPP
#define OBJECT_DEFINITION_HPP
#include <stdint.h>
#include <string.h>

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

enum GIS_ObjectTypeId_t {
  UNIT,
  CLIMATE,
  WATER_CONTROL
};

enum GIS_ObjectAttributeId_t {
  COMMON_ATTRIBUTE_ID,
  COMMON_ATTRIBUTE_INSTANCE_ID,
  CLIMATE_ATTRIBUTE_TEMPERATURE,
  WATER_CONTROL_ATTRIBUTE_PUMP_STATUS,
  WATER_CONTROL_ATTRIBUTE_TOOGLE_PUMP_STATUS_ACTION,
};


class GIS_Value_t {
public:
  Value() {};
  ~Value() {};
  int GetValueAsInt() {return std::stoi(valueAsBuffer);};
  void SetValueAsInt(int setValue) {memcpy(valueAsBuffer, (std::to_string(setValue).c_str()), 4);};
private:
  char valueAsBuffer[64];
};


#endif //OBJECT_DEFINITION_HPP