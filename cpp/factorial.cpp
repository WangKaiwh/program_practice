#include <iostream>
#include <array> // c++11
#include <cstdio>

int main()
{
    const int size = 16;

    std::array<long double, size> factorial;

    factorial[1] = factorial[0] = 1;

    for (int i = 2; i < size; i++)
    {
        factorial[i] = i * factorial[i - 1];
    }    

    for (int i = 0; i < size; i++)
    {
        printf("%d! = %Lf\n", i, factorial[i]);
    }

    return 0;
}
