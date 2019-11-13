#include <iostream>
#include <map>
#include <string>
#include <sstream>

int main()
{
	double current = 0;
	std::map<double, int> store;
	std::string str = "";
	std::getline(std::cin, str);

	std::istringstream numStream(str);

	std::map<double, int>::iterator found;
	while (numStream >> current)
	{
		found = store.find(current);
		if (found == store.end())
		{
			store.insert(std::pair<double, int>(current, 1));
		}
		else
		{
			store[current]++;
		}
	}

	for (std::pair<double,int> it : store)
	{
		std::cout << it.first << " -> " << it.second << std::endl;
	}
	
	return 0;
}