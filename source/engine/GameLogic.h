//
// Created by jack on 09/03/19.
//

#ifndef GAMETEST_GAMELOGIC_H
#define GAMETEST_GAMELOGIC_H

#include <SDL2/SDL_video.h>
#include "GameLogicInterface.h"

class GameLogic : public GameLogicInterface {

    const char* path = const_cast<char *>("/home/jack/CLionProjects/GameTest/res/budgie.bmp");

    SDL_Surface* image = nullptr;

    void init(GameWindow *window) override;

    void update()  override;

    void render(GameWindow *window) override;

    void handle_input(GameWindow* window, const SDL_Event& event) override;
};

#endif //GAMETEST_GAMELOGIC_H
