#include <iostream>
#include <vector>
#include <cstdio>

typedef std::vector<int> v_int;

inline void display(const v_int &arr)
{
    for (int i = 0; i < 10; i++)
    {
        printf("%03d, ", arr[i]);
    }
    printf("\n");
}

inline void reverse(v_int &arr)
{
    int temp = -1;

    for (int i = 0; i < arr.size() / 2; i++)
    {
        temp = arr[i];
        arr[i] = arr[arr.size() - 1 - i];
        arr[arr.size() - 1 - i] = temp;
    }
}

int main()
{
    v_int arr;

    for (int i = 0; i < 10; i++)
    {
        arr.push_back(i * 100 + i);
    }

    display(arr);

    reverse(arr);

    display(arr);

    return 0;
}