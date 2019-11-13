#include <iostream>
#include <sstream>
#include <string>
#include <set>

using namespace std;

int main()
{
	double number;
	std::string str;
	std::set<double> store;
	getline(cin, str);
	std::istringstream stream(str);

	while (stream >> number)
	{
		store.insert(number);
	}

	std::set<double>::iterator it = store.begin();

	for (int i = 0; i < store.size() -1; i++)
	{
		cout << *it << " <= ";
		++it;
	}

	cout << *it << endl;

	return 0;
}