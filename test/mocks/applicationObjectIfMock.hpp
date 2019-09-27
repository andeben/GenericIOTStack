#ifndef APPLICATION_OBJECT_IF_MOCK_HPP
#define APPLICATION_OBJECT_IF_MOCK_HPP
#include <gmock/gmock.h>  
#include <applicationObjectIf.hpp>

class ApplicationObjectIfMock : public ApplicationObjectIf {
public:
  MOCK_METHOD0(GetObjectTypeId, GIS_ObjectTypeId_t());
  MOCK_METHOD0(GetInstanceNumber, int()); 
  MOCK_METHOD1(SetServerUniqueReferenceId, void(int serverReferenceId));
  MOCK_METHOD0(GetServerUniqueRefId, int()); 
  MOCK_METHOD0(GetNumberOfAttributes, int());
  MOCK_METHOD1(ExecuteAction, GIS_ReturnCode_t(GIS_ObjectAttributeId_t attribute));   
  MOCK_METHOD2(ReadAttributeValue, GIS_ReturnCode_t(GIS_ObjectAttributeId_t attribute, GIS_Value_t* returnValue));
};

#endif //COMMUNICATION_IF_MOCK_HPP