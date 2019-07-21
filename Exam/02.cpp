#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main()
{
	double moneyNeeded;
	int fantasyBooks, horrorBooks, romanceBooks;
	cin >> moneyNeeded >> fantasyBooks >> horrorBooks >> romanceBooks;

	double moneyGained = 0.8 * (fantasyBooks * 14.90 + horrorBooks * 9.80 + romanceBooks * 4.30);


	if (moneyNeeded < moneyGained)
	{
		double stuffTax = floor(0.1 * (moneyGained - moneyNeeded));

		moneyGained -= stuffTax;
		cout.setf(ios::fixed);
		cout << setprecision(2) << moneyGained << " leva donated." << endl;
		cout<< "Sellers will receive " << setprecision(0) << stuffTax << " leva." << endl;
	}
	else
	{
		cout.setf(ios::fixed);
		cout << setprecision(2) << moneyNeeded - moneyGained << " money needed." << endl;
	}
}