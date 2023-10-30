#pragma once

#include <vector>
#include <ostream>

#include <string_view>

namespace printer {
namespace ops {

constexpr std::string_view kSeparator {"+-+"};

void PrintNumbers(const std::vector<int>& num, std::ostream& os);

}
}
