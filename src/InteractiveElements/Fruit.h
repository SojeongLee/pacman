#ifndef     FRUIT_H
#define     FRUIT_H

//!
//! \file Fruit.h
//! \brief Class of a fruit that can be picked up by pac-man
//! \author Jordan Brion
//! \version 0.1
//! \date 2 september 2014
//!

#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>

#include <map>
#include <string>

#include "../Const.h"
#include "InteractiveElement.h"

//!
//! \defgroup Macros for the fruit types
//! @{
//!
#define     CHERRY          0
#define     STRAWBERRY      1
#define     APRICOT         2
#define     APPLE           3
#define     MELON           4
#define     GALXIAN_BOSS    5
#define     BELL            6
#define     KEY             7
#define     FRUIT_NBR       8
//! @}

#define     FRUIT_BETWEEN_DURATION          25000   //! \def Macro for duration between fruit appearance
#define     FRUIT_SHOWN_DURATION            15000   //! \def Macro for duration of fruit appearance

//!
//! \class Fruit
//! \brief Class of a fruit that can be picked up by pac-man
//!
class Fruit : public InteractiveElement {

public:
    //!
    //!  \brief Fruit constructor
    //!  \param type : The name (type) of the fruit
    //!  \param sprite : SDL_Texture* containing the sprite of all the characters (which containing also the fruit)
    //! \param selection : Selection on the sprite
    //!
    Fruit( const int& type,
           SDL_Texture* const& sprite,
           const SDL_Rect& selection );
    //!
    //!  \brief Fruit destructor
    //!
    ~Fruit();
    //!
    //!  \brief Getter for the type of fruit
    //!  \return The type of the fruit
    //!
    int getType() const;
    //!
    //!  \brief Setter to change the type of fruit
    //!  \param The type of the fruit
    //!
    void setType( int const& type );
    //!
    //!  \brief Getter for the number of this fruit
    //!  \return The number of this fruit
    //!
    int getNbr() const;
    //!
    //!  \brief Setter to change the number of this fruit
    //!  \param The number of this fruit
    //!
    void setNbr( int const& nbr );
    //!
    //!  \brief Getter for the number of points earned for this fruit
    //!  \return The number of points earned for this fruit
    //!
    int getPoints() const;
    //!
    //!  \brief Method to initialize the position where the fruit appears on the screen
    //!  \param position : Position on the screen
    //!
    void initPositionAreaGame( const SDL_Rect& position );
    //!
    //!  \brief Method to initialize the position of the fruit in the area bottom
    //!
    void initPositionAreaBottom();

private:
    int _type;      /*!< The type of the fruit : CHERRY, STRAWBERRY, APRICOT, APPLE, MELON, GALXIAN_BOSS, BELL, KEY */
    int _nbr;       /*!< The number of this fruit picked up */
    int _points;    /*!< The number of points earned when the fruit is picked up */

};

#endif      /* FRUIT_H */
