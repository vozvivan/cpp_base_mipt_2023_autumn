#include <iostream>
#include <string>
#include <phonetic.hpp>

bool tts::isEqual(std::string txt1, std::string txt2)
{
    std::string text1 = tts::convertTextToSound(txt1);
    std::string text2 = tts::convertTextToSound(txt2); 
    if (!(text1.size() == text2.size()))
    {
        return false;
    }

    for (int i = 0; i < text1.size(); ++i)
    {
        if (text1[i] != text2[i]) return false;
    }

    return true;
}

std::string tts::convertTextToSound(std::string text)
{

    char symb;
    const char first_symb = text[0];      // сохраняем первую букву

    for (int i = 1; i < text.size(); ++i) // приведем все символы к нижнему регистру и удалим 'h' 'w'
    {
        text[i] = tolower(text[i]);
        if (text[i] == 'h' || text[i] == 'w')
        {
            text.erase(i, 1);
            --i;
        }
    }

    bool flag;
    for (int i = 0; i < text.size(); ++i) // заменим согласные солгласно алгоритму
    {
        flag = false;
        for (int j = 0; j < 6; ++j)
        {
            for (int k = 0; k < tts::symbols[j].size(); ++k)
            {
                if (text[i] == tts::symbols[j][k])
                {
                    flag = true;
                    text.replace(i, 1, std::to_string(j + 1));
                    break;
                }
            }
            if (flag)
                break;
        }
    }

    for (int i = 0; i < text.size() - 1; ++i) // удалим все повторы цифр подряд
    {
        if (text[i] > '9' || text[i] < '0')
            continue;
        else if (text[i] == text[i + 1])
        {
            text.erase(i + 1, 1);
            i--;
        }
    }

    for (int i = 0; i < text.size(); ++i) // удалим все гласные
    {
        for (int j = 0; j < tts::simbols_glasn.size(); ++j)
        {
            if (text[i] == tts::simbols_glasn[j])
            {
                text.erase(i, 1);
                --i;
                break;
            }
        }
    }

    text[0] = toupper(first_symb); // заменим первый символ, запомненные в first_simb, сделав ее заглавной

    if (text.size() > 4)
        text.resize(4); // обрезаем до 4ех символов
    else
    {
        while (text.size() < 4)
        {
            text.append("0"); // иначе дополняем нулями до 4ех символов
        }
    }

    return text;
}