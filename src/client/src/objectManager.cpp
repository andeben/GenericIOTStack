#include "objectManager.hpp"

ObjectManager::ObjectManager()
{

}

ObjectManager::~ObjectManager()
{

}

bool ObjectManager::AddObjectInstance(GIS_ObjectTypeId_t id, ObjectIf* object)
{
  mObjectRegister.emplace(id, object);
  return true;
}