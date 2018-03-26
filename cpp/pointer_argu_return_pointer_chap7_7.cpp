#include <iostream> // std::cin
#include <cstdio>   // printf

const int size = 5;

double *fill_array(double *container, double *end)
{  
    if (nullptr == container || nullptr == end)
        return nullptr;

    if (nullptr > end)
        return nullptr;

    printf("please input double digital!\n");

    while (container < end)
    {
        std::cin >> *container;

        if (!std::cin) // bad input
        {
            std::cin.clear(); // clear, error flag
            while (std::cin.get() != '\n') // wait until '\n'
                continue; // while (std::cin.get() != '\n') 
            printf("bad input, please input a double digital!\n");
            continue; // while (container < end) 
        }

        container++;
    }

    return container;
}

void show_array(double *container, double *end)
{
    if (nullptr == container || nullptr == end)
        return;

    if (nullptr > end)
        return;

    while (container < end)
    {
        printf("$%f\n", *container++);
    }
}

void revalue(double factor, double *container, double *end)
{
    if (nullptr == container || nullptr == end)
        return;

    if (nullptr > end)
        return;

    while (container < end)
    {
        *container++ *= factor;
    }
}

int main()
{
    double container[size] = {0};
    double factor = 1.2;

    double *end = fill_array(container, container + size);

    show_array(container, end);

    revalue(factor, container, end);

    printf("after * factor:\n");

    show_array(container, end);

    return 0;
}