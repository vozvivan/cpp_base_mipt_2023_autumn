#include "stemmer.hpp"
#include <string>

bool stmr::isalpha(const std::string& str) {
    for (int i = 0; i < str.size(); ++i) {
        if ((str[i] > 'Z' || str[i] < 'A')&&(str[i] > 'z' || str[i] < 'a'))
            return false;
    }
    return true;
}

std::string stmr::toupper_(const std::string& str) {
    std::string res;
    for (int i = 0; i < str.size(); ++i) {
        res += toupper(str[i]);
    }
    return res;
}

std::string stmr::stem(const std::string& str) {
    std::string symb3 = str.substr(str.size() - 3, 3);
    std::string symb2 = str.substr(str.size() - 2, 2);
    std::string symb1 = str.substr(str.size() - 1, 1);
    
    if (symb2.compare("ED") == 0 || symb2.compare("LY") == 0) {
        return str.substr(0, str.size() - 2);
    } else if (symb1.compare("S") == 0) {
        return str.substr(0, str.size() - 1);
    } else if (symb3.compare("ING") == 0) {
        return str.substr(0, str.size() - 3);
    } else {
        return str;
    }
}

std::string stmr::normalize(const std::string& str) {
    if (stmr::isalpha(str) == false) {
        return "error, it is not tocen";
    }
    std::string res = stmr::toupper_(str);
    return stmr::stem(res);
}
