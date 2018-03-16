#include <iostream>
#include <cctype>
#include <cstdio>

int main()
{
    char ch;

    printf("Please get a choice: \n");
    printf("a) apple b) banana\n");
    printf("c) cat   d) dog\n");

    while (1)
    {
        (std::cin.get(ch)).get();

        switch (ch)
        {
            case 'a':
                printf("this is apple\n");
                break;
            case 'b':
                printf("this is banana\n");
                break;
            case 'c':
                printf("this is cat\n");
                break;
            case 'd':
                printf("this is dog\n");
                break;
            default:
                printf("please enter: a b c d to Choice: ");
                break;
        }
    }

    return 0;
}