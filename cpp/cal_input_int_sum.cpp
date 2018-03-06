#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int f, l, sum;

    printf("input two integer.\n");

    cin >> f >> l;

    printf("f = %d, l = %d\n", f, l);

    sum = 0;

    for (int i = f; i <= l; i++)
    {
        sum += i;
    }

    printf("%d -- %d, sum = %d\n", f, l, sum);

    return 0;
}
