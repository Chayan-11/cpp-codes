// Program to illustrate fdim header file

#include<iostream>
#include<cmath>
using namespace std;
int main ()
{
	float f, s;
	cout << "Enter the first number:- " << endl;
	cin >> f;
	cout << "Enter the second number:- " << endl;
	cin >> s; 
	cout << "fdim:- " << fdim(f, s) << endl;
	return 0;
}

/* NOTE:- 

fdim, fdimf and fdiml functions are defined in the cmath header. These functions are used to find the difference between two numbers.
double fdim(double num1, double num2)
float fdimf(float num1, float num2)
long double fdiml(long double num1, long double num2)
As you can see, all these functions take two parameters. The return value is double, float or long double. It returns the value of num1 - num2 if num1 > num2. Else, it returns zero.
*/
