#include <iostream>
#include <vector>

const int MaxLen = 10;

int main()
{
	int rows = 0;
	int cols = 0;
	int number = 0;
	bool found = false;
	int arr[MaxLen][MaxLen];

	std::cin >> rows >> cols;

	for (size_t i = 0; i < rows; i++)
	{
		for (size_t j = 0; j < cols; j++)
		{
			std::cin >> arr[i][j];
		}
	}

	std::cin >> number;


	for (size_t i = 0; i < rows; i++)
	{
		for (size_t j = 0; j < cols; j++)
		{
			if (number == arr[i][j])
			{
				found = true;
				std::cout << i << " " << j << std::endl;
			}
		}
	}

	if (!found)
	{
		std::cout << "not found" << std::endl;
	}

	return 0;
}