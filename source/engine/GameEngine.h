//
// Created by jack on 09/03/19.
//

#ifndef GAMETEST_GAMEENGINE_H
#define GAMETEST_GAMEENGINE_H


#include <SDL2/SDL_video.h>
#include "GameLogicInterface.h"
#include "graph/GameWindow.h"

class GameEngine
{

private:

    GameLogicInterface* game_logic = nullptr;

    GameWindow* window = nullptr;

public:

    explicit GameEngine(GameLogicInterface *game_logic);

    void start();
};


#endif //GAMETEST_GAMEENGINE_H
