#ifndef INC_GRAPHICS_H
#define INC_GRAPHICS_H

#include <cstdint>
#include <task.h>

namespace zaolahma
{
    class GameContainer;

    class Graphics : public Task
    {
        public:
        Graphics() = delete;
        Graphics(const uint16_t width, const uint16_t height, const GameContainer& gameContainer);

        // Task inheritance
        void execute(const uint64_t now);

        protected:
        uint16_t mHeight;
        uint16_t mWidth;

        private:
        const GameContainer& mGameContainer;
    };
}

#endif