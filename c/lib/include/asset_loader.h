#include "SDL_render.h"

#include <unistd.h>

#pragma once


class AssetLoader{
public:
    AssetLoader() = delete;
    static SDL_Texture* loadTexture(SDL_Renderer *renderer, const char* path) {
//        static char buffer[128];
//
//        memset(buffer, 0, sizeof(buffer));
//
//        getcwd(buffer, sizeof(buffer));
//
//        // use parentDir, since executable is in cmake-build-debug folder
//        sprintf(buffer, "%s/%s", parentDir(buffer), path);
//
//
//        return IMG_LoadTexture(renderer, buffer);
        return nullptr;
    }

};

