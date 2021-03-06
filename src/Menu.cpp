#include "Menu.h"

#include <iostream>
using namespace std;

Menu::Menu( string title, vector<string> elements ) :
    _title( title ),  _elementID( 1 ) {

    vector<string>::iterator it;

    for( it = elements.begin(); it != elements.end(); ++it ) {
        _elements.push_back( *it );
    }

}

Menu::~Menu() {


}

void Menu::setElementID( Uint8 const& value ) {

    _elementID = value;

}
