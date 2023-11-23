#pragma once

#include <iostream>

namespace my {
struct Point {
    int x, y;

    int Z() const { return z; }

    Point(int x, int y) : x(x), y(y) {
        std::cout << "constructor for Point" << std::endl;
    }
    ~Point() {
        std::cout << "desctructor for Point: (" << x << ", " << y << ")" << std::endl;
    }

private:
    int z;
};

std::ostream& operator<< (std::ostream& os, const Point& p) {
    return os << "(" << p.x << ", " << p.y << ")";
}

}; // namespace my