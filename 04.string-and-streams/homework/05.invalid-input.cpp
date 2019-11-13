#include <iostream>
#include <string>
#include <sstream>

bool isNumber(std::string str)
{
	return isdigit(str[0]) || (str[0] == '-' && isdigit(str[1]));
}

int main()
{
	std::string input;
	std::getline(std::cin, input);

	std::istringstream lineStream(input);
	std::string current;
	int sum = 0;
	std::string words = "";

	while (lineStream >> current)
	{
		if (isNumber(current))
		{
			sum += std::stoi(current);
		}
		else
		{
			words += current + " ";
		}
	}

	std::cout << sum << std::endl;
	std::cout << words << std::endl;

	return 0;
}