#include "Fixed.hpp"
#include "Point.hpp"

Point::Point() : _x(0), _y(0) {}

Point::~Point() {}

Point::Point(const float x, const float y) : _x(x), _y(y) {}

Point::Point(Point const &copy) : _x(copy.get_x()), _y(copy.get_y()) {}

Fixed Point::get_x() const {
    return this->_x;
}

Fixed Point::get_y() const {
    return this->_y;
}

// cette fonction est inutilisable mais demandée "Orthodox Canonical Form"
// car _x et _y sont de type const donc non modifiable
Point &Point::operator=(Point const &other) {
    (void) other;
    return *this;
}