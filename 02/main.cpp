#include <iostream>
#include <stemmer.hpp>

int main() {
    std::string inp;
    std::cin >> inp;
    std::cout << "Normalized tocen of " << inp << " is " << stmr::normalize(inp) << std::endl; 

    return 0;
}