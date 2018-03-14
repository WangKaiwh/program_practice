#include <iostream>
#include <string>

int main()
{
	std::string input;
	int total = 0;

	std::cout << "input a words (to stop, enter done): \n";

	while (1) // wait until input 'done'
	{
		(std::cin >> input).get();
		//std::cin >> input;

		if ("done" == input)
		{
			break;
		}

		total++;
	}

	std::cout << "input a total of " << total << " words.";

	return 0;
}