#pragma once

#include <string>

namespace stmr {
bool isalpha(const std::string& str);
std::string toupper_(const std::string& str);
std::string stem(const std::string& str);
std::string normalize(const std::string& str);
} //end of stemmer
