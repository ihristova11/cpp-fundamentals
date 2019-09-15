#include <iostream>

const int MaxLen = 100;

int main()
{
	int numbers[MaxLen];
	int n = 0;
	int frequency[10] = { 0 };
	int max = 0;

	std::cin >> n;
	for (size_t i = 0; i < n; i++)
	{
		std::cin >> numbers[i];
		++frequency[numbers[i]];
	}

	for (size_t i = 0; i < 10; i++)
	{
		max = max < frequency[i] ? frequency[i] : max;
	}

	for (size_t i = 0; i < 10; i++)
	{
		if (frequency[i] == max)
		{
			std::cout << i << " ";
		}
	}
}