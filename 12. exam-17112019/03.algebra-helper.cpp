#include <iostream>
#include <map>
#include <string>
#include <sstream>
#include <vector>

using namespace std;

int main()
{
	// read n
	// read equations
	// process each by getting the numbers and the operator
	// store them in the map
	// loop throught the map and print them in descending order

	map<int, vector<string>, greater<int>> store;
	char operation;
	string equation;
	
	int n, first, second, result = 0;
	cin >> n;


	for (size_t i = 0; i < n; i++)
	{
		cin >> first;
		cin >> operation;
		cin >> second;

		equation.append(to_string(first));
		equation.append(" ");
		string temp(1, operation);
		equation.append(temp);
		equation.append(" ");
		equation.append(to_string(second));

		switch (operation)
		{
		case '+':
			result = first + second;
			break;
		case '-':
			result = first - second;
			break;
		case '*':
			result = first * second;
			break;
		case '/':
			result = first / second;
			break;
		case '%':
			result = first % second;
			break;
		default: break;
		}

		map<int, vector<string>>::iterator it;
		it = store.find(result);
		if (it == store.end())
		{
			vector<string> v = { equation };
			store.insert(pair<int, vector<string>>(result, v));
		}
		else
		{
			store[result].push_back(equation);
		}

		equation = "";
	}

	for (pair<int, vector<string>> p : store)
	{
		for (size_t i = 0; i < p.second.size(); i++)
		{
			cout << p.second[i] << endl;
		}
	}


	return 0;
}