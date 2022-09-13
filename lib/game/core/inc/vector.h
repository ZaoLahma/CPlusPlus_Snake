#ifndef INC_VECTOR_H
#define INC_VECTOR_H

#include <cstdint>

namespace zaolahma
{
    class Vector
    {
        public:
        Vector() = delete;

        Vector(const uint16_t x, const uint16_t y);

        const uint16_t getX() const;
        const uint16_t getY() const;

        protected:

        private:
        uint16_t mX;
        uint16_t mY;
    };
}

#endif