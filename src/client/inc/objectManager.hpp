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
  bool AddObjectInstance(GIS_ObjectId_t id, ObjectIf* object);
  private:
  std::map<GIS_ObjectId_t, ObjectIf*> mObjectRegister;
};

#endif //OBJECT_MANAGER_HPP