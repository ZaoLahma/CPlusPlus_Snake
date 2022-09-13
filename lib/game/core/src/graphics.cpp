#include <graphics.h>

#include <game_container.h>

#include <iostream>

namespace zaolahma
{
    Graphics::Graphics(const uint16_t width, const uint16_t height, const GameContainer& gameContainer) 
        : Task("Graphics", 5u), mWidth(width), mHeight(height), mGameContainer(gameContainer)
    {
        std::cout<<"Graphics created with width: "<<mWidth<<" and height: "<<mHeight<<std::endl;
    }

    void Graphics::execute(const uint64_t now)
    {
        const auto& gameObjects = mGameContainer.getGameObjects();
    }
}