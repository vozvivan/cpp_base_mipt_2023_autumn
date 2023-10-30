#include "printer.h"

#include <iterator>

void printer::ops::PrintNumbers(const std::vector<int>& num, std::ostream& os) {
    if(!num.empty()) {
        std::copy(num.begin(), 
            num.end()-1, std::ostream_iterator<int>(os, kSeparator.data()));
        os << *(num.end()-1);
    }
    os << std::endl;
}

