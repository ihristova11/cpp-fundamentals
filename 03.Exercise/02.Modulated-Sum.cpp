#include <iostream>
#include <cmath>

const int MaxLen = 100;

int main()
{
	int arr[MaxLen][MaxLen];
	int n = 0;
	int m = 0;
	int sum = 0;
	int mod = 0;

	std::cin >> n >> m;

	for (size_t i = 0; i < n; i++)
	{
		for (size_t j = 0; j < m; j++)
		{
			std::cin >> arr[i][j];
		} 
	}

	std::cin >> mod;

	for (size_t i = 0; i < m; i++)
	{
		for (size_t j = 0; j < n; j++)
		{
			sum += arr[j][i];
		}
		std::cout << abs(sum % mod)<< " ";
		sum = 0;
	}

	return 0;
}