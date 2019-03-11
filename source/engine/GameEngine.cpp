//
// Created by jack on 09/03/19.
//

#include <iostream>
#include "GameEngine.h"

GameEngine::GameEngine(GameLogicInterface *game_logic) : game_logic(game_logic) {}

void GameEngine::start()
{

    window = new GameWindow("Game Window", 640, 480);
    window->init();
    game_logic->init(window);


    while(!window->isShould_close())
    {

        while(window->poll_input() != 0) {
            game_logic->handle_input(window, window->getInput_event());
        }

        game_logic->update();
        game_logic->render(window);

    }

    window->close();
}
