#include <iostream>
#include <string>
#include <cstdio>

struct bop {
    std::string fullname;
    std::string title;
    std::string bopname;
    int preference; // 0 fullname, 1 title, 2 bopname
};

static bop bops[3] = {
    {"Kevin Wang", "CTO", "Kevin", 0},
    {"Jack Chen", "Actor", "Jack", 1},
    {"Jack Ma", "CEO", "Ma", 2}
};

inline void help()
{
    printf("a. display by fullname   b. display by title\n");
    printf("c. display by bopname,   d. display by preference\n");
    printf("q. quit\n");
}

inline void display_by_fullname()
{
    for (int i = 0; i < 3; i++)
        printf("%s\n", bops[i].fullname.c_str());
}

inline void display_by_title()
{
    for (int i = 0; i < 3; i++)
        printf("%s\n", bops[i].title.c_str());
}

inline void display_by_bopname()
{
    for (int i = 0; i < 3; i++)
        printf("%s\n", bops[i].bopname.c_str());
}

inline void display_by_preference()
{
    for (int i = 0; i < 3; i++)
    {
        if (0 == bops[i].preference)
            printf("%s\n", bops[i].fullname.c_str());
        else if (1 == bops[i].preference)
            printf("%s\n", bops[i].title.c_str());
        else if (2 == bops[i].preference)
            printf("%s\n", bops[i].bopname.c_str());
        else
            printf("i = %d preference error\n", i);
    }
}

// main entry
int main()
{
    char choice;

    help();

    while (1)
    {
        (std::cin.get(choice)).get();

        if ('q' == choice)
            break;

        switch (choice)
        {
        case 'a':
            display_by_fullname();
            break;
        case 'b':
            display_by_title();
            break;
        case 'c':
            display_by_bopname();
            break;
        case 'd':
            display_by_preference();
            break;
        default:
            help();
            break;
        }
    }

    return 0;
}