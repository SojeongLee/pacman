#ifndef     COLOR_H
#define     COLOR_H

#include <SDL2/SDL.h>

#define     RED         0
#define     PINK        1
#define     BLUE        2
#define     ORANGE      3

namespace Color {

    static const SDL_Color SDL_WHITE = { 255, 255, 255, 0 };
    static const SDL_Color SDL_RED = { 255, 0, 0, 0 };
    static const SDL_Color SDL_GREEN = { 0, 255, 0, 0 };
    static const SDL_Color SDL_BLUE = { 0, 0, 255, 0 };

}

#endif      /* COLOR_H */
