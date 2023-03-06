#include "reverseString.h"
#include <string>

std::string reverseString(std::string str)
{
    int len = str.length();
    for(int i = 0; i < len / 2; i++)
    {
        char temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }
    return str;
}