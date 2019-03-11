//
// Created by jack on 09/03/19.
//

#include <SDL2/SDL.h>
#include "GameWindow.h"

GameWindow::GameWindow(const char *title, const int width, const int height)
                            : title(title), width(width), height(height) {}

bool GameWindow::init() {

    if(SDL_Init(SDL_INIT_VIDEO) < 0)
    {
        printf("Failed to init SDL\n");
        return false;
    }

    window = SDL_CreateWindow(title, SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, width, height, SDL_WINDOW_SHOWN);

    if(window == nullptr) {
        printf("Failed to create game window\n");
        return false;
    }

    window_screen = SDL_GetWindowSurface(window);
    return true;
}


void GameWindow::close()
{
    SDL_DestroyWindow(window);
    SDL_Quit();
}

const int GameWindow::getWidth() const
{
    return width;
}

const int GameWindow::getHeight() const
{
    return height;
}

SDL_Window *GameWindow::getWindow() const
{
    return window;
}

SDL_Surface *GameWindow::getWindow_screen() const
{
    return window_screen;
}

void GameWindow::setShould_close(bool should_close)
{
    GameWindow::should_close = should_close;
}

int GameWindow::poll_input()
{
    return SDL_PollEvent(&input_event);
}


bool GameWindow::isShould_close() const
{
    return should_close;
}

void GameWindow::update()
{
    SDL_UpdateWindowSurface(window);
}

const SDL_Event &GameWindow::getInput_event() const
{
    return input_event;
}

