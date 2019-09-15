#include <iostream>
#include <cmath>

const int MaxLen = 100;

int findClosestDifference(int arr[], int  len)
{
	if (len == 1)
	{
		return 0;
	}

	int min = INT_MAX;
	int absVal = 0;
	for (size_t i = 0; i < len - 1; i++)
	{
		for (size_t k = i + 1; k < len; k++)
		{
			absVal = abs(arr[i] - arr[k]);
			min = min > absVal ? absVal : min;
		}
	}

	return min;
}

int main()
{
	int n = 0;
	int arr[MaxLen];

	std::cin >> n;

	for (size_t i = 0; i < n; i++)
	{
		std::cin >> arr[i];
	}

	std::cout << findClosestDifference(arr, n) << std::endl;

	return 0;
}