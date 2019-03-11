//
// Created by jack on 10/03/19.
//

#include <iostream>
#include "ImageUtils.h"

SDL_Surface* ImageUtils::load_image(const char *path)
{
    auto image = (SDL_LoadBMP(path));

    if(image == nullptr) {
        std::cout << "Failed to load image:" <<  SDL_GetError() << std::endl;
    }

    return image;
}
