#include "client/inc/objectManager.hpp"

ObjectManager::ObjectManager()
{

}

ObjectManager::~ObjectManager()
{

}

bool ObjectManager::AddObjectInstance(GIS_ObjectId_t id, ObjectIf* object)
{
  mObjectRegister.emplace(id, object);
  return true;
}