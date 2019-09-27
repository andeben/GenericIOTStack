#ifndef OBJECT_MANAGER_HPP
#define OBJECT_MANAGER_HPP
#include <map>
#include "objectDefinition.hpp"
#include "objectIf.hpp"

class ObjectManager
{
  public:
  ObjectManager();
  ~ObjectManager();
  bool AddObjectInstance(GIS_ObjectTypeId_t id, ObjectIf* object);
  private:
  std::map<GIS_ObjectTypeId_t, ObjectIf*> mObjectRegister;
};

#endif //OBJECT_MANAGER_HPP