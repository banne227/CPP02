#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"
#include <iostream>

class Point {

    private:
        Fixed const _x;
        Fixed const _y;
    
    public:
        Point();
        Point(const float x, const float y);
        Point(Point const &copy);
        Point &operator=(Point const &other);
        ~Point();

        Fixed get_x() const;
        Fixed get_y() const;

};

#endif