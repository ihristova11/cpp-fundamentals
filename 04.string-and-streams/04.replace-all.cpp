#include <iostream>
#include <string>

void replaceAll(std::string& input, std::string toReplace, std::string replaceWith)
{
	int found = input.find(toReplace);

	while (found != std::string::npos)
	{
		input.replace(found, toReplace.size(), replaceWith);
		found = input.find(toReplace);
	}
}

int main()
{
	std::string input;
	std::string toReplace;
	std::string replaceWith;

	std::getline(std::cin, input);
	std::getline(std::cin, toReplace);
	std::getline(std::cin, replaceWith);

	replaceAll(input, toReplace, replaceWith);

	std::cout << input << std::endl;
	return 0;
}