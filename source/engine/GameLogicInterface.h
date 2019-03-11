//
// Created by jack on 09/03/19.
//

#ifndef GAMETEST_GAMELOGICINTERFACE_H
#define GAMETEST_GAMELOGICINTERFACE_H


#include "graph/GameWindow.h"

class GameLogicInterface
{

public:

    virtual void init(GameWindow* window) = 0;

    virtual void update() = 0;

    virtual void render(GameWindow* window) = 0;

    virtual void handle_input(GameWindow* window, const SDL_Event& event) = 0;
};


#endif //GAMETEST_GAMELOGICINTERFACE_H
