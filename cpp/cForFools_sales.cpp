#include <iostream>
#include <string>
#include <cstdio>

int main()
{
	std::string month[12] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun", 
		"Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
	int sales[12] = {0};
	int total = 0;

	printf("Sales of <C++ For Fools>.\n");

	// input salse numbers
	for (int i = 0; i < 12; i++)
	{
		std::cout << "Please input " << month[i] << " sales number: ";
		std::cin >> sales[i];
	}

	// display every month sales AND cal total
	for (int i = 0; i < 12; i++)
	{
		std::cout << month[i] << ": " << sales[i] << std::endl;
		total += sales[i];
	}

	printf("total sales number is %d\n", total);

	return 0;
}
