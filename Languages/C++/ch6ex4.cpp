//Chapter 6 Exercise 4
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

/*
 * Enter name-and-value pairs into a vector<Name_value>
 * check that each name is unique
 * exit when we see th input "NoName 0"
 * output the pairs
*/

class Name_value
{
public:
	Name_value(string n, int s): name(n), score(s) {}
	string name;
	int score;
};

int main()
{
	vector<Name_value> pairs;
	string n;
	int v;

	while (cin >> n >> v && n != "NoName")
	{
		for (int i=0; i < pairs.size(); ++i)
			if (n == pairs[i].name) cout << "error duplicate: " << n;
		pairs.push_back(Name_value(n,v));
	}

	for (int i=0; i < pairs.size(); ++i)
		cout << '(' << pairs[i].name << ',' << pairs[i].score << ")\n";
}

