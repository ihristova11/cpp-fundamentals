#include <iostream>
#include <string>
#include <sstream>
#include <vector>

int main()
{
	std::string input;
	std::getline(std::cin, input);
	std::istringstream stream(input);
	std::string str; 
	std::string num = "";
	int max = INT_MIN;
	int i;

	while (stream >> str)
	{
		i = 0;
		while (str[i] != '\0')
		{
			if (isdigit(str[i]))
			{
				num += str[i];
			}
			++i;
		}

		//max check
		if (stoi(num) > max)
		{
			max = stoi(num);
		}
		num = "";
	}

	std::cout << max << std::endl;

	return 0;
}