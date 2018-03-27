#include <iostream>
#include <cstdio>

const int SEASONS = 4;

class Kaizhi {
public:
    double kaizhi[SEASONS];
};

char *season_str[SEASONS] = {
    "Spring",
    "Summer",
    "Fall",
    "Winter"
};

bool fill(Kaizhi & k)
{
    for (int i = 0; i < SEASONS; i++)
    {
        printf("input %s expense: \n", season_str[i]);

        std::cin >> k.kaizhi[i];

        if (!std::cin.good())
        {
            printf("bad input, terminate.\n");
            return false;
        }
    }

    return true;
}

void show(const Kaizhi &k)
{
    double total = 0;

    for (int i = 0; i < SEASONS; i++)
    {
        total += k.kaizhi[i];
        printf("%s expense: $%f\n", season_str[i], k.kaizhi[i]);
    }

    printf("total expense: $%f\n", total);
}

int main()
{
    Kaizhi k;

    memset(&k, 0, sizeof(k));

    if (fill(k))
        show(k);

    return 0;
}