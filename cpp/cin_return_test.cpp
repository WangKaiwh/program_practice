#include <iostream>
#include <cstdio>

int main()
{
    double test = -1;

    //std::ofstream inFile;
    if (std::cin >> test)
        printf("true\n");
    else
        printf("false\n"); // if input 

    if (std::cin.fail())
        printf("fail\n");
    else
        printf("not fail\n");

    return 0;
}