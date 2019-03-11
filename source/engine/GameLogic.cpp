//
// Created by jack on 09/03/19.
//

#include <iostream>
#include "GameLogic.h"
#include "graph/sprite/ImageUtils.h"


void GameLogic::init(GameWindow *window)
{
    image = ImageUtils::load_image(path);
    SDL_BlitSurface(image, nullptr, window->getWindow_screen(), nullptr);
}

void GameLogic::update()
{
}

void GameLogic::render(GameWindow *window)
{
    window->update();
}

void GameLogic::handle_input(GameWindow* window, const SDL_Event& event)
{

    if(event.type == SDL_QUIT)
    {
        window->setShould_close(true);
    }
}
