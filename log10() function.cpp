// Explain log10() function with examples

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double a = 1.43;
    float b = 10.03;
    long double c = 100.234;
    int d = 100;
    int e = -13;
    int f = 0;
    
cout << "log10(1.43):- " << log10(a) << endl; 

cout << "log10(10.03):- " << log10(b) << endl;

cout << "log10(100.234):- " << log10(c) << endl;

cout << "log10(100):- " << log10(d) << endl;

cout << "log10(-13):- " << log10(e) << endl;

cout << "log10(0):- " << log10(f) << endl;

cout << "log10(1):- " << log10(1) << endl;

    return 0;
}


/* The log10() function is used to find out the base 10 logarithms of a number.
It has different overloaded methods to take different types of arguments.

log10 is defined in cmath and it should be included in the program that uses log10.

Syntax:- 

double log10 (double x);
float log10 (float x);
long double log10 (long double x);
double log10 (T x);
The last overload is for integral types.

Parameters:-
log10 can take double, float, long double or integral type parameters.

Return types:-
It returns the base 10 logarithms of a number. 
If the argument is zero or negative, it will raise one pole error or domain error. 
So, it is a best practice always to verify that the argument is greater than zero.
*/
