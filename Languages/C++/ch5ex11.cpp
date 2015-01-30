#include <vector>
#include <iostream>
using namespace std;

int main()
{
	try
	{
		int n = 1;
		int m = 2;
		while (n < m)
		{
			cout << n << '\n';
			int x = n+m;
			n = m;
			m = x;
		}
		cout << "The largest Fibonacci number that fits in an int is " << n;
		cout << '\n';
	}
	catch(...) {cout << "We effed up yo! \n";}
}
