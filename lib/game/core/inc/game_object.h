#ifndef INC_GAME_OBJECT_H
#define INC_GAME_OBJECT_H

#include <vector.h>

#include <cstdint>

namespace zaolahma
{
    class GameObject
    {
        public:
        GameObject() = delete;
        GameObject(const char appearance, const Vector pos);

        virtual void update(const uint64_t now);

        const uint16_t getObjectId() const;

        const char getAppearance() const;

        protected:

        private:
        static uint16_t sCurrentId;
        const uint16_t mObjectId;
        const char mAppearance;
        Vector mPos;
    };
}

#endif