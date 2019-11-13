#include <iostream>
#include <string>
#include <sstream>
#include<set>

using namespace std;

int main()
{
	std::string str;
	std::set<double, std::greater<double>> store;
	getline(cin, str);
	std::istringstream stream(str);
	double number = 0;

	while (stream >> number)
	{
		store.insert(number);
	}

	if (store.size() <= 2)
	{
		for (int i : store)
		{
			cout << i << " ";
		}
	}
	else
	{
		std::set<double>::iterator it = store.begin();

		for (int i = 0; i < 3; i++)
		{
			cout << *it << " ";
			++it;
		}
	}
	return 0;
}