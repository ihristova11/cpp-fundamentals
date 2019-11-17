#include <iostream>
#include <map>
#include <vector>
#include <string>


using namespace std;

int main()
{
	map<int, vector<string>> store;
	int n, digit;
	string t;
	string line, temp;

	cin >> n;
	cin.ignore();

	for (size_t i = 0; i < n; i++)
	{
		getline(cin, line);

		int sizeOfDigit = line.size() / 10;

		for (size_t k = 0; k < 10; k++)
		{
			for (size_t j = k * sizeOfDigit; j < k * sizeOfDigit + sizeOfDigit; j++)
			{
				string ch(1, line[j]);
				temp.append(ch);
			}

			map<int, vector<string>>::iterator it;
			it = store.find(k);
			vector<string> v = { temp };

			if (it == store.end())
			{
				store.insert(pair<int, vector<string>>(k, v));
			}
			else
			{
				store[k].push_back(temp);
			}

			temp = "";
		}
	}

	cin >> t;

	for (size_t i = 0; i < n; i++)
	{
		for (size_t m = 0; m < t.size(); m++)
		{
			digit = t[m] - '0';

			cout << store[digit][i];
		}
		cout << endl;
	}

	return 0;
}