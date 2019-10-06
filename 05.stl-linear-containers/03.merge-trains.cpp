#include <iostream>
#include <sstream>
#include <stack>
#include <string>

int main()
{
	std::stack<int> a;
	std::stack<int> b;
	std::stack<int> mix;

	std::string input;
	int num;

	std::getline(std::cin, input);
	std::istringstream stream1(input);
	while (stream1 >> num)
	{
		a.push(num);
	}

	std::getline(std::cin, input);
	std::istringstream stream2(input);
	while (stream2 >> num)
	{
		b.push(num);
	}

	while (!(a.empty() && b.empty()))
	{
		if (a.empty() && !b.empty())
		{
			mix.push(b.top());
			b.pop();
			std::cout << "B";
		}
		else if (!a.empty() && b.empty())
		{
			mix.push(a.top());
			a.pop();
			std::cout << "A";
		}
		else if (!(a.empty() && b.empty()))
		{
			if (a.top() < b.top())
			{
				mix.push(a.top());
				a.pop();
				std::cout << "A";
			}
			else
			{
				mix.push(b.top());
				b.pop();
				std::cout << "B";
			}
		}
	}

	std::cout << std::endl;

	while (!mix.empty())
	{
		std::cout << mix.top() << " ";
		mix.pop();
	}

	return 0;
}