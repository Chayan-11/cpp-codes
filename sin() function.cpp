// Demonstrate sin() function along with explanation and example

#include<iostream>
#include<cmath>
#define PI 3.14159265
using namespace std;
int main()
 {
 	float radian;
 	cout << "Enter the angle in degree:- " << endl;
	cin >> radian;
	cout << "sin of " << radian << " is " << sin(radian * PI / 180) << endl;
	return 0;  
 }

/* sin() method can be used to find the sine value of a number.
It is defined in the C numeric library cmath. cmath contains a lot of other mathematical functions to make it easier for us.

Syntax :-

double sin (double x);
float sin (float x);
long double sin (long double x);
double sin (T x);
The last one is for integral type.

Parameters and Return type :-
sin() function takes one argument or the angle in radian.
It returns the value of sin() of the argument. 
The argument and return values are either in double, float or long double.
*/
