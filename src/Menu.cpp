#include "Menu.h"

#include <iostream>
using namespace std;

Menu::Menu( string title, vector<string> elements ) :
    _title( title ) {

    vector<string>::iterator it;

    for( it = elements.begin(); it != elements.end(); ++it ) {
        _elements.push_back( *it );
    }

}

Menu::~Menu() {


}