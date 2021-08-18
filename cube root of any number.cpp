// Program to find the cube root of any number

#include<iostream>
#include<cmath>
using namespace std;

 int main()
 {
 	int n;
 	cout << "Enter any number:- " << endl;
 	cin >> n;
 	cout << "The cube root of the entered number is:- " << cbrt(n) << endl;
 	return 0;
 }

/* Program description:- 

cbrt is used to find the cube root of a number in C++. This is defined in cmath header file.

Definition:- 

double cbrt (double x);
float cbrt (float x);
long double cbrt (long double x);
double cbrt (T x); 

The last one is for integral type. This overloaded method casts the integral type to double.


Parameter and Return value:- 

This method takes a parameter of type double, float, long double or integral type.
It returns the cubic root of the parameter.
*/
