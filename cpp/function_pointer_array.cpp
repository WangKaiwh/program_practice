#include <iostream>

#define ERROR_CODE 0x7aaeeabaF

typedef double (*cal_func)(double, double);

double add(double v1, double v2)
{
    return v1 + v2;
}

double subtract(double v1, double v2)
{
    return v1 - v2;
}

double multiply(double v1, double v2)
{
    return v1 * v2;
}

double calculate(double v1, double v2, cal_func cb)
{
    if (nullptr != cb)
        return cb(v1, v2);
    
    std::cout << "cb nullptr!\n";
    return ERROR_CODE;
}

#ifndef ARRAY_SIZE
#define ARRAY_SIZE(array)   (sizeof(array) / sizeof(array[0]))
#endif

int main()
{
    double v1, v2;
    cal_func funlist[3] = {
        add,
        subtract,
        multiply
    };

    std::cout << "input two number:";

    while (std::cin >> v1 >> v2) // if ok, while 
    {
        for (int i = 0; i < ARRAY_SIZE(funlist); i++)
        {
            printf("result£º %f\n", calculate(v1, v2, funlist[i]));
        }
        std::cout << "input two number:";
    }

    return 0;
}