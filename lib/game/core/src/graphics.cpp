#include <graphics.h>

#include <game_container.h>

#include <iostream>
#include <stdio.h>

#include <chrono>

namespace zaolahma
{
    Graphics::Graphics(const uint16_t width, const uint16_t height, const GameContainer& gameContainer) 
        : Task("Graphics", 5u), mWidth(width), mHeight(height), mGameContainer(gameContainer)
    {
        std::cout<<"Graphics created with width: "<<mWidth<<" and height: "<<mHeight<<std::endl;
    }

    void Graphics::execute(const uint64_t now)
    {
        auto before = std::chrono::duration_cast<std::chrono::milliseconds>
                    (std::chrono::high_resolution_clock::now().time_since_epoch()).count();

        /* Reset buf */
        const uint16_t graphicsBufSize = mWidth * mHeight + mHeight;
        mGraphicsBuf.assign(graphicsBufSize, ' ');

        /* Add all the new lines needed */
        for (unsigned int i = mWidth; i < graphicsBufSize; i += mWidth + 1)
        {
            mGraphicsBuf[i] = '\n';
        }

        const auto& gameObjects = mGameContainer.getGameObjects();

        for (const auto& object : gameObjects)
        {
            const Vector& pos = object->getPos();
            /* Line below hurts head, but does make sense if looked at for a few hours */
            uint16_t objectBufPos = (pos.getY() * mWidth) + pos.getY() + pos.getX();

            if (' ' == mGraphicsBuf.at(objectBufPos))
            {
                mGraphicsBuf[objectBufPos] = object->getAppearance();
            }
            else
            {
                std::cout<<"Conflict: "<<mGraphicsBuf.at(objectBufPos)<<std::endl;
            }
        }

        /* Graphics buf has been prepared, so clear the screen and print */
        std::cout<<"\n\033c";

        std::cout<<mGraphicsBuf<<std::endl;

        auto after = std::chrono::duration_cast<std::chrono::microseconds>
                    (std::chrono::high_resolution_clock::now().time_since_epoch()).count();

        std::cout<<"Drawing took "<<after - before<<"us"<<std::endl;
    }
}