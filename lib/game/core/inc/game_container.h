#ifndef INC_GAMECONTAINER_H
#define INC_GAMECONTAINER_H

#include <game_object.h>
#include <task.h>

#include <vector>
#include <memory>

namespace zaolahma
{
    class GameContainer : public Task
    {
        public:
        GameContainer();
        
        void addObject(std::shared_ptr<GameObject> object);

        const std::vector<std::shared_ptr<GameObject>>& getGameObjects() const;

        // Task inheritance
        void execute(const uint64_t now);

        protected:

        private:
        std::vector<std::shared_ptr<GameObject>> mObjects;
    };
}

#endif