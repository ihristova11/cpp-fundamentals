#include <iostream>
#include <string>

void covertToUpper(std::string& input)
{
	int size = input.size();

	if (isalpha(input[0]) && islower(input[0]))
	{
		input[0] = toupper(input[0]);
	}

	for (size_t i = 1; i < size; i++)
	{
		if (islower(input[i]) && !isalpha(input[i - 1]))
		{
			input[i] = toupper(input[i]);
		}
	}
}

int main()
{
	std::string input;
	std::getline(std::cin, input);

	covertToUpper(input);

	std::cout << input << std::endl;

	return 0;
}