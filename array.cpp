#include <iostream>
#include <array>
#include <cstdio>
#include <cmath>

inline bool iszero(double v)
{
    if (std::abs(v) <= 1e-15)
        return true;
    else
        return false;
}

int main()
{
    std::array<double, 10> don;
    int cnt = 0;

    for (int i = 0; i < 10; i++)
    {
        char temp[128] = {0};

        printf("donation: ");
        std::cin.getline(temp, sizeof(temp));
        
        don[i] = strtof(temp, NULL);
        printf("[debug]: strtof - %lf\n", don[i]);

        if (iszero(don[i])) // if iszero, you input not digital.
        {
            printf("not digital\n");
            break;
        }
        cnt++;
    }

    double sum = 0;
    for (int i = 0; i < cnt; i++)
    {
        sum += don[i];
    }

    if (cnt > 0)
    {
        printf("aver is : %lf\n", sum / cnt);
        
        printf("below is large then aver\n");
        for (int i = 0; i < cnt; i++)
        {
            if (don[i] > sum / cnt)
                printf("%lf\n", don[i]);
        }
    }

    return 0;
}