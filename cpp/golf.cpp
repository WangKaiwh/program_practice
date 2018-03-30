//#define _CRT_SECURE_NO_WARNING
#define _CRT_SECURE_NO_DEPRECATE

#include <iostream>
#include "golf.h"

void setgolf(golf &g, const char *name, int hc)
{
    strncpy(g.name, name, sizeof(g.name));
    g.handicap = hc;
}

int  setgolf(golf &g)
{
    std::cout << "setgolf &g\n";
    return 0;
}

void handicap(golf &g, int hc)
{
    g.handicap = hc;
}

void showgolf(golf &g)
{
    std::cout << g.name << std::endl;
    std::cout << g.handicap << std::endl;
}
