#ifndef LEVEL_H
#define LEVEL_H

namespace Level {

//!
//! \brief Enum for the level properties
//!
enum levelProperties {

    EMPTY_CASE = -1,

    // Border
    BORDER_VER, BORDER_HOR,
    BORDER_ANGLE_TOP_LEFT, BORDER_ANGLE_BOTTOM_LEFT, BORDER_ANGLE_BOTTOM_RIGHT, BORDER_ANGLE_TOP_RIGHT,
    BORDER_JUNCTION_TOLEFT, BORDER_JUNCTION_TOBOTTOM, BORDER_JUNCTION_TOUP, BORDER_JUNCTION_TORIGHT,

    // Wall
    WALL_SIMPLE_VER, WALL_SIMPLE_HOR,
    WALL_END_TOLEFT, WALL_END_TORIGHT, WALL_END_TOBOTTOM, WALL_END_TOUP,
    WALL_DOUBLE_JUNCTION_TOP_LEFT, WALL_DOUBLE_JUNCTION_BOTTOM_LEFT, WALL_DOUBLE_JUNCTION_BOTTOM_RIGHT, WALL_DOUBLE_JUNCTION_TOP_RIGHT,
    WALL_TRIPLE_JUNCTION_TOLEFT, WALL_TRIPLE_JUNCTION_TORIGHT, WALL_TRIPLE_JUNCTION_TOBOTTOM, WALL_TRIPLE_JUNCTION_TOUP,
    WALL_QUAD_JUNCTION,

    // Rect
    RECT_VER, RECT_HOR,
    RECT_ANGLE_TOP_LEFT, RECT_ANGLE_BOTTOM_LEFT, RECT_ANGLE_BOTTOM_RIGHT, RECT_ANGLE_TOP_RIGHT,

    // WarpZone
    WZ_EXIT_VER, WZ_EXIT_VER_BORDER_LEFT, WZ_EXIT_VER_BORDER_RIGHT,
    WZ_EXIT_HOR, WZ_EXIT_HOR_BORDER_LEFT, WZ_EXIT_HOR_BORDER_RIGHT,
    WZ_ANGLE_TOP_LEFT, WZ_ANGLE_BOTTOM_LEFT, WZ_ANGLE_BOTTOM_RIGHT, WZ_ANGLE_TOP_RIGHT,

    // Total
    LEVELPROPERTIES_COUNT

};

}

#endif /* LEVEL_H */