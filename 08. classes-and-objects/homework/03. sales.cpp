#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <iomanip>

using namespace std;

class Sale
{
public:
	string town;
	string product;
	double price;
	int quatity;

	Sale(string town, string product, double price, int quantity)
	{
		this->town = town;
		this->product = product;
		this->price = price;
		this->quatity = quantity;
	}
};

int main()
{
	int n;
	string town, product;
	vector<Sale> v;
	double price, quantity, sum = 0;
	map<string, vector<Sale>> store;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> town >> product >> price >> quantity;
		map<string, Sale>::iterator it;
		Sale s(town, product, price, quantity);

		if (store.find(town) == store.end())
		{
			vector<Sale> v;
			v.push_back(s);
			store.insert(pair<string, vector<Sale>>(town, v));
		}
		else
		{
			store[town].push_back(s);
		}
	}

	for (pair<string, vector<Sale>> p : store)
	{
		for (size_t i = 0; i < p.second.size(); i++)
		{
			sum += p.second[i].quatity * p.second[i].price;
		}
		
		cout << p.first << " -> " << fixed << setprecision(2) << sum << endl;
		sum = 0;
	}

	return 0;
}