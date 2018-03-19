#include <iostream>
#include <cstdio>

const double tax_less_5000 = 0;
const double tax_5001_15000 = 0.1;
const double tax_15001_35000 = 0.15;
const double tax_more_35000 = 0.2;

#define IS_MORE_THAN(V, M)   ( (V) > (M) )

inline double cal_tax(double salary)
{
    double tax = 0;

    if (IS_MORE_THAN(salary, 35000))
    {
        tax = 10000.0 * tax_5001_15000 + 20000.0 * tax_15001_35000 + (salary - 35000.0) * tax_more_35000;
    }
    else if (IS_MORE_THAN(salary, 15001))
    {
        tax = 10000.0 * tax_5001_15000 + (salary -  15000.0) * tax_15001_35000;
    }
    else if (IS_MORE_THAN(salary, 5001))
    {
        tax = (salary - 5000.0) * tax_5001_15000;
    }
    else
    {
        printf("U needn't cost tax!\n");
    }

    return tax;
}

int main()
{
    double salary = -1;

    while (1)
    {
        char salary_str[128] = {0};

        printf("Please input your salary: ");

        std::cin.getline(salary_str, sizeof(salary_str));

        salary = strtof(salary_str, NULL);

        if (0 == salary || salary < 0)
        {
            printf("Warning you input invalid salary: %f!\n", salary);
            break;
        }

        printf("U must cost tax: %f\n", cal_tax(salary));
    }

    return 0;
}