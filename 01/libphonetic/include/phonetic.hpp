#pragma once
#include <string>

namespace tts{
    bool isEqual(std::string text1, std::string text2);

    std::string convertTextToSound(std::string text);
    
    const std::string symbols[6] = { "bfpv", "cgjkqsxz", "dt", "l", "mn", "r"};
    const std::string simbols_glasn = "eyuioa";
}