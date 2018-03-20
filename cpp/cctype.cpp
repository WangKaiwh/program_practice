#include <iostream>
#include <cctype>
#include <cstdio>

int main()
{
    char ch;

    std::cout << "input a char: " << std::endl;
    while (1)
    {
        std::cin.get(ch);

        if ('@' == ch)
        {
            printf("@ break!\n");
            break;
        }

        if (isalpha(ch))
        {
            printf("U input %c\n", ch);

            if (islower(ch))
            {
                printf("lower to upper: %c\n", toupper(ch));
            }
            else
            {
                printf("upper to lower: %c\n", tolower(ch));
            }
        }
    }

    return 0;
}