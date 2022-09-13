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
    gameContainer.addObject(std::shared_ptr<GameObject>(new GameObject('A', Vector(10, 10))));
    Graphics graphics(100, 100, gameContainer);

    Scheduler scheduler;
    scheduler.registerTask(graphics);
    scheduler.registerTask(gameContainer);

    scheduler.run();

    return 0;
}