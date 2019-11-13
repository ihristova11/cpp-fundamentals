#include <iostream>
#include <sstream>
#include <string>
#include <set>
#include <cmath>

using namespace std;

bool isSquare(int& number)
{
	double s = sqrt(number);
	return ((s - floor(s)) == 0);
}

int main()
{
	int number;
	std::multiset<int, std::greater<int>> store;
	std::string str;
	getline(cin, str);
	std::istringstream stream(str);

	while (stream >> number)
	{
		if (isSquare(number))
		{
			store.insert(number);
		}
	}

	for (int i : store)
	{
		cout << i << " ";
	}

	return 0;
}