#include <iostream>
#include <stack>

bool isValid(std::string input, int size)
{
	std::stack<char> stack;

	for (size_t i = 0; i < size; i++)
	{
		if (input[i] == '(' || input[i] == '[' || input[i] == '{')
		{
			if (stack.empty())
			{
				stack.push(input[i]);
			}
			else
			{
				if (input[i] <= stack.top())
				{
					stack.push(input[i]);
				}
				else
				{
					return false;
				}
			}
		}
		else
		{
			switch (input[i])
			{
			case ')':
				if (stack.top() != '(')
				{
					return false;
				}
				else
				{
					stack.pop();
				}
				break;
			case ']':
				if (stack.top() != '[')
				{
					return false;
				}
				else
				{
					stack.pop();
				}
				break;
			case '}':
				if (stack.top() != '{')
				{
					return false;
				}
				else
				{
					stack.pop();
				}
				break;
			}
		}
	}

	return stack.empty();
}

int main()
{
	std::string input;
	std::cin >> input;

	int size = input.size();
	
	std::string result = isValid(input, size) ? "valid" : "invalid";

	std::cout << result << std::endl;

	return 0;
}