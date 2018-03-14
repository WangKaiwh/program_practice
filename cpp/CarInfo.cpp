#include <iostream>
#include <string>
#include <cstdio>

class CarInfo {
public:
	std::string vendor_name;
	int year;
};

// main point 
// new array AND delete array, new Carinfo[number]  --- delete[] p_cars
// (cin >> xxx).get(), delete '\n' of input buffer

int main()
{
	CarInfo *p_cars = nullptr;
	int number = 0;

	printf("Please input car number: ");

	(std::cin >> number).get(); // .get(), get '\n' of input buffer.

	std::cout << "what you input is " << number << std::endl;

	// new object
	p_cars = new CarInfo[number];

	// input all info
	for (int i = 0; i < number; i++)
	{
		char input_msg[128] = {0};

		printf("%d car-------------\n", i + 1);
		printf("Input vendor name: ");
		std::cin.getline(input_msg, 128);
		p_cars[i].vendor_name = input_msg;
			
		printf("Input product year: ");
		(std::cin >> p_cars[i].year).get();
	}

	// display all cars info 
	for (int i = 0; i < number; i++)
	{
		printf("%d %s\n", p_cars[i].year, p_cars[i].vendor_name.c_str());
	}

	delete[] p_cars;
	p_cars = nullptr; // re-init

	return 0;
}