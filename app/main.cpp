#include <iostream>
#include <memory>

#include <CPlusPlusSnakeConfig.h>
#include <scheduler.h>
#include <graphics.h>

using namespace zaolahma;

int main(int argc, char* argv[])
{
    std::cout<<argv[0]<<" Version "<< CPlusPlusSnake_VERSION_MAJOR<<"."<<CPlusPlusSnake_VERSION_MINOR<<std::endl;

    Scheduler scheduler;
    scheduler.registerTask(std::unique_ptr<Task>(new Graphics(100, 100)));

    scheduler.run();

    return 0;
}