#include <iostream>
#include <list>
#include <sstream>
#include <string>

using namespace std;

struct shiftable_list
{
	shiftable_list(string str)
	{
		s = istringstream(str);
	}
public:
	void shift(int n)
	{
		parse_words(s);
		string w;
		for (int i = 0; i < n; i++)
		{
			list<string>::iterator it = l.end();
			--it;
			w = *it;
			l.push_front(w);
			l.erase(it);
		}
	}

	void print()
	{
		for (string i : l)
		{
			cout << i << endl;
		}
	}

private:
	list<string> l;
	istringstream s;

	void parse_words(istringstream &s)
	{
		string word;
		while (s >> word)
		{
			l.push_back(word);
		}
	}
};


int main()
{
	string str;
	int n;
	getline(cin, str);
	cin >> n;

	shiftable_list s(str);

	s.shift(n);
	s.print();

	return 0;
}