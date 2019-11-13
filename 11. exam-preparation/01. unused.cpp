#include <iostream>
#include <cstring>
using namespace std; 

int main()
{
	char arr[101];
	int map[26] = { 0 };
	cin >> arr;

	for(int i = 0; i < strlen(arr); i++)
	{
		if (arr[i] >= 'a' && arr[i] <= 'z')
		{
			map[arr[i] - 'a']++;
		}
	}

	for (int i = 0; i < 26; i++)
	{
		if (map[i] == 0)
		{
			cout << (char)(i + 'a');
		}
	}

	return 0;
}