#include <iostream>

const int MaxLen = 100;

bool areEqual(int firstArr[], int firstArrLen, int secondArr[], int secondArrLen)
{
	bool result = true;
	if (firstArrLen != secondArrLen)
	{
		result = false;
	}
	else
	{
		for (size_t i = 0; i < firstArrLen; i++)
		{
			if (firstArr[i] != secondArr[i])
			{
				result = false;
			}
		}
	}

	return result;
}


int main()
{
	int firstArrLen = 0;
	int secondArrLen = 0;
	int firstArr[MaxLen];
	int secondArr[MaxLen];
	std::string output = "equal";

	std::cin >> firstArrLen;
	for (size_t i = 0; i < firstArrLen; ++i)
	{
		std::cin >> firstArr[i];
	}

	std::cin >> secondArrLen;
	for (size_t i = 0; i < secondArrLen; i++)
	{
		std::cin >> secondArr[i];
	}
	output = areEqual(firstArr, firstArrLen, secondArr, secondArrLen) ? "equal" : "not equal";

	std::cout << output << std::endl;
}