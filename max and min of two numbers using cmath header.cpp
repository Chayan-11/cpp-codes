// Program to find the maximum and minimum of two numbers using cmath header file

#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	double f, s;
	cout << "Enter the first number:- " << endl;
	cin >> f;
	cout << "Enter the second number:- " << endl;
	cin >> s;
	cout << "Maximum number = " << fmax(f,s) << endl;
	cout << "Minimum number = " << fmin(f,s) << endl;
	return 0;
}
