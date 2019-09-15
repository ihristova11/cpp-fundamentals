#include <iostream>

const int MaxLen = 100;

int main()
{
	int n = 0;
	int arr[MaxLen];
	int sum = 0;
	double average = 0;

	std::cin >> n;
	for (size_t i = 0; i < n; i++)
	{
		std::cin >> arr[i];
		sum += arr[i];
	}

	average = sum / n;

	for (size_t i = 0; i < n; i++)
	{
		if (arr[i] >= average)
		{
			std::cout << arr[i] << " ";
		}
	}
}