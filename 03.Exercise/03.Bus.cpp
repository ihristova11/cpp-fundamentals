#include <iostream>
#include <string>

const int MaxLen = 20;

int main()
{
	int n = 0;
	int minInd = 0;
	int min = INT_MAX;
	std::string arrivals[MaxLen];
	std::string departure;
	int arrivalsMinutes[MaxLen];
	int departureMinutes = 0;
	int diff = 0;

	std::cin >> n;
	for (size_t i = 0; i < n; i++)
	{
		std::cin >> arrivals[i];
		arrivalsMinutes[i] = stoi(arrivals[i].substr(0, 2)) * 60
			+ stoi(arrivals[i].substr(2, 2));
	}

	std::cin >> departure;
	departureMinutes = stoi(departure.substr(0, 2)) * 60
		+ stoi(departure.substr(2, 2));

	for (size_t i = 0; i < n; i++)
	{
		diff = departureMinutes - arrivalsMinutes[i];
		if (diff < min && diff >= 0)
		{
			min = diff;
			minInd = i;
		}
	}

	std::cout << minInd + 1;

	return 0;
}