#include <graphics.h>

#include <iostream>

Graphics::Graphics(const uint16_t width, const uint16_t height) : mWidth(width), mHeight(height)
{
    std::cout<<"Graphics created with width: "<<mWidth<<" and height: "<<mHeight<<std::endl;
}