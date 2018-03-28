#define _CRT_SECURE_NO_DEPRECATE

#include <iostream>
#include <cstring>

struct stringy {
    char *c_str;
    int cnt;
};

void show(const stringy &str)
{
    if (nullptr == str.c_str)
    {
        return;
    }

    std::cout << str.c_str << std::endl;
}

// overload
void show(const stringy &str, int repeat)
{
    if (nullptr == str.c_str)
    {
        return;
    }

    for (int i = 0; i < repeat; i++)
    {
        std::cout << "repeat: " << i + 1 << std::endl;
        std::cout << str.c_str << std::endl;
    }
}

bool set(stringy &str, const char *c_str)
{
    if (nullptr == c_str)
        return false;

    str.cnt = strlen(c_str) + 1; // '\0'
         
    str.c_str = new char[str.cnt];

    // if failed???

    strncpy(str.c_str, c_str, str.cnt);

    return true;
}

int main()
{
    stringy str;
    char *test = "This is a test string";

    set(str, test);

    show(str);

    std::cout << "-----------------------\n";

    show(str, 2);

    return 0;
}