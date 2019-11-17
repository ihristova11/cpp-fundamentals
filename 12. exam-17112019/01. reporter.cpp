#include <iostream>
#include <string>
#include <set>
#include <sstream>
#include <vector>

using namespace std;

int main()
{
	set<string> s;
	vector<string> v;
	string sent, word;
	int n;
	cin >> n;
	cin.ignore();

	for (size_t i = 0; i < n; i++)
	{
		getline(cin, sent);

		istringstream stream(sent);

		while (getline(stream, word, ' '))
		{
			if (word == ".")
			{
				// print them
				for (size_t i = 0; i < v.size(); i++)
				{
					cout << v[i] << " ";
				}
				cout << ". ";
				s = {};
				v = {};
			}
			else
			{
				set<string>::iterator it;
				it = s.find(word);
				if (it == s.end())
				{
					s.insert(word);
					v.push_back(word);
				}
			}
		}
	}

	if (v.size() != 0)
	{
		for (size_t i = 0; i < v.size(); i++)
		{
			cout << v[i] << " ";
		}
	}

	return 0;
}