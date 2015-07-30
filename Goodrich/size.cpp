#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
	char ch;
	int i;
	int* p;
	bool* bo;
	string* s;
	double* d;
	vector<double>* vec;

	cout << "The size of char is " << sizeof(char) << ' ' << sizeof(ch) << '\n';
	cout << "The size of int is " << sizeof(int) << ' ' << sizeof(i) << '\n';
	cout << "The size of int* is " << sizeof(int*) << ' ' << sizeof(p) << '\n';
	cout << "The size of bool* is " << sizeof(bool*) << ' ' << sizeof(bo) << '\n';
	cout << "The size of string* is " << sizeof(string*) << ' ' << sizeof(s) << '\n';
	cout << "The size of double* is " << sizeof(double*) << ' ' << sizeof(d) << '\n';
	cout << "The size of vector* is " << sizeof(vec) << '\n';

}

