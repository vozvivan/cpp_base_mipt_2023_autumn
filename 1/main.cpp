
#include "printer.h"

#include <iostream>

auto main() -> int {
    printer::ops::PrintNumbers({10, 1, 2, 3}, std::cout);
    printer::ops::PrintNumbers({}, std::cout);
}
