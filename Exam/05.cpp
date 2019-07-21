#include <iostream>
#include <string>

using namespace std;

int main()
{
	int films;
	string titles[20];
	double ratings[20];

	int maxInd = 0, minInd = 0;
	double avg = 0;

	cin >> films;
	cin.ignore();

	for (int i = 0; i < films; i++)
	{
		getline(cin, titles[i]);

		cin >> ratings[i];
		cin.ignore();

		avg += ratings[i];
		if (i > 0 && (ratings[i] > ratings[maxInd]))
		{
			maxInd = i;
		}

		if (i > 0 && (ratings[i] < ratings[minInd]))
		{
			minInd = i;
		}
	}
	avg /= films;
	
	cout.setf(ios::fixed);
	cout.precision(1);
	cout << titles[maxInd] << " is with highest rating: " << ratings[maxInd] << endl;
	cout << titles[minInd] << " is with lowest rating: " << ratings[minInd] << endl;
	cout << "Average rating: " << avg << endl;
}