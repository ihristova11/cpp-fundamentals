#include <iostream>
#include <string>
#include <vector>
#include <sstream>

bool areEqual(std::vector<int>& first, std::vector<int>& second)
{
	return first == second;
}

void readVector(std::vector<int>& vector)
{
	std::string line;
	getline(std::cin, line);

	std::istringstream lineStream(line);
	int currentNumber;

	while (lineStream >> currentNumber)
	{
		vector.push_back(currentNumber);
	}
}

int main()
{
	std::vector<int> first;
	std::vector<int> second;

	readVector(first);
	readVector(second);
	std::string result = areEqual(first, second) ? "equal" : "not equal";

	std::cout << result << std::endl;

	return 0;
}