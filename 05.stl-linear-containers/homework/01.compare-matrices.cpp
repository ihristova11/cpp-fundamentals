#include <iostream>
#include <sstream>
#include <string>

bool areEqual(int arr1[][10], int arr2[][10], int rows1, int rows2, int cols1, int cols2)
{
	if (rows1 != rows2 || cols1 != cols2)
	{
		return false;
	}

	for (size_t i = 0; i < rows1; i++)
	{
		for (size_t j = 0; j < cols1; j++)
		{
			if (arr1[i][j] != arr2[i][j])
			{
				return false;
			}
		}		
	}

	return true;
}

int main()
{
	int rows1;
	int rows2;
	int number;
	int j;
	int arr1[10][10];
	int arr2[10][10];
	int cols1 = 0;
	int cols2 = 0;
	std::string input;
	std::getline(std::cin, input);
	rows1 = std::stoi(input);
	
	for (size_t i = 0; i < rows1; i++)
	{
		cols1 = 0;
		j = 0;
		std::getline(std::cin, input);
		std::istringstream stream(input);
		while (stream >> number)
		{
			arr1[i][j] = number;
			++j;
			++cols1;
		}
	}
	j = 0;

	std::getline(std::cin, input);
	rows2 = std::stoi(input);

	for (size_t i = 0; i < rows2; i++)
	{
		cols2 = 0;
		j = 0;
		std::getline(std::cin, input);
		std::istringstream stream(input);
		while (stream >> number)
		{
			arr2[i][j] = number;
			++j;
			++cols2;
		}
	}

	std::string result = areEqual(arr1, arr2, rows1, rows2, cols1, cols2) ? "equal" : "not equal";
	std::cout<< result << std::endl;

	return 0;
}