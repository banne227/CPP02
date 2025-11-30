#include <iostream>
#include "Point.hpp"

bool bsp(Point const a, Point const b, Point const c, Point const p);

int main() {
    Point a(0, 0);
    Point b(10, 0);
    Point c(0, 10);

    Point inside(3, 3);
    Point outside(10, 10);
    Point onEdge(5, 0);

    std::cout << "Triangle: A(0,0), B(10,0), C(0,10)\n\n";

    // ----- Test 1 : inside -----
    if (bsp(a, b, c, inside))
        std::cout << "Point (3,3) is INSIDE the triangle\n";
    else
        std::cout << "Point (3,3) is OUTSIDE the triangle\n";

    // ----- Test 2 : outside -----
    if (bsp(a, b, c, outside))
        std::cout << "Point (10,10) is INSIDE the triangle\n";
    else
        std::cout << "Point (10,10) is OUTSIDE the triangle\n";

    // ----- Test 3 : on edge (should be OUTSIDE) -----
    if (bsp(a, b, c, onEdge))
        std::cout << "Point (5,0) is INSIDE the triangle\n";
    else
        std::cout << "Point (5,0) is OUTSIDE the triangle (on edge)\n";

    return 0;
}
