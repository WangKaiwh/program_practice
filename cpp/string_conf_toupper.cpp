#include <iostream>
#include <string>
#include <cstdio>

inline void string_toupper(const std::string &str)
{
    for (int i = 0; i < str.size(); i++)
    {
        //std::cout << toupper(str.at(i));
        printf("%c", toupper(str.at(i)));
    }
    std::cout << std::endl;
}

int main()
{
    std::string str;

    while (1)
    {
        std::cout << "Please input a string (q to Quit):";

        std::cin >> str;

        if ("q" == str)
            break;

        string_toupper(str);
    }

    return 0;
}