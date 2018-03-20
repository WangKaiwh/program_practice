#include <iostream>
#include <fstream>
#include <cstdio>
#include <cstdlib>

int main()
{
    std::ifstream inFile;
    char ch;
    int cnt = 0;

    inFile.open("temp.txt");

    if (inFile.is_open())
    {
        printf("temp.txt is open ok!\n");
    }
    else
    {
        printf("temp.txt is open error.\n");
        exit(1);
    }

    inFile.get(ch);
    printf("%c", ch);
    cnt++;

    while (inFile.good())
    {
        inFile.get(ch);
        printf("%c", ch);
        cnt++;
    }

    if (!inFile.eof())
    {
        printf("Reading file mismatch!\n");
    }
    else
    {
        printf("total char number: %d\n", cnt);
    }

    return 0;
}