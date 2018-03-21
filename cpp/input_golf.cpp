#include <iostream>
#include <cstdio>
#include <vector>

inline void input(std::vector<double> &in)
{
    double temp = 0;

    printf("Please input golf numbers!\n");

    for (int i = 0; i < 10; i++)
    {
        //std::cin >> in[i];  BUG ON
        std::cin >> temp;

        if (std::cin.fail())
            return;

        in.push_back(temp);
    }
}

inline void display(const std::vector<double> &out)
{
    for (unsigned int i = 0; i < out.size(); i++)
        printf("%f ", out[i]);
    printf("\n");
}

inline void average(const std::vector<double> &out)
{
    double sum = 0;

    for (unsigned int i = 0; i < out.size(); i++)
        sum += out[i];

    if (out.size() > 0)
        printf("averay: %f\n", sum / out.size());
    else
        printf("ignore: size == 0 \n");
}

int main()
{
    std::vector<double> in;

    input(in);

    display(in);

    average(in);

    return 0;
}
