#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	int found = -1;
	int number = 0;
	string word;

	vector<string> s;
	vector<int> v;

	while (cin >> word && word != "stop" && cin >> number)
	{
		found = -1;
		for (size_t i = 0; i < s.size(); i++)
		{
			if (s[i] == word)
			{
				found = i;
			}
		}
		if (found != -1)
		{
			v[found] += number;
		}
		else
		{
			s.push_back(word);
			v.push_back(number);
		}
	}

	for (int i = 0; i < s.size(); i++)
	{
		cout << s[i] << " -> " << v[i] << endl;
	}

	return 0;
}