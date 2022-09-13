#include <game_container.h>

namespace zaolahma
{
    GameContainer::GameContainer() : Task("GameContainer", 5u)
    {

    }

    void GameContainer::addObject(std::shared_ptr<GameObject> object)
    {
        mObjects.push_back(object);
    }

    const std::vector<std::shared_ptr<GameObject>>& GameContainer::getGameObjects() const
    {
        return mObjects;
    }

    void GameContainer::execute(const uint64_t now)
    {
        for (auto& object : mObjects)
        {
            object->update(now);
        }
    }
}