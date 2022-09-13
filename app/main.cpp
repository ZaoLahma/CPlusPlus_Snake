#include <iostream>
#include <memory>

#include <CPlusPlusSnakeConfig.h>
#include <scheduler.h>
#include <graphics.h>
#include <game_container.h>
#include <game_object.h>
#include <vector.h>

using namespace zaolahma;

int main(int argc, char* argv[])
{
    std::cout<<argv[0]<<" Version "<< CPlusPlusSnake_VERSION_MAJOR<<"."<<CPlusPlusSnake_VERSION_MINOR<<std::endl;

    GameContainer gameContainer;

    /* Test of the Graphics implementation. Just dump "random" ASCII */
    for (unsigned int x = 0u; x < 20; ++x)
    {
        for (unsigned int y = 0u; y < 20; ++y)
        {
            gameContainer.addObject(std::shared_ptr<GameObject>(new GameObject('0' + x, Vector(x, y))));
        }
    }

    Graphics graphics(20, 20, gameContainer);

    Scheduler scheduler;
    scheduler.registerTask(graphics);
    scheduler.registerTask(gameContainer);

    scheduler.run();

    return 0;
}