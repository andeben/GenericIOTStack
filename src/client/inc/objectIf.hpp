#ifndef OBJECT_IF_HPP
#define OBJECT_IF_HPP
#include <cstdint>
#include "common/inc/objectDefinition.hpp"

class ObjectIf
{
  virtual ~ObjectIf() {};
  virtual GIS_ObjectId_t GetObjectId() = 0;
  virtual GIS_ReturnCode_t ReadAttribute(int attributeId, uint8_t* data,  int* dataLength) = 0;
  virtual GIS_ReturnCode_t WriteAttribute(int attributeId, uint8_t* data, int* dataLength) = 0;
  virtual GIS_ReturnCode_t ExecuteAction(int attributeId) = 0;
};

#endif //OBJECT_MANAGER_HPP