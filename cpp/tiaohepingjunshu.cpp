#include <iostream>
#include <cstdio>

// r = 2 * x * y / (x + y)
bool cal_tiaohepingjunshu(double x, double y, double &result)
{
    if (0 != x + y)
    {
        result = 2.0 * x * y / (x + y);
        return true;
    }
    else
    {
        printf("x + y = 0, x = %f, y = %f\n", x, y);
        return false;
    }
}

int main()
{
    double x, y;

    printf("Please input tow digital (0 to quit)!\n");
    while (1)
    {
        double result = 0;

        std::cin >> x >> y;
        if (std::cin.good())
        {
            if (0 == x || 0 == y)
            {
                printf("u input zero! quit!\n");
                break;
            }

            if (cal_tiaohepingjunshu(x, y, result))
                printf("x :%f, y: %f, tiaohepingjunshu: %f\n", x, y, result);
        }
        else
        {
            printf("input error, try again!\n");
            std::cin.clear(); // ### BUG
        }
    }

    return 0;
}