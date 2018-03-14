#include <iostream>
#include <string>

int main()
{
	std::string month[12] = { "Jan", "Feb", "Mar", "Apr", "May", "Jun",
		"Jul", "Aug", "Sep", "Oct", "Nov", "Dec" };
	int sales[3][12] = { {0} };
	int totals[3] = {0};

	std::cout << "Please input 3 years sales.\n";

	for (int i = 0; i < 3; i++)
	{
		std::cout << i + 1 << " years\n";
		for (int j = 0; j < 12; j++)
		{
			std::cout << month << ":";
			std::cin >> sales[i][j];
		}
	}

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 12; j++)
		{
			totals[i] += sales[i][j];
		}
		printf("Year %d£¬ sales: %d\n", i + 1, totals[i]);
	}

	printf("3 years total: %d\n", totals[0] + totals[1] + totals[2]);

	return 0;
}