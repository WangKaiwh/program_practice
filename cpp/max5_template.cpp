#include <iostream>

template <class T>
T max5(T *array)
{
    T max = 0;

    for (int i = 0; i < 5; i++)
    {
        if (array[i] > max)
            max = array[i];
    }

    return max;
}

int main()
{
    int a1[] = {1,5,3,2,4};
    double a2[] = {5.6, 1.1, 9.2, 0.8, 0.1};

    std::cout << "a1 max: " << max5(a1) << std::endl;
    std::cout << "a2 max: " << max5(a2) << std::endl;

    return 0;
}