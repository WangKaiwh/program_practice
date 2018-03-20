#include <iostream>
#include <cstdio>

int main()
{
	int count = 0;

	printf("Please input a count: ");

	std::cin >> count;

	for (int i = 0; i < count; i++)
	{
		for (int j = 0; j < count - 1 -i; j++)
		{
			printf(".");
		}
		for (int j = 0; j < i + 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}

	return 0;
}
