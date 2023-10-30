
#include <iostream>

#include <fib.h>

int main() {
    int promt;
    std::cin >> promt;
    std::cout << "Fib(" << promt << ") = " << fib::ops::Fib(promt) << std::endl;
}
