#include <memory>

#include "scoped_ptr.hpp"
#include "point.hpp"

int main() {
    // RAII
    // lock-free

    // my::Point* p = new my::Point(3, 4);
    // std::cout << "(" << p->x << ", " << p->y << ")" << std::endl;
    // std::cout << "(" << (*p).x << ", " << (*p).y << ")" << std::endl;
    // delete p;

    // my::Point p2{4, 2};
    // std::cout << "(" << p2.x << ", " << p2.y << ")" << std::endl;

    // std::unique_ptr
    // std::shared_ptr

    // std::unique_ptr<my::Point> pi{new my::Point(4, 2)};
    // std::cout << *pi << std::endl;
    // std::unique_ptr<my::Point> pi2{std::move(pi)};
    // std::cout << *pi2 << std::endl;

    // std::cout << *pi << std::endl;

    // std::shared_ptr<my::Point> pup{new my::Point(7, 7)};

    // std::shared_ptr<my::Point> pup2 = pup;
    // std::cout << *pup << std::endl;
    // std::cout << pup->Z() << std::endl;
    // std::cout << *pup2 << std::endl;

    my::scoped_ptr<my::Point> p{new my::Point(3, 3)};
    // my::scoped_ptr<my::Point> p2 = p;

    // auto_ptr

    std::cout << "(" << p->x << ", " << p->y << ")" << std::endl;
    std::cout << p.get()->x << std::endl;
    std::cout << (p.operator->())->x << std::endl;

    // std::cout << *p << std::endl;
}