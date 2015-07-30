#include <iostream>
using namespace std;

int size(int)
{
	int* p = new int[2];
	int s = reinterpret_cast<char*>(&p[1]) - reinterpret_cast<char*>(&p[0]);
	delete[] p;
	return s;
}

int size(double)
{
	double* p = new double[2];
	int s = reinterpret_cast<char*>(&p[1]) - reinterpret_cast<char*>(&p[0]);
	delete[] p;
	return s;
}

int size(bool)
{
	bool* p = new bool[2];
	int s = reinterpret_cast<char*>(&p[1]) - reinterpret_cast<char*>(&p[0]);
	delete[] p;
	return s;
}

struct X { int a, b, c;};

int size(X)
{
	X* p = new X[2];
	int s = reinterpret_cast<char*>(&p[1]) - reinterpret_cast<char*>(&p[0]);
	delete[] p;
	return s;
}

struct V {int a, b, c; virtual void f(){}};

int size(V)
{
	V* p = new V[2];
	int s = reinterpret_cast<char*>(&p[1]) - reinterpret_cast<char*>(&p[0]);
	delete[] p;
	return s;
}

int main(){

	cout << "Size of int: " << size(1) << '\n';
	cout << "Size of double: " << size(1.0) << '\n';
	cout << "Size of bool: " << size(true) << '\n';
	cout << "Size of X: " << size(X()) << '\n';
	cout << "Size of V: " << size(V()) << '\n';
	char c; cin >> c;
}
