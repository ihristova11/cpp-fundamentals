#include <iostream>
#include <sstream>
#include <string>
#include <set>

using namespace std;

void to_lower(std::string& word)
{
	for (char& ch : word)
	{
		ch = tolower(ch);
	}
}

int main()
{
	std::set<std::string> store;
	std::string str;
	std::string word;

	getline(cin, str);

	std::istringstream stream(str);

	while (getline(stream, word, ' '))
	{
		to_lower(word);
		if (word.size() < 5)
		{
			store.insert(word);
		}
	}

	std::set<std::string>::iterator it = store.begin();

	for (int i = 0; i < store.size() - 1; i++)
	{
		cout << *it << ", ";
		++it;
	}
	cout << *it << endl;

	return 0;
}