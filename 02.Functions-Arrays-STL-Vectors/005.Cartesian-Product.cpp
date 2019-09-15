#include <iostream>

const int MaxLen = 100;

void printProduct(int arr[], int len)
{
	for (size_t i = 0; i < len; i++)
	{
		for (size_t k = 0; k < len; k++)
		{
			std::cout << arr[i] * arr[k] << " ";
		}
	}
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
	printProduct(arr, n);

	return 0;
}