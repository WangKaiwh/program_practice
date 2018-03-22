#include <iostream>

inline int jiecheng(int v)
{
    if (0 == v || 1 == v)
        return 1;

    return v * jiecheng(v-1);
}

int main()
{
    int i = 0;

    printf("Input a number, to cal jiecheng! (non number quit!)\n");

    while (std::cin >> i) // if error, return false
    {
        printf("%d jiecheng:%d\n", i, jiecheng(i));
    }

    return 0;
}