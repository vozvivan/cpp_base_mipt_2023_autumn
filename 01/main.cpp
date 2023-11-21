#include <phonetic.hpp>
#include <iostream>


int main()
{
    std::string inp;
    std::cin >> inp;
    std::cout << tts::convertTextToSound(inp) << std::endl;
}