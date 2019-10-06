#include <iostream>
#include <string>
#include <stack>

bool isCorrect(std::string input)
{
	std::stack<char> openingParanthesis;
	int i = 0;

	while (input[i] != '\0')
	{
		if (input[i] == '(')
		{
			openingParanthesis.push(i);
		}
		else if (input[i] == ')')
		{
			if (openingParanthesis.empty())
			{
				return false;
			}
			openingParanthesis.pop();
		}
		++i;
	}

	return openingParanthesis.empty();
}

int main()
{
	std::string input;
	std::getline(std::cin, input);

	std::string result = isCorrect(input) ? "correct" : "incorrect";

	std::cout << result << std::endl;
	
	return 0;
}