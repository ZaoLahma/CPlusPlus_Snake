#include <vector.h>

namespace zaolahma
{
    Vector::Vector(const uint16_t x, const uint16_t y) : mX(x), mY(y)
    {

    }

    const uint16_t Vector::getX() const
    {
        return mX;
    }
    
    const uint16_t Vector::getY() const
    {
        return mY;
    }
}