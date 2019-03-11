#include<SDL2/SDL.h>
#include <stdio.h>
#include <bits/unique_ptr.h>
#include "engine/graph/GameWindow.h"
#include "engine/GameLogic.h"
#include "engine/GameEngine.h"

const int SCREEN_WIDTH = 640;
const int SCREEN_HEIGHT = 480;


int main( int argc, char* args[] )
{

    auto logic = new GameLogic();
    auto engine = GameEngine(logic);

    engine.start();

    return 0;
}