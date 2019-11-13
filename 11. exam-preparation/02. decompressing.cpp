#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	char input[2000];
	int number = 0;

	cin >> input;
	
	for (size_t i = 0; i < strlen(input); i++)
	{
		if (input[i] >= '0' && input[i] <= '9')
		{
			number += (input[i] - '0');
			number *= 10;
		}
		else
		{
			if (i > 0 && input[i-1] >= '0' && input[i-1] <= '9')
			{
				number /= 10;
				for (size_t j = 0; j < number; j++)
				{
					cout << input[i];
				}
			}
			else
			{
				number = 0;
				cout << input[i];
			}
			number = 0;
		}
	}

	return 0;
}