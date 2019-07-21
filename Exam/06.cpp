#include <iostream>
#include <string>
using namespace std;

int main()
{
	int budget;
	int sum = 0, i;
	string product;

	cin >> budget;
	cin.ignore();
	while (true)
	{
		getline(cin, product);
		if (product == "Stop")
		{
			if (budget > sum)
			{
				cout << "Money left: " << budget << endl;
			}
			break;
		}
		else
		{
			sum = 0;
			for (int i = 0; i < product.length(); i++)
			{
				sum += product[i];
			}

			if (budget - sum >= 0)
			{
				cout << "Item successfully purchased!" << endl;
				budget -= sum;

			}
			else
			{
				cout << "Not enough money!" << endl;
				break;
			}
		}
	}
}