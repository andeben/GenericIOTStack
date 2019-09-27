#ifndef OBJECT_IF_HPP
#define OBJECT_IF_HPP
#include <cstdint>
#include "objectDefinition.hpp"

class ObjectIf
{
  virtual ~ObjectIf() {};
  virtual GIS_ObjectTypeId_t GetObjectTypeId() = 0;
  virtual GIS_ReturnCode_t ReadAttribute(GIS_ObjectAttributeId_t attributeId, uint8_t* data,  int* dataLength) = 0;
  virtual GIS_ReturnCode_t WriteAttribute(GIS_ObjectAttributeId_t attributeId, uint8_t* data, int* dataLength) = 0;
  virtual GIS_ReturnCode_t ExecuteAction(GIS_ObjectAttributeId_t attributeId) = 0;
};

#endif //OBJECT_MANAGER_HPP