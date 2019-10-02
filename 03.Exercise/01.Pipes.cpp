#include <iostream>

const int MaxLen = 500;

int main()
{
	int checkup[MaxLen];
	int installation[MaxLen];
	int diff = 0;
	int n = 0;

	std::cin >> n;

	for (size_t i = 0; i < n; i++)
	{
		std::cin >> checkup[i];
	}

	for (size_t i = 0; i < n; i++)
	{
		std::cin >> installation[i];
		diff = installation[i] - checkup[i];
		std::cout << installation[i] / diff << " ";
	}

	return 0;
}
