#include <graphics.h>

#include <iostream>

namespace zaolahma
{
    Graphics::Graphics(const uint16_t width, const uint16_t height) : Task("Graphics", 5u), mWidth(width), mHeight(height)
    {
        std::cout<<"Graphics created with width: "<<mWidth<<" and height: "<<mHeight<<std::endl;
    }

    void Graphics::execute(const uint64_t now)
    {
        std::cout<<"Graphics executing"<<std::endl;
    }
}