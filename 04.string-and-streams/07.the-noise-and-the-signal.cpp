#include <iostream>
#include <string>
#include <sstream>	

int main()
{
	std::string input;
	std::getline(std::cin, input);
	std::istringstream stream(input);
	std::string str;
	std::string noise = "";
	std::string max = "";
	
	int i;

	while (stream >> str)
	{
		i = 0;
		while (str[i] != '\0')
		{
			if (!isdigit(str[i]))
			{
				noise += str[i];
			}
			++i;
		}

		//max check
		if (noise.size() > max.size())
		{
			max = noise;
		}
		else if (noise.size() == max.size())
		{
			max = noise < max ? noise : max;
		}

		noise = "";
	}
	max = max == "" ? "no noise" : max;

	std::cout << max << std::endl;

	return 0;
}