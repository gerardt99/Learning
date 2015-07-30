#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <exception>
using namespace std;

int main()
{	
	try
	{	
		int num = -1;
		cout << "Please enter the number of values you want to sum: \n";
		cin >> num;
		if (num < 1) error("The number of elements must be a positive integer");

		cout << '\n' << "Please enter some integers (press '|' to stop): \n";
		vector<int> temps;
		int temp = 0;
		int sum = 0;
		while (cin >> temp) temps.push_back(temp);
	
		if (temps.size() < 0) error("Too few numbers: we need ", num);

		for (int i = 0; i < num; ++i) sum += temps[i];
		
		cout << "The sum of the first " << num << "numbers ( ";
		for (int i =0; i < num; ++i) cout << temps[i] << ' ';
		cout << ") is " << sum << '\n';
	}

	catch (...)
	{
	cout << e.what() << '\n';
	}
	return 0;
}	
