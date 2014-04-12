#include "InteractiveElement.h"

using namespace std;

/* STATIC VARIABLES */
int InteractiveElement::zIndexCounter = 0;

InteractiveElement::InteractiveElement(SDL_Renderer* const& renderer, SDL_Surface* const& sprite) {

    // Initialize texture
    _element = SDL_CreateTextureFromSurface(renderer, sprite);

    // Inc counter for z-index
    zIndexCounter++;
    // z-index
    _zIndex = zIndexCounter;

}

InteractiveElement::InteractiveElement(map<string, int> dest, SDL_Renderer* const& renderer, SDL_Surface* const& sprite) :
        _initialX(dest["x"]), _initialY(dest["y"]) {

    // Initialize texture
    _element = SDL_CreateTextureFromSurface(renderer, sprite);

    // Initialize positions on the screen
    _initialStateDest["x"] = dest["x"] * 30 + AREAGAME_MARGIN;
    _initialStateDest["y"] = dest["y"] * 30 + AREATOP_HEIGHT;
    initRect(&_position, 30, 30, _initialStateDest["x"], _initialStateDest["y"]);

    // Inc counter for z-index
    zIndexCounter++;
    // z-index
    _zIndex = zIndexCounter;

}

void InteractiveElement::show(SDL_Renderer* const& pRenderer) {

    SDL_RenderCopy(pRenderer, _element, &_selection, &_position);

}

void InteractiveElement::initRect(SDL_Rect* rect, int const& w, int const& h, int const& x, int const&  y) {

    rect->w = w;
    rect->h = h;
    rect->x = x;
    rect->y = y;

}

SDL_Rect InteractiveElement::getPosition() const {

    return _position;

}

SDL_Rect InteractiveElement::getSelection() const {

    return _position;

}
