#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main()
{
	int ticketsNumber;
	char type[30], ticket[30];
	char hasPhoto;

	cin.getline(type, sizeof(type));
	cin.getline(ticket, sizeof(ticket));
	cin >> ticketsNumber;
	cin >> hasPhoto;

	double sum = 0;

	if (type[0] == 'Q')
	{
		if (ticket[0] == 'S')
		{
			sum = 55.50 * ticketsNumber;

		}
		else if (ticket[0] == 'P')
		{
			sum = 105.20 * ticketsNumber;
		}
		else //VIP ticket
		{
			sum = 118.90 * ticketsNumber;
		}
	}
	else if (type[0] == 'S')
	{
		if (ticket[0] == 'S')
		{
			sum = 75.88 * ticketsNumber;
		}
		else if (ticket[0] == 'P')
		{
			sum = 125.22 * ticketsNumber;
		}
		else //VIP ticket
		{
			sum = 300.40 * ticketsNumber;
		}
	}
	else // final case
	{
		if (ticket[0] == 'S')
		{
			sum = 110.10 * ticketsNumber;
		}
		else if (ticket[0] == 'P')
		{
			sum = 160.66 * ticketsNumber;
		}
		else //VIP ticket
		{
			sum = 400.0 * ticketsNumber;
		}
	}

	if (sum > 4000)
	{
		sum *= 0.75;
		hasPhoto = 'N';
	}
	else if (sum > 2500)
	{
		sum *= 0.9;
	}

	if (hasPhoto == 'Y')
	{
		sum += ticketsNumber * 40;
	}

	cout.setf(ios::fixed);
	cout.precision(2);
	cout << sum << endl;
}