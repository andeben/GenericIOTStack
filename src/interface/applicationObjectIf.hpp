#ifndef APPLICATION_OBJECT_IF_HPP
#define APPLICATION_OBJECT_IF_HPP
#include "objectDefinition.hpp"

class ApplicationObjectIf
{
  public:
  virtual ~ApplicationObjectIf() {};
  virtual GIS_ObjectTypeId_t GetObjectTypeId() = 0;
  virtual int GetInstanceNumber() = 0; 
  virtual void SetServerUniqueReferenceId(int serverReferenceId) = 0;
  virtual int GetServerUniqueRefId() = 0; 
  virtual int GetNumberOfAttributes() = 0;
  virtual GIS_ReturnCode_t ExecuteAction(GIS_ObjectAttributeId_t attribute) = 0;   
  virtual GIS_ReturnCode_t ReadAttributeValue(GIS_ObjectAttributeId_t attribute, GIS_Value_t* returnValue) = 0;
};

#endif //APPLICATION_OBJECT_IF_HPP