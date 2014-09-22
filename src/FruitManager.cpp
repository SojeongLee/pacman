#include "FruitManager.h"

using namespace std;

FruitManager::FruitManager() {

}

FruitManager::~FruitManager() {}

void FruitManager::initFruit( SDL_Renderer* const& renderer, SDL_Surface* const& sprite ) {

    for(int i(0); i < FRUIT_NBR; i++) {

        _fruit.push_back( new Fruit( i, renderer, sprite ) );

    }

}

vector<Fruit*> FruitManager::getFruit() const {

    return _fruit;

}

Fruit* FruitManager::getOneFruit( int type ) const {

    return _fruit[ type ];

}

int FruitManager::getFruitNbr( int type ) const {

    _fruit[ type ]->getNbr();

}

void FruitManager::incFruitNbr( int type ) {

    _fruit[ type ]->setNbr( _fruit[ type ]->getNbr() +1 );

}

void FruitManager::decFruitNbr( int type ) {

    _fruit[ type ]->setNbr( _fruit[ type ]->getNbr() -1 );

}

int FruitManager::getFruitPoints( int type ) const {

    _fruit[ type ]->getPoints();

}
