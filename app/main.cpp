#include <iostream>

#include <CPlusPlusSnakeConfig.h>
#include <graphics.h>

int main(int argc, char* argv[])
{
    std::cout<<argv[0]<<" Version "<< CPlusPlusSnake_VERSION_MAJOR<<"."<<CPlusPlusSnake_VERSION_MINOR<<std::endl;

    Graphics graphics = Graphics(100, 100);

    return 0;
}