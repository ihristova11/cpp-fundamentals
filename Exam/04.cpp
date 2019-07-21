#include <iostream>

using namespace std;

int main()
{
	int moneySong;
	bool restourantFull = false;
	int groupNumber;
	int sum = 0;
	int people = 0;

	cin >> moneySong;

	while (!restourantFull)
	{
		cin >> groupNumber;
		if (cin.fail())
		{
			restourantFull = true;
		}
		else
		{
			people += groupNumber;
			if (groupNumber >= 5)
			{
				sum += groupNumber * 70;
			}
			else
			{
				sum += groupNumber * 100;
			}
		}
	}

	if (sum >= moneySong)
	{
		cout << "You have " << people << " guests and " << sum - moneySong << " leva left." << endl;
	}
	else
	{
		cout << "You have " << people << " guests and " << sum << " leva income, but no singer." << endl;
	}
}
