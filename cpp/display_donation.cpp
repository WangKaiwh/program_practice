#include <iostream>
#include <string>
#include <cstdio>

class DonationInfo {
public:
    std::string name;
    double donation;
};

int main()
{
    DonationInfo *p = NULL;
    int num = 0;
    char num_str[128] = {0};
    int flag = 0;

    do
    {
        printf("Please input the people num: \n");
        std::cin.getline(num_str, sizeof(num_str));
        num = strtod(num_str, NULL);
        printf("[debug] --- U input num is %d\n", num);
    } while (num == 0);

    p = new DonationInfo[num];

    for (int i = 0; i < num; i++)
    {
        char donation_str[128] = {0};
        char name_str[64] = {0};

        printf("Please input name\n");
        std::cin.getline(name_str, sizeof(name_str));
        p[i].name = name_str;

        printf("Please input donation\n");
        std::cin.getline(donation_str, sizeof(donation_str));
        p[i].donation = strtof(donation_str, NULL);
    }

    printf("Grand patrons:\n");
    for (int i = 0; i < num; i++)
    {
        if (p[i].donation > 10000.0)
        {
            flag = 1;
            printf("  %-20s: %f\n", p[i].name.c_str(), p[i].donation);
        }
    }
    if (0 == flag)
    {
        printf("none\n");
    }

    printf("patrons:\n");
    flag = 0;
    for (int i = 0; i < num; i++)
    {
        if (p[i].donation <= 10000.0)
        {
            flag = 1;
            printf("  %-20s: %f\n", p[i].name.c_str(), p[i].donation);
        }
    }
    if (0 == flag)
    {
        printf("none\n");
    }

    delete[] p;
    p = nullptr;

    return 0;
}


