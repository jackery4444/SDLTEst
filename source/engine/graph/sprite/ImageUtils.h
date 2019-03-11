//
// Created by jack on 10/03/19.
//

#ifndef GAMETEST_IMAGEUTILS_H
#define GAMETEST_IMAGEUTILS_H


#include <SDL2/SDL_surface.h>

class ImageUtils
{
public:

    static SDL_Surface* load_image(const char* path);
};


#endif //GAMETEST_IMAGEUTILS_H
