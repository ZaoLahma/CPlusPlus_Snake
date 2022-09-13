#include <game_object.h>

namespace zaolahma
{
    uint16_t GameObject::sCurrentId = 0u;

    GameObject::GameObject(const char appearance, const Vector pos) 
        : mObjectId(sCurrentId++), mAppearance(appearance), mPos(pos)
    {
        
    }

    void GameObject::update(const uint64_t now)
    {
        // TODO: Update pos, or anything else that might need updating
    }

    const uint16_t GameObject::getObjectId() const
    {
        return mObjectId;
    }

    const char GameObject::getAppearance() const
    {
        return mAppearance;
    }
}