//
// Created by jack on 09/03/19.
//

#ifndef GAMETEST_GAMEWINDOW_H
#define GAMETEST_GAMEWINDOW_H


#include <SDL2/SDL.h>

class GameWindow {

private:

    SDL_Window* window = nullptr;

    SDL_Surface* window_screen = nullptr;

    int width, height;

    bool should_close = false;

    SDL_Event input_event;

public:

    const char*  title;

    GameWindow(const char *title, int width, int height);

    bool init();

    void close();

    const int getWidth() const;

    const int getHeight() const;

    void setShould_close(bool should_close = true);

    bool isShould_close() const;

    SDL_Window *getWindow() const;

    SDL_Surface *getWindow_screen() const;

    int poll_input();

    const SDL_Event &getInput_event() const;

    void update();
};


#endif //GAMETEST_GAMEWINDOW_H
