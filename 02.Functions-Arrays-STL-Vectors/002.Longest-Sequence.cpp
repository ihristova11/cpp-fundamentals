#include <iostream>

const int MaxLen = 100;

int main()
{
	int n = 0;
	int arr[MaxLen];
	int seqLen = 1;
	int endIndex = 0;
	int tempLen = 1;
	std::cin >> n;

	for (size_t i = 0; i < n; i++)
	{
		std::cin >> arr[i];

		if (arr[i - 1] == arr[i])
		{
			endIndex = i;
			++tempLen;
		}
		else
		{
			seqLen = tempLen > seqLen ? tempLen : seqLen;
			tempLen = 1;
		}

		seqLen = tempLen > seqLen ? tempLen : seqLen;
	}


	if (seqLen > 1)
	{
		for (size_t i = endIndex; i > endIndex - seqLen; --i)
		{
			std::cout << arr[i] << " ";
		}
	}
	else
	{
		std::cout << arr[n-1];
	}
}