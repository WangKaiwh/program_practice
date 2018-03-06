#include <iostream>
#include <cmath> // std::abs func header
#include <cstdio>

bool is_zero(double v)
{
    if (std::abs(v) <= 1e-15)
        return true;
    else
        return false;
}

int main()
{
    double input_data;
    double sum = 0;

    while (1)
    {
    printf("Please input a digtal! zero to quit\n");

    std::cin >> input_data; 

    if (is_zero(input_data))
    {
        printf("Quit!\n");
        break;
    }

    sum += input_data;

    printf("sum of input: %lf\n", sum);
    }

    return 0;
}

