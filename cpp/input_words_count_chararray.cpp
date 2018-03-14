#include <iostream>
#include <cstring>

int main()
{
	char input[128];
	int count = 0;

	std::cout << "Please input a words (to stop, enter done):\n";

	while (1)
	{
		memset(input, 0, sizeof(input)); // clear array

		std::cin.getline(input, sizeof(input));

		if (strncmp(input, "done", sizeof("done")) == 0)
		{
			break;
		}

		count++;
	}

	std::cout << "input a total of " << count << " words\n";

	return 0;
}